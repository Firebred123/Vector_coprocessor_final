// sim/tests/main_cached.cpp - Testbench for cached system
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsoc_top_with_cache.h"  // <--- FIXED: Was Vsoc_top_debug.h
#include <iostream>
#include <fstream>
#include <iomanip>

// Global time counter
vluint64_t main_time = 0;

// Time step
const vluint64_t TIME_STEP = 5;

// Called by $time in Verilog
double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vsoc_top_with_cache* top = new Vsoc_top_with_cache("top");  // <--- FIXED: Was Vsoc_top_debug
    
    // Tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = nullptr;
    
    // Check for +WAVES argument
    bool enable_waves = false;
    bool enable_debug = false;
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "+WAVES") {
            enable_waves = true;
        }
        if (std::string(argv[i]) == "+DEBUG") {
            enable_debug = true;
        }
    }
    
    if (enable_waves) {
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);  // Trace 99 levels of hierarchy
        tfp->open("simulation.vcd");
        std::cout << "Waveform tracing enabled - writing to simulation.vcd\n";
    }
    
    // Simulation parameters
    const int MAX_CYCLES = 1000000;
    const int RESET_CYCLES = 10;
    
    // Initialize signals
    top->clk_i = 0;
    top->rst_ni = 0;
    
    // Reset phase
    if (enable_debug) {
        std::cout << "=== Starting Reset Phase ===\n";
    }
    
    for (int i = 0; i < RESET_CYCLES * 2; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
        
        if (tfp) tfp->dump(main_time);
        main_time += TIME_STEP;
        
        if (i == RESET_CYCLES) {
            top->rst_ni = 1;  // Release reset
            if (enable_debug) {
                std::cout << "Reset released at time " << main_time << "\n";
            }
        }
    }
    
    // Main simulation loop
    if (enable_debug) {
        std::cout << "=== Starting Main Simulation ===\n";
        std::cout << "Running with caches enabled\n";
    }
    
    int cycle = 0;
    bool done = false;
    
    while (!done && cycle < MAX_CYCLES) {
        // Toggle clock
        top->clk_i = 0;
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += TIME_STEP;
        
        top->clk_i = 1;
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += TIME_STEP;
        
        cycle++;
        
        // Progress indicator every 10000 cycles
        if (enable_debug && cycle % 10000 == 0) {
            std::cout << "Cycle " << cycle << " @ time " << main_time << "\n";
        }
        
        // Check for simulation end (you can add your own termination condition)
        // For example, check if a specific memory location is set
        if (Verilated::gotFinish()) {
            done = true;
            if (enable_debug) {
                std::cout << "Simulation finished signal received\n";
            }
        }
    }
    
    // Final statistics
    std::cout << "\n=== Simulation Complete ===\n";
    std::cout << "Total cycles: " << cycle << "\n";
    std::cout << "Simulation time: " << main_time << " time units\n";
    
    if (cycle >= MAX_CYCLES) {
        std::cout << "Warning: Simulation stopped at maximum cycle count\n";
    }
    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    return 0;
}
