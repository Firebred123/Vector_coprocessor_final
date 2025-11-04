// rtl/core/vector_coprocessor.sv - Strict FSM: Only accept in IDLE
`include "custom_opcodes.vh"
import cv32e40x_xif_pkg::*;

module vector_coprocessor #(
    parameter int VLEN = 256,
    parameter int ELEMENT_WIDTH = 32,
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

    // =========================================================================
    // Parameters
    // =========================================================================
    localparam int NUM_VREGS = 16;
    localparam int VRF_ADDR_WIDTH = $clog2(NUM_VREGS);

    // =========================================================================
    // Instruction Decoding - Direct bit slicing
    // =========================================================================
    logic [6:0] opcode;
    logic [4:0] rd;
    logic [2:0] funct3;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [6:0] funct7;
    
    assign opcode = xif_issue_req_i.instr[6:0];
    assign rd     = xif_issue_req_i.instr[11:7];
    assign funct3 = xif_issue_req_i.instr[14:12];
    assign rs1    = xif_issue_req_i.instr[19:15];
    assign rs2    = xif_issue_req_i.instr[24:20];
    assign funct7 = xif_issue_req_i.instr[31:25];

    // FSM States
    typedef enum logic [2:0] {
        IDLE,
        DECODE,
        START_LSU,
        WAIT_LSU,
        START_EXEC,
        WAIT_EXEC,
        WRITE_VRF,
        WRITEBACK
    } state_t;

    // =========================================================================
    // Internal Signals
    // =========================================================================
    state_t state, next_state;

    // Latched instruction fields
    logic [X_ID_WIDTH-1:0] id_q;
    logic [4:0] rs1_q, rs2_q, rd_q;
    logic [6:0] funct7_q;
    logic [2:0] funct3_q;
    logic [31:0] scalar_val_q;

    // Register File Interface
    logic vrf_we;
    logic [VRF_ADDR_WIDTH-1:0] vrf_waddr;
    logic [VLEN-1:0] vrf_wdata;
    logic [VRF_ADDR_WIDTH-1:0] vrf_raddr_a;
    logic [VRF_ADDR_WIDTH-1:0] vrf_raddr_b;
    logic [VLEN-1:0] vrf_rdata_a;
    logic [VLEN-1:0] vrf_rdata_b;

    // VLSU signals
    logic vlsu_start_load;
    logic vlsu_start_store;
    logic vlsu_done;
    logic [VLEN-1:0] vlsu_load_data;
    
    // Vector Exec Unit signals
    logic exec_start;
    logic exec_done;
    logic [VLEN-1:0] exec_result;
    
    // Dummy wires for vector_exec_unit's extra VRF port
    logic vrf_rd_en_exec;
    logic [4:0] vrf_raddr_exec;

    // Result Mux
    logic [VLEN-1:0] result_data_mux;

    // XIF Control
    logic accept_issue;
    logic is_load_op;
    logic is_store_op;
    logic is_exec_op;

    logic is_load_q;
    logic is_store_q;
    logic is_exec_q;

    // Debug: Track state changes only
    state_t state_prev;
    always_ff @(posedge clk_i) state_prev <= state;

    // =========================================================================
    // Decoding Logic
    // =========================================================================
    assign is_load_op  = (opcode == `CUSTOM0_OPCODE) && (funct7 == `FUNCT7_VLD);
    assign is_store_op = (opcode == `CUSTOM0_OPCODE) && (funct7 == `FUNCT7_VST);
    assign is_exec_op  = (opcode == `CUSTOM0_OPCODE) && (
                           (funct7 == `FUNCT7_VADD) ||
                           (funct7 == `FUNCT7_VSUB) ||
                           (funct7 == `FUNCT7_VMUL) ||
                           (funct7 == `FUNCT7_VMAC) ||
                           (funct7 == `FUNCT7_VMMUL) 
                         );

    // =========================================================================
    // Vector Register File Instantiation
    // =========================================================================
    vector_reg_file_3port #(
        .NUM_REGS(NUM_VREGS)
    ) vrf_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .we_i(vrf_we),
        .waddr_i(vrf_waddr),
        .wdata_i(vrf_wdata),
        .raddr1_i(vrf_raddr_a),
        .rdata1_o(vrf_rdata_a),
        .raddr2_i(vrf_raddr_b),
        .rdata2_o(vrf_rdata_b)
    );

    // =========================================================================
    // Execution Unit Instantiations
    // =========================================================================

    // Vector Load Store Unit
    vlsu #(
        .VLEN(VLEN),
        .X_ID_WIDTH(X_ID_WIDTH)
    ) vlsu_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_load_i(vlsu_start_load),
        .start_store_i(vlsu_start_store),
        .base_addr_i(scalar_val_q),
        .store_data_i(vrf_rdata_a),
        .load_data_o(vlsu_load_data),
        .done_o(vlsu_done),
        .id_i(id_q),
        .xif_mem_valid_o(xif_mem_valid_o),
        .xif_mem_ready_i(xif_mem_ready_i),
        .xif_mem_req_o(xif_mem_req_o),
        .xif_mem_resp_i(xif_mem_resp_i),
        .xif_mem_result_valid_i(xif_mem_result_valid_i),
        .xif_mem_result_i(xif_mem_result_i)
    );

    // Vector Execution Unit
    vector_exec_unit #(
        .VLEN(VLEN),
        .ELEMENT_WIDTH(ELEMENT_WIDTH)
    ) exec_unit_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_i(exec_start),
        .done_o(exec_done),
        .funct7_i(funct7_q),
        .funct3_i(funct3_q),
        .vec_a_i(vrf_rdata_a),
        .vec_b_i(vrf_rdata_b),
        .vec_c_i('0),
        .result_o(exec_result),
        .vrf_rd_en_o(vrf_rd_en_exec),
        .vrf_rd_addr_o(vrf_raddr_exec),
        .vrf_rd_data_i(vrf_rdata_b)
    );

    // =========================================================================
    // Control Logic & FSM
    // =========================================================================

    // CRITICAL: Only accept when state is ALREADY in IDLE (not transitioning to it)
    assign accept_issue = (state == IDLE) && xif_issue_valid_i;
    
    // CRITICAL: Only ready when state is IDLE
    assign xif_issue_ready_o = (state == IDLE);

    assign xif_issue_resp_o = '{
        accept:    accept_issue,
        loadstore: is_load_op || is_store_op,
        writeback: is_exec_op || is_load_op,  // VLD needs writeback!
        dualwrite: 1'b0,
        dualread:  1'b0,
        ecswrite:  1'b0,
        exc:       1'b0
    };

    // VRF read addresses
    assign vrf_raddr_a = is_store_q ? rd_q : rs1_q;
    assign vrf_raddr_b = rs2_q;

    // Result Mux
    assign result_data_mux = (funct7_q == `FUNCT7_VLD) ? vlsu_load_data : exec_result;
    assign vrf_wdata = result_data_mux;
    assign vrf_waddr = rd_q;

    // FSM Registers
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            id_q <= '0;
            rs1_q <= '0;
            rs2_q <= '0;
            rd_q <= '0;
            funct7_q <= '0;
            funct3_q <= '0;
            scalar_val_q <= '0;
            is_load_q <= 1'b0;
            is_store_q <= 1'b0;
            is_exec_q <= 1'b0;
        end else begin
            state <= next_state;
            
            if (accept_issue) begin
                id_q <= xif_issue_req_i.id;
                rs1_q <= rs1;
                rs2_q <= rs2;
                rd_q <= rd;
                funct7_q <= funct7;
                funct3_q <= funct3;
                scalar_val_q <= xif_issue_req_i.rs[0];
                is_load_q <= is_load_op;
                is_store_q <= is_store_op;
                is_exec_q <= is_exec_op;
                
                $display("╔════════════════════════════════════════════════════════════");
                $display("║ [VCoP] ACCEPTED: instr=0x%08x, id=%0d", 
                        xif_issue_req_i.instr, xif_issue_req_i.id);
                if (is_load_op)
                    $display("║   VLD  v%0d, 0(x%0d) [addr=0x%08x]", rd, rs1, xif_issue_req_i.rs[0]);
                else if (is_store_op)
                    $display("║   VST  v%0d, 0(x%0d) [addr=0x%08x]", rd, rs1, xif_issue_req_i.rs[0]);
                else if (is_exec_op)
                    $display("║   EXEC (f7=0x%02x) v%0d, v%0d, v%0d", funct7, rd, rs1, rs2);
                $display("╚════════════════════════════════════════════════════════════");
            end
            
            // Show state transitions
            if (state != state_prev) begin
                case (state)
                    DECODE: $display("  → DECODE");
                    START_LSU: $display("  → START_LSU (addr=0x%08x)", scalar_val_q);
                    WAIT_LSU: $display("  → WAIT_LSU");
                    START_EXEC: $display("  → START_EXEC");
                    WAIT_EXEC: $display("  → WAIT_EXEC");
                    WRITE_VRF: $display("  → WRITE_VRF: v%0d = 0x%08x (first word)", rd_q, vrf_wdata[31:0]);
                    WRITEBACK: $display("  → WRITEBACK");
                    IDLE: begin
                        $display("  → IDLE (ready for next)\n");
                    end
                endcase
            end
        end
    end

    // FSM Next State Logic & Outputs
    always_comb begin
        // Default outputs
        next_state = state;
        xif_result_valid_o = 1'b0;
        xif_result_o = '{
            id:      id_q,
            we:      1'b0,
            rd:      '0,
            data:    '0,
            err:     1'b0,
            ecsdata: '0,
            ecswe:   1'b0,
            exc:     1'b0,
            exccode: '0,
            dbg:     1'b0
        };
        vlsu_start_load = 1'b0;
        vlsu_start_store = 1'b0;
        exec_start = 1'b0;
        vrf_we = 1'b0;

        case (state)
            IDLE: begin
                if (accept_issue) begin
                    next_state = DECODE;
                end
            end

            DECODE: begin
                if (is_load_q || is_store_q) begin
                    next_state = START_LSU;
                end else if (is_exec_q) begin
                    next_state = START_EXEC;
                end else begin
                    next_state = IDLE;
                    $display("  WARNING: Unknown operation, returning to IDLE");
                end
            end

            START_LSU: begin
                vlsu_start_load = is_load_q;
                vlsu_start_store = is_store_q;
                next_state = WAIT_LSU;
            end

            WAIT_LSU: begin
                if (vlsu_done) begin
                    if (funct7_q == `FUNCT7_VLD) begin
                        next_state = WRITE_VRF;
                    end else begin
                        next_state = WRITEBACK;
                    end
                end
            end

            START_EXEC: begin
                exec_start = 1'b1;
                next_state = WAIT_EXEC;
            end
            
            WAIT_EXEC: begin
                if (exec_done) begin
                    next_state = WRITE_VRF;
                end
            end

            WRITE_VRF: begin
                vrf_we = 1'b1;
                next_state = WRITEBACK;
            end

            WRITEBACK: begin
                // Assert result valid
                xif_result_valid_o = 1'b1;
                
                // Wait for CPU to accept
                if (xif_result_ready_i) begin
                    next_state = IDLE;
                end
            end

            default: begin
                next_state = IDLE;
            end
        endcase
    end

endmodule
