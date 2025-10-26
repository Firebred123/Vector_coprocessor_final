// rtl/execution/vector_matmul_unit.sv - Matrix multiplication unit using 2×2 systolic array
module vector_matmul_unit #(
    parameter int VLEN = 256,
    parameter int DATA_WIDTH = 32,
    parameter int MATRIX_SIZE = 8  // Support up to 8×8 matrices
) (
    input  logic                    clk_i,
    input  logic                    rst_ni,
    
    // Control interface
    input  logic                    start_i,
    input  logic [2:0]              matrix_size_i,  // 0=2×2, 1=4×4, 2=8×8
    output logic                    busy_o,
    output logic                    done_o,
    
    // Vector register interface (for reading matrix data)
    output logic [4:0]              vrf_raddr_a_o,  // Read address for matrix A
    output logic [4:0]              vrf_raddr_b_o,  // Read address for matrix B
    input  logic [VLEN-1:0]         vrf_rdata_a_i,  // Matrix A data (row-major)
    input  logic [VLEN-1:0]         vrf_rdata_b_i,  // Matrix B data (row-major)
    
    // Result output
    output logic                    result_valid_o,
    output logic [4:0]              result_addr_o,
    output logic [VLEN-1:0]         result_data_o
);

    // =========================================================================
    // Internal Signals
    // =========================================================================
    
    // 2×2 Systolic array instance signals
    logic                       sys_start;
    logic                       sys_clear;
    logic                       sys_busy;
    logic                       sys_done;
    logic [DATA_WIDTH-1:0]      sys_a_row0, sys_a_row1;
    logic [DATA_WIDTH-1:0]      sys_b_col0, sys_b_col1;
    logic                       sys_a_valid, sys_b_valid;
    logic [63:0]                sys_c00, sys_c01, sys_c10, sys_c11;
    
    // Control state machine
    typedef enum logic [3:0] {
        IDLE,
        SETUP,
        LOAD_TILE,
        COMPUTE_TILE,
        STORE_TILE,
        NEXT_TILE,
        COMPLETE
    } state_t;
    
    state_t state, next_state;
    
    // Tile counters for breaking larger matrices into 2×2 blocks
    logic [2:0] tile_row, tile_col, tile_k;  // Current tile position
    logic [2:0] max_tiles;  // Number of tiles per dimension (1, 2, or 4)
    logic [3:0] compute_cycle;  // Cycle counter within tile computation
    
    // Matrix data buffers (extracted from vector registers)
    logic [DATA_WIDTH-1:0] matrix_a[MATRIX_SIZE-1:0][MATRIX_SIZE-1:0];
    logic [DATA_WIDTH-1:0] matrix_b[MATRIX_SIZE-1:0][MATRIX_SIZE-1:0];
    logic [63:0] matrix_c[MATRIX_SIZE-1:0][MATRIX_SIZE-1:0];  // Result accumulator
    
    // Address generation
    logic [4:0] vrf_base_addr_a, vrf_base_addr_b, vrf_base_addr_c;
    
    // =========================================================================
    // 2×2 Systolic Array Instance
    // =========================================================================
    
    systolic_2x2 #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACCUM_WIDTH(64)
    ) systolic_inst (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .start_i(sys_start),
        .clear_i(sys_clear),
        .accumulate_i(tile_k > 0),  // Accumulate for k > 0
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
    // Matrix Size Configuration
    // =========================================================================
    
    always_comb begin
        case (matrix_size_i)
            3'b000: max_tiles = 3'd1;  // 2×2: 1 tile
            3'b001: max_tiles = 3'd2;  // 4×4: 2×2 tiles
            3'b010: max_tiles = 3'd4;  // 8×8: 4×4 tiles
            default: max_tiles = 3'd1;
        endcase
    end
    
    // =========================================================================
    // Data Extraction from Vector Registers
    // =========================================================================
    
    // Extract 8 elements from vector register into matrix row/column
    always_ff @(posedge clk_i) begin
        if (state == LOAD_TILE) begin
            // Load matrix A row data
            for (int i = 0; i < 8; i++) begin
                matrix_a[tile_row*2][i] <= vrf_rdata_a_i[i*32 +: 32];
                matrix_a[tile_row*2+1][i] <= vrf_rdata_a_i[(i+8)*32 +: 32];
            end
            
            // Load matrix B column data (needs transpose)
            for (int i = 0; i < 8; i++) begin
                matrix_b[i][tile_col*2] <= vrf_rdata_b_i[i*32 +: 32];
                matrix_b[i][tile_col*2+1] <= vrf_rdata_b_i[(i+8)*32 +: 32];
            end
        end
    end
    
    // =========================================================================
    // Systolic Array Data Feed
    // =========================================================================
    
    always_comb begin
        // Feed appropriate data based on compute cycle
        // For C[i,j] = sum(A[i,k] * B[k,j])
        
        if (state == COMPUTE_TILE && compute_cycle < 4) begin
            // Feed 2×2 tile of A (rows)
            sys_a_row0 = matrix_a[tile_row*2][tile_k*2 + compute_cycle];
            sys_a_row1 = matrix_a[tile_row*2+1][tile_k*2 + compute_cycle];
            
            // Feed 2×2 tile of B (columns)
            sys_b_col0 = matrix_b[tile_k*2 + compute_cycle][tile_col*2];
            sys_b_col1 = matrix_b[tile_k*2 + compute_cycle][tile_col*2+1];
            
            sys_a_valid = 1'b1;
            sys_b_valid = 1'b1;
        end else begin
            sys_a_row0 = '0;
            sys_a_row1 = '0;
            sys_b_col0 = '0;
            sys_b_col1 = '0;
            sys_a_valid = 1'b0;
            sys_b_valid = 1'b0;
        end
    end
    
    // =========================================================================
    // State Machine
    // =========================================================================
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            tile_row <= '0;
            tile_col <= '0;
            tile_k <= '0;
            compute_cycle <= '0;
            vrf_base_addr_a <= '0;
            vrf_base_addr_b <= '0;
            vrf_base_addr_c <= '0;
            
            for (int i = 0; i < MATRIX_SIZE; i++) begin
                for (int j = 0; j < MATRIX_SIZE; j++) begin
                    matrix_c[i][j] <= '0;
                end
            end
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    if (start_i) begin
                        tile_row <= '0;
                        tile_col <= '0;
                        tile_k <= '0;
                        compute_cycle <= '0;
                        
                        // Set base addresses for matrices in VRF
                        vrf_base_addr_a <= 5'd1;  // Matrix A starts at v1
                        vrf_base_addr_b <= 5'd9;  // Matrix B starts at v9
                        vrf_base_addr_c <= 5'd17; // Matrix C starts at v17
                        
                        // Clear result matrix
                        for (int i = 0; i < MATRIX_SIZE; i++) begin
                            for (int j = 0; j < MATRIX_SIZE; j++) begin
                                matrix_c[i][j] <= '0;
                            end
                        end
                    end
                end
                
                COMPUTE_TILE: begin
                    compute_cycle <= compute_cycle + 1;
                    
                    if (sys_done) begin
                        // Store systolic array results
                        matrix_c[tile_row*2][tile_col*2] <= matrix_c[tile_row*2][tile_col*2] + sys_c00;
                        matrix_c[tile_row*2][tile_col*2+1] <= matrix_c[tile_row*2][tile_col*2+1] + sys_c01;
                        matrix_c[tile_row*2+1][tile_col*2] <= matrix_c[tile_row*2+1][tile_col*2] + sys_c10;
                        matrix_c[tile_row*2+1][tile_col*2+1] <= matrix_c[tile_row*2+1][tile_col*2+1] + sys_c11;
                    end
                end
                
                NEXT_TILE: begin
                    compute_cycle <= '0;
                    
                    // Update tile position
                    if (tile_k < max_tiles - 1) begin
                        tile_k <= tile_k + 1;
                    end else begin
                        tile_k <= '0;
                        if (tile_col < max_tiles - 1) begin
                            tile_col <= tile_col + 1;
                        end else begin
                            tile_col <= '0;
                            if (tile_row < max_tiles - 1) begin
                                tile_row <= tile_row + 1;
                            end
                        end
                    end
                end
            endcase
        end
    end
    
    always_comb begin
        next_state = state;
        sys_start = 1'b0;
        sys_clear = 1'b0;
        
        case (state)
            IDLE: begin
                if (start_i) begin
                    next_state = SETUP;
                end
            end
            
            SETUP: begin
                next_state = LOAD_TILE;
            end
            
            LOAD_TILE: begin
                next_state = COMPUTE_TILE;
                sys_clear = (tile_k == 0);  // Clear accumulator for new output tile
            end
            
            COMPUTE_TILE: begin
                if (compute_cycle == 0) begin
                    sys_start = 1'b1;
                end
                
                if (sys_done) begin
                    next_state = STORE_TILE;
                end
            end
            
            STORE_TILE: begin
                next_state = NEXT_TILE;
            end
            
            NEXT_TILE: begin
                // Check if all tiles are done
                if (tile_row == max_tiles - 1 && 
                    tile_col == max_tiles - 1 && 
                    tile_k == max_tiles - 1) begin
                    next_state = COMPLETE;
                end else begin
                    next_state = LOAD_TILE;
                end
            end
            
            COMPLETE: begin
                next_state = IDLE;
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // =========================================================================
    // Output Assignments
    // =========================================================================
    
    assign busy_o = (state != IDLE);
    assign done_o = (state == COMPLETE);
    
    // VRF read addresses
    assign vrf_raddr_a_o = vrf_base_addr_a + tile_row;
    assign vrf_raddr_b_o = vrf_base_addr_b + tile_col;
    
    // Result output (write back to VRF)
    always_comb begin
        result_valid_o = (state == STORE_TILE);
        result_addr_o = vrf_base_addr_c + (tile_row * max_tiles + tile_col);
        
        // Pack 2×2 result tile into vector register
        result_data_o = '0;
        result_data_o[0 +: 64] = matrix_c[tile_row*2][tile_col*2];
        result_data_o[64 +: 64] = matrix_c[tile_row*2][tile_col*2+1];
        result_data_o[128 +: 64] = matrix_c[tile_row*2+1][tile_col*2];
        result_data_o[192 +: 64] = matrix_c[tile_row*2+1][tile_col*2+1];
    end
    
    // =========================================================================
    // Debug Output
    // =========================================================================
    
    `ifdef DEBUG_MATMUL
    always @(posedge clk_i) begin
        if (state == COMPUTE_TILE && sys_done) begin
            $display("Tile [%0d,%0d] k=%0d results:", tile_row, tile_col, tile_k);
            $display("  C[%0d][%0d] = %0d", tile_row*2, tile_col*2, sys_c00);
            $display("  C[%0d][%0d] = %0d", tile_row*2, tile_col*2+1, sys_c01);
            $display("  C[%0d][%0d] = %0d", tile_row*2+1, tile_col*2, sys_c10);
            $display("  C[%0d][%0d] = %0d", tile_row*2+1, tile_col*2+1, sys_c11);
        end
        
        if (done_o) begin
            $display("Matrix multiplication complete!");
            $display("Total cycles: %0d", $time / 10);
        end
    end
    `endif

endmodule
