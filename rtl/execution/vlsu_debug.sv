// Temporary debug version of vlsu.sv
`include "custom_opcodes.vh"
import cv32e40x_xif_pkg::*;

module vlsu #(
    parameter int VLEN = 256,
    parameter int X_ID_WIDTH = 4
) (
    input  logic                      clk_i,
    input  logic                      rst_ni,
    
    // Control signals
    input  logic                      start_load_i,
    input  logic                      start_store_i,
    input  logic [31:0]               base_addr_i,
    
    // Data interface
    input  logic [VLEN-1:0]           store_data_i,
    output logic [VLEN-1:0]           load_data_o,
    output logic                      done_o,
    
    // Transaction ID
    input  logic [X_ID_WIDTH-1:0]    id_i,
    
    // X-IF Memory interface
    output logic                      xif_mem_valid_o,
    input  logic                      xif_mem_ready_i,
    output x_mem_req_t                xif_mem_req_o,
    input  x_mem_resp_t               xif_mem_resp_i,
    
    // X-IF Memory result interface
    input  logic                      xif_mem_result_valid_i,
    input  x_mem_result_t             xif_mem_result_i
);
    
    localparam int WORDS_PER_VECTOR = VLEN / 32;
    
    // FSM states
    typedef enum logic [1:0] {
        IDLE = 2'b00,
        LOAD_REQUEST = 2'b01,
        LOAD_WAIT = 2'b10,
        STORE = 2'b11
    } state_t;
    
    state_t state, next_state;
    
    // Internal signals
    logic [4:0] word_counter;
    logic [31:0] current_addr;
    logic is_load;
    
    // Vector accumulator for loads
    logic [VLEN-1:0] load_data_accumulator;
    
    // Store data register
    logic [VLEN-1:0] store_data_q;
    
    // State machine
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            word_counter <= '0;
            current_addr <= '0;
            is_load <= 1'b0;
            store_data_q <= '0;
            load_data_accumulator <= '0;
        end else begin
            state <= next_state;
            
            // Starting a new operation
            if ((start_load_i || start_store_i) && state == IDLE) begin
                word_counter <= '0;
                current_addr <= base_addr_i;
                is_load <= start_load_i;
                store_data_q <= store_data_i;
                load_data_accumulator <= '0;
                
                if (start_load_i) begin
                    $display("VLSU: Starting load from addr 0x%08x", base_addr_i);
                end else begin
                    $display("VLSU: Starting store to addr 0x%08x", base_addr_i);
                    $display("  Store data[0]=0x%08x, [1]=0x%08x, [2]=0x%08x, [3]=0x%08x",
                             store_data_i[31:0], store_data_i[63:32], 
                             store_data_i[95:64], store_data_i[127:96]);
                end
            end
            
            // Handle memory responses for loads
            if (state == LOAD_WAIT && xif_mem_result_valid_i && xif_mem_result_i.id == id_i) begin
                load_data_accumulator[word_counter * 32 +: 32] <= xif_mem_result_i.rdata;
                $display("VLSU: Received data 0x%08x for word %0d", 
                         xif_mem_result_i.rdata, word_counter);
                word_counter <= word_counter + 1;
                current_addr <= current_addr + 4;
            end
            
            // Handle store operations
            if (state == STORE && xif_mem_ready_i) begin
                $display("VLSU: Storing word %0d: 0x%08x to addr 0x%08x",
                         word_counter, store_data_q[word_counter * 32 +: 32], current_addr);
                word_counter <= word_counter + 1;
                current_addr <= current_addr + 4;
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (start_load_i) begin
                    next_state = LOAD_REQUEST;
                end else if (start_store_i) begin
                    next_state = STORE;
                end
            end
            
            LOAD_REQUEST: begin
                if (xif_mem_ready_i) begin
                    next_state = LOAD_WAIT;
                end
            end
            
            LOAD_WAIT: begin
                if (xif_mem_result_valid_i && xif_mem_result_i.id == id_i) begin
                    if (word_counter == WORDS_PER_VECTOR - 1) begin
                        next_state = IDLE;
                    end else begin
                        next_state = LOAD_REQUEST;
                    end
                end
            end
            
            STORE: begin
                if (xif_mem_ready_i && word_counter == WORDS_PER_VECTOR - 1) begin
                    next_state = IDLE;
                end
            end
        endcase
    end
    
    // Output assignments
    assign done_o = (state != IDLE) && (next_state == IDLE);
    assign load_data_o = load_data_accumulator;
    
    // Memory request interface
    assign xif_mem_valid_o = (state == LOAD_REQUEST) || (state == STORE);
    
    always_comb begin
        xif_mem_req_o = '0;
        xif_mem_req_o.id = id_i;
        xif_mem_req_o.addr = current_addr;
        xif_mem_req_o.mode = 2'b10;  // Word access
        xif_mem_req_o.we = (state == STORE);
        xif_mem_req_o.be = 4'b1111;  // All bytes enabled
        
        if (state == STORE) begin
            xif_mem_req_o.wdata = store_data_q[word_counter * 32 +: 32];
        end
    end
    
endmodule
