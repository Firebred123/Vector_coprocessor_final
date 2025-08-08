// rtl/core/vector_coprocessor.sv - Fixed with single VRF write per instruction
`include "custom_opcodes.vh"
import cv32e40x_xif_pkg::*;

module vector_coprocessor #(
    parameter int VLEN = 256,
    parameter int X_ID_WIDTH = 4
) (
    input  logic           clk_i,
    input  logic           rst_ni,
    // X-IF Issue interface
    input  logic           xif_issue_valid_i,
    output logic           xif_issue_ready_o,
    input  x_issue_req_t   xif_issue_req_i,
    output x_issue_resp_t  xif_issue_resp_o,
    // X-IF Commit interface
    input  logic           xif_commit_valid_i,
    input  x_commit_t      xif_commit_i,
    // X-IF Result interface
    output logic           xif_result_valid_o,
    input  logic           xif_result_ready_i,
    output x_result_t      xif_result_o,
    // X-IF Memory interface
    output logic           xif_mem_valid_o,
    input  logic           xif_mem_ready_i,
    output x_mem_req_t     xif_mem_req_o,
    input  x_mem_resp_t    xif_mem_resp_i,
    // X-IF Memory result interface
    input  logic           xif_mem_result_valid_i,
    input  x_mem_result_t  xif_mem_result_i
);
    // FSM States - added WRITE_VRF state
    typedef enum logic [2:0] {
        IDLE,
        DECODE,
        START_LSU,
        WAIT_LSU,
        START_MAC,
        WRITE_VRF,
        WRITEBACK
    } state_t;
    
    state_t state, next_state;
    
    // Registered instruction fields
    logic [6:0] funct7_q;
    logic [4:0] rd_q, rs1_q, rs2_q;
    logic [31:0] scalar_rs1_q;
    logic [X_ID_WIDTH-1:0] id_q;
    
    // Vector register file interface - using 3-port
    logic [VLEN-1:0] vrf_rdata1, vrf_rdata2, vrf_rdata3, vrf_wdata;
    logic vrf_we;
    
    // LSU interface
    logic vlsu_start, vlsu_done;
    logic [VLEN-1:0] vlsu_load_data;
    
    // MAC interface
    logic vmac_start, vmac_done;
    logic [VLEN-1:0] mac_result_q;
    
    // Register to capture data at the right time
    logic [VLEN-1:0] result_data_q;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            result_data_q <= '0;
        end else begin
            // Capture load data when VLSU completes
            if (vlsu_done && funct7_q == `FUNCT7_VLD) begin
                result_data_q <= vlsu_load_data;
                $display("Captured VLSU load data: first word = 0x%08x", vlsu_load_data[31:0]);
            end
            // Capture MAC result when MAC completes
            else if (vmac_done && funct7_q == `FUNCT7_VMAC) begin
                result_data_q <= mac_result_q;
                $display("Captured MAC result: first word = 0x%08x", mac_result_q[31:0]);
            end
        end
    end
    
    // Instruction decoding
    logic is_custom_instr;
    logic [6:0] opcode;
    
    assign opcode = xif_issue_req_i.instr[6:0];
    assign is_custom_instr = (opcode == `OPCODE_CUSTOM0);
    
    // X-IF Issue interface - only ready for custom instructions when idle
    assign xif_issue_ready_o = (state == IDLE);
    
    // Issue response
    always_comb begin
        xif_issue_resp_o = '0;
        if (is_custom_instr && (state == IDLE)) begin
            xif_issue_resp_o.accept = 1'b1;
            xif_issue_resp_o.writeback = (xif_issue_req_i.instr[31:25] != `FUNCT7_VST);
            xif_issue_resp_o.loadstore = (xif_issue_req_i.instr[31:25] == `FUNCT7_VLD) ||
                                         (xif_issue_req_i.instr[31:25] == `FUNCT7_VST);
        end
    end
    
    // X-IF Result interface
    assign xif_result_valid_o = (state == WRITEBACK);
    
    always_comb begin
        xif_result_o = '0;
        xif_result_o.id = id_q;
        xif_result_o.rd = rd_q;
        xif_result_o.we = (funct7_q != `FUNCT7_VST) ? 1'b1 : 1'b0;
        xif_result_o.data = 32'h0; // Not used for vector operations
    end
    
    // Vector register file with 3 read ports
    vector_reg_file_3port #(
        .VLEN(VLEN)
    ) vrf_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        // Read port 1: rs1
        .raddr1_i(rs1_q),
        .rdata1_o(vrf_rdata1),
        // Read port 2: rs2
        .raddr2_i(rs2_q),
        .rdata2_o(vrf_rdata2),
        // Read port 3: rd (for accumulator in VMAC)
        .raddr3_i(rd_q),
        .rdata3_o(vrf_rdata3),
        // Write port
        .we_i(vrf_we),
        .waddr_i(rd_q),
        .wdata_i(vrf_wdata)
    );
    
    // Vector Load/Store Unit
    vlsu #(
        .VLEN(VLEN),
        .X_ID_WIDTH(X_ID_WIDTH)
    ) vlsu_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_load_i(vlsu_start && (funct7_q == `FUNCT7_VLD)),
        .start_store_i(vlsu_start && (funct7_q == `FUNCT7_VST)),
        .base_addr_i(scalar_rs1_q),
        .store_data_i(vrf_rdata2),  // For VST, store from rs2
        .load_data_o(vlsu_load_data),
        .done_o(vlsu_done),
        .id_i(id_q),
        // X-IF Memory interface
        .xif_mem_valid_o(xif_mem_valid_o),
        .xif_mem_ready_i(xif_mem_ready_i),
        .xif_mem_req_o(xif_mem_req_o),
        .xif_mem_resp_i(xif_mem_resp_i),
        .xif_mem_result_valid_i(xif_mem_result_valid_i),
        .xif_mem_result_i(xif_mem_result_i)
    );
    
    // Vector MAC Unit - now with proper inputs
    vmac_unit #(
        .VLEN(VLEN)
    ) vmac_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_i(vmac_start),
        .done_o(vmac_done),
        // Proper VMAC: rd = rs1 * rs2 + rd
        .vec_a_i(vrf_rdata1),    // rs1
        .vec_b_i(vrf_rdata2),    // rs2
        .vec_c_i(vrf_rdata3),    // rd (accumulator)
        .result_o(mac_result_q)
    );
    
    // State machine sequential logic
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            funct7_q <= '0;
            rd_q <= '0;
            rs1_q <= '0;
            rs2_q <= '0;
            scalar_rs1_q <= '0;
            id_q <= '0;
        end else begin
            state <= next_state;
            
            if (state == IDLE && xif_issue_valid_i && is_custom_instr) begin
                rs1_q <= xif_issue_req_i.instr[19:15];
                rs2_q <= xif_issue_req_i.instr[24:20];
                rd_q  <= xif_issue_req_i.instr[11:7];
                funct7_q <= xif_issue_req_i.instr[31:25];
                scalar_rs1_q <= xif_issue_req_i.rs[0];
                id_q <= xif_issue_req_i.id;
            end
        end
    end
    
    // FSM next state logic and control signals
    always_comb begin
        next_state = state;
        vlsu_start = 1'b0;
        vmac_start = 1'b0;
        vrf_we = 1'b0;
        vrf_wdata = '0;
        
        case(state)
            IDLE: begin
                if (xif_issue_valid_i && is_custom_instr && xif_issue_resp_o.accept) begin
                    next_state = DECODE;
                end
            end
            
            DECODE: begin
                case (funct7_q)
                    `FUNCT7_VLD, `FUNCT7_VST: next_state = START_LSU;
                    `FUNCT7_VMAC:              next_state = START_MAC;
                    default:                   next_state = IDLE;
                endcase
            end
            
            START_LSU: begin
                vlsu_start = 1'b1;
                next_state = WAIT_LSU;
            end
            
            WAIT_LSU: begin
                if (vlsu_done) begin
                    if (funct7_q == `FUNCT7_VLD) begin
                        next_state = WRITE_VRF;  // Go to write state for loads
                    end else begin
                        next_state = WRITEBACK;  // Skip write for stores
                    end
                end
            end
            
            START_MAC: begin
                vmac_start = 1'b1;
                next_state = WRITE_VRF;  // Go to write state after MAC
            end
            
            WRITE_VRF: begin
                // Single cycle to write to VRF
                vrf_wdata = result_data_q;
                vrf_we = 1'b1;
                $display("WRITE_VRF: Writing to v%0d, first word = 0x%08x", 
                         rd_q, result_data_q[31:0]);
                next_state = WRITEBACK;
            end
            
            WRITEBACK: begin
                // Just wait for CPU handshake, no VRF write here
                if (xif_result_ready_i) begin
                    next_state = IDLE;
                end
            end
            
            default: next_state = IDLE;
        endcase
    end
    
endmodule
