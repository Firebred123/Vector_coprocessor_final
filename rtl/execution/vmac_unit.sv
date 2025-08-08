// rtl/execution/vmac_unit.sv - with debug output
module vmac_unit #(
    parameter int VLEN = 256,
    parameter int ELEMENT_WIDTH = 32
) (
    input  logic                          clk_i,
    input  logic                          rst_ni,
    input  logic                          start_i,
    output logic                          done_o,
    input  logic [VLEN-1:0]               vec_a_i,
    input  logic [VLEN-1:0]               vec_b_i,
    input  logic [VLEN-1:0]               vec_c_i,
    output logic [VLEN-1:0]               result_o
);
    localparam NUM_ELEMENTS = VLEN / ELEMENT_WIDTH;
    
    // Single-cycle unit: result is combinationally calculated
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [31:0] a_val, b_val, c_val, res_val;
            a_val = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            b_val = vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            c_val = vec_c_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            res_val = (a_val * b_val) + c_val;
            result_o[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = res_val;
        end
    end
    
    // Debug output when start signal is asserted
    always @(posedge clk_i) begin
        if (start_i) begin
            $display("VMAC operation at cycle %0d:", $time/10);
            $display("  vec_a[0] = 0x%08x", vec_a_i[31:0]);
            $display("  vec_b[0] = 0x%08x", vec_b_i[31:0]);
            $display("  vec_c[0] = 0x%08x", vec_c_i[31:0]);
            $display("  result[0] = 0x%08x (a*b+c = %0d*%0d+%0d = %0d)", 
                     result_o[31:0],
                     vec_a_i[31:0], vec_b_i[31:0], vec_c_i[31:0],
                     (vec_a_i[31:0] * vec_b_i[31:0]) + vec_c_i[31:0]);
        end
    end
    
    // Done is asserted in the same cycle as start
    assign done_o = start_i;
    
endmodule
