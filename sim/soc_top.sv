// sim/soc_top.sv - FINAL CORRECTED VERSION

module soc_top #(
    parameter int MEM_SIZE = 8192
)(
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;

    // --- MEMORY ---
    logic [31:0] memory[MEM_SIZE-1:0];

    // --- CPU OBI INTERFACES ---
    logic instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    logic data_req, data_gnt, data_rvalid;
    logic data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    // --- X-IF INTERFACE INSTANTIATION ---
    cv32e40x_if_xif #( .X_ID_WIDTH(4) ) xif ();

    // --- CPU INSTANCE ---
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

    // --- DIRECT MEMORY INTERFACE SIGNALS ---
    logic vpu_mem_valid;
    logic vpu_mem_ready;
    x_mem_req_t vpu_mem_req;
    logic vpu_mem_result_valid;
    x_mem_result_t vpu_mem_result;
    
    assign vpu_mem_valid = xif.mem_valid;
    assign vpu_mem_req = xif.mem_req;
    assign xif.mem_result = vpu_mem_result;
    assign xif.mem_result_valid = vpu_mem_result_valid;
    
    // --- VECTOR COPROCESSOR INSTANCE ---
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

    // --- MEMORY CONTROLLER ---
    logic cpu_data_access_q, cpu_instr_access_q;
    logic vpu_mem_access_q;
    logic vpu_mem_we_q;
    logic [X_ID_WIDTH-1:0] vpu_mem_id_q;
    logic [31:0] vpu_mem_addr_q; // Latch for VPU address
    
    always_comb begin
        vpu_mem_ready = !vpu_mem_access_q;
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_gnt <= 1'b0; data_gnt <= 1'b0; instr_rvalid <= 1'b0; data_rvalid <= 1'b0;
            vpu_mem_result_valid <= 1'b0; cpu_data_access_q <= 1'b0; cpu_instr_access_q <= 1'b0;
            vpu_mem_access_q <= 1'b0; vpu_mem_we_q <= 1'b0; vpu_mem_id_q <= '0;
            instr_rdata <= '0; data_rdata <= '0; vpu_mem_result <= '0; vpu_mem_addr_q <= '0;
        end else begin
            instr_gnt <= 1'b0; data_gnt <= 1'b0; instr_rvalid <= 1'b0;
            data_rvalid <= 1'b0; vpu_mem_result_valid <= 1'b0;
            
            if (vpu_mem_valid && !vpu_mem_access_q) begin
                // STAGE 1: Grant VPU request, latch address and control signals
                vpu_mem_access_q <= 1'b1;
                vpu_mem_we_q     <= vpu_mem_req.we;
                vpu_mem_id_q     <= vpu_mem_req.id;
                vpu_mem_addr_q   <= vpu_mem_req.addr;

                if (vpu_mem_req.we) begin
                    for (int i = 0; i < 4; i++)
                        if (vpu_mem_req.be[i])
                            memory[vpu_mem_req.addr >> 2][i*8 +: 8] <= vpu_mem_req.wdata[i*8 +: 8];
                end
            end else if (vpu_mem_access_q) begin
                // STAGE 2: Complete the VPU transaction
                if (!vpu_mem_we_q) begin
                    vpu_mem_result.rdata <= memory[vpu_mem_addr_q >> 2];
                    vpu_mem_result.id    <= vpu_mem_id_q;
                    vpu_mem_result_valid <= 1'b1;
                end
                vpu_mem_access_q <= 1'b0;
            end
            else if (data_req && !cpu_data_access_q) begin
                data_gnt <= 1'b1;
                cpu_data_access_q <= 1'b1;
                if (data_we) begin
                    for (int i = 0; i < 4; i++)
                        if (data_be[i]) memory[data_addr >> 2][i*8 +: 8] <= data_wdata[i*8 +: 8];
                end else begin
                    data_rdata <= memory[data_addr >> 2];
                end
            end else if (cpu_data_access_q) begin
                data_rvalid <= 1'b1;
                cpu_data_access_q <= 1'b0;
            end
            else if (instr_req && !cpu_instr_access_q) begin
                instr_gnt <= 1'b1;
                cpu_instr_access_q <= 1'b1;
                instr_rdata <= memory[instr_addr >> 2];
            end else if (cpu_instr_access_q) begin
                instr_rvalid <= 1'b1;
                cpu_instr_access_q <= 1'b0;
            end
        end
    end

    initial begin
        $readmemh("../memory_words.hex", memory);
        // ...
    end

    logic [31:0] cycle_count;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= 0;
        end else begin
            cycle_count <= cycle_count + 1;
        end
    end
    
    always @(posedge clk_i) begin
        // ... (debug displays) ...
    end
endmodule
