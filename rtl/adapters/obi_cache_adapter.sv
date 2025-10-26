// rtl/adapters/obi_cache_adapter.sv
// Adapters from OBI to UltraEmbedded cache interfaces

module obi_to_icache_adapter (
    input  logic        clk_i,
    input  logic        rst_ni,
    
    // OBI interface (from CPU)
    input  logic        obi_req_i,
    output logic        obi_gnt_o,
    output logic        obi_rvalid_o,
    input  logic [31:0] obi_addr_i,
    output logic [31:0] obi_rdata_o,
    
    // icache.v interface
    output logic        req_rd_o,
    output logic        req_flush_o,
    output logic        req_invalidate_o,
    output logic [31:0] req_pc_o,
    input  logic        req_accept_i,
    input  logic        req_valid_i,
    input  logic        req_error_i,
    input  logic [31:0] req_inst_i
);
    // Simple pass-through
    assign req_rd_o = obi_req_i;
    assign req_pc_o = obi_addr_i;
    assign req_flush_o = 1'b0;
    assign req_invalidate_o = 1'b0;
    
    assign obi_gnt_o = req_accept_i;
    assign obi_rvalid_o = req_valid_i;
    assign obi_rdata_o = req_inst_i;
endmodule

module obi_to_dcache_adapter (
    input  logic        clk_i,
    input  logic        rst_ni,
    
    // OBI interface (from CPU)
    input  logic        obi_req_i,
    output logic        obi_gnt_o,
    output logic        obi_rvalid_o,
    input  logic        obi_we_i,
    input  logic [3:0]  obi_be_i,
    input  logic [31:0] obi_addr_i,
    input  logic [31:0] obi_wdata_i,
    output logic [31:0] obi_rdata_o,
    
    // dcache_core.v interface
    output logic [31:0] mem_addr_o,
    output logic [31:0] mem_data_wr_o,
    output logic        mem_rd_o,
    output logic [3:0]  mem_wr_o,
    output logic        mem_cacheable_o,
    output logic [10:0] mem_req_tag_o,
    output logic        mem_invalidate_o,
    output logic        mem_writeback_o,
    output logic        mem_flush_o,
    input  logic [31:0] mem_data_rd_i,
    input  logic        mem_accept_i,
    input  logic        mem_ack_i,
    input  logic        mem_error_i,
    input  logic [10:0] mem_resp_tag_i
);
    // Map OBI to dcache interface
    assign mem_addr_o = obi_addr_i;
    assign mem_data_wr_o = obi_wdata_i;
    assign mem_rd_o = obi_req_i && !obi_we_i;
    assign mem_wr_o = obi_we_i ? obi_be_i : 4'b0000;
    
    // Make memory below 2GB cacheable
    assign mem_cacheable_o = (obi_addr_i < 32'h8000_0000);
    
    assign mem_req_tag_o = 11'b0;
    assign mem_invalidate_o = 1'b0;
    assign mem_writeback_o = 1'b0;
    assign mem_flush_o = 1'b0;
    
    assign obi_gnt_o = mem_accept_i;
    assign obi_rvalid_o = mem_ack_i;
    assign obi_rdata_o = mem_data_rd_i;
endmodule
