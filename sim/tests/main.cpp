// sim/tests/main.cpp with matrix printing functionality

#include "Vsoc_top.h"
#include "Vsoc_top___024root.h"  // This contains the internal structure definitions
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip> // Required for std::setw and other manipulators
#include <string>  // Required for std::string

// ====================================================================================
// HELPER FUNCTION TO PRINT A MATRIX
// ====================================================================================
void print_matrix(Vsoc_top* top, uint32_t base_addr, const std::string& name) {
    std::cout << "---- " << name << " at 0x" << std::hex << base_addr << " ----" << std::dec << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "  ";
        for (int j = 0; j < 8; j++) {
            // Each element is a 4-byte word, so we divide the byte address by 4 for the index
            uint32_t addr = (base_addr >> 2) + (i * 8 + j);
            uint32_t data = top->rootp->soc_top__DOT__memory[addr];
            // Print in hex format with a fixed width for alignment
            std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << data << " ";
        }
        std::cout << std::dec << std::endl; // Switch back to decimal mode for the newline
    }
    std::cout << std::endl;
}
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
        std::cout << "Waveform tracing enabled. Output file: simulation.vcd" << std::endl;
    }

    // Enable debug output if requested
    const bool debug_mode = Verilated::commandArgsPlusMatch("DEBUG");
    if (debug_mode) {
        std::cout << "Debug mode enabled" << std::endl;
    }

    // Simulation parameters
    vluint64_t sim_time = 0;
    const vluint64_t max_sim_time = 2000000;
    const vluint64_t reset_time = 50;
    const vluint64_t finish_check_addr = 0x1000 >> 2; // Word address for finish flag
    const vluint64_t debug_addr = 0x2000 >> 2;        // Debug marker address

    std::cout << "Starting vector coprocessor simulation..." << std::endl;
    std::cout << "Reset time: " << reset_time << " time units" << std::endl;
    std::cout << "Max simulation time: " << max_sim_time << " time units" << std::endl;

    // Initialize signals
    top->clk_i = 0;
    top->rst_ni = 0;

    bool debug_marker_seen = false;

    while (sim_time < max_sim_time && !Verilated::gotFinish()) {
        // Reset control
        if (sim_time < reset_time) {
            top->rst_ni = 0;
        } else if (sim_time == reset_time) {
            top->rst_ni = 1;
            std::cout << "Reset released at time " << sim_time << std::endl;
        }

        // Generate clock (100MHz equivalent - period = 10 time units)
        top->clk_i = (sim_time % 10) >= 5;

        // Evaluate the model
        top->eval();

        // Dump waveforms if enabled
        if (tfp) {
            tfp->dump(sim_time);
        }

        // Check for completion and debug info (only on positive clock edges after reset)
        if (top->rst_ni && top->clk_i && (sim_time % 10 == 5)) {
            vluint64_t cycle = (sim_time - reset_time) / 10;

            // Check debug marker (program started)
            if (!debug_marker_seen && top->rootp->soc_top__DOT__memory[debug_addr] == 0xDEAD) {
                debug_marker_seen = true;
                std::cout << "Program execution started at cycle " << cycle << std::endl;
            }

            // Check for program completion
            if (top->rootp->soc_top__DOT__memory[finish_check_addr] == 1) {
                std::cout << "\nSUCCESS: Program completed!" << std::endl;
                std::cout << "  Completion time: " << sim_time << " time units" << std::endl;
                std::cout << "  Completion cycle: " << cycle << std::endl;

                // ====================================================================================
                // ---- ADDED CALLS TO PRINT MATRICES ON SUCCESS ----
                // ====================================================================================
                print_matrix(top, 0x100, "Matrix A (Input)");
                print_matrix(top, 0x140, "Matrix B (Input)");
                print_matrix(top, 0x200, "Matrix C (Result)");
                // ====================================================================================

                // Run a few more cycles to ensure all signals propagate for waveform
                for (int i = 0; i < 10; i++) {
                    sim_time++; top->clk_i = (sim_time % 10) >= 5; top->eval(); if(tfp) tfp->dump(sim_time);
                }
                break; // Exit the simulation loop
            }

            // Periodic status updates
            if (debug_mode && cycle % 5000 == 0 && cycle > 0) {
                std::cout << "Simulation progress: cycle " << cycle << " (time " << sim_time << ")" << std::endl;
            }
        }

        sim_time++;
    }

    // Final status
    if (sim_time >= max_sim_time) {
        std::cout << "\nERROR: Simulation reached maximum time limit!" << std::endl;
        std::cout << "Final simulation time: " << sim_time << " time units" << std::endl;
        std::cout << "Final cycle count: " << (sim_time / 10) << std::endl;
        // ... (rest of the timeout code is fine)
    }

    // Clean up
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;

    std::cout << "\nSimulation ended." << std::endl;
    return (sim_time >= max_sim_time) ? 1 : 0; // Return error code if timeout
}
