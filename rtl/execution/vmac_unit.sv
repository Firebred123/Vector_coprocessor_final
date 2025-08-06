// rtl/execution/vmac_unit.sv
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
            // Perform C = A * B + C for each element
            result_o[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] =
                (vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] *
                 vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH]) +
                 vec_c_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
        end
    end

    // Done is asserted in the same cycle as start
    assign done_o = start_i;

endmodule
