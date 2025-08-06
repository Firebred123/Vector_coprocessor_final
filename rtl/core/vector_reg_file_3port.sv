// rtl/core/vector_reg_file_3port.sv - Vector register file with 3 read ports
module vector_reg_file_3port #(
    parameter int VLEN = 256,
    parameter int NUM_REGS = 32
) (
    input  logic                  clk_i,
    input  logic                  rst_ni,
    
    // Read port 1
    input  logic [4:0]            raddr1_i,
    output logic [VLEN-1:0]       rdata1_o,
    
    // Read port 2
    input  logic [4:0]            raddr2_i,
    output logic [VLEN-1:0]       rdata2_o,
    
    // Read port 3 (for accumulator read in VMAC)
    input  logic [4:0]            raddr3_i,
    output logic [VLEN-1:0]       rdata3_o,
    
    // Write port
    input  logic                  we_i,
    input  logic [4:0]            waddr_i,
    input  logic [VLEN-1:0]       wdata_i
);
    
    // Register file array
    logic [VLEN-1:0] vrf [NUM_REGS];
    
    // Initialize registers to zero
    initial begin
        for (int i = 0; i < NUM_REGS; i++) begin
            vrf[i] = '0;
        end
    end
    
    // Read operations (combinational)
    assign rdata1_o = (raddr1_i == 5'b0) ? '0 : vrf[raddr1_i];
    assign rdata2_o = (raddr2_i == 5'b0) ? '0 : vrf[raddr2_i];
    assign rdata3_o = (raddr3_i == 5'b0) ? '0 : vrf[raddr3_i];
    
    // Write operation (sequential)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            // Reset all registers to zero
            for (int i = 0; i < NUM_REGS; i++) begin
                vrf[i] <= '0;
            end
        end else if (we_i && (waddr_i != 5'b0)) begin
            // Write to register (v0 is hardwired to zero)
            vrf[waddr_i] <= wdata_i;
            
            // Debug output for writes
            $display("VRF Write: v%0d = 0x%08x (first element)", waddr_i, wdata_i[31:0]);
        end
    end
    
endmodule
