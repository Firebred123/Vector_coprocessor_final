// sim/tests/test_main.cpp - Testbench for all vector operations

#include "Vsoc_top.h"
#include "Vsoc_top___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

// Color codes for terminal output
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

// ====================================================================================
// HELPER FUNCTIONS
// ====================================================================================

void print_header(const std::string& title) {
    std::cout << "\n" << BOLD << BLUE << std::string(80, '=') << RESET << std::endl;
    std::cout << BOLD << YELLOW << title << RESET << std::endl;
    std::cout << BOLD << BLUE << std::string(80, '=') << RESET << std::endl;
}

void print_subheader(const std::string& title) {
    std::cout << "\n" << BOLD << CYAN << "--- " << title << " ---" << RESET << std::endl;
}

void print_vector_result(Vsoc_top* top, uint32_t addr, const std::string& name, int size = 8) {
    print_subheader(name);
    
    std::cout << "Address: 0x" << std::hex << addr << std::dec << std::endl;
    std::cout << std::setw(10) << "Index" << " | " 
              << std::setw(12) << "Hex" << " | "
              << std::setw(12) << "Decimal" << " | "
              << std::setw(12) << "Binary (8 LSB)" << std::endl;
    std::cout << std::string(60, '-') << std::endl;
    
    for (int i = 0; i < size; i++) {
        uint32_t data = top->rootp->soc_top__DOT__memory[(addr >> 2) + i];
        int32_t signed_data = static_cast<int32_t>(data);
        
        std::cout << std::setw(10) << "[" << i << "]" << " | "
                  << "0x" << std::hex << std::setw(8) << std::setfill('0') << data << " | "
                  << std::dec << std::setw(12) << std::setfill(' ') << signed_data << " | ";
        
        // Print last 8 bits in binary
        for (int b = 7; b >= 0; b--) {
            std::cout << ((data >> b) & 1);
        }
        std::cout << std::endl;
    }
}

bool verify_vadd(Vsoc_top* top, uint32_t addr_a, uint32_t addr_b, uint32_t addr_result) {
    bool pass = true;
    for (int i = 0; i < 8; i++) {
        uint32_t a = top->rootp->soc_top__DOT__memory[(addr_a >> 2) + i];
        uint32_t b = top->rootp->soc_top__DOT__memory[(addr_b >> 2) + i];
        uint32_t result = top->rootp->soc_top__DOT__memory[(addr_result >> 2) + i];
        uint32_t expected = a + b;
        
        if (result != expected) {
            std::cout << RED << "  [" << i << "] FAIL: " 
                      << a << " + " << b << " = " << result 
                      << " (expected " << expected << ")" << RESET << std::endl;
            pass = false;
        }
    }
    return pass;
}

bool verify_vsub(Vsoc_top* top, uint32_t addr_a, uint32_t addr_b, uint32_t addr_result) {
    bool pass = true;
    for (int i = 0; i < 8; i++) {
        uint32_t a = top->rootp->soc_top__DOT__memory[(addr_a >> 2) + i];
        uint32_t b = top->rootp->soc_top__DOT__memory[(addr_b >> 2) + i];
        uint32_t result = top->rootp->soc_top__DOT__memory[(addr_result >> 2) + i];
        uint32_t expected = a - b;
        
        if (result != expected) {
            std::cout << RED << "  [" << i << "] FAIL: " 
                      << a << " - " << b << " = " << result 
                      << " (expected " << expected << ")" << RESET << std::endl;
            pass = false;
        }
    }
    return pass;
}

bool verify_vmul(Vsoc_top* top, uint32_t addr_a, uint32_t addr_b, uint32_t addr_result) {
    bool pass = true;
    for (int i = 0; i < 8; i++) {
        uint32_t a = top->rootp->soc_top__DOT__memory[(addr_a >> 2) + i];
        uint32_t b = top->rootp->soc_top__DOT__memory[(addr_b >> 2) + i];
        uint32_t result = top->rootp->soc_top__DOT__memory[(addr_result >> 2) + i];
        uint32_t expected = a * b;
        
        if (result != expected) {
            std::cout << RED << "  [" << i << "] FAIL: " 
                      << a << " * " << b << " = " << result 
                      << " (expected " << expected << ")" << RESET << std::endl;
            pass = false;
        }
    }
    return pass;
}

bool verify_vmac(Vsoc_top* top, uint32_t addr_a, uint32_t addr_b, uint32_t addr_c, uint32_t addr_result) {
    bool pass = true;
    for (int i = 0; i < 8; i++) {
        uint32_t a = top->rootp->soc_top__DOT__memory[(addr_a >> 2) + i];
        uint32_t b = top->rootp->soc_top__DOT__memory[(addr_b >> 2) + i];
        uint32_t c = top->rootp->soc_top__DOT__memory[(addr_c >> 2) + i];
        uint32_t result = top->rootp->soc_top__DOT__memory[(addr_result >> 2) + i];
        uint32_t expected = (a * b) + c;
        
        if (result != expected) {
            std::cout << RED << "  [" << i << "] FAIL: " 
                      << a << " * " << b << " + " << c << " = " << result 
                      << " (expected " << expected << ")" << RESET << std::endl;
            pass = false;
        }
    }
    return pass;
}

