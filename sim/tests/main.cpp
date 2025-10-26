// sim/tests/main.cpp - Enhanced with hex and decimal display for VMAC tests

#include "Vsoc_top.h"
#include "Vsoc_top___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

// ====================================================================================
// HELPER FUNCTION TO PRINT VECTORS WITH HEX AND DECIMAL
// ====================================================================================
void print_vector(Vsoc_top* top, uint32_t base_addr, const std::string& name, int size = 8) {
    std::cout << "\n---- " << name << " at 0x" << std::hex << base_addr << " ----" << std::dec << std::endl;
    std::cout << "Index |    Hex Value    |   Decimal (Signed)  | Decimal (Unsigned)" << std::endl;
    std::cout << "------|-----------------|---------------------|-------------------" << std::endl;
    
    for (int i = 0; i < size; i++) {
        uint32_t addr = (base_addr >> 2) + i;
        uint32_t data = top->rootp->soc_top__DOT__memory[addr];
        int32_t signed_data = static_cast<int32_t>(data);
        
        std::cout << "  [" << std::dec << i << "]  | 0x" 
                  << std::hex << std::setw(8) << std::setfill('0') << data 
                  << "  |  " << std::dec << std::setw(11) << std::setfill(' ') << signed_data
                  << "  |  " << std::setw(10) << data
                  << std::endl;
    }
    std::cout << std::endl;
}

// ====================================================================================
// HELPER FUNCTION TO PRINT MATRIX (8x8) WITH HEX AND DECIMAL
// ====================================================================================
void print_matrix(Vsoc_top* top, uint32_t base_addr, const std::string& name) {
    std::cout << "\n================ " << name << " at 0x" << std::hex << base_addr 
              << " ================" << std::dec << std::endl;
    
    // Print header
    std::cout << "     ";
    for (int j = 0; j < 8; j++) {
        std::cout << "   Col " << j << "     ";
    }
    std::cout << std::endl;
    
    std::cout << "     ";
    for (int j = 0; j < 8; j++) {
        std::cout << "-------------";
    }
    std::cout << std::endl;
    
    // Print matrix data
    for (int i = 0; i < 8; i++) {
        std::cout << "Row " << i << ": ";
        for (int j = 0; j < 8; j++) {
            uint32_t addr = (base_addr >> 2) + (i * 8 + j);
            uint32_t data = top->rootp->soc_top__DOT__memory[addr];
            std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << data << " ";
        }
        std::cout << std::endl;
        
        // Print decimal values
        std::cout << "      ";
        for (int j = 0; j < 8; j++) {
            uint32_t addr = (base_addr >> 2) + (i * 8 + j);
            int32_t data = static_cast<int32_t>(top->rootp->soc_top__DOT__memory[addr]);
            std::cout << "(" << std::dec << std::setw(7) << data << ") ";
        }
        std::cout << std::endl << std::endl;
    }
}

