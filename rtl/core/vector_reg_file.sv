// rtl/core/vector_reg_file.sv - Fixed version with proper register 0 handling

module vector_reg_file #(
    parameter int VLEN = 256,
    parameter int NUM_REGS = 32
) (
    input  logic                        clk_i,
    input  logic                        rst_ni,
    // Read Port 1
    input  logic [4:0]                  raddr1_i,
    output logic [VLEN-1:0]            rdata1_o,
    // Read Port 2
    input  logic [4:0]                  raddr2_i,
    output logic [VLEN-1:0]            rdata2_o,
    // Write Port
    input  logic                        we_i,
    input  logic [4:0]                  waddr_i,
    input  logic [VLEN-1:0]             wdata_i
);

    // Vector register array (register 0 is not actually stored)
    logic [VLEN-1:0] registers[NUM_REGS-1:1];  // Only registers 1-31
    
    // Sequential write logic
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            for (int i = 1; i < NUM_REGS; i++) begin
                registers[i] <= '0;
            end
        end else begin
            // Write to register (ignore writes to register 0)
            if (we_i && waddr_i != 5'b0) begin
                registers[waddr_i] <= wdata_i;
            end
        end
    end
    
    // Combinational read logic
    // Register 0 always reads as zero
    assign rdata1_o = (raddr1_i == 5'b0) ? '0 : registers[raddr1_i];
    assign rdata2_o = (raddr2_i == 5'b0) ? '0 : registers[raddr2_i];

endmodule
