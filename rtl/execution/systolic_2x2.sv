// rtl/execution/systolic_2x2.sv - 2×2 Systolic Array for Matrix Multiplication
module systolic_2x2 #(
    parameter int DATA_WIDTH = 32,
    parameter int ACCUM_WIDTH = 64
) (
    input  logic                        clk_i,
    input  logic                        rst_ni,
    
    // Control signals
    input  logic                        start_i,        // Start new computation
    input  logic                        clear_i,        // Clear accumulators
    input  logic                        accumulate_i,   // Add to existing values
    output logic                        busy_o,         // Array is computing
    output logic                        done_o,         // Computation complete
    
    // Input matrix A (2 rows, fed from right)
    input  logic [DATA_WIDTH-1:0]       a_row0_i,      // Row 0 of matrix A
    input  logic [DATA_WIDTH-1:0]       a_row1_i,      // Row 1 of matrix A
    input  logic                        a_valid_i,      // A inputs are valid
    
    // Input matrix B (2 columns, fed from top)
    input  logic [DATA_WIDTH-1:0]       b_col0_i,      // Column 0 of matrix B
    input  logic [DATA_WIDTH-1:0]       b_col1_i,      // Column 1 of matrix B
    input  logic                        b_valid_i,      // B inputs are valid
    
    // Output matrix C (2×2 result)
    output logic [ACCUM_WIDTH-1:0]      c00_o,         // Result[0][0]
    output logic [ACCUM_WIDTH-1:0]      c01_o,         // Result[0][1]
    output logic [ACCUM_WIDTH-1:0]      c10_o,         // Result[1][0]
    output logic [ACCUM_WIDTH-1:0]      c11_o          // Result[1][1]
);

    // =========================================================================
    // Processing Element (PE) Structure
    // =========================================================================
    
    // Each PE has:
    // - Local accumulator for C
    // - Registers to propagate A (leftward) and B (downward)
    
    typedef struct packed {
        logic [DATA_WIDTH-1:0] a_reg;      // A value to propagate left
        logic [DATA_WIDTH-1:0] b_reg;      // B value to propagate down
        logic [ACCUM_WIDTH-1:0] c_acc;     // Local accumulator
        logic valid;                        // Valid data in PE
    } pe_state_t;
    
    // 2×2 array of PEs
    pe_state_t pe[1:0][1:0];  // pe[row][col]
    
    // Intermediate wires for PE connections
    logic [DATA_WIDTH-1:0] a_wire[1:0][1:0];  // A propagation
    logic [DATA_WIDTH-1:0] b_wire[1:0][1:0];  // B propagation
    
    // Control state machine
    typedef enum logic [2:0] {
        IDLE,
        LOADING,      // Loading input data
        COMPUTING,    // Processing multiplication
        DRAINING,     // Final computations
        DONE
    } state_t;
    
    state_t state, next_state;
    logic [3:0] cycle_counter;  // Count computation cycles
    
    // =========================================================================
    // Input Skewing Logic
    // =========================================================================
    
    // For proper systolic operation, inputs must be skewed:
    // - A matrix: row 1 delayed by 1 cycle
    // - B matrix: col 1 delayed by 1 cycle
    
    logic [DATA_WIDTH-1:0] a_row0_skewed, a_row1_skewed;
    logic [DATA_WIDTH-1:0] b_col0_skewed, b_col1_skewed;
    logic [DATA_WIDTH-1:0] a_row1_delay;
    logic [DATA_WIDTH-1:0] b_col1_delay;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            a_row1_delay <= '0;
            b_col1_delay <= '0;
        end else if (state == LOADING || state == COMPUTING) begin
            a_row1_delay <= a_row1_i;
            b_col1_delay <= b_col1_i;
        end
    end
    
    // Apply skewing
    assign a_row0_skewed = a_row0_i;
    assign a_row1_skewed = a_row1_delay;  // 1 cycle delay
    assign b_col0_skewed = b_col0_i;
    assign b_col1_skewed = b_col1_delay;  // 1 cycle delay
    
    // =========================================================================
    // PE Array Connections
    // =========================================================================
    
    // Input connections to PEs
    always_comb begin
        // PE[0][0] - top-left
        a_wire[0][0] = a_row0_skewed;  // A from right
        b_wire[0][0] = b_col0_skewed;  // B from top
        
        // PE[0][1] - top-right
        a_wire[0][1] = pe[0][0].a_reg;  // A from PE[0][0]
        b_wire[0][1] = b_col1_skewed;   // B from top
        
        // PE[1][0] - bottom-left
        a_wire[1][0] = a_row1_skewed;   // A from right
        b_wire[1][0] = pe[0][0].b_reg;  // B from PE[0][0]
        
        // PE[1][1] - bottom-right
        a_wire[1][1] = pe[1][0].a_reg;  // A from PE[1][0]
        b_wire[1][1] = pe[0][1].b_reg;  // B from PE[0][1]
    end
    
    // =========================================================================
    // Processing Elements Logic
    // =========================================================================
    
    genvar row, col;
    generate
        for (row = 0; row < 2; row++) begin : gen_row
            for (col = 0; col < 2; col++) begin : gen_col
                always_ff @(posedge clk_i or negedge rst_ni) begin
                    if (!rst_ni) begin
                        pe[row][col].a_reg <= '0;
                        pe[row][col].b_reg <= '0;
                        pe[row][col].c_acc <= '0;
                        pe[row][col].valid <= 1'b0;
                    end else begin
                        if (clear_i) begin
                            pe[row][col].c_acc <= '0;
                        end else if (state == COMPUTING || state == DRAINING) begin
                            // Propagate A leftward and B downward
                            pe[row][col].a_reg <= a_wire[row][col];
                            pe[row][col].b_reg <= b_wire[row][col];
                            
                            // MAC operation
                            if ((row == 0 && col == 0 && a_valid_i && b_valid_i) ||
                                (row == 0 && col == 1 && pe[0][0].valid) ||
                                (row == 1 && col == 0 && pe[0][0].valid) ||
                                (row == 1 && col == 1 && pe[1][0].valid && pe[0][1].valid)) begin
                                
                                pe[row][col].c_acc <= pe[row][col].c_acc + 
                                    (a_wire[row][col] * b_wire[row][col]);
                                pe[row][col].valid <= 1'b1;
                                
                                // Debug output
                                `ifdef DEBUG_SYSTOLIC
                                $display("PE[%0d][%0d]: %0d * %0d + %0d = %0d", 
                                    row, col, 
                                    a_wire[row][col], b_wire[row][col],
                                    pe[row][col].c_acc,
                                    pe[row][col].c_acc + (a_wire[row][col] * b_wire[row][col]));
                                `endif
                            end
                        end
                        
                        if (state == IDLE) begin
                            pe[row][col].valid <= 1'b0;
                        end
                    end
                end
            end
        end
    endgenerate
    
    // =========================================================================
    // State Machine
    // =========================================================================
    
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            cycle_counter <= '0;
        end else begin
            state <= next_state;
            
            if (state == IDLE && start_i) begin
                cycle_counter <= '0;
            end else if (state == COMPUTING || state == DRAINING) begin
                cycle_counter <= cycle_counter + 1;
            end
        end
    end
    
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (start_i) begin
                    next_state = LOADING;
                end
            end
            
            LOADING: begin
                if (a_valid_i && b_valid_i) begin
                    next_state = COMPUTING;
                end
            end
            
            COMPUTING: begin
                // For 2×2 array: need 3 cycles for full computation
                // Cycle 0: PE[0][0] starts
                // Cycle 1: PE[0][1] and PE[1][0] start
                // Cycle 2: PE[1][1] starts
                // Cycle 3: Final propagation
                if (cycle_counter >= 3) begin
                    next_state = DRAINING;
                end
            end
            
            DRAINING: begin
                // One extra cycle to ensure all computations complete
                if (cycle_counter >= 4) begin
                    next_state = DONE;
                end
            end
            
            DONE: begin
                next_state = IDLE;
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // =========================================================================
    // Output Assignments
    // =========================================================================
    
    assign c00_o = pe[0][0].c_acc;
    assign c01_o = pe[0][1].c_acc;
    assign c10_o = pe[1][0].c_acc;
    assign c11_o = pe[1][1].c_acc;
    
    assign busy_o = (state != IDLE) && (state != DONE);
    assign done_o = (state == DONE);
    
    // =========================================================================
    // Assertions for Verification
    // =========================================================================
    
    `ifdef FORMAL
    // Ensure no overflow in cycle counter
    assert property (@(posedge clk_i) cycle_counter < 16);
    
    // Ensure done is only asserted in DONE state
    assert property (@(posedge clk_i) done_o |-> (state == DONE));
    `endif

endmodule
