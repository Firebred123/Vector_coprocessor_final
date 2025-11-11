// simple_cache.sv - Simple Direct-Mapped Blocking Cache for OBI Interface
// Compatible with CV32E40X RISC-V Core
//
// Features:
// - Direct-mapped cache (1-way associative)
// - Configurable cache size and line size
// - Write-through policy for simplicity
// - OBI-compliant interface
// - Blocking cache (one request at a time)

module simple_cache #(
    parameter int CACHE_SIZE = 4096,      // Total cache size in bytes (default 4KB)
    parameter int LINE_SIZE = 16,          // Cache line size in bytes (default 16B = 4 words)
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32
) (
    input  logic clk_i,
    input  logic rst_ni,
    
    // CPU-side OBI interface (slave)
    input  logic                    cpu_req_i,
    output logic                    cpu_gnt_o,
    input  logic                    cpu_we_i,
    input  logic [3:0]              cpu_be_i,
    input  logic [ADDR_WIDTH-1:0]   cpu_addr_i,
    input  logic [DATA_WIDTH-1:0]   cpu_wdata_i,
    output logic [DATA_WIDTH-1:0]   cpu_rdata_o,
    output logic                    cpu_rvalid_o,
    
    // Memory-side OBI interface (master)
    output logic                    mem_req_o,
    input  logic                    mem_gnt_i,
    output logic                    mem_we_o,
    output logic [3:0]              mem_be_o,
    output logic [ADDR_WIDTH-1:0]   mem_addr_o,
    output logic [DATA_WIDTH-1:0]   mem_wdata_o,
    input  logic [DATA_WIDTH-1:0]   mem_rdata_i,
    input  logic                    mem_rvalid_i
);

    // =========================================================================
    // Parameter Calculations
    // =========================================================================
    localparam int NUM_LINES = CACHE_SIZE / LINE_SIZE;
    localparam int WORDS_PER_LINE = LINE_SIZE / (DATA_WIDTH / 8);
    localparam int OFFSET_BITS = $clog2(LINE_SIZE);
    localparam int INDEX_BITS = $clog2(NUM_LINES);
    localparam int TAG_BITS = ADDR_WIDTH - INDEX_BITS - OFFSET_BITS;
    localparam int WORD_OFFSET_BITS = $clog2(WORDS_PER_LINE);
    
    // =========================================================================
    // Address Breakdown
    // =========================================================================
    logic [TAG_BITS-1:0]         cpu_tag;
    logic [INDEX_BITS-1:0]       cpu_index;
    logic [WORD_OFFSET_BITS-1:0] cpu_word_offset;
    
    assign cpu_tag         = cpu_addr_i[ADDR_WIDTH-1:ADDR_WIDTH-TAG_BITS];
    assign cpu_index       = cpu_addr_i[OFFSET_BITS+INDEX_BITS-1:OFFSET_BITS];
    assign cpu_word_offset = cpu_addr_i[OFFSET_BITS-1:2]; // Word-aligned
    
    // =========================================================================
    // Cache Storage
    // =========================================================================
    logic [TAG_BITS-1:0]    tag_array [NUM_LINES];
    logic                   valid_array [NUM_LINES];
    logic [DATA_WIDTH-1:0]  data_array [NUM_LINES][WORDS_PER_LINE];
    
    // =========================================================================
    // Cache State Machine
    // =========================================================================
    typedef enum logic [1:0] {
        IDLE,
        MISS_READ,
        WAIT_MEM
    } cache_state_t;
    
    cache_state_t state, next_state;
    
    // =========================================================================
    // Internal Registers
    // =========================================================================
    logic [TAG_BITS-1:0]         saved_tag;
    logic [INDEX_BITS-1:0]       saved_index;
    logic [WORD_OFFSET_BITS-1:0] saved_word_offset;
    logic                        saved_we;
    logic [3:0]                  saved_be;
    logic [DATA_WIDTH-1:0]       saved_wdata;
    logic [ADDR_WIDTH-1:0]       saved_addr;
    logic [WORD_OFFSET_BITS-1:0] refill_counter;
    
    // =========================================================================
    // Hit/Miss Detection
    // =========================================================================
    logic cache_hit;
    logic cache_valid;
    
    assign cache_valid = valid_array[cpu_index];
    assign cache_hit   = cache_valid && (tag_array[cpu_index] == cpu_tag);
    
    // =========================================================================
    // State Machine
    // =========================================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (cpu_req_i) begin
                    if (cpu_we_i || !cache_hit) begin
                        // Write or miss: go to memory
                        next_state = MISS_READ;
                    end
                    // Read hit: stay in IDLE
                end
            end
            
            MISS_READ: begin
                if (mem_gnt_i) begin
                    next_state = WAIT_MEM;
                end
            end
            
            WAIT_MEM: begin
                if (mem_rvalid_i) begin
                    if (saved_we) begin
                        // Write completed
                        next_state = IDLE;
                    end else begin
                        // Read completed, check if line fill is needed
                        if (refill_counter == WORDS_PER_LINE - 1) begin
                            next_state = IDLE;
                        end else begin
                            next_state = MISS_READ; // Continue line fill
                        end
                    end
                end
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // =========================================================================
    // Save Request Info
    // =========================================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            saved_tag         <= '0;
            saved_index       <= '0;
            saved_word_offset <= '0;
            saved_we          <= '0;
            saved_be          <= '0;
            saved_wdata       <= '0;
            saved_addr        <= '0;
            refill_counter    <= '0;
        end else begin
            if (state == IDLE && cpu_req_i) begin
                saved_tag         <= cpu_tag;
                saved_index       <= cpu_index;
                saved_word_offset <= cpu_word_offset;
                saved_we          <= cpu_we_i;
                saved_be          <= cpu_be_i;
                saved_wdata       <= cpu_wdata_i;
                saved_addr        <= cpu_addr_i;
                refill_counter    <= '0;
            end else if (state == WAIT_MEM && mem_rvalid_i && !saved_we) begin
                refill_counter <= refill_counter + 1;
            end
        end
    end
    
    // =========================================================================
    // CPU Interface Outputs
    // =========================================================================
    always_comb begin
        cpu_gnt_o = 1'b0;
        cpu_rvalid_o = 1'b0;
        cpu_rdata_o = '0;
        
        case (state)
            IDLE: begin
                if (cpu_req_i) begin
                    if (cache_hit && !cpu_we_i) begin
                        // Read hit
                        cpu_gnt_o = 1'b1;
                        cpu_rvalid_o = 1'b1;
                        cpu_rdata_o = data_array[cpu_index][cpu_word_offset];
                    end else begin
                        // Write or miss
                        cpu_gnt_o = 1'b1;
                    end
                end
            end
            
            WAIT_MEM: begin
                if (mem_rvalid_i) begin
                    if (saved_we) begin
                        // Write complete
                        cpu_rvalid_o = 1'b1;
                    end else if (refill_counter == saved_word_offset) begin
                        // Read data is ready
                        cpu_rvalid_o = 1'b1;
                        cpu_rdata_o = mem_rdata_i;
                    end
                end
            end
        endcase
    end
    
    // =========================================================================
    // Memory Interface Outputs
    // =========================================================================
    always_comb begin
        mem_req_o   = 1'b0;
        mem_we_o    = 1'b0;
        mem_be_o    = 4'hF;
        mem_addr_o  = '0;
        mem_wdata_o = '0;
        
        case (state)
            MISS_READ: begin
                mem_req_o = 1'b1;
                
                if (saved_we) begin
                    // Write-through
                    mem_we_o    = 1'b1;
                    mem_be_o    = saved_be;
                    mem_addr_o  = saved_addr;
                    mem_wdata_o = saved_wdata;
                end else begin
                    // Cache line refill
                    mem_we_o = 1'b0;
                    mem_be_o = 4'hF;
                    // Build address for line fill
                    mem_addr_o = {saved_tag, saved_index, {OFFSET_BITS{1'b0}}};
                    mem_addr_o[OFFSET_BITS-1:2] = refill_counter;
                end
            end
            
            WAIT_MEM: begin
                if (!mem_rvalid_i && !saved_we && refill_counter != WORDS_PER_LINE - 1) begin
                    mem_req_o = 1'b1;
                    mem_we_o = 1'b0;
                    mem_be_o = 4'hF;
                    mem_addr_o = {saved_tag, saved_index, {OFFSET_BITS{1'b0}}};
                    mem_addr_o[OFFSET_BITS-1:2] = refill_counter + 1;
                end
            end
        endcase
    end
    
    // =========================================================================
    // Cache Array Updates
    // =========================================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            for (int i = 0; i < NUM_LINES; i++) begin
                valid_array[i] = 1'b0;
                tag_array[i]   = '0;
                for (int j = 0; j < WORDS_PER_LINE; j++) begin
                    data_array[i][j] = '0;
                end
            end
        end else begin
            // Update on cache line refill
            if (state == WAIT_MEM && mem_rvalid_i && !saved_we) begin
                data_array[saved_index][refill_counter] <= mem_rdata_i;
                
                // Update valid and tag on last word
                if (refill_counter == WORDS_PER_LINE - 1) begin
                    valid_array[saved_index] <= 1'b1;
                    tag_array[saved_index]   <= saved_tag;
                end
            end
            
            // Also update on write (write-through with allocation)
            if (state == WAIT_MEM && mem_rvalid_i && saved_we) begin
                // Update the cache line with the written data
                data_array[saved_index][saved_word_offset] <= saved_wdata;
                valid_array[saved_index] <= 1'b1;
                tag_array[saved_index]   <= saved_tag;
            end
        end
    end
    
    // =========================================================================
    // Assertions for Debugging
    // =========================================================================
    `ifdef FORMAL
    // Add formal verification properties here if needed
    `endif

endmodule
