// rtl/execution/vlsu.sv - Fixed version with package import

import cv32e40x_xif_pkg::*;

module vlsu #(
    parameter int VLEN = 256,
    parameter int X_ID_WIDTH = 4
)(
    input  logic                                     clk_i,
    input  logic                                     rst_ni,
    
    // Control interface
    input  logic                                     start_load_i,
    input  logic                                     start_store_i,
    input  logic [31:0]                              base_addr_i,
    input  logic [VLEN-1:0]                          store_data_i,
    output logic [VLEN-1:0]                          load_data_o,
    output logic                                     done_o,
    input  logic [X_ID_WIDTH-1:0]                    id_i,
    
    // X-IF Memory interface
    output logic                                     xif_mem_valid_o,
    input  logic                                     xif_mem_ready_i,
    output x_mem_req_t                               xif_mem_req_o,
    input  x_mem_resp_t                              xif_mem_resp_i,
    
    // X-IF Memory result interface
    input  logic                                     xif_mem_result_valid_i,
    input  x_mem_result_t                            xif_mem_result_i
);

    // FSM States
    typedef enum logic [2:0] {
        IDLE,
        LOAD_REQ,
        LOAD_WAIT,
        STORE_REQ,
        STORE_WAIT
    } state_t;
    
    state_t state, next_state;
    
    // Internal registers
    logic [31:0] addr_counter;
    logic [4:0] word_counter;
    logic is_load;
    
    // Constants
    localparam int WORDS_PER_VECTOR = VLEN / 32;
    
    // Debug: monitor key signals
    always @(posedge clk_i) begin
        if (rst_ni && (state == LOAD_REQ || state == LOAD_WAIT)) begin
            $display("VLSU Debug [Cycle %4d]: state=%0d, mem_valid_o=%0d, mem_ready_i=%0d, result_valid_i=%0d, word_counter=%0d",
                     cycle_count, state, xif_mem_valid_o, xif_mem_ready_i, xif_mem_result_valid_i, word_counter);
        end
    end
    
    // Cycle counter for debug
    logic [31:0] cycle_count;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cycle_count <= '0;
        end else begin
            cycle_count <= cycle_count + 1;
        end
    end
    
    // State machine
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            addr_counter <= '0;
            word_counter <= '0;
            is_load <= 1'b0;
            load_data_o <= '0;
        end else begin
            state <= next_state;
            
            // Debug state transitions
            if (state != next_state) begin
                $display("VLSU: State %0d -> %0d at time %0t", state, next_state, $time);
            end
            
            // Capture base address and operation type
            if ((start_load_i || start_store_i) && state == IDLE) begin
                addr_counter <= base_addr_i;
                word_counter <= '0;
                is_load <= start_load_i;
                $display("VLSU: Starting %s from addr 0x%08x", 
                         start_load_i ? "load" : "store", base_addr_i);
            end
            
            // Increment counters after successful transaction
            if ((state == LOAD_REQ || state == STORE_REQ) && xif_mem_ready_i) begin
                addr_counter <= addr_counter + 4;
                word_counter <= word_counter + 1;
                $display("VLSU: Memory ready, advancing to word %0d", word_counter + 1);
            end
            
            // Store received data
            if (state == LOAD_WAIT && xif_mem_result_valid_i) begin
                load_data_o[word_counter*32 +: 32] <= xif_mem_result_i.rdata;
                $display("VLSU: Received data 0x%08x for word %0d", 
                         xif_mem_result_i.rdata, word_counter);
            end
        end
    end
// FSM next state logic and output logic
always_comb begin
    // Default assignments
    next_state = state;
    done_o = 1'b0;
    xif_mem_valid_o = 1'b0; // Default valid to low

    // Initialize memory request
    xif_mem_req_o = '0;
    xif_mem_req_o.id = id_i;
    xif_mem_req_o.addr = addr_counter;
    xif_mem_req_o.mode = 2'b11;  // Machine mode
    xif_mem_req_o.size = 3'b010; // 32-bit access
    xif_mem_req_o.be = 4'b1111;  // All bytes enabled
    xif_mem_req_o.attr = 2'b00;  // Normal memory access
    
    case (state)
        IDLE: begin
            if (start_load_i) begin
                next_state = LOAD_REQ;
            end else if (start_store_i) begin
                next_state = STORE_REQ;
            end
        end
        
        LOAD_REQ: begin
            // Assert valid for the entire duration of the LOAD_REQ state
            xif_mem_valid_o = 1'b1; 
            xif_mem_req_o.we = 1'b0;
            xif_mem_req_o.last = (word_counter == WORDS_PER_VECTOR - 1);
            
            // When the memory accepts the request, transition to the next state
            if (xif_mem_ready_i) begin
                next_state = LOAD_WAIT;
            end
        end
        
        LOAD_WAIT: begin
            // In this state, valid is de-asserted (by default) while we wait for the result
            if (xif_mem_result_valid_i) begin
                if (word_counter == WORDS_PER_VECTOR - 1) begin
                    done_o = 1'b1;
                    next_state = IDLE;
                end else begin
                    next_state = LOAD_REQ; // Go back to request the next word
                end
            end
        end
        
        STORE_REQ: begin
            // Assert valid for the entire duration of the STORE_REQ state
            xif_mem_valid_o = 1'b1; 
            xif_mem_req_o.we = 1'b1;
            xif_mem_req_o.wdata = store_data_i[word_counter*32 +: 32];
            xif_mem_req_o.last = (word_counter == WORDS_PER_VECTOR - 1);
            
            if (xif_mem_ready_i) begin
                if (word_counter == WORDS_PER_VECTOR - 1) begin
                    done_o = 1'b1;
                    next_state = IDLE;
                end else begin
                    // For stores, we can immediately request the next one
                    next_state = STORE_REQ; 
                end
            end
        end
        
        default: next_state = IDLE;
    endcase
end    
   endmodule
