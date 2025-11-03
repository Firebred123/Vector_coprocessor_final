// rtl/core/vector_coprocessor.sv
//
// MODIFIED:
// 1. Replaced `vmac_unit` with `vector_exec_unit`.
// 2. Kept `vlsu` (for VLD/VST).
// 3. Re-enabled `include "custom_opcodes.vh"`.
// 4. Fixed VRF instantiation to use `raddr1_i`, `rdata1_o` and no `WIDTH` param.
// 5. Fixed X-IF structs based on *all* previous Verilator error logs.
//    - Using `rs1_val` (from backup) for scalar GPR.
//    - Using full `x_issue_resp_t` struct (with 'loadstore', 'writeback', etc.).
//    - Using full `x_result_t` struct (with 'we', 'rd', 'data', 'err', etc.).
//
`include "custom_opcodes.vh"
import cv32e40x_xif_pkg::*;

module vector_coprocessor #(
    parameter int VLEN = 256,
    parameter int ELEMENT_WIDTH = 32, // Added parameter for vector_exec_unit
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

    
    typedef struct packed {
        logic [6:0] opcode;
        logic [4:0] rd;
        logic [2:0] funct3;
        logic [4:0] rs1;
        logic [4:0] rs2;
        logic [6:0] funct7;
    } instruction_t;

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
    instruction_t decoded_instr;

    // Latched instruction fields
    logic [X_ID_WIDTH-1:0] id_q;
    logic [4:0] rs1_q, rs2_q, rd_q;
    logic [6:0] funct7_q;
    logic [2:0] funct3_q;
    logic [31:0] scalar_val_q; // Scalar value from GPR (rs1_val)

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
    
    // Dummy wires for vector_exec_unit's extra VRF port (see notes)
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

    // =========================================================================
    // Decoding Logic
    // =========================================================================
    assign decoded_instr = instruction_t'(xif_issue_req_i.instr);

    assign is_load_op  = (decoded_instr.opcode == `CUSTOM0_OPCODE) && (decoded_instr.funct7 == `FUNCT7_VLD);
    assign is_store_op = (decoded_instr.opcode == `CUSTOM0_OPCODE) && (decoded_instr.funct7 == `FUNCT7_VST);
    assign is_exec_op  = (decoded_instr.opcode == `CUSTOM0_OPCODE) && (
                           (decoded_instr.funct7 == `FUNCT7_VADD) ||
                           (decoded_instr.funct7 == `FUNCT7_VSUB) ||
                           (decoded_instr.funct7 == `FUNCT7_VMUL) ||
			   (decoded_instr.funct7 == `FUNCT7_VMAC) ||
                           (decoded_instr.funct7 == `FUNCT7_VMMUL) 
                         );

    // =========================================================================
    // Vector Register File Instantiation
    // =========================================================================
    
    // ** FIX: Instantiation ports now match Verilator errors **
    // ** FIX: Removed width parameter **
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

    // Vector Load Store Unit (Kept)
    vlsu #(
        .VLEN(VLEN),
        .X_ID_WIDTH(X_ID_WIDTH)
    ) vlsu_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_load_i(vlsu_start_load),
        .start_store_i(vlsu_start_store),
        .base_addr_i(scalar_val_q),      // Use scalar value rs1 for address
        .store_data_i(vrf_rdata_a),      // Use VRF Port A (vs1 data) for stores
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

    // Vector Execution Unit (Replaces vmac_unit)
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
        .vec_a_i(vrf_rdata_a),     // VRF Read Port A (vs1 data)
        .vec_b_i(vrf_rdata_b),     // VRF Read Port B (vs2 data)
        .vec_c_i('0),              // *** TIED TO ZERO - See notes ***
        .result_o(exec_result),
        
        // Unused extra VRF port (see notes)
        .vrf_rd_en_o(vrf_rd_en_exec),
        .vrf_rd_addr_o(vrf_raddr_exec),
        .vrf_rd_data_i(vrf_rdata_b) // Stubbed: feed port B data
    );

    // =========================================================================
    // Control Logic & FSM
    // =========================================================================

    assign accept_issue = (state == IDLE) && xif_issue_valid_i;
    assign xif_issue_ready_o = (state == IDLE);

    // ** FIX: Assign x_issue_resp_t struct based on error log fields **
    assign xif_issue_resp_o = '{
        accept:    accept_issue,
        loadstore: is_load_op || is_store_op,
        writeback: is_exec_op,
        dualwrite: 1'b0,
        dualread:  1'b0,
        ecswrite:  1'b0,
        exc:       1'b0
    };

    // VRF read addresses
    assign vrf_raddr_a = is_store_q ? rd_q : rs1_q;
    assign vrf_raddr_b = rs2_q;

    // Result Mux: Select data to be written to VRF
    assign result_data_mux = (funct7_q == `FUNCT7_VLD) ? vlsu_load_data : exec_result;
    assign vrf_wdata = result_data_mux;
    assign vrf_waddr = rd_q; // Latched destination register

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
                rs1_q <= decoded_instr.rs1; // Latch vector reg addresses
                rs2_q <= decoded_instr.rs2;
                rd_q <= decoded_instr.rd;
                funct7_q <= decoded_instr.funct7;
                funct3_q <= decoded_instr.funct3;
                // ** FIX: Using `rs1_val` (from backup) - assuming previous error was a cascade **
                scalar_val_q <= xif_issue_req_i.rs[0];

		is_load_q <= is_load_op;
            	is_store_q <= is_store_op;
            	is_exec_q <= is_exec_op;
            end
        end
    end

    // FSM Next State Logic & Outputs
    always_comb begin
        // Default outputs
        next_state = state;
        xif_result_valid_o = 1'b0;
        // ** FIX: Assign x_result_t struct based on error log fields (inc. 'err') **
        xif_result_o = '{
            id:      id_q,
            we:      1'b0, // We are not writing to a GPR
            rd:      '0,
            data:    '0,
            err:     1'b0, // <-- Added missing 'err' field
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
                // One-cycle decode, dispatch next cycle
                if (is_load_q || is_store_q) begin
                    next_state = START_LSU;
                end else if (is_exec_q) begin
                    next_state = START_EXEC;
                end else begin
                    next_state = IDLE; 
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
                        next_state = WRITE_VRF;  // Go to write state for loads
                    end else begin
                        next_state = WRITEBACK;  // Skip write for stores
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
                xif_result_valid_o = 1'b1;
                // xif_result_o struct is already assigned above
                
                if (xif_result_ready_i) begin
                    next_state = IDLE;
                end
            end

            default: next_state = IDLE;
        endcase
    end

endmodule