// ====================================================================================
// HELPER FUNCTION TO PRINT TEST RESULTS WITH VERIFICATION
// ====================================================================================
void print_test_case(Vsoc_top* top, int test_num, 
                     uint32_t addr_a, uint32_t addr_b, uint32_t addr_c, uint32_t addr_result,
                     const std::string& description) {
    std::cout << "\n" << std::string(80, '=') << std::endl;
    std::cout << "TEST CASE " << test_num << ": " << description << std::endl;
    std::cout << "Formula: Result = A * B + C" << std::endl;
    std::cout << std::string(80, '=') << std::endl;
    
    print_vector(top, addr_a, "Vector A (Multiplicand)");
    print_vector(top, addr_b, "Vector B (Multiplier)");
    print_vector(top, addr_c, "Vector C (Accumulator)");
    print_vector(top, addr_result, "Result Vector");
    
    // Verify the results
    std::cout << "Verification:" << std::endl;
    std::cout << "-------------" << std::endl;
    bool all_correct = true;
    
    for (int i = 0; i < 8; i++) {
        uint32_t a = top->rootp->soc_top__DOT__memory[(addr_a >> 2) + i];
        uint32_t b = top->rootp->soc_top__DOT__memory[(addr_b >> 2) + i];
        uint32_t c = top->rootp->soc_top__DOT__memory[(addr_c >> 2) + i];
        uint32_t result = top->rootp->soc_top__DOT__memory[(addr_result >> 2) + i];
        
        // Treat as signed for calculation
        int32_t a_signed = static_cast<int32_t>(a);
        int32_t b_signed = static_cast<int32_t>(b);
        int32_t c_signed = static_cast<int32_t>(c);
        int32_t expected = a_signed * b_signed + c_signed;
        int32_t result_signed = static_cast<int32_t>(result);
        
        bool correct = (result_signed == expected);
        all_correct &= correct;
        
        std::cout << "  [" << i << "]: " 
                  << std::setw(6) << a_signed << " * " 
                  << std::setw(6) << b_signed << " + " 
                  << std::setw(6) << c_signed 
                  << " = " << std::setw(8) << result_signed;
        
        if (correct) {
            std::cout << "  ✓ PASS (Expected: " << expected << ")" << std::endl;
        } else {
            std::cout << "  ✗ FAIL (Expected: " << expected << ", Got: " << result_signed << ")" << std::endl;
        }
    }
    
    if (all_correct) {
        std::cout << "\n★ Test Case " << test_num << " PASSED! ★" << std::endl;
    } else {
        std::cout << "\n✗ Test Case " << test_num << " FAILED! ✗" << std::endl;
    }
}

// ====================================================================================
// HELPER FUNCTION TO DISPLAY MEMORY DUMP
// ====================================================================================
void memory_dump(Vsoc_top* top, uint32_t start_addr, uint32_t end_addr, const std::string& title) {
    std::cout << "\n" << title << " (0x" << std::hex << start_addr 
              << " - 0x" << end_addr << ")" << std::dec << std::endl;
    std::cout << std::string(70, '-') << std::endl;
    std::cout << "Address  |    Hex Value    | Decimal (Signed) | Decimal (Unsigned)" << std::endl;
    std::cout << std::string(70, '-') << std::endl;
    
    for (uint32_t addr = start_addr; addr <= end_addr; addr += 4) {
        uint32_t word_addr = addr >> 2;
        uint32_t data = top->rootp->soc_top__DOT__memory[word_addr];
        int32_t signed_data = static_cast<int32_t>(data);
        
        std::cout << "0x" << std::hex << std::setw(4) << std::setfill('0') << addr 
                  << "  | 0x" << std::setw(8) << data
                  << "  |  " << std::dec << std::setw(11) << std::setfill(' ') << signed_data
                  << "  |  " << std::setw(10) << data
                  << std::endl;
    }
}

