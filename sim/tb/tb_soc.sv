// sim/tb/tb_soc.sv - Enhanced testbench with comprehensive XIF debugging
`timescale 1ns/1ps

module tb_soc;
    // Clock and reset
    logic clk = 0;
    logic rst_n = 0;
    
    // Clock generation (100MHz)
    always #5 clk = ~clk;
    
    // Test parameters
    localparam int FINISH_ADDR = 32'h1000;
    localparam int MAX_CYCLES = 100000;
    
    int cycle_count = 0;
    logic debug_enable = 1'b1;  // Enable comprehensive debugging
    
    // DUT instance
    soc_top dut (
        .clk_i(clk),
        .rst_ni(rst_n)
    );
    
    // Reset sequence
    initial begin
        $display("=== Vector Coprocessor Simulation Started ===");
        $display("Time: %t - Asserting reset", $time);
        rst_n = 0;
        #50;  // Longer reset
        rst_n = 1;
        $display("Time: %t - Reset released", $time);
        #10;
        $display("=== Starting main execution ===");
    end
    
    // Enhanced cycle counter and monitoring
    always_ff @(posedge clk) begin
        if (rst_n) begin
            cycle_count <= cycle_count + 1;
            
            // Check for program completion
            if (dut.memory[FINISH_ADDR >> 2] === 32'h1) begin
                $display("=== SUCCESS: Program completed ===");
                $display("  Cycles: %d", cycle_count);
                $display("  Time: %t", $time);
                #100;
                $finish;
            end
            
            // Periodic status updates
            if (cycle_count % 1000 == 0 && cycle_count > 0) begin
                $display("Time %t - Cycle %d: Still running...", $time, cycle_count);
                $display("  CPU PC: 0x%h", dut.cpu_inst.if_stage_i.pc_id_o);
                $display("  VPU State: %s", dut.vpu_inst.state.name());
            end
            
            // Timeout check
            if (cycle_count >= MAX_CYCLES) begin
                $display("=== ERROR: Simulation timeout ===");
                $display("Cycles: %d", MAX_CYCLES);
                print_debug_info();
                $finish;
            end
        end
    end
    
    // Comprehensive XIF debugging
    always_ff @(posedge clk) begin
        if (rst_n && debug_enable) begin
            // Monitor XIF Issue interface
            if (dut.xif_issue_valid && dut.xif_issue_ready) begin
                $display("Time %t: XIF ISSUE HANDSHAKE SUCCESS", $time);
                $display("  Instruction: 0x%h", dut.xif_issue_req.instr);
                $display("  ID: %d", dut.xif_issue_req.id);
                $display("  RS1: 0x%h", dut.xif_issue_req.rs[0]);
                $display("  RS2: 0x%h", dut.xif_issue_req.rs[1]);
                $display("  VPU State: %s -> Next: %s", 
                         dut.vpu_inst.state.name(), dut.vpu_inst.next_state.name());
            end else if (dut.xif_issue_valid && !dut.xif_issue_ready) begin
                $display("Time %t: XIF ISSUE STALLED - CPU wants to issue but VPU not ready", $time);
                $display("  VPU State: %s", dut.vpu_inst.state.name());
            end
            
            // Monitor XIF Result interface
            if (dut.xif_result_valid && dut.xif_result_ready) begin
                $display("Time %t: XIF RESULT HANDSHAKE SUCCESS", $time);
                $display("  ID: %d", dut.xif_result.id);
                $display("  RD: %d", dut.xif_result.rd);
                $display("  WE: %b", dut.xif_result.we);
                $display("  VPU State: %s -> Next: %s", 
                         dut.vpu_inst.state.name(), dut.vpu_inst.next_state.name());
            end else if (dut.xif_result_valid && !dut.xif_result_ready) begin
                $display("Time %t: XIF RESULT STALLED - VPU has result but CPU not ready", $time);
            end
            
            // Monitor XIF Memory interface
            if (dut.xif_mem_valid && dut.xif_mem_ready) begin
                $display("Time %t: XIF MEMORY REQUEST", $time);
                $display("  Address: 0x%h", dut.xif_mem_req.addr);
                $display("  Write: %b", dut.xif_mem_req.we);
                $display("  Data: 0x%h", dut.xif_mem_req.wdata);
            end
            
            if (dut.xif_mem_result_valid) begin
                $display("Time %t: XIF MEMORY RESULT", $time);
                $display("  Data: 0x%h", dut.xif_mem_result.rdata);
                $display("  Error: %b", dut.xif_mem_result.err);
            end
            
            // Monitor VPU state changes
            if (dut.vpu_inst.state != dut.vpu_inst.next_state) begin
                $display("Time %t: VPU STATE CHANGE: %s -> %s", $time,
                         dut.vpu_inst.state.name(), dut.vpu_inst.next_state.name());
            end
        end
    end
    
    // CPU instruction monitoring
    logic [31:0] prev_pc = 0;
    always_ff @(posedge clk) begin
        if (rst_n && debug_enable) begin
            logic [31:0] current_pc = dut.cpu_inst.if_stage_i.pc_id_o;
            if (current_pc != prev_pc && current_pc != 0) begin
                $display("Time %t: CPU PC: 0x%h", $time, current_pc);
                // Show the instruction being fetched
                if (dut.instr_req && dut.instr_gnt) begin
                    $display("  Fetching from: 0x%h", dut.instr_addr);
                end
            end
            prev_pc = current_pc;
        end
    end
    
    // Function to print comprehensive debug info
    task print_debug_info();
        $display("\n=== COMPREHENSIVE DEBUG INFO ===");
        $display("CPU State:");
        $display("  PC: 0x%h", dut.cpu_inst.if_stage_i.pc_id_o);
        $display("  Instruction Req: %b", dut.instr_req);
        $display("  Instruction Grant: %b", dut.instr_gnt);
        $display("  Instruction Valid: %b", dut.instr_rvalid);
        $display("  Current Instruction: 0x%h", dut.instr_rdata);
        
        $display("\nXIF Interface Status:");
        $display("  Issue Valid: %b", dut.xif_issue_valid);
        $display("  Issue Ready: %b", dut.xif_issue_ready);
        if (dut.xif_issue_valid) begin
            $display("  Issue Instruction: 0x%h", dut.xif_issue_req.instr);
            $display("  Issue ID: %d", dut.xif_issue_req.id);
        end
        $display("  Result Valid: %b", dut.xif_result_valid);
        $display("  Result Ready: %b", dut.xif_result_ready);
        $display("  Mem Valid: %b", dut.xif_mem_valid);
        $display("  Mem Ready: %b", dut.xif_mem_ready);
        
        $display("\nVPU State:");
        $display("  Current State: %s", dut.vpu_inst.state.name());
        $display("  Next State: %s", dut.vpu_inst.next_state.name());
        $display("  Funct7: 0x%h", dut.vpu_inst.funct7_q);
        $display("  RS1: %d", dut.vpu_inst.rs1_q);
        $display("  RS2: %d", dut.vpu_inst.rs2_q);
        $display("  RD: %d", dut.vpu_inst.rd_q);
        
        $display("\nMemory Controller:");
        $display("  CPU Data Access: %b", dut.cpu_data_access_q);
        $display("  CPU Instr Access: %b", dut.cpu_instr_access_q);
        $display("  VPU Mem Access: %b", dut.vpu_mem_access_q);
        
        $display("=== END DEBUG INFO ===\n");
    endtask
    
    // Control debug output
    initial begin
        if ($test$plusargs("NODEBUG")) begin
            debug_enable = 1'b0;
            $display("Debug output disabled");
        end
    end
    
    // Waveform dumping
    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("simulation.vcd");
            $dumpvars(0, tb_soc);
            $display("Waveform dumping enabled");
        end
    end
    
    // Finish with debug info on any exit
    final begin
        $display("\n=== SIMULATION ENDED ===");
        $display("Final cycle count: %d", cycle_count);
        if (cycle_count >= MAX_CYCLES) begin
            print_debug_info();
        end
    end
    
endmodule
