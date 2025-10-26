// sim/soc_top_cached.sv - SoC with simple I-cache and D-cache

module soc_top_cached (
    input logic clk_i,
    input logic rst_ni
);
    import cv32e40x_pkg::*;
    import cv32e40x_xif_pkg::*;

    // Main memory (32KB)
    logic [31:0] main_memory[8192];
    
    // Active high reset for UltraEmbedded modules
    logic rst_i;
    assign rst_i = ~rst_ni;

    // CPU-Cache interfaces (OBI)
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

    // I-Cache signals
    logic icache_req_rd, icache_req_accept, icache_req_valid;
    logic [31:0] icache_req_pc, icache_inst_data;
    
    // Simple AXI-lite memory interface for I-cache
    logic [31:0] icache_axi_araddr;
    logic [7:0] icache_axi_arlen;
    logic [1:0] icache_axi_arburst;
    logic [3:0] icache_axi_arid;
    logic icache_axi_arvalid, icache_axi_arready;
    logic [31:0] icache_axi_rdata;
    logic icache_axi_rvalid, icache_axi_rready, icache_axi_rlast;
    logic [3:0] icache_axi_rid;
    logic [1:0] icache_axi_rresp;
    
    // Direct connection for I-cache
    assign icache_req_rd = instr_req;
    assign icache_req_pc = instr_addr;
    assign instr_gnt = icache_req_accept;
    assign instr_rvalid = icache_req_valid;
    assign instr_rdata = icache_inst_data;
    
    // I-Cache instance
    icache #(
        .AXI_ID(0)
    ) icache_i (
        .clk_i(clk_i),
        .rst_i(rst_i),  // Active high
        
        // Request interface
        .req_rd_i(icache_req_rd),
        .req_flush_i(1'b0),
        .req_invalidate_i(1'b0),
        .req_pc_i(icache_req_pc),
        .req_accept_o(icache_req_accept),
        .req_valid_o(icache_req_valid),
        .req_error_o(),
        .req_inst_o(icache_inst_data),
        
        // AXI Write interface (not used for I-cache)
        .axi_awvalid_o(),
        .axi_awaddr_o(),
        .axi_awid_o(),
        .axi_awlen_o(),
        .axi_awburst_o(),
        .axi_awready_i(1'b0),
        .axi_wvalid_o(),
        .axi_wdata_o(),
        .axi_wstrb_o(),
        .axi_wlast_o(),
        .axi_wready_i(1'b0),
        .axi_bvalid_i(1'b0),
        .axi_bresp_i(2'b00),
        .axi_bid_i(4'b0000),
        .axi_bready_o(),
        
        // AXI Read interface
        .axi_arvalid_o(icache_axi_arvalid),
        .axi_araddr_o(icache_axi_araddr),
        .axi_arid_o(icache_axi_arid),
        .axi_arlen_o(icache_axi_arlen),
        .axi_arburst_o(icache_axi_arburst),
        .axi_arready_i(icache_axi_arready),
        .axi_rvalid_i(icache_axi_rvalid),
        .axi_rdata_i(icache_axi_rdata),
        .axi_rresp_i(icache_axi_rresp),
        .axi_rid_i(icache_axi_rid),
        .axi_rlast_i(icache_axi_rlast),
        .axi_rready_o(icache_axi_rready)
    );

    // D-Cache signals
    logic [31:0] dcache_mem_addr, dcache_mem_data_wr, dcache_mem_data_rd;
    logic dcache_mem_rd, dcache_mem_accept, dcache_mem_ack;
    logic [3:0] dcache_mem_wr;
    logic [10:0] dcache_mem_resp_tag;
    
    // D-Cache memory interface signals
    logic [31:0] dcache_outport_addr, dcache_outport_wdata, dcache_inport_rdata;
    logic dcache_outport_rd, dcache_inport_accept, dcache_inport_ack;
    logic [3:0] dcache_outport_wr;
    logic [7:0] dcache_outport_len;
    
    // Direct connection for D-cache
    assign dcache_mem_addr = data_addr;
    assign dcache_mem_data_wr = data_wdata;
    assign dcache_mem_rd = data_req && !data_we;
    assign dcache_mem_wr = data_we ? data_be : 4'b0000;
    assign data_gnt = dcache_mem_accept;
    assign data_rvalid = dcache_mem_ack;
    assign data_rdata = dcache_mem_data_rd;
    
    // D-Cache instance
    dcache_core dcache_i (
        .clk_i(clk_i),
        .rst_i(rst_i),  // Active high
        
        // CPU interface
        .mem_addr_i(dcache_mem_addr),
        .mem_data_wr_i(dcache_mem_data_wr),
        .mem_rd_i(dcache_mem_rd),
        .mem_wr_i(dcache_mem_wr),
        .mem_cacheable_i(dcache_mem_addr < 32'h8000_0000),  // Cache lower 2GB
        .mem_req_tag_i(11'b0),
        .mem_invalidate_i(1'b0),
        .mem_writeback_i(1'b0),
        .mem_flush_i(1'b0),
        .mem_data_rd_o(dcache_mem_data_rd),
        .mem_accept_o(dcache_mem_accept),
        .mem_ack_o(dcache_mem_ack),
        .mem_error_o(),
        .mem_resp_tag_o(dcache_mem_resp_tag),
        
        // Memory interface for cache refills
        .outport_wr_o(dcache_outport_wr),
        .outport_rd_o(dcache_outport_rd),
        .outport_len_o(dcache_outport_len),
        .outport_addr_o(dcache_outport_addr),
        .outport_write_data_o(dcache_outport_wdata),
        .outport_accept_i(dcache_inport_accept),
        .outport_ack_i(dcache_inport_ack),
        .outport_error_i(1'b0),
        .outport_read_data_i(dcache_inport_rdata)
    );

    // Vector Coprocessor
    logic vpu_mem_valid, vpu_mem_ready;
    x_mem_req_t vpu_mem_req;
    logic vpu_mem_result_valid;
    x_mem_result_t vpu_mem_result;
    
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
        .xif_mem_valid_o(vpu_mem_valid),
        .xif_mem_ready_i(vpu_mem_ready),
        .xif_mem_req_o(vpu_mem_req),
        .xif_mem_resp_i('0),
        .xif_mem_result_valid_i(vpu_mem_result_valid),
        .xif_mem_result_i(vpu_mem_result)
    );
    
    // Connect VPU memory interface through XIF
    assign xif.mem_valid = vpu_mem_valid;
    assign xif.mem_req = vpu_mem_req;
    assign vpu_mem_ready = xif.mem_ready;
    assign vpu_mem_result = xif.mem_result;
    assign vpu_mem_result_valid = xif.mem_result_valid;

    // I-cache AXI handling (simplified burst support)
    logic [2:0] icache_burst_cnt;
    logic [31:0] icache_burst_addr;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            icache_axi_arready <= 1'b0;
            icache_axi_rvalid <= 1'b0;
            icache_axi_rdata <= '0;
            icache_axi_rlast <= 1'b0;
            icache_axi_rid <= '0;
            icache_axi_rresp <= 2'b00;
            icache_burst_cnt <= '0;
            icache_burst_addr <= '0;
        end else begin
            // Accept new request
            if (icache_axi_arvalid && !icache_axi_arready && !icache_axi_rvalid) begin
                icache_axi_arready <= 1'b1;
                icache_burst_addr <= icache_axi_araddr;
                icache_burst_cnt <= '0;
                icache_axi_rid <= icache_axi_arid;
            end else begin
                icache_axi_arready <= 1'b0;
            end
            
            // Send response data
            if (icache_axi_arready || (icache_axi_rvalid && icache_axi_rready && !icache_axi_rlast)) begin
                icache_axi_rvalid <= 1'b1;
                icache_axi_rdata <= main_memory[icache_burst_addr[31:2]];
                icache_burst_addr <= icache_burst_addr + 4;
                icache_burst_cnt <= icache_burst_cnt + 1;
                icache_axi_rlast <= (icache_burst_cnt == icache_axi_arlen);
            end else if (icache_axi_rvalid && icache_axi_rready && icache_axi_rlast) begin
                icache_axi_rvalid <= 1'b0;
                icache_axi_rlast <= 1'b0;
            end
        end
    end
    
    // D-cache memory handling
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dcache_inport_accept <= 1'b0;
            dcache_inport_ack <= 1'b0;
            dcache_inport_rdata <= '0;
        end else begin
            // Simple single-cycle memory access
            dcache_inport_accept <= dcache_outport_rd || |dcache_outport_wr;
            dcache_inport_ack <= dcache_inport_accept;
            
            if (dcache_outport_rd && dcache_inport_accept) begin
                dcache_inport_rdata <= main_memory[dcache_outport_addr[31:2]];
            end
            
            if (|dcache_outport_wr && dcache_inport_accept) begin
                for (int i = 0; i < 4; i++) begin
                    if (dcache_outport_wr[i]) begin
                        main_memory[dcache_outport_addr[31:2]][i*8 +: 8] <= 
                            dcache_outport_wdata[i*8 +: 8];
                    end
                end
            end
        end
    end
    
    // VPU memory access with proper handshaking
    typedef enum logic [1:0] {
        VPU_IDLE,
        VPU_ACCESS,
        VPU_WAIT,
        VPU_RESP
    } vpu_state_t;
    
    vpu_state_t vpu_state;
    logic [31:0] vpu_rdata_reg;
    logic [3:0] vpu_id_reg;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            vpu_state <= VPU_IDLE;
            vpu_mem_ready <= 1'b0;
            vpu_mem_result_valid <= 1'b0;
            vpu_mem_result <= '0;
            vpu_rdata_reg <= '0;
            vpu_id_reg <= '0;
        end else begin
            case (vpu_state)
                VPU_IDLE: begin
                    vpu_mem_ready <= 1'b0;
                    vpu_mem_result_valid <= 1'b0;
                    
                    // Accept new VPU request if no cache operations ongoing
                    if (vpu_mem_valid && !(dcache_outport_rd || |dcache_outport_wr)) begin
                        vpu_mem_ready <= 1'b1;
                        vpu_state <= VPU_ACCESS;
                        vpu_id_reg <= vpu_mem_req.id;
                    end
                end
                
                VPU_ACCESS: begin
                    vpu_mem_ready <= 1'b0;
                    
                    // Perform memory access
                    if (vpu_mem_req.we) begin
                        // Write
                        for (int i = 0; i < 4; i++) begin
                            if (vpu_mem_req.be[i]) begin
                                main_memory[vpu_mem_req.addr[31:2]][i*8 +: 8] <= 
                                    vpu_mem_req.wdata[i*8 +: 8];
                            end
                        end
                        vpu_state <= VPU_WAIT;
                    end else begin
                        // Read
                        vpu_rdata_reg <= main_memory[vpu_mem_req.addr[31:2]];
                        vpu_state <= VPU_WAIT;
                    end
                end
                
                VPU_WAIT: begin
                    // Wait one cycle for memory access to complete
                    vpu_mem_result.rdata <= vpu_rdata_reg;
                    vpu_mem_result.id <= vpu_id_reg;
                    vpu_mem_result.err <= 1'b0;
                    vpu_state <= VPU_RESP;
                end
                
                VPU_RESP: begin
                    vpu_mem_result_valid <= 1'b1;
                    // Wait for response to be accepted
                    if (vpu_mem_result_valid && !vpu_mem_valid) begin
                        vpu_state <= VPU_IDLE;
                    end
                end
                
                default: vpu_state <= VPU_IDLE;
            endcase
        end
    end

    // Initialize memory
    initial begin
        $readmemh("memory_words.hex", main_memory);
        $display("=== SoC with Caches ===");
        $display("I-Cache: 16KB, 2-way set associative");
        $display("D-Cache: 16KB, 2-way set associative");
        $display("Main Memory: 32KB");
    end
    
    // Performance monitoring and completion detection
    logic [31:0] cycle_count;
    logic [31:0] prev_pc;
    logic pc_stuck_counter;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= '0;
            prev_pc <= '0;
            pc_stuck_counter <= '0;
        end else begin
            cycle_count <= cycle_count + 1;
            prev_pc <= instr_addr;
            
            // Detect if PC is stuck (infinite loop)
            if (prev_pc == instr_addr && instr_req) begin
                pc_stuck_counter <= pc_stuck_counter + 1;
            end else begin
                pc_stuck_counter <= '0;
            end
            
            // Check for program completion
            if (main_memory[32'h1000 >> 2] === 32'h1) begin
                $display("=== Program Completed Successfully ===");
                $display("Total cycles: %d", cycle_count);
                $finish;
            end
            
            // Also finish if PC is stuck for too long (program in infinite loop)
            if (pc_stuck_counter > 1000) begin
                $display("=== Program Complete (infinite loop detected) ===");
                $display("Total cycles: %d", cycle_count);
                $display("Final PC: 0x%08x", instr_addr);
                $finish;
            end
        end
    end

endmodule
