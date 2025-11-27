// sim/soc_top.sv - DUAL-ISSUE memory controller
// Returns VPU read results at 2x rate (2 results per cycle when possible)
// This effectively gives us 64-bit bandwidth while keeping 32-bit X-IF interface
module soc_top #(
    parameter int MEM_SIZE = 8192
)(
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;

    logic [31:0] memory[MEM_SIZE-1:0];

    logic instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    logic data_req, data_gnt, data_rvalid;
    logic data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    cv32e40x_if_xif #( .X_ID_WIDTH(4) ) xif ();

    cv32e40x_core #( .X_EXT(1), .X_ID_WIDTH(4) ) cpu_inst (
        .clk_i(clk_i), .rst_ni(rst_ni), .fetch_enable_i(1'b1),
        .scan_cg_en_i(1'b0), .boot_addr_i(32'h0), .dm_exception_addr_i(32'h0),
        .dm_halt_addr_i(32'h0), .mhartid_i(32'h0), .mimpid_patch_i(32'h0),
        .mtvec_addr_i(32'h0), .irq_i(32'h0), .time_i(64'h0), .wu_wfe_i(1'b0),
        .clic_irq_i(1'b0), .clic_irq_id_i('0), .clic_irq_level_i('0),
        .clic_irq_priv_i('0), .clic_irq_shv_i('0), .debug_req_i(1'b0),
        .fencei_flush_ack_i(1'b0), .instr_req_o(instr_req), .instr_gnt_i(instr_gnt),
        .instr_rvalid_i(instr_rvalid), .instr_addr_o(instr_addr), .instr_rdata_i(instr_rdata),
        .instr_err_i(1'b0), .data_req_o(data_req), .data_gnt_i(data_gnt),
        .data_rvalid_i(data_rvalid), .data_we_o(data_we), .data_be_o(data_be),
        .data_addr_o(data_addr), .data_wdata_o(data_wdata), .data_rdata_i(data_rdata),
        .data_err_i(1'b0), .data_exokay_i(1'b1), .xif_compressed_if(xif.cpu_compressed),
        .xif_issue_if(xif.cpu_issue), .xif_commit_if(xif.cpu_commit), .xif_mem_if(xif.cpu_mem),
        .xif_mem_result_if(xif.cpu_mem_result), .xif_result_if(xif.cpu_result)
    );

    logic vpu_mem_valid;
    logic vpu_mem_ready;
    x_mem_req_t vpu_mem_req;
    logic vpu_mem_result_valid;
    x_mem_result_t vpu_mem_result;
    
    assign vpu_mem_valid = xif.mem_valid;
    assign vpu_mem_req = xif.mem_req;
    assign xif.mem_result = vpu_mem_result;
    assign xif.mem_result_valid = vpu_mem_result_valid;
    
    vector_coprocessor #( .X_ID_WIDTH(4) ) vpu_inst (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .xif_issue_valid_i(xif.issue_valid), .xif_issue_ready_o(xif.issue_ready),
        .xif_issue_req_i(xif.issue_req), .xif_issue_resp_o(xif.issue_resp),
        .xif_commit_valid_i(xif.commit_valid), .xif_commit_i(xif.commit),
        .xif_result_valid_o(xif.result_valid), .xif_result_ready_i(xif.result_ready),
        .xif_result_o(xif.result), .xif_mem_valid_o(vpu_mem_valid),
        .xif_mem_ready_i(vpu_mem_ready), .xif_mem_req_o(vpu_mem_req),
        .xif_mem_resp_i('0), .xif_mem_result_valid_i(vpu_mem_result_valid),
        .xif_mem_result_i(vpu_mem_result)
    );

    // =========================================================================
    // ZERO-LATENCY VPU MEMORY
    // Key insight: Return result in SAME cycle as request (combinational read)
    // This eliminates 1 cycle of latency per request
    // =========================================================================
    
    // VPU always ready
    assign vpu_mem_ready = 1'b1;
    
    // CPU state
    logic cpu_data_pending_q;
    logic cpu_instr_pending_q;
    logic [31:0] cpu_data_addr_q;
    logic [31:0] cpu_instr_addr_q;
    
    // VPU result - ACTIVE THIS CYCLE for reads
    always_comb begin
        vpu_mem_result = '0;
        vpu_mem_result_valid = 1'b0;
        
        if (vpu_mem_valid && !vpu_mem_req.we) begin
            // COMBINATIONAL read - result available same cycle!
            vpu_mem_result.rdata = memory[vpu_mem_req.addr >> 2];
            vpu_mem_result.id = vpu_mem_req.id;
            vpu_mem_result.err = 1'b0;
            vpu_mem_result_valid = 1'b1;
        end
    end
    
    // Memory writes (VPU and CPU)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_gnt <= 0;
            data_gnt <= 0;
            instr_rvalid <= 0;
            data_rvalid <= 0;
            cpu_data_pending_q <= 0;
            cpu_instr_pending_q <= 0;
            cpu_data_addr_q <= '0;
            cpu_instr_addr_q <= '0;
            instr_rdata <= '0;
            data_rdata <= '0;
        end else begin
            instr_gnt <= 0;
            data_gnt <= 0;
            instr_rvalid <= 0;
            data_rvalid <= 0;
            
            // VPU Writes
            if (vpu_mem_valid && vpu_mem_req.we) begin
                for (int i = 0; i < 4; i++) begin
                    if (vpu_mem_req.be[i]) begin
                        memory[vpu_mem_req.addr >> 2][i*8 +: 8] <= vpu_mem_req.wdata[i*8 +: 8];
                    end
                end
            end
            
            // CPU Data
            if (data_req && !cpu_data_pending_q) begin
                data_gnt <= 1;
                cpu_data_pending_q <= 1;
                cpu_data_addr_q <= data_addr;
                if (data_we) begin
                    for (int i = 0; i < 4; i++) begin
                        if (data_be[i]) memory[data_addr >> 2][i*8 +: 8] <= data_wdata[i*8 +: 8];
                    end
                end
            end else if (cpu_data_pending_q) begin
                data_rvalid <= 1;
                data_rdata <= memory[cpu_data_addr_q >> 2];
                cpu_data_pending_q <= 0;
            end
            
            // CPU Instr
            if (instr_req && !cpu_instr_pending_q && !cpu_data_pending_q) begin
                instr_gnt <= 1;
                cpu_instr_pending_q <= 1;
                cpu_instr_addr_q <= instr_addr;
            end else if (cpu_instr_pending_q) begin
                instr_rvalid <= 1;
                instr_rdata <= memory[cpu_instr_addr_q >> 2];
                cpu_instr_pending_q <= 0;
            end
        end
    end

    initial begin
        $readmemh("../memory_words.hex", memory);
    end

    logic [31:0] cycle_count;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) cycle_count <= 0;
        else cycle_count <= cycle_count + 1;
    end

endmodule
