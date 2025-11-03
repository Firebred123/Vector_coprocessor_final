// soc_top_simple.sv - Simple SoC without caches for testing

module soc_top_simple (
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;
    
    // Memory
    localparam MEM_SIZE = 8192;
    logic [31:0] main_memory [0:MEM_SIZE-1];
    
    // CPU interfaces
    logic instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    logic data_req, data_gnt, data_rvalid, data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;
    
    // X-Interface
    cv32e40x_if_xif #(.X_ID_WIDTH(4)) xif();
    
    // Memory initialization
    initial begin
        for (int i = 0; i < MEM_SIZE; i++) begin
            main_memory[i] = 32'h0;
        end
        $readmemh("memory_words.hex", main_memory);
        $display("Memory loaded. First 5 words:");
        for (int i = 0; i < 5; i++) begin
            $display("  [0x%08x]: 0x%08x", i*4, main_memory[i]);
        end
    end
    
    // CPU instance
    cv32e40x_core #(
        .X_EXT(1),
        .X_ID_WIDTH(4),
        .X_NUM_RS(2),
        .LIB(0)  // Add LIB parameter
    ) cpu (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .scan_cg_en_i(1'b0),
        
        // Boot and exception addresses
        .boot_addr_i(32'h00000000),
        .dm_exception_addr_i(32'h00000000),
        .dm_halt_addr_i(32'h00000000),
        .mhartid_i(32'h00000000),
        .mimpid_patch_i(4'h0),
        .mtvec_addr_i(32'h00000000),
        
        // Critical: Enable fetching
        .fetch_enable_i(1'b1),
        
        // Interrupts and debug
        .time_i(64'h0),
        .irq_i(32'h0),
        .clic_irq_i(1'b0),
        .clic_irq_id_i('0),
        .clic_irq_level_i('0),
        .clic_irq_priv_i('0),
        .clic_irq_shv_i(1'b0),
        .debug_req_i(1'b0),
        
        // Instruction interface
        .instr_req_o(instr_req),
        .instr_gnt_i(instr_gnt),
        .instr_rvalid_i(instr_rvalid),
        .instr_addr_o(instr_addr),
        .instr_memtype_o(),
        .instr_prot_o(),
        .instr_dbg_o(),
        .instr_rdata_i(instr_rdata),
        .instr_err_i(1'b0),
        
        // Data interface
        .data_req_o(data_req),
        .data_gnt_i(data_gnt),
        .data_rvalid_i(data_rvalid),
        .data_we_o(data_we),
        .data_be_o(data_be),
        .data_addr_o(data_addr),
        .data_memtype_o(),
        .data_prot_o(),
        .data_dbg_o(),
        .data_atop_o(),
        .data_wdata_o(data_wdata),
        .data_rdata_i(data_rdata),
        .data_err_i(1'b0),
        .data_exokay_i(1'b1),
        
        // X-Interface
        .xif_compressed_if(xif.cpu_compressed),
        .xif_issue_if(xif.cpu_issue),
        .xif_commit_if(xif.cpu_commit),
        .xif_mem_if(xif.cpu_mem),
        .xif_mem_result_if(xif.cpu_mem_result),
        .xif_result_if(xif.cpu_result),
        
        // Misc
        .fencei_flush_req_o(),
        .fencei_flush_ack_i(1'b0),
        .core_sleep_o(),
        .wu_wfe_i(1'b0)
    );
    
    // Simple dummy vector coprocessor that always rejects instructions
    always_comb begin
        xif.issue_ready = 1'b1;  // Always ready to receive
        xif.issue_resp.accept = 1'b0;  // But never accept (no custom instructions)
        xif.issue_resp.writeback = 1'b0;
        xif.issue_resp.loadstore = 1'b0;
        xif.issue_resp.dualwrite = 1'b0;
        xif.issue_resp.dualread = 1'b0;
        xif.issue_resp.ecswrite = 1'b0;
        xif.issue_resp.exc = 1'b0;
        
        xif.result_valid = 1'b0;
        xif.result = '0;
        
        xif.mem_valid = 1'b0;
        xif.mem_req = '0;
        xif.mem_result_valid = 1'b0;
        xif.mem_result = '0;
    end
    
    // Simple direct memory (no cache)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_gnt <= 1'b0;
            instr_rvalid <= 1'b0;
            instr_rdata <= '0;
            data_gnt <= 1'b0;
            data_rvalid <= 1'b0;
            data_rdata <= '0;
        end else begin
            // Instruction memory
            instr_gnt <= instr_req;
            instr_rvalid <= instr_gnt;
            if (instr_req && (instr_addr >> 2) < MEM_SIZE) begin
                instr_rdata <= main_memory[instr_addr >> 2];
            end
            
            // Data memory
            data_gnt <= data_req;
            data_rvalid <= data_gnt;
            
            if (data_req) begin
                if (data_we) begin
                    // Write
                    if ((data_addr >> 2) < MEM_SIZE) begin
                        for (int i = 0; i < 4; i++) begin
                            if (data_be[i]) begin
                                main_memory[data_addr >> 2][i*8 +: 8] <= data_wdata[i*8 +: 8];
                            end
                        end
                    end
                end else begin
                    // Read
                    if ((data_addr >> 2) < MEM_SIZE) begin
                        data_rdata <= main_memory[data_addr >> 2];
                    end
                end
            end
        end
    end
    
    // Debug and monitoring
    logic [31:0] cycle_count;
    logic [31:0] prev_pc;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= '0;
            prev_pc <= '0;
        end else begin
            cycle_count <= cycle_count + 1;
            
            // Debug output
            if (cycle_count < 20) begin
                $display("Cycle %d: PC=0x%08x, instr_req=%b, instr_gnt=%b, instr_rvalid=%b, instr_rdata=0x%08x",
                         cycle_count, instr_addr, instr_req, instr_gnt, instr_rvalid, instr_rdata);
            end
            
            // Check for completion
            if (main_memory[32'h1000 >> 2] === 32'h1) begin
                $display("=== SUCCESS: Test completed ===");
                $display("Cycles: %d", cycle_count);
                $finish;
            end
            
            // Detect infinite loop
            if (instr_req) begin
                if (instr_addr == prev_pc) begin
                    if (cycle_count > 100) begin
                        $display("=== Program in infinite loop (expected) ===");
                        $display("PC: 0x%08x", instr_addr);
                        $display("Cycles: %d", cycle_count);
                        $finish;
                    end
                end else begin
                    prev_pc <= instr_addr;
                end
            end
            
            // Timeout
            if (cycle_count > 1000) begin
                $display("=== TIMEOUT ===");
                $display("Last PC: 0x%08x", instr_addr);
                $display("Memory[0x1000]: 0x%08x", main_memory[32'h1000 >> 2]);
                $finish;
            end
        end
    end
    
endmodule
