// rtl/execution/vlsu.sv - Zero-latency memory version
// Handles same-cycle memory responses (combinational read from memory)
// This reduces VLD from 8 cycles to ~4 cycles!
`include "custom_opcodes.vh"
import cv32e40x_xif_pkg::*;

module vlsu #(
    parameter int VLEN = 256,
    parameter int X_ID_WIDTH = 4
) (
    input  logic                      clk_i,
    input  logic                      rst_ni,
    
    input  logic                      start_load_i,
    input  logic                      start_store_i,
    input  logic [31:0]               base_addr_i,
    
    input  logic [VLEN-1:0]           store_data_i,
    output logic [VLEN-1:0]           load_data_o,
    output logic                      done_o,
    
    input  logic [X_ID_WIDTH-1:0]    id_i,
    
    output logic                      xif_mem_valid_o,
    input  logic                      xif_mem_ready_i,
    output x_mem_req_t                xif_mem_req_o,
    input  x_mem_resp_t               xif_mem_resp_i,
    
    input  logic                      xif_mem_result_valid_i,
    input  x_mem_result_t             xif_mem_result_i
);
    
    localparam int WORDS_PER_VECTOR = VLEN / 32;  // 8
    
    typedef enum logic [1:0] {
        IDLE        = 2'b00,
        LOAD_ACTIVE = 2'b01,
        STORE_ACTIVE= 2'b10
    } state_t;
    
    state_t state, next_state;
    
    // With zero-latency memory, we get result same cycle as request
    // So we only need to count requests, not wait for results
    logic [3:0] req_cnt_q;
    
    // Data
    logic [31:0] base_addr_q;
    logic [VLEN-1:0] load_data_q;
    logic [VLEN-1:0] store_data_q;
    
    // First cycle
    logic first_load, first_store;
    assign first_load = start_load_i && (state == IDLE);
    assign first_store = start_store_i && (state == IDLE);
    
    // Address - increments each cycle
    logic [31:0] req_addr;
    always_comb begin
        if (first_load || first_store) begin
            req_addr = base_addr_i;
        end else begin
            req_addr = base_addr_q + {req_cnt_q, 2'b00};
        end
    end
    
    // All done when we've sent all requests
    logic all_done;
    assign all_done = (req_cnt_q >= WORDS_PER_VECTOR);
    
    // State machine
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state <= IDLE;
            req_cnt_q <= '0;
            base_addr_q <= '0;
            load_data_q <= '0;
            store_data_q <= '0;
        end else begin
            state <= next_state;
            
            // Initialize
            if (first_load || first_store) begin
                base_addr_q <= base_addr_i;
                req_cnt_q <= xif_mem_ready_i ? 4'd1 : 4'd0;
                if (first_store) store_data_q <= store_data_i;
                if (first_load) load_data_q <= '0;
            end
            // Continue issuing
            else if ((state == LOAD_ACTIVE || state == STORE_ACTIVE) && 
                     !all_done && xif_mem_ready_i) begin
                req_cnt_q <= req_cnt_q + 1;
            end
            
            // Capture load results - with zero latency, result comes same cycle as request
            if ((first_load || state == LOAD_ACTIVE) && 
                xif_mem_result_valid_i && xif_mem_result_i.id == id_i) begin
                // Use req_cnt_q-1 because we already incremented the counter
                logic [3:0] result_idx;
                if (first_load) begin
                    result_idx = 0;
                end else begin
                    result_idx = req_cnt_q - 1;
                end
                load_data_q[result_idx * 32 +: 32] <= xif_mem_result_i.rdata;
            end
            
            // Reset on completion
            if (next_state == IDLE && state != IDLE) begin
                req_cnt_q <= '0;
            end
        end
    end
    
    // Combinational load data for immediate availability
    always_comb begin
        load_data_o = load_data_q;
        // Include current cycle's result
        if ((first_load || state == LOAD_ACTIVE) && 
            xif_mem_result_valid_i && xif_mem_result_i.id == id_i) begin
            logic [3:0] idx;
            if (first_load) idx = 0;
            else idx = req_cnt_q - 1;
            load_data_o[idx * 32 +: 32] = xif_mem_result_i.rdata;
        end
    end
    
    // Next state
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (start_load_i) next_state = LOAD_ACTIVE;
                else if (start_store_i) next_state = STORE_ACTIVE;
            end
            
            LOAD_ACTIVE: begin
                // With zero-latency, we're done when last request is sent AND result received
                if (req_cnt_q >= WORDS_PER_VECTOR - 1 && xif_mem_ready_i && 
                    xif_mem_result_valid_i) begin
                    next_state = IDLE;
                end
            end
            
            STORE_ACTIVE: begin
                // Done when last store is accepted
                if (req_cnt_q >= WORDS_PER_VECTOR - 1 && xif_mem_ready_i) begin
                    next_state = IDLE;
                end
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // Done signal
    assign done_o = (state == LOAD_ACTIVE && req_cnt_q >= WORDS_PER_VECTOR - 1 && 
                     xif_mem_ready_i && xif_mem_result_valid_i) ||
                    (state == STORE_ACTIVE && req_cnt_q >= WORDS_PER_VECTOR - 1 && 
                     xif_mem_ready_i);
    
    // Memory interface
    assign xif_mem_valid_o = first_load || first_store ||
                             (state == LOAD_ACTIVE && !all_done) ||
                             (state == STORE_ACTIVE && !all_done);
    
    always_comb begin
        xif_mem_req_o = '0;
        xif_mem_req_o.id = id_i;
        xif_mem_req_o.addr = req_addr;
        xif_mem_req_o.mode = 2'b10;
        xif_mem_req_o.be = 4'b1111;
        xif_mem_req_o.size = 3'b010;
        
        if (first_store) begin
            xif_mem_req_o.we = 1'b1;
            xif_mem_req_o.wdata = store_data_i[31:0];
        end else if (state == STORE_ACTIVE) begin
            xif_mem_req_o.we = 1'b1;
            xif_mem_req_o.wdata = store_data_q[req_cnt_q * 32 +: 32];
            xif_mem_req_o.last = (req_cnt_q == WORDS_PER_VECTOR - 1);
        end else begin
            xif_mem_req_o.we = 1'b0;
            xif_mem_req_o.last = (req_cnt_q == WORDS_PER_VECTOR - 1);
        end
    end

endmodule
