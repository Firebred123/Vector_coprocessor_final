`timescale 1ns/1ps

module soc_top_with_cache (
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;
    
    // Memory configuration
    localparam MEM_SIZE = 8192;  // 8KB main memory (words)
    localparam MEM_ADDR_WIDTH = $clog2(MEM_SIZE);
    
    // Internal signals
    logic instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    logic data_req, data_gnt, data_rvalid, data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;
    
    // Main memory
    logic [31:0] main_memory [0:MEM_SIZE-1];
    
    // X-Interface
    cv32e40x_if_xif #(.X_ID_WIDTH(4)) xif();
    
    // Memory initialization
    initial begin
        string mem_file;
        int i;
        
        // Initialize memory to zero
        for (i = 0; i < MEM_SIZE; i++) begin
            main_memory[i] = 32'h0;
        end
        
        // Load memory from file
        if ($value$plusargs("MEMORY_FILE=%s", mem_file)) begin
            $readmemh(mem_file, main_memory);
            $display("Loaded memory from: %s", mem_file);
    	end
	else begin
            $readmemh("memory_words.hex", main_memory);
            $display("Loading memory from: memory_words.hex");
        end
        
        $display("=== Memory Initialization ===");
        $display("First 10 instructions:");
        for (i = 0; i < 10; i++) begin
            $display("  [0x%08x]: 0x%08x", i*4, main_memory[i]);
        end
        $display("=============================");
    end
    
    // CPU instance with all required signals
    cv32e40x_core #(
        .X_EXT(1),
        .X_ID_WIDTH(4),
        .X_NUM_RS(2),
        .LIB(0)  // Add LIB parameter
    ) cpu (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .scan_cg_en_i(1'b0),
        
        // Boot and configuration
        .boot_addr_i(32'h00000000),
        .dm_exception_addr_i(32'h00000000),
        .dm_halt_addr_i(32'h00000000),
        .mhartid_i(32'h00000000),
        .mimpid_patch_i(4'h0),
        .mtvec_addr_i(32'h00000000),
        
        // CRITICAL: Enable instruction fetching
        .fetch_enable_i(1'b1),
        
        // Time and interrupts
        .time_i(64'h0),
        .irq_i(32'h0),
        .clic_irq_i(1'b0),
        .clic_irq_id_i('0),
        .clic_irq_level_i('0),
        .clic_irq_priv_i('0),
        .clic_irq_shv_i(1'b0),
        
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
        
        // Miscellaneous
        .fencei_flush_req_o(),
        .fencei_flush_ack_i(1'b0),
        .debug_req_i(1'b0),
        .core_sleep_o(),
        .wu_wfe_i(1'b0)
    );
    
    // Real Vector Coprocessor Instance
    logic vpu_mem_valid, vpu_mem_ready;
    x_mem_req_t vpu_mem_req;
    logic vpu_mem_result_valid;
    x_mem_result_t vpu_mem_result;
    
    vector_coprocessor #(
        .VLEN(256),
        .ELEMENT_WIDTH(32),
        .X_ID_WIDTH(4)
    ) vpu (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        
        // X-IF interfaces
        .xif_issue_valid_i(xif.issue_valid),
        .xif_issue_ready_o(xif.issue_ready),
        .xif_issue_req_i(xif.issue_req),
        .xif_issue_resp_o(xif.issue_resp),
        
        .xif_commit_valid_i(xif.commit_valid),
        .xif_commit_i(xif.commit),
        
        .xif_result_valid_o(xif.result_valid),
        .xif_result_ready_i(xif.result_ready),
        .xif_result_o(xif.result),
        
        // Memory interface
        .xif_mem_valid_o(vpu_mem_valid),
        .xif_mem_ready_i(vpu_mem_ready),
        .xif_mem_req_o(vpu_mem_req),
        .xif_mem_resp_i('0),
        .xif_mem_result_valid_i(vpu_mem_result_valid),
        .xif_mem_result_i(vpu_mem_result)
    );
    
    // Handle VPU memory requests
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            vpu_mem_ready <= 1'b0;
            vpu_mem_result_valid <= 1'b0;
            vpu_mem_result <= '0;
        end else begin
            vpu_mem_ready <= 1'b1;
            
            if (vpu_mem_valid && vpu_mem_ready) begin
                vpu_mem_result_valid <= 1'b1;
                vpu_mem_result.id <= vpu_mem_req.id;
                vpu_mem_result.err <= 1'b0;
                
                if (vpu_mem_req.we) begin
                    // Write to memory
                    if ((vpu_mem_req.addr >> 2) < MEM_SIZE) begin
                        for (int i = 0; i < 32; i++) begin
                            if (vpu_mem_req.be[i]) begin
                                main_memory[(vpu_mem_req.addr >> 2) + (i >> 2)][(i%4)*8 +: 8] 
                                    <= vpu_mem_req.wdata[i*8 +: 8];
                            end
                        end
                    end
                    vpu_mem_result.rdata <= '0;
                end else begin
                    // Read from memory
                    for (int i = 0; i < 8; i++) begin
                        if ((vpu_mem_req.addr >> 2) + i < MEM_SIZE) begin
                            vpu_mem_result.rdata[i*32 +: 32] <= main_memory[(vpu_mem_req.addr >> 2) + i];
                        end else begin
                            vpu_mem_result.rdata[i*32 +: 32] <= '0;
                        end
                    end
                end
            end else begin
                vpu_mem_result_valid <= 1'b0;
            end
        end
    end
    
    // =========================================================================
    // DIRECT INSTRUCTION MEMORY (NO CACHE) - PROVEN TO WORK
    // =========================================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_gnt <= 1'b0;
            instr_rvalid <= 1'b0;
            instr_rdata <= '0;
        end else begin
            // Simple direct memory access for instructions
            instr_gnt <= instr_req;
            instr_rvalid <= instr_gnt;
            
            if (instr_req) begin
                if ((instr_addr >> 2) < MEM_SIZE) begin
                    instr_rdata <= main_memory[instr_addr >> 2];
                end else begin
                    instr_rdata <= 32'h0;
                end
            end
        end
    end
    
    // =========================================================================
    // SIMPLE DATA MEMORY (can add cache later)
    // =========================================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_gnt <= 1'b0;
            data_rvalid <= 1'b0;
            data_rdata <= '0;
        end else begin
            // Simple direct memory access for data
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
                    data_rdata <= 32'h0;
                end else begin
                    // Read
                    if ((data_addr >> 2) < MEM_SIZE) begin
                        data_rdata <= main_memory[data_addr >> 2];
                    end else begin
                        data_rdata <= 32'h0;
                    end
                end
            end
        end
    end
    
    // =========================================================================
    // Performance Monitoring
    // =========================================================================
    logic [31:0] cycle_count;
    logic [31:0] instructions_executed;
    logic [31:0] prev_pc;
    logic [7:0] pc_stuck_counter;
    logic program_done;
    
    // Check for completion
    assign program_done = (main_memory[32'h1000 >> 2] === 32'h00000001);
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= '0;
            instructions_executed <= '0;
            prev_pc <= '0;
            pc_stuck_counter <= '0;
        end else begin
            cycle_count <= cycle_count + 1;
            
            // Debug output for first cycles
            if (cycle_count < 20) begin
                $display("Cycle %d: PC=0x%08x, instr_req=%b, instr_gnt=%b, instr_rvalid=%b, instr=0x%08x",
                         cycle_count, instr_addr, instr_req, instr_gnt, instr_rvalid, instr_rdata);
            end
            
            // Count executed instructions
            if (instr_rvalid) begin
                instructions_executed <= instructions_executed + 1;
            end
            
            // Check for program completion
            if (program_done) begin
                $display("\n=== PROGRAM COMPLETED SUCCESSFULLY ===");
                $display("Total cycles: %0d", cycle_count);
                $display("Instructions executed: %0d", instructions_executed);
                $display("===========================\n");
                $finish;
            end
            
            // Detect infinite loop
            if (instr_req) begin
                if (instr_addr == prev_pc) begin
                    pc_stuck_counter <= pc_stuck_counter + 1;
                    if (pc_stuck_counter > 100) begin
                        $display("\n=== INFINITE LOOP DETECTED ===");
                        $display("Stuck at PC: 0x%08x", instr_addr);
                        $display("Total cycles: %0d", cycle_count);
                        $display("Instructions executed: %0d", instructions_executed);
                        $display("Memory[0x1000]: 0x%08x", main_memory[32'h1000 >> 2]);
                        $display("===========================\n");
                        $finish;
                    end
                end else begin
                    prev_pc <= instr_addr;
                    pc_stuck_counter <= '0;
                end
            end
            
            // Timeout
            if (cycle_count > 100000) begin
                $display("Simulation timeout at cycle %0d", cycle_count);
                $display("Checking memory[0x1000]: 0x%08x", main_memory[32'h1000 >> 2]);
                $display("PC: 0x%08x", instr_addr);
                $finish;
            end
        end
    end
    
endmodule
