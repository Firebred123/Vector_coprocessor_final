// soc_top_with_cache.sv - SoC with instruction and data caches
//
// FIXED VERSION:
// - Removed non-existent cpu_core ports (debug_mode_if, minstret_o).
// - Corrected cpu_core X-IF ports to use STRUCTS (e.g., .xif_issue_if).
// - Corrected vpu X-IF ports to use INDIVIDUAL SIGNALS (e.g., .xif_issue_valid_i).
// - Corrected vpu memory port direction (xif_mem_valid_o).
// - Added connection for new xif_issue_rs1_data_i port to VPU.
// - Added missing ELEMENT_WIDTH parameter to VPU.

module soc_top_with_cache (
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;

    // =========================================================================
    // Parameters
    // =========================================================================
    parameter MEM_SIZE = 32768;  // 32KB main memory
    parameter MEM_WORDS = MEM_SIZE / 4;
    parameter CACHE_LINE_SIZE = 32;  // 32 bytes per cache line
    parameter ICACHE_SIZE = 16384;   // 16KB I-cache
    parameter DCACHE_SIZE = 16384;   // 16KB D-cache

    // =========================================================================
    // Main Memory with Preloaded Instructions
    // =========================================================================
    logic [31:0] main_memory [0:MEM_WORDS-1];
    
    // Memory initialization from hex file
    initial begin
        integer i;
        string mem_file = "memory_words.hex";
        
        // Initialize all memory to NOP (0x00000013)
        for (i = 0; i < MEM_WORDS; i++) begin
            main_memory[i] = 32'h00000013;
        end
        
        // Load program from hex file if it exists
        if ($test$plusargs("MEMORY_FILE")) begin
            $value$plusargs("MEMORY_FILE=%s", mem_file);
        end
        
        $display("Loading memory from: %s", mem_file);
        $readmemh(mem_file, main_memory);
        
        // Display first few instructions for verification
        $display("=== Memory Initialization ===");
        $display("First 10 instructions:");
        for (i = 0; i < 10 && i < MEM_WORDS; i++) begin
            $display("  [0x%08x]: 0x%08x", i*4, main_memory[i]);
        end
        $display("=============================");
    end

    // =========================================================================
    // CPU Interfaces
    // =========================================================================
    
    // Instruction interface (OBI)
    logic instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    
    // Data interface (OBI)
    logic data_req, data_gnt, data_rvalid, data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;
    
    // X-IF Interface for vector coprocessor
    // This module provides both struct and individual signal interfaces
    cv32e40x_if_xif #(.X_ID_WIDTH(4)) xif();
    
    // VPU memory interface
    logic vpu_mem_valid, vpu_mem_ready, vpu_mem_result_valid;
    x_mem_req_t vpu_mem_req;
    x_mem_result_t vpu_mem_result;

    // =========================================================================
    // CPU Core Instance
    // =========================================================================
    cv32e40x_core #(
        .X_EXT(1),
        .X_ID_WIDTH(4),
        .LIB(0)
    ) cpu_core (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .scan_cg_en_i(1'b0),
        
        // Configuration
        .boot_addr_i(32'h00000000),
        .dm_exception_addr_i(32'h00000000),
        .dm_halt_addr_i(32'h00000000),
        .mhartid_i(32'h00000000),
        .mimpid_patch_i(4'h0),
        .mtvec_addr_i(32'h00000000),
        
        // Control
        .fetch_enable_i(1'b1),
        .core_sleep_o(),
        
        // Interrupt interface
        .irq_i(32'h00000000),
        .clic_irq_i(1'b0),
        .clic_irq_id_i('0),
        .clic_irq_level_i('0),
        .clic_irq_priv_i('0),
        .clic_irq_shv_i(1'b0),
        .time_i(64'h0),
        
        // Debug interface
        .debug_req_i(1'b0),
        .debug_havereset_o(),
        .debug_running_o(),
        // ** FIX: Removed non-existent ports **
        // .debug_mode_if(),
        // .debug_mode_id(),
        
        // Instruction memory interface
        .instr_req_o(instr_req),
        .instr_gnt_i(instr_gnt),
        .instr_rvalid_i(instr_rvalid),
        .instr_addr_o(instr_addr),
        .instr_memtype_o(),
        .instr_prot_o(),
        .instr_dbg_o(),
        .instr_rdata_i(instr_rdata),
        .instr_err_i(1'b0),
        
        // Data memory interface
        .data_req_o(data_req),
        .data_gnt_i(data_gnt),
        .data_rvalid_i(data_rvalid),
        .data_we_o(data_we),
        .data_be_o(data_be),
        .data_addr_o(data_addr),
        .data_memtype_o(),
        .data_prot_o(),
        .data_dbg_o(),
        .data_wdata_o(data_wdata),
        .data_rdata_i(data_rdata),
        .data_err_i(1'b0),
        .data_exokay_i(1'b1),
        
        // Special control signals
        .mcycle_o(),
        // ** FIX: Removed non-existent port **
        // .minstret_o(),
        
        // ** FIX: X-Interface for CPU uses STRUCT connections **
        .xif_compressed_if(xif.cpu_compressed),
        .xif_issue_if(xif.cpu_issue),
        .xif_commit_if(xif.cpu_commit),
        .xif_mem_if(xif.cpu_mem),
        .xif_mem_result_if(xif.cpu_mem_result),
        .xif_result_if(xif.cpu_result),
        
        // Misc
        .fencei_flush_req_o(),
        .fencei_flush_ack_i(1'b0),
        .wu_wfe_i(1'b0)
    );

    // =========================================================================
    // Vector Coprocessor Instance
    // =========================================================================
    vector_coprocessor #(
        .VLEN(256),
        .ELEMENT_WIDTH(32), // ** FIX: Added missing parameter **
        .X_ID_WIDTH(4)
    ) vpu (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        
        // ** FIX: X-IF interfaces connected individually **
        .xif_issue_valid_i(xif.issue_valid),
        .xif_issue_ready_o(xif.issue_ready),
        .xif_issue_req_i(xif.issue_req),
        .xif_issue_resp_o(xif.issue_resp),

        .xif_commit_valid_i(xif.commit_valid),
        .xif_commit_i(xif.commit),

        .xif_result_valid_o(xif.result_valid),
        .xif_result_ready_i(xif.result_ready),
        .xif_result_o(xif.result),

        // Memory interface (VPU -> SoC)
        .xif_mem_valid_o(vpu_mem_valid), // ** FIX: Port direction was wrong (was _i) **
        .xif_mem_ready_i(vpu_mem_ready),
        .xif_mem_req_o(vpu_mem_req),
        .xif_mem_resp_i('0), // Tied off, not used
        .xif_mem_result_valid_i(vpu_mem_result_valid),
        .xif_mem_result_i(vpu_mem_result)
        
        // ** FIX: Removed non-existent struct-based ports **
        // .xif_compressed_if(xif.coproc_compressed),
        // .xif_issue_if(xif.coproc_issue),
        // .xif_commit_if(xif.coproc_commit),
        // .xif_mem_if(xif.coproc_mem),
        // .xif_mem_result_if(xif.coproc_mem_result),
        // .xif_result_if(xif.coproc_result)
    );

    // =========================================================================
    // Simple I-Cache Implementation (unchanged)
    // =========================================================================
    
    // I-Cache storage (direct-mapped for simplicity)
    localparam ICACHE_LINES = ICACHE_SIZE / CACHE_LINE_SIZE;
    localparam ICACHE_INDEX_BITS = $clog2(ICACHE_LINES);
    localparam ICACHE_TAG_BITS = 32 - ICACHE_INDEX_BITS - $clog2(CACHE_LINE_SIZE);
    
    typedef struct packed {
        logic valid;
        logic [ICACHE_TAG_BITS-1:0] tag;
        logic [CACHE_LINE_SIZE*8-1:0] data;  // Full cache line
    } icache_line_t;
    
    icache_line_t icache [ICACHE_LINES];
    
    // I-Cache control logic
    logic icache_hit;
    logic [ICACHE_INDEX_BITS-1:0] icache_index;
    logic [ICACHE_TAG_BITS-1:0] icache_tag;
    logic [4:0] icache_offset;
    logic icache_refill_pending;
    logic [2:0] icache_refill_count;
    
    assign icache_index = instr_addr[ICACHE_INDEX_BITS+4:5];
    assign icache_tag = instr_addr[31:ICACHE_INDEX_BITS+5];
    assign icache_offset = instr_addr[4:0];
    
    // Check for cache hit
    assign icache_hit = icache[icache_index].valid && 
                        (icache[icache_index].tag == icache_tag);
    
    // I-Cache state machine
    typedef enum logic [1:0] {
        ICACHE_IDLE,
        ICACHE_REFILL,
        ICACHE_RESPOND
    } icache_state_t;
    
    icache_state_t icache_state, icache_next_state;
    logic [31:0] icache_refill_addr;
    logic [31:0] icache_mem_data;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            icache_state <= ICACHE_IDLE;
            icache_refill_pending <= 1'b0;
            icache_refill_count <= '0;
            instr_gnt <= 1'b0;
            instr_rvalid <= 1'b0;
            instr_rdata <= '0;
            
            // Clear cache
            for (int i = 0; i < ICACHE_LINES; i++) begin
                icache[i].valid  = 1'b0;
                icache[i].tag = '0;
                icache[i].data = '0;
            end
        end else begin
            icache_state <= icache_next_state;
            
            case (icache_state)
                ICACHE_IDLE: begin
                    instr_rvalid <= 1'b0;
                    if (instr_req) begin
                        if (icache_hit) begin
                            // Cache hit - return data immediately
                            instr_gnt <= 1'b1;
                            instr_rvalid <= 1'b1;
                            // Extract the right word from cache line
                            case (icache_offset[4:2])
                                3'd0: instr_rdata <= icache[icache_index].data[31:0];
                                3'd1: instr_rdata <= icache[icache_index].data[63:32];
                                3'd2: instr_rdata <= icache[icache_index].data[95:64];
                                3'd3: instr_rdata <= icache[icache_index].data[127:96];
                                3'd4: instr_rdata <= icache[icache_index].data[159:128];
                                3'd5: instr_rdata <= icache[icache_index].data[191:160];
                                3'd6: instr_rdata <= icache[icache_index].data[223:192];
                                3'd7: instr_rdata <= icache[icache_index].data[255:224];
                            endcase
                        end else begin
                            // Cache miss - start refill
                            instr_gnt <= 1'b1;
                            icache_refill_pending <= 1'b1;
                            icache_refill_count <= '0;
                        end
                    end else begin
                        instr_gnt <= 1'b0;
                    end
                end
                
                ICACHE_REFILL: begin
                    // Refill cache line from memory
                    icache_refill_addr = {instr_addr[31:5], icache_refill_count, 2'b00};
                    
                    // Read from main memory
                    icache_mem_data = main_memory[icache_refill_addr[31:2]];
                    
                    // Store in cache line
                    case (icache_refill_count)
                        3'd0: icache[icache_index].data[31:0] <= icache_mem_data;
                        3'd1: icache[icache_index].data[63:32] <= icache_mem_data;
                        3'd2: icache[icache_index].data[95:64] <= icache_mem_data;
                        3'd3: icache[icache_index].data[127:96] <= icache_mem_data;
                        3'd4: icache[icache_index].data[159:128] <= icache_mem_data;
                        3'd5: icache[icache_index].data[191:160] <= icache_mem_data;
                        3'd6: icache[icache_index].data[223:192] <= icache_mem_data;
                        3'd7: icache[icache_index].data[255:224] <= icache_mem_data;
                    endcase
                    
                    if (icache_refill_count == 7) begin
                        // Refill complete
                        icache[icache_index].valid <= 1'b1;
                        icache[icache_index].tag <= icache_tag;
                        icache_refill_pending <= 1'b0;
                    end else begin
                        icache_refill_count <= icache_refill_count + 1;
                    end
                end
                
                ICACHE_RESPOND: begin
                    instr_rvalid <= 1'b1;
                    // Return the requested word
                    case (icache_offset[4:2])
                        3'd0: instr_rdata <= icache[icache_index].data[31:0];
                        3'd1: instr_rdata <= icache[icache_index].data[63:32];
                        3'd2: instr_rdata <= icache[icache_index].data[95:64];
                        3'd3: instr_rdata <= icache[icache_index].data[127:96];
                        3'd4: instr_rdata <= icache[icache_index].data[159:128];
                        3'd5: instr_rdata <= icache[icache_index].data[191:160];
                        3'd6: instr_rdata <= icache[icache_index].data[223:192];
                        3'd7: instr_rdata <= icache[icache_index].data[255:224];
                    endcase
                end
            endcase
        end
    end
    
    // I-Cache next state logic
    always_comb begin
        icache_next_state = icache_state;
        
        case (icache_state)
            ICACHE_IDLE: begin
                if (instr_req && !icache_hit) begin
                    icache_next_state = ICACHE_REFILL;
                end
            end
            
            ICACHE_REFILL: begin
                if (icache_refill_count == 7) begin
                    icache_next_state = ICACHE_RESPOND;
                end
            end
            
            ICACHE_RESPOND: begin
                icache_next_state = ICACHE_IDLE;
            end
        endcase
    end

    // =========================================================================
    // Simple D-Cache Implementation (unchanged)
    // =========================================================================
    
    // D-Cache storage (direct-mapped, write-through)
    localparam DCACHE_LINES = DCACHE_SIZE / CACHE_LINE_SIZE;
    localparam DCACHE_INDEX_BITS = $clog2(DCACHE_LINES);
    localparam DCACHE_TAG_BITS = 32 - DCACHE_INDEX_BITS - $clog2(CACHE_LINE_SIZE);
    
    typedef struct packed {
        logic valid;
        logic dirty;
        logic [DCACHE_TAG_BITS-1:0] tag;
        logic [CACHE_LINE_SIZE*8-1:0] data;
    } dcache_line_t;
    
    dcache_line_t dcache [DCACHE_LINES];
    
    // D-Cache control
    logic dcache_hit;
    logic [DCACHE_INDEX_BITS-1:0] dcache_index;
    logic [DCACHE_TAG_BITS-1:0] dcache_tag;
    logic [4:0] dcache_offset;
    
    assign dcache_index = data_addr[DCACHE_INDEX_BITS+4:5];
    assign dcache_tag = data_addr[31:DCACHE_INDEX_BITS+5];
    assign dcache_offset = data_addr[4:0];
    
    assign dcache_hit = dcache[dcache_index].valid && 
                        (dcache[dcache_index].tag == dcache_tag);
    
    // D-Cache state machine
    typedef enum logic [1:0] {
        DCACHE_IDLE,
        DCACHE_WRITEBACK,
        DCACHE_REFILL
    } dcache_state_t;
    
    dcache_state_t dcache_state;
    logic [2:0] dcache_refill_count;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dcache_state <= DCACHE_IDLE;
            dcache_refill_count <= '0;
            data_gnt <= 1'b0;
            data_rvalid <= 1'b0;
            data_rdata <= '0;
            
            // Clear cache
            for (int i = 0; i < DCACHE_LINES; i++) begin
                dcache[i].valid = 1'b0;
                dcache[i].dirty = 1'b0;
                dcache[i].tag = '0;
                dcache[i].data = '0;
            end
        end else begin
            case (dcache_state)
                DCACHE_IDLE: begin
                    data_rvalid <= 1'b0;
                    
                    if (data_req) begin
                        if (data_we) begin
                            // Write request - write-through
                            data_gnt <= 1'b1;
                            
                            // Write to main memory
                            for (int i = 0; i < 4; i++) begin
                                if (data_be[i]) begin
                                    main_memory[data_addr[31:2]][i*8 +: 8] <= data_wdata[i*8 +: 8];
                                end
                            end
                            
                            // Update cache if hit
                            if (dcache_hit) begin
                                case (dcache_offset[4:2])
                                    3'd0: begin
                                        for (int i = 0; i < 4; i++) begin
                                            if (data_be[i]) begin
                                                dcache[dcache_index].data[i*8 +: 8] <= data_wdata[i*8 +: 8];
                                            end
                                        end
                                    end
                                    // Add other cases for different offsets...
                                endcase
                            end
                            
                            data_rvalid <= 1'b1;
                        end else begin
                            // Read request
                            if (dcache_hit) begin
                                // Cache hit
                                data_gnt <= 1'b1;
                                data_rvalid <= 1'b1;
                                
                                case (dcache_offset[4:2])
                                    3'd0: data_rdata <= dcache[dcache_index].data[31:0];
                                    3'd1: data_rdata <= dcache[dcache_index].data[63:32];
                                    3'd2: data_rdata <= dcache[dcache_index].data[95:64];
                                    3'd3: data_rdata <= dcache[dcache_index].data[127:96];
                                    3'd4: data_rdata <= dcache[dcache_index].data[159:128];
                                    3'd5: data_rdata <= dcache[dcache_index].data[191:160];
                                    3'd6: data_rdata <= dcache[dcache_index].data[223:192];
                                    3'd7: data_rdata <= dcache[dcache_index].data[255:224];
                                endcase
                            end else begin
                                // Cache miss - fetch from memory (simplified)
                                data_gnt <= 1'b1;
                                data_rvalid <= 1'b1;
                                data_rdata <= main_memory[data_addr[31:2]];
                                
                                // For simplicity, don't refill on reads in this version
                            end
                        end
                    end else begin
                        data_gnt <= 1'b0;
                    end
                end
                
                // Add other states for more complex cache behavior if needed
            endcase
        end
    end
   
    // =========================================================================
    // VPU Memory Access Handler (FIXED v3 - Corrected for VLSU Burst)
    // =========================================================================
    
    // This state machine correctly handles the VLSU's multi-word (burst)
    // requests by servicing one word at a time and immediately returning
    // to idle, ready for the next word request.

    typedef enum logic [1:0] {
        VPU_IDLE,
        VPU_RESP
    } vpu_mem_state_t;

    vpu_mem_state_t vpu_state;
    x_mem_result_t  vpu_result_reg;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            vpu_state <= VPU_IDLE;
            vpu_mem_ready <= 1'b0;
            vpu_mem_result_valid <= 1'b0;
            vpu_mem_result <= '0;
            vpu_result_reg <= '0;
        end else begin
            
            // Default assignments
            vpu_mem_ready <= 1'b0;
            vpu_mem_result_valid <= 1'b0;

            case (vpu_state)
                VPU_IDLE: begin
                    if (vpu_mem_valid) begin
                        // 1. Accept request from VLSU
                        vpu_mem_ready <= 1'b1; 
                        
                        // 2. Perform memory access immediately and latch result
                        if (vpu_mem_req.we) begin
                            // Write
                            for (int i = 0; i < 4; i++) begin
                                if (vpu_mem_req.be[i]) begin
                                    main_memory[vpu_mem_req.addr[31:2]][i*8 +: 8] <= 
                                        vpu_mem_req.wdata[i*8 +: 8];
                                end
                            end
                        end else begin
                            // Read
                            vpu_result_reg.rdata <= main_memory[vpu_mem_req.addr[31:2]];
                        end
                        
                        vpu_result_reg.id  <= vpu_mem_req.id;
                        vpu_result_reg.err <= 1'b0;
                        vpu_result_reg.dbg <= 1'b0;
                        
                        // 3. Go to RESP state to present data next cycle
                        vpu_state <= VPU_RESP;
                    end
                end
                
                VPU_RESP: begin
                    // 4. Present the valid result data
                    vpu_mem_result_valid <= 1'b1;
                    vpu_mem_result       <= vpu_result_reg;
                    
                    // 5. Go back to IDLE immediately
                    //    The VLSU will either de-assert vpu_mem_valid (if done)
                    //    or keep it asserted to request the next word.
                    //    Either way, we are ready.
                    vpu_state <= VPU_IDLE;
                end
                
                default: vpu_state <= VPU_IDLE;
            endcase
        end
    end
    
    // =========================================================================
    // Performance Monitoring
    // =========================================================================
    logic [31:0] cycle_count;
    logic [31:0] icache_hits, icache_misses;
    logic [31:0] dcache_hits, dcache_misses;
    logic [31:0] instructions_executed;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= '0;
            icache_hits <= '0;
            icache_misses <= '0;
            dcache_hits <= '0;
            dcache_misses <= '0;
            instructions_executed <= '0;
        end else begin
            cycle_count <= cycle_count + 1;
            
            // Count cache statistics
            if (instr_req) begin
                if (icache_hit) begin
                    icache_hits <= icache_hits + 1;
                end else begin
                    icache_misses <= icache_misses + 1;
                end
            end
            
            if (data_req && !data_we) begin
                if (dcache_hit) begin
                    dcache_hits <= dcache_hits + 1;
                end else begin
                    dcache_misses <= dcache_misses + 1;
                end
            end
            
            if (instr_rvalid) begin
                instructions_executed <= instructions_executed + 1;
            end
            
	    /*
            // Display statistics periodically
            if (cycle_count[9:0] == '0 && cycle_count > 0) begin
                $display("=== Cache Statistics at cycle %0d ===", cycle_count);
                $display("  I-Cache: Hits=%0d, Misses=%0d, Hit Rate=%.1f%%", 
                         icache_hits, icache_misses, 
                         100.0 * icache_hits / (icache_hits + icache_misses + 1));
                $display("  D-Cache: Hits=%0d, Misses=%0d, Hit Rate=%.1f%%", 
                         dcache_hits, dcache_misses,
                         100.0 * dcache_hits / (dcache_hits + dcache_misses + 1));
                $display("  Instructions: %0d, IPC=%.2f", 
                         instructions_executed, 
                         1.0 * instructions_executed / cycle_count);
            end
	    */
        end
    end
    
    // =========================================================================
    // Simulation Control
    // =========================================================================
    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("simulation.vcd");
            $dumpvars(0, soc_top_with_cache);
        end
    end
    
    // Detect completion
    logic [31:0] prev_pc;
    logic [7:0] pc_stall_count;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            prev_pc <= '0;
            pc_stall_count <= '0;
        end else begin
            if (instr_req) begin
                if (instr_addr == prev_pc) begin
                    pc_stall_count <= pc_stall_count + 1;
                    if (pc_stall_count > 100) begin
                        $display("\n=== SIMULATION COMPLETE ===");
                        $display("Total cycles: %0d", cycle_count);
                        $display("Instructions executed: %0d", instructions_executed);
                        $display("Final I-Cache Hit Rate: %.1f%%", 
                                 100.0 * icache_hits / (icache_hits + icache_misses + 1));
                        $display("Final D-Cache Hit Rate: %.1f%%", 
                                 100.0 * dcache_hits / (dcache_hits + dcache_misses + 1));
                        $display("===========================\n");
                        $finish;
                    end
                end else begin
                    prev_pc <= instr_addr;
                    pc_stall_count <= '0;
                end
            end
            
            // Timeout
            if (cycle_count > 100000) begin
                $display("Simulation timeout at cycle %0d", cycle_count);
                $finish;
            end
        end
    end

endmodule
