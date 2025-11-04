// rtl/execution/vector_exec_unit.sv - Fixed with proper matrix multiply
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
    input  logic [VLEN-1:0]     vec_c_i,  // For operations that need 3 operands
    
    // Result
    output logic [VLEN-1:0]     result_o,
    
    // Additional VRF interface for matrix operations (if needed)
    output logic                vrf_rd_en_o,
    output logic [4:0]          vrf_rd_addr_o,
    input  logic [VLEN-1:0]     vrf_rd_data_i
);

    localparam int NUM_ELEMENTS = VLEN / ELEMENT_WIDTH;
    
    // =========================================================================
    // Internal signals
    // =========================================================================
    
    // Basic operation results
    logic [VLEN-1:0] vmac_result;
    logic [VLEN-1:0] vadd_result;
    logic [VLEN-1:0] vsub_result;
    logic [VLEN-1:0] vmul_result;
    
    // Pipeline control
    logic            busy_q;
    logic [5:0]      cycle_count;  // Increased for matrix operations
    logic [6:0]      funct7_q;
    logic [2:0]      funct3_q;
    
    // Matrix multiply signals
    logic            matmul_active;
    logic [1:0]      matrix_size;  // 00=2x2, 01=4x4, 10=8x8
    logic [2:0]      tile_row, tile_col, tile_k;  // Added tile_k for k-dimension
    logic [2:0]      max_tiles;  // Number of tiles per dimension
    logic [2:0]      actual_size; // Actual matrix size (2, 4, or 8)
    
    // 2x2 Systolic array signals
    logic            sys_start;
    logic            sys_clear;
    logic            sys_accumulate;
    logic            sys_busy;
    logic            sys_done;
    logic [31:0]     sys_a_row0, sys_a_row1;
    logic [31:0]     sys_b_col0, sys_b_col1;
    logic            sys_a_valid, sys_b_valid;
    logic [63:0]     sys_c00, sys_c01, sys_c10, sys_c11;
    
    // Matrix storage for tiling
    logic [31:0]     matrix_a [7:0][7:0];  // Max 8x8
    logic [31:0]     matrix_b [7:0][7:0];
    logic [63:0]     matrix_c [7:0][7:0];  // Result accumulator (wider for no overflow)
    
    // =========================================================================
    // Basic Vector Execution Units (Single-Cycle)
    // =========================================================================
    
    // VMAC unit (multiply-accumulate)
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [31:0] a_elem, b_elem, c_elem;
            logic [63:0] prod;
            
            a_elem = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            b_elem = vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            c_elem = vec_c_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            
            prod = a_elem * b_elem;
            vmac_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = prod[31:0] + c_elem;
        end
    end
    
    // VADD unit
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [31:0] a_elem, b_elem;
            
            a_elem = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            b_elem = vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            
            vadd_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = a_elem + b_elem;
        end
    end
    
    // VSUB unit
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [31:0] a_elem, b_elem;
            
            a_elem = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            b_elem = vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            
            vsub_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = a_elem - b_elem;
        end
    end
    
    // VMUL unit
    always_comb begin
        for (int i = 0; i < NUM_ELEMENTS; i++) begin
            logic [31:0] a_elem, b_elem;
            logic [63:0] prod;
            
            a_elem = vec_a_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            b_elem = vec_b_i[i*ELEMENT_WIDTH +: ELEMENT_WIDTH];
            
            prod = a_elem * b_elem;
            vmul_result[i*ELEMENT_WIDTH +: ELEMENT_WIDTH] = prod[31:0];
        end
    end
    
    // =========================================================================
    // 2x2 Systolic Array Instance
    // =========================================================================
    
    systolic_2x2 #(
        .DATA_WIDTH(32),
        .ACCUM_WIDTH(64)
    ) systolic_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_i(sys_start),
        .clear_i(sys_clear),
        .accumulate_i(sys_accumulate),  // Properly connected
        .busy_o(sys_busy),
        .done_o(sys_done),
        .a_row0_i(sys_a_row0),
        .a_row1_i(sys_a_row1),
        .a_valid_i(sys_a_valid),
        .b_col0_i(sys_b_col0),
        .b_col1_i(sys_b_col1),
        .b_valid_i(sys_b_valid),
        .c00_o(sys_c00),
        .c01_o(sys_c01),
        .c10_o(sys_c10),
        .c11_o(sys_c11)
    );
    
    // =========================================================================
    // Matrix Multiply Control State Machine - FIXED
    // =========================================================================
    
    typedef enum logic [3:0] {
        MM_IDLE,
        MM_LOAD_MATRICES,
        MM_START_TILE,
        MM_CLEAR_ACC,
        MM_FEED_K,        // Feed k-th elements
        MM_WAIT_COMPUTE,
        MM_STORE_RESULT,
        MM_NEXT_K,        // Move to next k
        MM_NEXT_TILE,
        MM_COMPLETE
    } matmul_state_t;
    
    matmul_state_t mm_state, mm_next_state;
    
    // Determine matrix dimensions based on funct3
    always_comb begin
        case (funct3_q)
            3'b000: begin
                matrix_size = 2'b00;  // 2x2
                max_tiles = 3'd1;
                actual_size = 3'd2;
            end
            3'b001: begin
                matrix_size = 2'b01;  // 4x4
                max_tiles = 3'd2;
                actual_size = 3'd4;
            end
            3'b010: begin
                matrix_size = 2'b10;  // 8x8
                max_tiles = 3'd4;
                actual_size = 3'd8;
            end
            default: begin
                matrix_size = 2'b00;
                max_tiles = 3'd1;
                actual_size = 3'd2;
            end
        endcase
    end
    
    // Matrix multiply state machine - FIXED
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            mm_state <= MM_IDLE;
            tile_row <= '0;
            tile_col <= '0;
            tile_k <= '0;
            
            // Clear matrices
            for (int i = 0; i < 8; i++) begin
                for (int j = 0; j < 8; j++) begin
                    matrix_a[i][j] <= '0;
                    matrix_b[i][j] <= '0;
                    matrix_c[i][j] <= '0;
                end
            end
        end else begin
            mm_state <= mm_next_state;
            
            case (mm_state)
                MM_LOAD_MATRICES: begin
                    // Load matrices from vector inputs
                    // Assuming vec_a and vec_b contain flattened matrices
                    for (int i = 0; i < 8; i++) begin
                        if (i < actual_size) begin
                            // Load from flattened vectors
                            matrix_a[i/2][i%2] <= vec_a_i[i*32 +: 32];
                            matrix_b[i/2][i%2] <= vec_b_i[i*32 +: 32];
                        end
                    end
                    // Clear result matrix
                    for (int i = 0; i < 8; i++) begin
                        for (int j = 0; j < 8; j++) begin
                            matrix_c[i][j] <= '0;
                        end
                    end
                    tile_row <= '0;
                    tile_col <= '0;
                    tile_k <= '0;
                end
                
                MM_WAIT_COMPUTE: begin
                    if (sys_done) begin
                        // Store 2x2 tile result with accumulation
                        matrix_c[tile_row*2][tile_col*2]     <= matrix_c[tile_row*2][tile_col*2] + sys_c00;
                        matrix_c[tile_row*2][tile_col*2+1]   <= matrix_c[tile_row*2][tile_col*2+1] + sys_c01;
                        matrix_c[tile_row*2+1][tile_col*2]   <= matrix_c[tile_row*2+1][tile_col*2] + sys_c10;
                        matrix_c[tile_row*2+1][tile_col*2+1] <= matrix_c[tile_row*2+1][tile_col*2+1] + sys_c11;
                    end
                end
                
                MM_NEXT_K: begin
                    // Move to next k iteration
                    if (tile_k < actual_size - 1) begin
                        tile_k <= tile_k + 1;
                    end else begin
                        tile_k <= '0;
                    end
                end
                
                MM_NEXT_TILE: begin
                    // Move to next tile
                    if (tile_col < max_tiles - 1) begin
                        tile_col <= tile_col + 1;
                    end else begin
                        tile_col <= '0;
                        if (tile_row < max_tiles - 1) begin
                            tile_row <= tile_row + 1;
                        end
                    end
                    tile_k <= '0;  // Reset k for next tile
                end
            endcase
        end
    end
    
    // Matrix multiply next state logic - FIXED
    always_comb begin
        mm_next_state = mm_state;
        sys_start = 1'b0;
        sys_clear = 1'b0;
        sys_accumulate = 1'b0;
        sys_a_valid = 1'b0;
        sys_b_valid = 1'b0;
        sys_a_row0 = '0;
        sys_a_row1 = '0;
        sys_b_col0 = '0;
        sys_b_col1 = '0;
        
        case (mm_state)
            MM_IDLE: begin
                if (matmul_active) begin
                    mm_next_state = MM_LOAD_MATRICES;
                end
            end
            
            MM_LOAD_MATRICES: begin
                mm_next_state = MM_START_TILE;
            end
            
            MM_START_TILE: begin
                mm_next_state = MM_CLEAR_ACC;
            end
            
            MM_CLEAR_ACC: begin
                sys_clear = 1'b1;  // Clear systolic array accumulators
                mm_next_state = MM_FEED_K;
            end
            
            MM_FEED_K: begin
                // Feed k-th elements for matrix multiply
                // For C[i,j] = sum(A[i,k] * B[k,j]) over k
                sys_a_row0 = matrix_a[tile_row*2][tile_k];
                sys_a_row1 = matrix_a[tile_row*2+1][tile_k];
                sys_b_col0 = matrix_b[tile_k][tile_col*2];
                sys_b_col1 = matrix_b[tile_k][tile_col*2+1];
                sys_a_valid = 1'b1;
                sys_b_valid = 1'b1;
                sys_start = 1'b1;
                sys_accumulate = (tile_k > 0);  // Accumulate after first k
                mm_next_state = MM_WAIT_COMPUTE;
            end
            
            MM_WAIT_COMPUTE: begin
                if (sys_done) begin
                    mm_next_state = MM_NEXT_K;
                end
            end
            
            MM_NEXT_K: begin
                if (tile_k < actual_size - 1) begin
                    mm_next_state = MM_FEED_K;  // Continue with next k
                end else begin
                    mm_next_state = MM_STORE_RESULT;
                end
            end
            
            MM_STORE_RESULT: begin
                mm_next_state = MM_NEXT_TILE;
            end
            
            MM_NEXT_TILE: begin
                if (tile_row == max_tiles - 1 && tile_col == max_tiles - 1) begin
                    mm_next_state = MM_COMPLETE;
                end else begin
                    mm_next_state = MM_START_TILE;
                end
            end
            
            MM_COMPLETE: begin
                mm_next_state = MM_IDLE;
            end
        endcase
    end
    
    // =========================================================================
    // Main Control Logic
    // =========================================================================
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            busy_q <= 1'b0;
            cycle_count <= '0;
            funct7_q <= '0;
            funct3_q <= '0;
            matmul_active <= 1'b0;
        end else begin
            if (start_i && !busy_q) begin
                funct7_q <= funct7_i;
                funct3_q <= funct3_i;
                
                case (funct7_i)
                    `FUNCT7_VMAC: begin
                        // Single-cycle VMAC
                        busy_q <= 1'b0;
                    end
                    
                    `FUNCT7_VADD: begin
                        // Single-cycle VADD
                        busy_q <= 1'b0;
                    end
                    
                    `FUNCT7_VSUB: begin
                        // Single-cycle VSUB
                        busy_q <= 1'b0;
                    end
                    
                    `FUNCT7_VMUL: begin
                        // Single-cycle VMUL
                        busy_q <= 1'b0;
                    end
                    
                    `FUNCT7_VMMUL: begin
                        // Multi-cycle matrix multiply
                        busy_q <= 1'b1;
                        matmul_active <= 1'b1;
                        cycle_count <= '0;
                    end
                    
                    default: begin
                        busy_q <= 1'b0;
                    end
                endcase
            end else if (busy_q) begin
                cycle_count <= cycle_count + 1;
                
                // Handle multi-cycle operations
                if (funct7_q == `FUNCT7_VMMUL) begin
                    if (mm_state == MM_COMPLETE) begin
                        busy_q <= 1'b0;
                        matmul_active <= 1'b0;
                    end
                end
            end
        end
    end
    
    // =========================================================================
    // Result Selection
    // =========================================================================
    
    always_comb begin
        result_o = '0;
        
        if (funct7_q == `FUNCT7_VMMUL && mm_state == MM_COMPLETE) begin
            // Pack matrix result into vector
            integer idx;
            for (idx = 0; idx < 8; idx++) begin
                if (idx < (actual_size * 2)) begin
                    result_o[idx*32 +: 32] = matrix_c[idx/2][idx%2][31:0];
                end
            end
        end else begin
            // Immediate results for single-cycle operations
            case (funct7_q)
                `FUNCT7_VMAC: result_o = vmac_result;
                `FUNCT7_VADD: result_o = vadd_result;
                `FUNCT7_VSUB: result_o = vsub_result;
                `FUNCT7_VMUL: result_o = vmul_result;
                default: result_o = '0;
            endcase
        end
    end
    
    // Done signal
    assign done_o = (start_i && !busy_q && funct7_i != `FUNCT7_VMMUL) ||  // Single-cycle ops
                    (funct7_q == `FUNCT7_VMMUL && mm_state == MM_COMPLETE);  // Matrix multiply complete
    
    // VRF interface (not used in basic implementation)
    assign vrf_rd_en_o = 1'b0;
    assign vrf_rd_addr_o = '0;
    
    // =========================================================================
    // Debug Output
    // =========================================================================


    logic done_q;
    always_ff @(posedge clk_i) done_q <= done_o;


    
    //`ifdef DEBUG_EXEC
    always @(posedge clk_i) begin
        if (start_i && !busy_q) begin
            $display("EXEC: Starting %s operation at cycle %0d", 
                     (funct7_i == `FUNCT7_VMAC) ? "VMAC" : 
                     (funct7_i == `FUNCT7_VMMUL) ? "MATMUL" :
                     (funct7_i == `FUNCT7_VADD) ? "VADD" :
                     (funct7_i == `FUNCT7_VSUB) ? "VSUB" :
                     (funct7_i == `FUNCT7_VMUL) ? "VMUL" : "UNKNOWN",
                     cycle_count);
        end


	if (done_q) begin
    case (funct7_q)
        `FUNCT7_VMUL: begin
            $display("VMUL result at time %0t", $time);
            $display("  a[1] = %0d", vec_a_i[63:32]);
            $display("  b[1] = %0d", vec_b_i[63:32]);
            $display("  result[1] = %0d  (a*b = %0d * %0d = %0d)", 
                      result_o[63:32], vec_a_i[63:32], vec_b_i[63:32],
                      vec_a_i[63:32] * vec_b_i[63:32]);
        end

        `FUNCT7_VMAC: begin
            $display("VMAC result at time %0t", $time);
            $display("  a[0] = %0d", vec_a_i[31:0]);
            $display("  b[0] = %0d", vec_b_i[31:0]);
            $display("  c[0] = %0d", vec_c_i[31:0]);
            $display("  result[0] = %0d  (a*b+c = %0d * %0d + %0d = %0d)", 
                      result_o[31:0],
                      vec_a_i[31:0], vec_b_i[31:0], vec_c_i[31:0],
                      vec_a_i[31:0] * vec_b_i[31:0] + vec_c_i[31:0]);
        end
    endcase
end


        if (mm_state == MM_FEED_K) begin
            $display("EXEC: Feeding k=%0d for tile[%0d,%0d]", tile_k, tile_row, tile_col);
            $display("  A[%0d][%0d]=%0d, A[%0d][%0d]=%0d", 
                     tile_row*2, tile_k, sys_a_row0,
                     tile_row*2+1, tile_k, sys_a_row1);
            $display("  B[%0d][%0d]=%0d, B[%0d][%0d]=%0d",
                     tile_k, tile_col*2, sys_b_col0,
                     tile_k, tile_col*2+1, sys_b_col1);
            $display("  Accumulate: %b", sys_accumulate);
        end
        
        if (mm_state == MM_WAIT_COMPUTE && sys_done) begin
            $display("EXEC: Tile [%0d,%0d], k=%0d computed:", tile_row, tile_col, tile_k);
            $display("  [%0d, %0d]", sys_c00[31:0], sys_c01[31:0]);
            $display("  [%0d, %0d]", sys_c10[31:0], sys_c11[31:0]);
        end
        
        if (funct7_q == `FUNCT7_VMMUL && mm_state == MM_COMPLETE) begin
            $display("EXEC: Matrix multiply complete after %0d cycles", cycle_count);
            $display("  Result matrix (first 2x2):");
            $display("  [%0d, %0d]", matrix_c[0][0][31:0], matrix_c[0][1][31:0]);
            $display("  [%0d, %0d]", matrix_c[1][0][31:0], matrix_c[1][1][31:0]);
        end
    end
    //`endif

endmodule
