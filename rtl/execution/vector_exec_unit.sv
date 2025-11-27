// rtl/execution/vector_exec_unit.sv - PROPER single-cycle
`include "custom_opcodes.vh"

module vector_exec_unit #(
    parameter int VLEN = 256,
    parameter int ELEMENT_WIDTH = 32
) (
    input  logic                clk_i,
    input  logic                rst_ni,
    
    // Control interface
    input  logic                start_i,
    output logic                done_o,
    
    // Instruction info
    input  logic [6:0]          funct7_i,
    input  logic [2:0]          funct3_i,
    
    // Vector operands
    input  logic [VLEN-1:0]     vec_a_i,
    input  logic [VLEN-1:0]     vec_b_i,
    input  logic [VLEN-1:0]     vec_c_i,
    
    // Result
    output logic [VLEN-1:0]     result_o
);

    localparam int NUM_ELEMENTS = VLEN / ELEMENT_WIDTH;
    
    // SINGLE-CYCLE OPERATIONS
    logic [VLEN-1:0] vmac_result, vadd_result, vsub_result, vmul_result;
    
    // VMAC - SINGLE CYCLE
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [31:0] a_elem, b_elem, c_elem;
            logic [63:0] prod, sum;
            
            a_elem = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            b_elem = vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            c_elem = vec_c_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            
            prod = a_elem * b_elem;
            sum = prod + c_elem;
            vmac_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = sum[31:0];
        end
    end
    
    // VADD - SINGLE CYCLE
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            vadd_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = 
                vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] + 
                vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
        end
    end
    
    // VSUB - SINGLE CYCLE
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            vsub_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = 
                vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] - 
                vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
        end
    end
    
    // VMUL - SINGLE CYCLE
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [63:0] prod;
            prod = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] * 
                   vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            vmul_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = prod[31:0];
        end
    end
    
    // Result selection
    always_comb begin
        case (funct7_i)
            `FUNCT7_VMAC: result_o = vmac_result;
            `FUNCT7_VADD: result_o = vadd_result;
            `FUNCT7_VSUB: result_o = vsub_result;
            `FUNCT7_VMUL: result_o = vmul_result;
            default: result_o = '0;
        endcase
    end
    
    // SINGLE-CYCLE COMPLETION
    assign done_o = start_i;
    
    // Debug
    always @(posedge clk_i) begin
        if (start_i) begin
            case (funct7_i)
                `FUNCT7_VMAC: begin
                    $display("EXEC: VMAC single-cycle");
                    $display("  a[0]=%0d, b[0]=%0d, c[0]=%0d, result[0]=%0d", 
                             vec_a_i[31:0], vec_b_i[31:0], vec_c_i[31:0], vmac_result[31:0]);
                end
            endcase
        end
    end

endmodule
