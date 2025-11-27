// vector_coprocessor.sv - FAST but SAFE version
// Keeps the proven WRITEBACK handshake but optimizes:
// 1. Zero-latency LSU start (issue first mem req same cycle as accept)
// 2. Single-cycle ALU 
// 3. Immediate transition to WRITEBACK when done
`include "custom_opcodes.vh"
import cv32e40x_xif_pkg::*;

module vector_coprocessor #(
    parameter int VLEN = 256,
    parameter int ELEMENT_WIDTH = 32,
    parameter int X_ID_WIDTH = 4
) (
    input  logic           clk_i,
    input  logic           rst_ni,
    input  logic           xif_issue_valid_i,
    output logic           xif_issue_ready_o,
    input  x_issue_req_t   xif_issue_req_i,
    output x_issue_resp_t  xif_issue_resp_o,
    input  logic           xif_commit_valid_i,
    input  x_commit_t      xif_commit_i,
    output logic           xif_result_valid_o,
    input  logic           xif_result_ready_i,
    output x_result_t      xif_result_o,
    output logic           xif_mem_valid_o,
    input  logic           xif_mem_ready_i,
    output x_mem_req_t     xif_mem_req_o,
    input  x_mem_resp_t    xif_mem_resp_i,
    input  logic           xif_mem_result_valid_i,
    input  x_mem_result_t  xif_mem_result_i
);

    localparam int NUM_VREGS = 16;

    // FSM - Keep WRITEBACK for proper handshake
    typedef enum logic [1:0] {
        IDLE      = 2'b00,
        EXEC_LSU  = 2'b01,
        WRITEBACK = 2'b10
    } state_t;
    
    state_t state, next_state;
    
    // Instruction registers
    logic [6:0] funct7_q;
    logic [4:0] rd_q, rs1_q, rs2_q;
    logic [31:0] scalar_rs1_q;
    logic [X_ID_WIDTH-1:0] id_q;
    logic is_load_q, is_store_q, is_alu_q;
    
    // VRF
    logic [VLEN-1:0] vrf_rdata1, vrf_rdata2, vrf_rdata3, vrf_wdata;
    logic vrf_we;
    
    // VLSU
    logic vlsu_start_load, vlsu_start_store, vlsu_done;
    logic [VLEN-1:0] vlsu_load_data;
    
    // Exec
    logic [VLEN-1:0] exec_result;
    logic [VLEN-1:0] result_data_q;
    
    // Decode
    logic [6:0] opcode_in, funct7_in;
    logic is_custom_in, is_load_in, is_store_in, is_alu_in;
    
    assign opcode_in = xif_issue_req_i.instr[6:0];
    assign funct7_in = xif_issue_req_i.instr[31:25];
    assign is_custom_in = (opcode_in == `CUSTOM0_OPCODE);
    assign is_load_in = (funct7_in == `FUNCT7_VLD);
    assign is_store_in = (funct7_in == `FUNCT7_VST);
    assign is_alu_in = (funct7_in == `FUNCT7_VADD) || 
                       (funct7_in == `FUNCT7_VSUB) || 
                       (funct7_in == `FUNCT7_VMUL) || 
                       (funct7_in == `FUNCT7_VMAC);
    
    logic accept_instr;
    assign accept_instr = xif_issue_valid_i && xif_issue_ready_o && is_custom_in;
    
    // ZERO-LATENCY LSU START
    assign vlsu_start_load = accept_instr && is_load_in;
    assign vlsu_start_store = accept_instr && is_store_in;
    
    // State machine
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            funct7_q <= '0;
            rd_q <= '0;
            rs1_q <= '0;
            rs2_q <= '0;
            scalar_rs1_q <= '0;
            id_q <= '0;
            is_load_q <= 1'b0;
            is_store_q <= 1'b0;
            is_alu_q <= 1'b0;
            result_data_q <= '0;
        end else begin
            state <= next_state;
            
            if (accept_instr) begin
                funct7_q <= funct7_in;
                rd_q <= xif_issue_req_i.instr[11:7];
                rs1_q <= xif_issue_req_i.instr[19:15];
                rs2_q <= xif_issue_req_i.instr[24:20];
                scalar_rs1_q <= xif_issue_req_i.rs[0];
                id_q <= xif_issue_req_i.id;
                is_load_q <= is_load_in;
                is_store_q <= is_store_in;
                is_alu_q <= is_alu_in;
                
                // Capture ALU result immediately (it's combinational)
                if (is_alu_in) begin
                    result_data_q <= exec_result;
                end
                
                $display("[VCoP] ACCEPT id=%0d f7=0x%02x rd=v%0d", 
                    xif_issue_req_i.id, funct7_in, xif_issue_req_i.instr[11:7]);
            end
            
            // Capture load result when VLSU done
            if (state == EXEC_LSU && vlsu_done && is_load_q) begin
                result_data_q <= vlsu_load_data;
            end
        end
    end
    
    // Next state
    always_comb begin
        next_state = state;
        vrf_we = 1'b0;
        vrf_wdata = '0;
        
        case (state)
            IDLE: begin
                if (accept_instr) begin
                    if (is_alu_in) begin
                        // ALU: single cycle, write VRF now, go to WRITEBACK
                        vrf_we = 1'b1;
                        vrf_wdata = exec_result;
                        next_state = WRITEBACK;
                        $display("[VCoP] ALU complete, result[0]=0x%08x", exec_result[31:0]);
                    end else begin
                        // LSU: go to EXEC_LSU
                        next_state = EXEC_LSU;
                    end
                end
            end
            
            EXEC_LSU: begin
                if (vlsu_done) begin
                    if (is_load_q) begin
                        vrf_we = 1'b1;
                        vrf_wdata = vlsu_load_data;
                    end
                    next_state = WRITEBACK;
                    $display("[VCoP] LSU complete");
                end
            end
            
            WRITEBACK: begin
                if (xif_result_ready_i) begin
                    next_state = IDLE;
                    $display("[VCoP] WRITEBACK complete");
                end
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // Issue interface
    assign xif_issue_ready_o = (state == IDLE);
    
    always_comb begin
        xif_issue_resp_o = '0;
        if (is_custom_in && (state == IDLE)) begin
            xif_issue_resp_o.accept = 1'b1;
            xif_issue_resp_o.writeback = !is_store_in;
            xif_issue_resp_o.loadstore = is_load_in || is_store_in;
        end
    end
    
    // Result interface
    assign xif_result_valid_o = (state == WRITEBACK);
    
    always_comb begin
        xif_result_o = '0;
        xif_result_o.id = id_q;
        xif_result_o.rd = rd_q;
        xif_result_o.exc = 1'b0;
        
        if (is_store_q) begin
            xif_result_o.we = 1'b0;
        end else begin
            xif_result_o.we = 1'b1;
            xif_result_o.data = result_data_q[31:0];
        end
    end
    
    // Submodules
    vector_reg_file_3port #(.NUM_REGS(NUM_VREGS)) vrf_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .raddr1_i(accept_instr ? xif_issue_req_i.instr[19:15] : rs1_q),
        .rdata1_o(vrf_rdata1),
        .raddr2_i(accept_instr ? xif_issue_req_i.instr[24:20] : rs2_q),
        .rdata2_o(vrf_rdata2),
        .raddr3_i(accept_instr ? xif_issue_req_i.instr[11:7] : rd_q),
        .rdata3_o(vrf_rdata3),
        .we_i(vrf_we), 
        .waddr_i(accept_instr ? xif_issue_req_i.instr[11:7] : rd_q), 
        .wdata_i(vrf_wdata)
    );
    
    vlsu #(.VLEN(VLEN), .X_ID_WIDTH(X_ID_WIDTH)) vlsu_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .start_load_i(vlsu_start_load),
        .start_store_i(vlsu_start_store),
        .base_addr_i(xif_issue_req_i.rs[0]),
        .store_data_i(vrf_rdata2),
        .load_data_o(vlsu_load_data), 
        .done_o(vlsu_done), 
        .id_i(accept_instr ? xif_issue_req_i.id : id_q),
        .xif_mem_valid_o(xif_mem_valid_o), 
        .xif_mem_ready_i(xif_mem_ready_i),
        .xif_mem_req_o(xif_mem_req_o), 
        .xif_mem_resp_i(xif_mem_resp_i),
        .xif_mem_result_valid_i(xif_mem_result_valid_i),
        .xif_mem_result_i(xif_mem_result_i)
    );
    
    vector_exec_unit #(.VLEN(VLEN), .ELEMENT_WIDTH(ELEMENT_WIDTH)) exec_unit_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .start_i(accept_instr && is_alu_in), 
        .done_o(),
        .funct7_i(funct7_in), 
        .funct3_i(3'b000),
        .vec_a_i(vrf_rdata1), 
        .vec_b_i(vrf_rdata2), 
        .vec_c_i(vrf_rdata3),
        .result_o(exec_result)
    );

endmodule