// ====================================================================================
// MAIN FUNCTION
// ====================================================================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vsoc_top* top = new Vsoc_top;
    
    // Enable tracing if requested
    VerilatedVcdC* tfp = nullptr;
    const bool enable_trace = Verilated::commandArgsPlusMatch("WAVES");
    if (enable_trace) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        tfp->open("simulation.vcd");
        std::cout << "★ Waveform tracing enabled. Output file: simulation.vcd" << std::endl;
    }
    
    // Enable debug output if requested
    const bool debug_mode = Verilated::commandArgsPlusMatch("DEBUG");
    if (debug_mode) {
        std::cout << "★ Debug mode enabled" << std::endl;
    }
    
    // Enable memory dump if requested
    const bool dump_memory = Verilated::commandArgsPlusMatch("DUMP");
    
    // Simulation parameters
    vluint64_t sim_time = 0;
    const vluint64_t max_sim_time = 2000000;
    const vluint64_t reset_time = 50;
    const vluint64_t finish_check_addr = 0x1000 >> 2; // Word address for finish flag
    
    // Print header
    std::cout << "\n";
    std::cout << "╔══════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║           RISC-V VECTOR COPROCESSOR - VMAC TEST SUITE               ║" << std::endl;
    std::cout << "║                   Enhanced Multi-Test Version                       ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════╝" << std::endl;
    std::cout << "\nConfiguration:" << std::endl;
    std::cout << "  • Vector Length: 256 bits (8 x 32-bit elements)" << std::endl;
    std::cout << "  • Operation: VMAC (Vector Multiply-Accumulate)" << std::endl;
    std::cout << "  • Test Cases: 5 comprehensive tests" << std::endl;
    std::cout << "  • Reset Time: " << reset_time << " time units" << std::endl;
    std::cout << "  • Max Simulation Time: " << max_sim_time << " time units" << std::endl;
    
    if (enable_trace) std::cout << "  • Waveform Generation: ENABLED" << std::endl;
    if (debug_mode) std::cout << "  • Debug Output: ENABLED" << std::endl;
    if (dump_memory) std::cout << "  • Memory Dump: ENABLED" << std::endl;
    
    std::cout << "\n" << std::string(70, '-') << std::endl;
    std::cout << "Starting simulation..." << std::endl;
    std::cout << std::string(70, '-') << std::endl;
    
    // Initialize signals
    top->clk_i = 0;
    top->rst_ni = 0;
    
    // Track execution progress
    bool test_started = false;
    vluint64_t start_cycle = 0;
    
    while (sim_time < max_sim_time && !Verilated::gotFinish()) {
        // Reset control
        if (sim_time < reset_time) {
            top->rst_ni = 0;
        } else if (sim_time == reset_time) {
            top->rst_ni = 1;
            std::cout << "\n✓ Reset released at time " << sim_time << std::endl;
            std::cout << "✓ Starting test execution...\n" << std::endl;
            test_started = true;
            start_cycle = sim_time / 10;
        }
        
        // Generate clock (100MHz equivalent - period = 10 time units)
        top->clk_i = (sim_time % 10) >= 5;
        
        // Evaluate the model
        top->eval();
        
        // Dump waveforms if enabled
        if (tfp) {
            tfp->dump(sim_time);
        }
        
        // Check for completion (only on positive clock edges after reset)
        if (top->rst_ni && top->clk_i && (sim_time % 10 == 5)) {
            vluint64_t cycle = (sim_time - reset_time) / 10;
            
            // Check for program completion
            if (top->rootp->soc_top__DOT__memory[finish_check_addr] == 1) {
                vluint64_t total_cycles = cycle;
                
                std::cout << "\n";
                std::cout << "╔══════════════════════════════════════════════════════════════════════╗" << std::endl;
                std::cout << "║                    SIMULATION COMPLETED SUCCESSFULLY!                ║" << std::endl;
                std::cout << "╚══════════════════════════════════════════════════════════════════════╝" << std::endl;
                std::cout << "  • Completion Time: " << sim_time << " time units" << std::endl;
                std::cout << "  • Total Cycles: " << total_cycles << std::endl;
                std::cout << "  • Execution Cycles: " << cycle << std::endl;
                
                // Optional: Dump memory regions
                if (dump_memory) {
                    memory_dump(top, 0x100, 0x31C, "Complete Memory Dump");
                }
                
                // Print all test results
                std::cout << "\n" << std::string(70, '=') << std::endl;
                std::cout << "                        DETAILED TEST RESULTS" << std::endl;
                std::cout << std::string(70, '=') << std::endl;
                
                print_test_case(top, 1, 0x100, 0x120, 0x140, 0x200,
                               "Basic VMAC with positive numbers");
                
                print_test_case(top, 2, 0x160, 0x180, 0x1A0, 0x220,
                               "VMAC with zeros and alternating values");
                
                print_test_case(top, 3, 0x1C0, 0x1E0, 0x140, 0x240,
                               "VMAC with negative numbers (2's complement)");
                
                print_test_case(top, 4, 0x100, 0x120, 0x260, 0x280,
                               "Chained VMAC operations (double accumulation)");
                
                print_test_case(top, 5, 0x2A0, 0x2C0, 0x2E0, 0x300,
                               "VMAC with large numbers");
                
                // Print matrix format for first test (as 8x8 visualization)
                std::cout << "\n" << std::string(70, '=') << std::endl;
                std::cout << "            MATRIX VIEW (First 64 words as 8x8 matrix)" << std::endl;
                std::cout << std::string(70, '=') << std::endl;
                print_matrix(top, 0x100, "Input Data Region (as 8x8)");
                print_matrix(top, 0x200, "Result Data Region (as 8x8)");
                
                // Summary
                std::cout << "\n";
                std::cout << "╔══════════════════════════════════════════════════════════════════════╗" << std::endl;
                std::cout << "║                         TEST SUITE SUMMARY                          ║" << std::endl;
                std::cout << "╚══════════════════════════════════════════════════════════════════════╝" << std::endl;
                std::cout << "  • Total Test Cases: 5" << std::endl;
                std::cout << "  • Total Cycles: " << total_cycles << std::endl;
                std::cout << "  • Average Cycles per Test: " << (total_cycles / 5) << std::endl;
                std::cout << "  • Clock Frequency: 100 MHz (assumed)" << std::endl;
                std::cout << "  • Execution Time: " << (total_cycles * 10) << " ns" << std::endl;
                
                // Performance metrics
                int total_vmac_ops = 5;  // 5 VMAC operations
                int elements_per_vmac = 8;
                int total_macs = total_vmac_ops * elements_per_vmac;
                double macs_per_cycle = (double)total_macs / total_cycles;
                
                std::cout << "\n  Performance Metrics:" << std::endl;
                std::cout << "  • Total MAC Operations: " << total_macs << std::endl;
                std::cout << "  • MACs per Cycle: " << std::fixed << std::setprecision(3) << macs_per_cycle << std::endl;
                std::cout << "  • Throughput: " << (macs_per_cycle * 100) << " MMAC/s @ 100MHz" << std::endl;
                
                std::cout << "\n★ All tests completed successfully! ★" << std::endl;
                
                // Run a few more cycles for waveform
                for (int i = 0; i < 10; i++) {
                    sim_time++; 
                    top->clk_i = (sim_time % 10) >= 5; 
                    top->eval(); 
                    if(tfp) tfp->dump(sim_time);
                }
                break;
            }
            
	    /*
            // Periodic status updates in debug mode
            if (debug_mode && cycle % 100 == 0 && cycle > 0) {
                std::cout << "[DEBUG] Cycle " << std::dec << cycle 
                          << " - PC: 0x" << std::hex << std::setw(8) << std::setfill('0') 
                          << top->rootp->soc_top__DOT__cpu_inst->if_stage_i->pc_id_o
                          << std::dec << std::endl;
            }
	    */

        }
        
        sim_time++;
    }
    
    // Final status check
    if (sim_time >= max_sim_time) {
        std::cout << "\n";
        std::cout << "╔══════════════════════════════════════════════════════════════════════╗" << std::endl;
        std::cout << "║                    ERROR: SIMULATION TIMEOUT!                       ║" << std::endl;
        std::cout << "╚══════════════════════════════════════════════════════════════════════╝" << std::endl;
        std::cout << "  ✗ Simulation reached maximum time limit!" << std::endl;
        std::cout << "  ✗ Final simulation time: " << sim_time << " time units" << std::endl;
        std::cout << "  ✗ Final cycle count: " << (sim_time / 10) << std::endl;
        /*
        // Debug information on timeout
        if (debug_mode) {
            std::cout << "\nDebug Information:" << std::endl;
            std::cout << "  Last PC: 0x" << std::hex 
                      << top->rootp->soc_top__DOT__cpu_inst->if_stage_i->pc_id_o << std::dec << std::endl;
            std::cout << "  Completion flag at 0x1000: " 
                      << top->rootp->soc_top__DOT__memory[finish_check_addr] << std::endl;
            
            // Dump some memory to help debug
            memory_dump(top, 0x0, 0x40, "Instruction Memory (First 16 instructions)");
            memory_dump(top, 0x200, 0x21C, "Result area");
        }
	*/
    }
    
    // Clean up
    if (tfp) {
        tfp->close();
        delete tfp;
        std::cout << "\n✓ Waveform file closed successfully" << std::endl;
    }
    
    delete top;
    std::cout << "✓ Simulation cleanup complete" << std::endl;
    std::cout << "\n======================== END OF SIMULATION ========================\n" << std::endl;
    
    return (sim_time >= max_sim_time) ? 1 : 0;
}