void verify_2x2_matmul(Vsoc_top* top, uint32_t addr_a, uint32_t addr_b, uint32_t addr_result) {
    // Extract 2x2 matrices
    int32_t a[2][2], b[2][2], result[2][2], expected[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            a[i][j] = top->rootp->soc_top__DOT__memory[(addr_a >> 2) + i*2 + j];
            b[i][j] = top->rootp->soc_top__DOT__memory[(addr_b >> 2) + i*2 + j];
            result[i][j] = top->rootp->soc_top__DOT__memory[(addr_result >> 2) + i*2 + j];
        }
    }
    
    // Calculate expected result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            expected[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                expected[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Display matrices
    std::cout << "Matrix A:" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "  [" << a[i][0] << ", " << a[i][1] << "]" << std::endl;
    }
    
    std::cout << "Matrix B:" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "  [" << b[i][0] << ", " << b[i][1] << "]" << std::endl;
    }
    
    std::cout << "Result:" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "  [" << result[i][0] << ", " << result[i][1] << "]" << std::endl;
    }
    
    std::cout << "Expected:" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "  [" << expected[i][0] << ", " << expected[i][1] << "]" << std::endl;
    }
    
    // Check result
    bool pass = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (result[i][j] != expected[i][j]) {
                pass = false;
            }
        }
    }
    
    if (pass) {
        std::cout << GREEN << "✓ 2x2 Matrix Multiply PASSED" << RESET << std::endl;
    } else {
        std::cout << RED << "✗ 2x2 Matrix Multiply FAILED" << RESET << std::endl;
    }
}

// ====================================================================================
// MAIN
// ====================================================================================

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Create instance
    Vsoc_top* top = new Vsoc_top;
    
    // Tracing
    VerilatedVcdC* tfp = nullptr;
    const bool enable_trace = Verilated::commandArgsPlusMatch("WAVES");
    if (enable_trace) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        tfp->open("simulation.vcd");
    }
    
    // Simulation parameters
    vluint64_t sim_time = 0;
    const vluint64_t max_sim_time = 2000000;
    const vluint64_t reset_time = 50;
    const vluint64_t finish_check_addr = 0x1000 >> 2;
    
    print_header("VECTOR COPROCESSOR UNIT TEST SUITE");
    std::cout << "Testing all vector operations..." << std::endl;
    
    // Initialize
    top->clk_i = 0;
    top->rst_ni = 0;
    
    vluint64_t start_time = 0;
    bool test_started = false;
    
    while (sim_time < max_sim_time && !Verilated::gotFinish()) {
        // Reset control
        if (sim_time < reset_time) {
            top->rst_ni = 0;
        } else if (sim_time == reset_time) {
            top->rst_ni = 1;
            std::cout << GREEN << "✓ Reset released at time " << sim_time << RESET << std::endl;
            start_time = sim_time;
            test_started = true;
        }
        
        // Clock
        top->clk_i = (sim_time % 10) >= 5;
        
        // Evaluate
        top->eval();
        
        // Dump waveforms
        if (tfp) {
            tfp->dump(sim_time);
        }
        
        // Check completion
        if (top->rst_ni && top->clk_i && (sim_time % 10 == 5)) {
            if (top->rootp->soc_top__DOT__memory[finish_check_addr] == 1) {
                vluint64_t total_cycles = (sim_time - start_time) / 10;
                
                print_header("TEST RESULTS");
                
                // Display input vectors
                print_vector_result(top, 0x100, "Input Vector A");
                print_vector_result(top, 0x120, "Input Vector B");
                print_vector_result(top, 0x140, "Accumulator Vector C");
                
                // Test 1: VADD
                print_vector_result(top, 0x200, "TEST 1: VADD Result (A + B)");
                bool vadd_pass = verify_vadd(top, 0x100, 0x120, 0x200);
                std::cout << (vadd_pass ? GREEN "✓ VADD PASSED" : RED "✗ VADD FAILED") << RESET << std::endl;
                
                // Test 2: VSUB
                print_vector_result(top, 0x220, "TEST 2: VSUB Result (A - B)");
                bool vsub_pass = verify_vsub(top, 0x100, 0x120, 0x220);
                std::cout << (vsub_pass ? GREEN "✓ VSUB PASSED" : RED "✗ VSUB FAILED") << RESET << std::endl;
                
                // Test 3: VMUL
                print_vector_result(top, 0x240, "TEST 3: VMUL Result (A * B)");
                bool vmul_pass = verify_vmul(top, 0x100, 0x120, 0x240);
                std::cout << (vmul_pass ? GREEN "✓ VMUL PASSED" : RED "✗ VMUL FAILED") << RESET << std::endl;
                
                // Test 4: VMAC
                print_vector_result(top, 0x260, "TEST 4: VMAC Result (A * B + C)");
                bool vmac_pass = verify_vmac(top, 0x100, 0x120, 0x140, 0x260);
                std::cout << (vmac_pass ? GREEN "✓ VMAC PASSED" : RED "✗ VMAC FAILED") << RESET << std::endl;
                
                // Test 5: 2x2 Matrix Multiply
                print_subheader("TEST 5: 2x2 Matrix Multiply");
                verify_2x2_matmul(top, 0x160, 0x180, 0x280);
                
                // Summary
                print_header("TEST SUMMARY");
                std::cout << "Total execution cycles: " << total_cycles << std::endl;
                std::cout << "Average cycles per operation: " << (total_cycles / 8) << std::endl;
                
                int tests_passed = vadd_pass + vsub_pass + vmul_pass + vmac_pass;
                std::cout << "\n" << BOLD;
                if (tests_passed == 4) {
                    std::cout << GREEN << "ALL TESTS PASSED! (" << tests_passed << "/4)" << RESET << std::endl;
                } else {
                    std::cout << RED << "SOME TESTS FAILED! (" << tests_passed << "/4 passed)" << RESET << std::endl;
                }
                
                break;
            }
        }
        
        sim_time++;
    }
    
    if (sim_time >= max_sim_time) {
        std::cout << RED << "ERROR: Simulation timeout!" << RESET << std::endl;
    }
    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    std::cout << "\nSimulation complete." << std::endl;
    return 0;
}
