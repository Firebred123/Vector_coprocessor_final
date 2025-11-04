// FINAL WORKING VERSION - Exec completes immediately
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
    localparam int VRF_ADDR_WIDTH = $clog2(NUM_VREGS);

    typedef enum logic [2:0] {
        IDLE, DECODE, START_LSU, WAIT_LSU, 
        START_EXEC, WRITE_VRF, WRITEBACK
    } state_t;
    
    state_t state, next_state;
    
    logic [6:0] funct7_q;
    logic [4:0] rd_q, rs1_q, rs2_q;
    logic [31:0] scalar_rs1_q;
    logic [X_ID_WIDTH-1:0] id_q;
    logic [VLEN-1:0] vrf_rdata1, vrf_rdata2, vrf_rdata3, vrf_wdata;
    logic vrf_we;
    logic vlsu_start, vlsu_done;
    logic [VLEN-1:0] vlsu_load_data;
    logic exec_start, exec_done;
    logic [VLEN-1:0] exec_result;
    logic [VLEN-1:0] result_data_q;
    logic vrf_rd_en_exec;
    logic [4:0] vrf_raddr_exec;
    
    // Capture when entering WRITE_VRF
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            result_data_q <= '0;
        end else if (state == WAIT_LSU && vlsu_done && next_state == WRITE_VRF) begin
            result_data_q <= vlsu_load_data;
        end else if (state == START_EXEC && next_state == WRITE_VRF) begin
            result_data_q <= exec_result;  // Capture immediately
        end
    end
    
    logic is_custom_instr;
    logic [6:0] opcode;
    
    assign opcode = xif_issue_req_i.instr[6:0];
    assign is_custom_instr = (opcode == `CUSTOM0_OPCODE);
    assign xif_issue_ready_o = (state == IDLE);
    
    always_comb begin
        xif_issue_resp_o = '0;
        if (is_custom_instr && (state == IDLE)) begin
            xif_issue_resp_o.accept = 1'b1;
            xif_issue_resp_o.writeback = (xif_issue_req_i.instr[31:25] != `FUNCT7_VST);
            xif_issue_resp_o.loadstore = (xif_issue_req_i.instr[31:25] == `FUNCT7_VLD) ||
                                         (xif_issue_req_i.instr[31:25] == `FUNCT7_VST);
        end
    end
    
    assign xif_result_valid_o = (state == WRITEBACK);
    
    always_comb begin
        xif_result_o = '0;
        xif_result_o.id = id_q;
        xif_result_o.rd = rd_q;
        xif_result_o.we = (funct7_q != `FUNCT7_VST) ? 1'b1 : 1'b0;
        xif_result_o.data = 32'h0;
    end
    
    vector_reg_file_3port #(.NUM_REGS(NUM_VREGS)) vrf_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .raddr1_i(rs1_q), .rdata1_o(vrf_rdata1),
        .raddr2_i(rs2_q), .rdata2_o(vrf_rdata2),
        .raddr3_i(rd_q), .rdata3_o(vrf_rdata3),
        .we_i(vrf_we), .waddr_i(rd_q), .wdata_i(vrf_wdata)
    );
    
    vlsu #(.VLEN(VLEN), .X_ID_WIDTH(X_ID_WIDTH)) vlsu_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .start_load_i(vlsu_start && (funct7_q == `FUNCT7_VLD)),
        .start_store_i(vlsu_start && (funct7_q == `FUNCT7_VST)),
        .base_addr_i(scalar_rs1_q), .store_data_i(vrf_rdata2),
        .load_data_o(vlsu_load_data), .done_o(vlsu_done), .id_i(id_q),
        .xif_mem_valid_o(xif_mem_valid_o), .xif_mem_ready_i(xif_mem_ready_i),
        .xif_mem_req_o(xif_mem_req_o), .xif_mem_resp_i(xif_mem_resp_i),
        .xif_mem_result_valid_i(xif_mem_result_valid_i),
        .xif_mem_result_i(xif_mem_result_i)
    );
    
    vector_exec_unit #(.VLEN(VLEN), .ELEMENT_WIDTH(ELEMENT_WIDTH)) exec_unit_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .start_i(exec_start), .done_o(exec_done),
        .funct7_i(funct7_q), .funct3_i(3'b0),
        .vec_a_i(vrf_rdata1), .vec_b_i(vrf_rdata2), .vec_c_i(vrf_rdata3),
        .result_o(exec_result),
        .vrf_rd_en_o(vrf_rd_en_exec), .vrf_rd_addr_o(vrf_raddr_exec),
        .vrf_rd_data_i(vrf_rdata3)
    );
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            funct7_q <= '0; rd_q <= '0; rs1_q <= '0; rs2_q <= '0;
            scalar_rs1_q <= '0; id_q <= '0;
        end else begin
            state <= next_state;
            if (state == IDLE && xif_issue_valid_i && is_custom_instr) begin
                rs1_q <= xif_issue_req_i.instr[19:15];
                rs2_q <= xif_issue_req_i.instr[24:20];
                rd_q  <= xif_issue_req_i.instr[11:7];
                funct7_q <= xif_issue_req_i.instr[31:25];
                scalar_rs1_q <= xif_issue_req_i.rs[0];
                id_q <= xif_issue_req_i.id;
                $display("[VCoP] ACCEPT id=%0d f7=0x%02x rd=v%0d", 
                    xif_issue_req_i.id, xif_issue_req_i.instr[31:25], 
                    xif_issue_req_i.instr[11:7]);
            end
        end
    end
    
    always_comb begin
        next_state = state;
        vlsu_start = 1'b0;
        exec_start = 1'b0;
        vrf_we = 1'b0;
        vrf_wdata = '0;
        
        case(state)
            IDLE: if (xif_issue_valid_i && is_custom_instr && xif_issue_resp_o.accept) 
                next_state = DECODE;
            
            DECODE: begin
                case (funct7_q)
                    `FUNCT7_VLD, `FUNCT7_VST: next_state = START_LSU;
                    `FUNCT7_VMAC, `FUNCT7_VADD, `FUNCT7_VSUB, `FUNCT7_VMUL, `FUNCT7_VMMUL: 
                        next_state = START_EXEC;
                    default: next_state = IDLE;
                endcase
            end
            
            START_LSU: begin
                vlsu_start = 1'b1;
                next_state = WAIT_LSU;
            end
            
            WAIT_LSU: begin
                if (vlsu_done) begin
                    next_state = (funct7_q == `FUNCT7_VLD) ? WRITE_VRF : WRITEBACK;
                end
            end
            
            START_EXEC: begin
                exec_start = 1'b1;
                next_state = WRITE_VRF;  // Go directly - result ready immediately!
            end
            
            WRITE_VRF: begin
                vrf_wdata = result_data_q;
                vrf_we = 1'b1;
                next_state = WRITEBACK;
            end
            
            WRITEBACK: if (xif_result_ready_i) next_state = IDLE;
            
            default: next_state = IDLE;
        endcase
    end
    
endmodule
