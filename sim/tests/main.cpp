// sim/tests/main.cpp - Testbench for SoC with cache

#include "Vsoc_top_with_cache.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create top module instance
    Vsoc_top_with_cache* top = new Vsoc_top_with_cache;
    
    // Setup waveform dumping if requested
    VerilatedVcdC* tfp = nullptr;
    if (Verilated::commandArgsPlusMatch("WAVES")) {
        std::cout << "Enabling waveform generation..." << std::endl;
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        tfp->open("simulation.vcd");
    }
    
    // Check for debug mode
    bool debug = Verilated::commandArgsPlusMatch("DEBUG");
    if (debug) {
        std::cout << "Debug mode enabled" << std::endl;
    }
    
    // Initialize signals
    top->clk_i = 0;
    top->rst_ni = 0;
    
    // Reset sequence
    std::cout << "Starting reset sequence..." << std::endl;
    for (int i = 0; i < 10; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
        if (tfp) tfp->dump(i);
    }
    
    // Release reset
    top->rst_ni = 1;
    std::cout << "Reset released, starting simulation..." << std::endl;
    
    // Main simulation loop
    uint64_t cycle = 0;
    uint64_t max_cycles = 100000;
    
    while (!Verilated::gotFinish() && cycle < max_cycles) {
        // Toggle clock
        top->clk_i = !top->clk_i;
        
        // Evaluate model
        top->eval();
        
        // Dump waveforms if enabled
        if (tfp) tfp->dump(10 * cycle + 5 * top->clk_i);
        
        // Debug output every 1000 cycles
        if (debug && cycle % 1000 == 0 && top->clk_i) {
            std::cout << "Cycle: " << cycle << std::endl;
        }
        
        // Increment cycle counter on positive edge
        if (top->clk_i) {
            cycle++;
        }
    }
    
    // Final statistics
    std::cout << "\n=== Simulation Complete ===" << std::endl;
    std::cout << "Total cycles: " << cycle << std::endl;
    
    if (cycle >= max_cycles) {
        std::cout << "Simulation stopped due to cycle limit" << std::endl;
    }
    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
        std::cout << "Waveform saved to simulation.vcd" << std::endl;
    }
    
    delete top;
    
    return 0;
}
