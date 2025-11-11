// soc_top.sv - SoC Top with Simple Cache Integration
// Integrates CV32E40X core with instruction and data caches

module soc_top_with_cache #(
    parameter int MEM_SIZE = 8192,        // 32KB main memory
    parameter int ICACHE_SIZE = 2048,     // 2KB instruction cache
    parameter int DCACHE_SIZE = 2048,     // 2KB data cache
    parameter int CACHE_LINE_SIZE = 16    // 16-byte cache lines
)(
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;

    // =========================================================================
    // Main Memory
    // =========================================================================
    logic [31:0] main_memory[MEM_SIZE-1:0];
    
    initial begin
        $readmemh("memory_words.hex", main_memory);
    end

    // =========================================================================
    // CPU Interface Signals (OBI)
    // =========================================================================
    // Instruction interface
    logic        instr_req;
    logic        instr_gnt;
    logic        instr_rvalid;
    logic [31:0] instr_addr;
    logic [31:0] instr_rdata;
    
    // Data interface
    logic        data_req;
    logic        data_gnt;
    logic        data_rvalid;
    logic        data_we;
    logic [3:0]  data_be;
    logic [31:0] data_addr;
    logic [31:0] data_wdata;
    logic [31:0] data_rdata;

    // =========================================================================
    // Cache to Memory Interface Signals
    // =========================================================================
    // Instruction cache to memory
    logic        icache_mem_req;
    logic        icache_mem_gnt;
    logic        icache_mem_rvalid;
    logic        icache_mem_we;
    logic [3:0]  icache_mem_be;
    logic [31:0] icache_mem_addr;
    logic [31:0] icache_mem_wdata;
    logic [31:0] icache_mem_rdata;
    
    // Data cache to memory
    logic        dcache_mem_req;
    logic        dcache_mem_gnt;
    logic        dcache_mem_rvalid;
    logic        dcache_mem_we;
    logic [3:0]  dcache_mem_be;
    logic [31:0] dcache_mem_addr;
    logic [31:0] dcache_mem_wdata;
    logic [31:0] dcache_mem_rdata;
    
    // VPU memory interface (direct to memory for now)
    logic        vpu_mem_req;
    logic        vpu_mem_gnt;
    logic        vpu_mem_rvalid;
    logic        vpu_mem_we;
    logic [3:0]  vpu_mem_be;
    logic [31:0] vpu_mem_addr;
    logic [31:0] vpu_mem_wdata;
    logic [31:0] vpu_mem_rdata;

    // =========================================================================
    // X-Interface for Vector Coprocessor
    // =========================================================================
    cv32e40x_if_xif #(
        .X_ID_WIDTH(4)
    ) xif ();

    // =========================================================================
    // CPU Core Instance
    // =========================================================================
    cv32e40x_core #(
        .X_EXT(1),
        .X_ID_WIDTH(4)
    ) cpu_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        
        // Boot and configuration
        .fetch_enable_i(1'b1),
        .scan_cg_en_i(1'b0),
        .boot_addr_i(32'h0),
        .dm_exception_addr_i(32'h0),
        .dm_halt_addr_i(32'h0),
        .mhartid_i(32'h0),
        .mimpid_patch_i(32'h0),
        .mtvec_addr_i(32'h0),
        
        // Time and interrupts
        .time_i(64'h0),
        .irq_i(32'h0),
        .clic_irq_i(1'b0),
        .clic_irq_id_i('0),
        .clic_irq_level_i('0),
        .clic_irq_priv_i('0),
        .clic_irq_shv_i(1'b0),
        
        // Instruction interface (to cache)
        .instr_req_o(instr_req),
        .instr_gnt_i(instr_gnt),
        .instr_addr_o(instr_addr),
        .instr_memtype_o(),
        .instr_prot_o(),
        .instr_dbg_o(),
        .instr_rdata_i(instr_rdata),
        .instr_rvalid_i(instr_rvalid),
        .instr_err_i(1'b0),
        
        // Data interface (to cache)
        .data_req_o(data_req),
        .data_gnt_i(data_gnt),
        .data_we_o(data_we),
        .data_be_o(data_be),
        .data_addr_o(data_addr),
        .data_wdata_o(data_wdata),
        .data_memtype_o(),
        .data_prot_o(),
        .data_dbg_o(),
        .data_atop_o(),
        .data_rdata_i(data_rdata),
        .data_rvalid_i(data_rvalid),
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

    // =========================================================================
    // Instruction Cache Instance
    // =========================================================================
    simple_cache #(
        .CACHE_SIZE(ICACHE_SIZE),
        .LINE_SIZE(CACHE_LINE_SIZE),
        .ADDR_WIDTH(32),
        .DATA_WIDTH(32)
    ) icache (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        
        // CPU side
        .cpu_req_i(instr_req),
        .cpu_gnt_o(instr_gnt),
        .cpu_we_i(1'b0),           // Instructions are read-only
        .cpu_be_i(4'hF),
        .cpu_addr_i(instr_addr),
        .cpu_wdata_i('0),
        .cpu_rdata_o(instr_rdata),
        .cpu_rvalid_o(instr_rvalid),
        
        // Memory side
        .mem_req_o(icache_mem_req),
        .mem_gnt_i(icache_mem_gnt),
        .mem_we_o(icache_mem_we),
        .mem_be_o(icache_mem_be),
        .mem_addr_o(icache_mem_addr),
        .mem_wdata_o(icache_mem_wdata),
        .mem_rdata_i(icache_mem_rdata),
        .mem_rvalid_i(icache_mem_rvalid)
    );

    // =========================================================================
    // Data Cache Instance
    // =========================================================================
    simple_cache #(
        .CACHE_SIZE(DCACHE_SIZE),
        .LINE_SIZE(CACHE_LINE_SIZE),
        .ADDR_WIDTH(32),
        .DATA_WIDTH(32)
    ) dcache (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        
        // CPU side
        .cpu_req_i(data_req),
        .cpu_gnt_o(data_gnt),
        .cpu_we_i(data_we),
        .cpu_be_i(data_be),
        .cpu_addr_i(data_addr),
        .cpu_wdata_i(data_wdata),
        .cpu_rdata_o(data_rdata),
        .cpu_rvalid_o(data_rvalid),
        
        // Memory side
        .mem_req_o(dcache_mem_req),
        .mem_gnt_i(dcache_mem_gnt),
        .mem_we_o(dcache_mem_we),
        .mem_be_o(dcache_mem_be),
        .mem_addr_o(dcache_mem_addr),
        .mem_wdata_o(dcache_mem_wdata),
        .mem_rdata_i(dcache_mem_rdata),
        .mem_rvalid_i(dcache_mem_rvalid)
    );

    // =========================================================================
    // Vector Coprocessor Instance
    // =========================================================================
    logic vpu_mem_valid;
    logic vpu_mem_ready;
    x_mem_req_t vpu_mem_req_struct;
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
        .xif_mem_req_o(vpu_mem_req_struct),
        .xif_mem_resp_i('0),
        .xif_mem_result_valid_i(vpu_mem_result_valid),
        .xif_mem_result_i(vpu_mem_result)
    );
    
    // Convert VPU memory interface to OBI-like signals
    assign vpu_mem_req   = vpu_mem_valid;
    assign vpu_mem_we    = vpu_mem_req_struct.we;
    assign vpu_mem_be    = vpu_mem_req_struct.be;
    assign vpu_mem_addr  = vpu_mem_req_struct.addr;
    assign vpu_mem_wdata = vpu_mem_req_struct.wdata;
    assign vpu_mem_ready = vpu_mem_gnt; // Grant immediately for now

    // =========================================================================
    // Memory Controller / Arbiter
    // =========================================================================
    // Priority: ICache > DCache > VPU
    // Simple round-robin or fixed priority arbiter
    
    typedef enum logic [1:0] {
        MEM_IDLE,
        MEM_ICACHE,
        MEM_DCACHE,
        MEM_VPU
    } mem_state_t;
    
    mem_state_t mem_state, mem_next_state;
    
    // State machine
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            mem_state <= MEM_IDLE;
        end else begin
            mem_state <= mem_next_state;
        end
    end
    
    // Next state logic with priority
    always_comb begin
        mem_next_state = mem_state;
        
        case (mem_state)
            MEM_IDLE: begin
                if (icache_mem_req)
                    mem_next_state = MEM_ICACHE;
                else if (dcache_mem_req)
                    mem_next_state = MEM_DCACHE;
                else if (vpu_mem_req)
                    mem_next_state = MEM_VPU;
            end
            
            MEM_ICACHE: begin
                if (!icache_mem_req)
                    mem_next_state = MEM_IDLE;
            end
            
            MEM_DCACHE: begin
                if (!dcache_mem_req)
                    mem_next_state = MEM_IDLE;
            end
            
            MEM_VPU: begin
                if (!vpu_mem_req)
                    mem_next_state = MEM_IDLE;
            end
        endcase
    end
    
    // Grant signals
    assign icache_mem_gnt = (mem_state == MEM_IDLE && icache_mem_req) || (mem_state == MEM_ICACHE);
    assign dcache_mem_gnt = (mem_state == MEM_IDLE && dcache_mem_req && !icache_mem_req) || (mem_state == MEM_DCACHE);
    assign vpu_mem_gnt    = (mem_state == MEM_IDLE && vpu_mem_req && !icache_mem_req && !dcache_mem_req) || (mem_state == MEM_VPU);
    
    // Memory access logic
    logic        mem_access_valid;
    logic [31:0] mem_access_addr;
    logic        mem_access_we;
    logic [3:0]  mem_access_be;
    logic [31:0] mem_access_wdata;
    logic [31:0] mem_access_rdata;
    logic        mem_access_rvalid_next;
    logic        mem_access_rvalid;
    
    always_comb begin
        mem_access_valid = 1'b0;
        mem_access_addr  = '0;
        mem_access_we    = 1'b0;
        mem_access_be    = 4'hF;
        mem_access_wdata = '0;
        
        case (mem_state)
            MEM_ICACHE: begin
                mem_access_valid = icache_mem_req && icache_mem_gnt;
                mem_access_addr  = icache_mem_addr;
                mem_access_we    = icache_mem_we;
                mem_access_be    = icache_mem_be;
                mem_access_wdata = icache_mem_wdata;
            end
            
            MEM_DCACHE: begin
                mem_access_valid = dcache_mem_req && dcache_mem_gnt;
                mem_access_addr  = dcache_mem_addr;
                mem_access_we    = dcache_mem_we;
                mem_access_be    = dcache_mem_be;
                mem_access_wdata = dcache_mem_wdata;
            end
            
            MEM_VPU: begin
                mem_access_valid = vpu_mem_req && vpu_mem_gnt;
                mem_access_addr  = vpu_mem_addr;
                mem_access_we    = vpu_mem_we;
                mem_access_be    = vpu_mem_be;
                mem_access_wdata = vpu_mem_wdata;
            end
        endcase
    end
    
    // Memory read/write
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            mem_access_rvalid <= 1'b0;
            mem_access_rdata  <= '0;
        end else begin
            mem_access_rvalid <= mem_access_rvalid_next;
            
            if (mem_access_valid && !mem_access_we) begin
                // Read
                mem_access_rdata <= main_memory[mem_access_addr[31:2]];
            end else if (mem_access_valid && mem_access_we) begin
                // Write with byte enables
                if (mem_access_be[0]) main_memory[mem_access_addr[31:2]][7:0]   <= mem_access_wdata[7:0];
                if (mem_access_be[1]) main_memory[mem_access_addr[31:2]][15:8]  <= mem_access_wdata[15:8];
                if (mem_access_be[2]) main_memory[mem_access_addr[31:2]][23:16] <= mem_access_wdata[23:16];
                if (mem_access_be[3]) main_memory[mem_access_addr[31:2]][31:24] <= mem_access_wdata[31:24];
            end
        end
    end
    
    assign mem_access_rvalid_next = mem_access_valid;
    
    // Route rvalid and rdata back to requesters
    assign icache_mem_rvalid = (mem_state == MEM_ICACHE) && mem_access_rvalid;
    assign dcache_mem_rvalid = (mem_state == MEM_DCACHE) && mem_access_rvalid;
    assign vpu_mem_rvalid    = (mem_state == MEM_VPU) && mem_access_rvalid;
    
    assign icache_mem_rdata = mem_access_rdata;
    assign dcache_mem_rdata = mem_access_rdata;
    assign vpu_mem_rdata    = mem_access_rdata;
    
    // VPU result interface
    assign vpu_mem_result_valid = vpu_mem_rvalid;
    assign vpu_mem_result.id    = '0;  // ID is handled by VPU
    assign vpu_mem_result.rdata = vpu_mem_rdata;
    assign vpu_mem_result.err   = 1'b0;
    assign vpu_mem_result.dbg   = 1'b0;

    // =========================================================================
    // Simulation Support
    // =========================================================================
    `ifdef SIMULATION
    // Waveform dumping
    initial begin
        if ($test$plusargs("trace")) begin
            $dumpfile("simulation.vcd");
            $dumpvars(0, soc_top);
        end
    end
    
    // Simulation timeout
    initial begin
        #1000000;
        $display("Simulation timeout!");
        $finish;
    end
    `endif

endmodule
