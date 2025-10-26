// sim/soc_top_debug.sv - Debug version to find the issue

module soc_top_debug (
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;

    // Main memory (32KB)
    logic [31:0] main_memory[8192];
    
    // === SIMPLE VERSION WITHOUT CACHES FOR DEBUGGING ===
    
    // CPU interfaces (OBI)
    logic instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    logic data_req, data_gnt, data_rvalid, data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    // X-IF Interface for vector coprocessor
    cv32e40x_if_xif #(.X_ID_WIDTH(4)) xif();

    // CPU instance
    cv32e40x_core #(
        .X_EXT(1),
        .X_ID_WIDTH(4)
    ) cpu_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .fetch_enable_i(1'b1),
        .scan_cg_en_i(1'b0),
        .boot_addr_i(32'h0),
        .dm_exception_addr_i(32'h0),
        .dm_halt_addr_i(32'h0),
        .mhartid_i(32'h0),
        .mimpid_patch_i(32'h0),
        .mtvec_addr_i(32'h0),
        .irq_i(32'h0),
        .time_i(64'h0),
        .wu_wfe_i(1'b0),
        .clic_irq_i(1'b0),
        .clic_irq_id_i('0),
        .clic_irq_level_i('0),
        .clic_irq_priv_i('0),
        .clic_irq_shv_i(1'b0),
        .debug_req_i(1'b0),
        .fencei_flush_ack_i(1'b0),
        
        // Instruction interface
        .instr_req_o(instr_req),
        .instr_gnt_i(instr_gnt),
        .instr_rvalid_i(instr_rvalid),
        .instr_addr_o(instr_addr),
        .instr_rdata_i(instr_rdata),
        .instr_err_i(1'b0),
        
        // Data interface
        .data_req_o(data_req),
        .data_gnt_i(data_gnt),
        .data_rvalid_i(data_rvalid),
        .data_we_o(data_we),
        .data_be_o(data_be),
        .data_addr_o(data_addr),
        .data_wdata_o(data_wdata),
        .data_rdata_i(data_rdata),
        .data_err_i(1'b0),
        .data_exokay_i(1'b1),
        
        // XIF interfaces for vector coprocessor
        .xif_compressed_if(xif.cpu_compressed),
        .xif_issue_if(xif.cpu_issue),
        .xif_commit_if(xif.cpu_commit),
        .xif_mem_if(xif.cpu_mem),
        .xif_mem_result_if(xif.cpu_mem_result),
        .xif_result_if(xif.cpu_result)
    );

    // Vector Coprocessor
    vector_coprocessor #(.X_ID_WIDTH(4)) vpu_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .xif_issue_valid_i(xif.issue_valid),
        .xif_issue_ready_o(xif.issue_ready),
        .xif_issue_req_i(xif.issue_req),
        .xif_issue_resp_o(xif.issue_resp),
        .xif_commit_valid_i(xif.commit_valid),
        .xif_commit_i(xif.commit),
        .xif_result_valid_o(xif.result_valid),
        .xif_result_ready_i(xif.result_ready),
        .xif_result_o(xif.result),
        .xif_mem_valid_o(xif.mem_valid),
        .xif_mem_ready_i(xif.mem_ready),
        .xif_mem_req_o(xif.mem_req),
        .xif_mem_resp_i('0),
        .xif_mem_result_valid_i(xif.mem_result_valid),
        .xif_mem_result_i(xif.mem_result)
    );

    // === SIMPLE DIRECT MEMORY WITHOUT CACHES ===
    
    // Instruction memory (direct)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_gnt <= 1'b0;
            instr_rvalid <= 1'b0;
            instr_rdata <= '0;
        end else begin
            instr_gnt <= instr_req;
            instr_rvalid <= instr_gnt;
            if (instr_req && instr_gnt) begin
                instr_rdata <= main_memory[instr_addr[31:2]];
            end
        end
    end
    
    // Data memory (direct)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_gnt <= 1'b0;
            data_rvalid <= 1'b0;
            data_rdata <= '0;
        end else begin
            data_gnt <= data_req;
            data_rvalid <= data_gnt;
            
            if (data_req && data_gnt) begin
                if (data_we) begin
                    // Write
                    for (int i = 0; i < 4; i++) begin
                        if (data_be[i]) begin
                            main_memory[data_addr[31:2]][i*8 +: 8] <= data_wdata[i*8 +: 8];
                        end
                    end
                end else begin
                    // Read
                    data_rdata <= main_memory[data_addr[31:2]];
                end
            end
        end
    end
    
    // VPU memory with extensive debugging
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            xif.mem_ready <= 1'b0;
            xif.mem_result_valid <= 1'b0;
            xif.mem_result <= '0;
        end else begin
            // Debug: Show VPU request
            if (xif.mem_valid && !xif.mem_ready) begin
                $display("[%0t] VPU Request: addr=0x%08x we=%b data=0x%08x be=%b id=%d", 
                         $time, xif.mem_req.addr, xif.mem_req.we, 
                         xif.mem_req.wdata, xif.mem_req.be, xif.mem_req.id);
            end
            
            // Accept request
            xif.mem_ready <= xif.mem_valid && !xif.mem_result_valid;
            
            // Process request
            if (xif.mem_valid && xif.mem_ready) begin
                $display("[%0t] VPU Accepted: Processing request", $time);
                
                if (xif.mem_req.we) begin
                    // Write
                    for (int i = 0; i < 4; i++) begin
                        if (xif.mem_req.be[i]) begin
                            main_memory[xif.mem_req.addr[31:2]][i*8 +: 8] <= 
                                xif.mem_req.wdata[i*8 +: 8];
                        end
                    end
                    $display("[%0t] VPU Write Complete: addr=0x%08x data=0x%08x", 
                             $time, xif.mem_req.addr, xif.mem_req.wdata);
                end else begin
                    // Read
                    xif.mem_result.rdata <= main_memory[xif.mem_req.addr[31:2]];
                    $display("[%0t] VPU Read: addr=0x%08x data=0x%08x", 
                             $time, xif.mem_req.addr, main_memory[xif.mem_req.addr[31:2]]);
                end
                xif.mem_result.id <= xif.mem_req.id;
                xif.mem_result.err <= 1'b0;
            end
            
            // Send response
            if (xif.mem_ready) begin
                xif.mem_result_valid <= 1'b1;
                $display("[%0t] VPU Response Valid: data=0x%08x id=%d", 
                         $time, xif.mem_result.rdata, xif.mem_result.id);
            end else if (xif.mem_result_valid && !xif.mem_valid) begin
                xif.mem_result_valid <= 1'b0;
                $display("[%0t] VPU Response Acknowledged", $time);
            end
        end
    end

    // Initialize memory
    initial begin
        $readmemh("memory_words.hex", main_memory);
        $display("=== Debug SoC (No Caches) ===");
        $display("Main Memory: 32KB");
        
        // Debug: Show first few instructions
        $display("First instructions in memory:");
        for (int i = 0; i < 8; i++) begin
            $display("  [0x%08x]: 0x%08x", i*4, main_memory[i]);
        end
        
        // Debug: Show data at VLSU addresses
        $display("Data at VLSU addresses:");
        $display("  [0x100]: 0x%08x", main_memory[32'h100 >> 2]);
        $display("  [0x104]: 0x%08x", main_memory[32'h104 >> 2]);
        $display("  [0x120]: 0x%08x", main_memory[32'h120 >> 2]);
        $display("  [0x124]: 0x%08x", main_memory[32'h124 >> 2]);
    end
    
    // Monitor execution
    logic [31:0] cycle_count;
    logic [31:0] last_pc;
    integer pc_stuck_cnt;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= '0;
            last_pc <= '0;
            pc_stuck_cnt <= 0;
        end else begin
            cycle_count <= cycle_count + 1;
            
            // Debug every 1000 cycles
            if (cycle_count % 1000 == 0 && cycle_count > 0) begin
                $display("[%0t] Cycle %d: PC=0x%08x", $time, cycle_count, instr_addr);
            end
            
            // Track PC changes
            if (instr_addr != last_pc) begin
                last_pc <= instr_addr;
                pc_stuck_cnt <= 0;
            end else begin
                pc_stuck_cnt <= pc_stuck_cnt + 1;
            end
            
            // Check completion
            if (main_memory[32'h1000 >> 2] === 32'h1) begin
                $display("=== Program Completed Successfully ===");
                $display("Total cycles: %d", cycle_count);
                $finish;
            end
            
            // Stop if stuck
            if (pc_stuck_cnt > 5000) begin
                $display("=== Program stuck at PC 0x%08x ===", instr_addr);
                $display("Total cycles: %d", cycle_count);
                $finish;
            end
            
            // Stop at max cycles
            if (cycle_count >= 100000) begin
                $display("=== Max cycles reached ===");
                $finish;
            end
        end
    end
    
    // Debug: Monitor XIF signals
    always @(posedge clk_i) begin
        if (xif.issue_valid) begin
            $display("[%0t] XIF Issue: instr=0x%08x", $time, xif.issue_req.instr);
        end
        if (xif.result_valid) begin
            $display("[%0t] XIF Result: data=0x%08x", $time, xif.result.data);
        end
    end

endmodule
