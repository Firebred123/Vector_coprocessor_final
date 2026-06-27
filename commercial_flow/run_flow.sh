#!/bin/bash
# run_flow.sh - Master Automation Script for ASIC Digital Design Flow
# Synthesizes the design and automatically runs timing sign-off.
# Usage: ./commercial_flow/run_flow.sh [synopsys | cadence]

# Exit on any command failure
set -e

TOOLCHAIN=${1:-"synopsys"}

# Colors for output logging
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

print_status() {
    echo -e "${YELLOW}>>> $1${NC}"
}

print_success() {
    echo -e "${GREEN}>>> $1${NC}"
}

print_error() {
    echo -e "${RED}>>> ERROR: $1${NC}"
    exit 1
}

# =========================================================================
# Step 1: Logic Synthesis
# =========================================================================
if [ "$TOOLCHAIN" == "synopsys" ]; then
    print_status "Starting Logic Synthesis with Synopsys Design Compiler (dc_shell)..."
    
    # Run Design Compiler in batch mode
    dc_shell -f commercial_flow/synopsys_dc_synth.tcl | tee dc_synthesis.log
    
    # Check if output gate netlist was created successfully
    if [ ! -f "outputs_dc/vector_coprocessor.synth.v" ]; then
        print_error "Design Compiler failed to generate gate netlist!"
    fi
    print_success "Synthesis complete! Gate netlist generated at: outputs_dc/vector_coprocessor.synth.v"

elif [ "$TOOLCHAIN" == "cadence" ]; then
    print_status "Starting Logic Synthesis with Cadence Genus (genus)..."
    
    # Run Genus in batch mode
    genus -files commercial_flow/cadence_genus_synth.tcl | tee genus_synthesis.log
    
    if [ ! -f "outputs_genus/vector_coprocessor.synth.v" ]; then
        print_error "Cadence Genus failed to generate gate netlist!"
    fi
    print_success "Synthesis complete! Gate netlist generated at: outputs_genus/vector_coprocessor.synth.v"

else
    print_error "Invalid toolchain option: '$TOOLCHAIN'. Use 'synopsys' or 'cadence'."
fi

# =========================================================================
# Step 2: Note on Physical Design (PnR)
# =========================================================================
echo ""
echo -e "${YELLOW}------------------------------------------------------------${NC}"
echo -e "  NOTE ON PLACE & ROUTE (PnR) AUTOMATION"
echo -e "------------------------------------------------------------"
echo -e "  In a full ASIC flow, you would now execute PnR (Innovus or ICC2)."
echo -e "  Since PnR requires coordinate checking and floorplanning debug,"
echo -e "  engineers often run PnR interactively in GUI mode first."
echo -e "  Once stable, PnR is automated in batch mode using:"
echo -e "  e.g., innovus -batch -files commercial_flow/run_pnr.tcl"
echo -e "------------------------------------------------------------${NC}"
echo ""

# =========================================================================
# Step 3: Sign-Off Static Timing Analysis (STA)
# =========================================================================
if [ "$TOOLCHAIN" == "synopsys" ]; then
    print_status "Starting Timing Sign-Off with Synopsys PrimeTime (pt_shell)..."
    
    # Run PrimeTime in batch mode
    pt_shell -f commercial_flow/synopsys_primetime.tcl | tee primetime.log
    
    print_success "PrimeTime STA complete! Timing reports saved in: reports_pt/"

elif [ "$TOOLCHAIN" == "cadence" ]; then
    print_status "Starting Timing Sign-Off with Cadence Tempus (tempus)..."
    
    # Run Tempus in batch mode
    tempus -files commercial_flow/cadence_tempus.tcl | tee tempus.log
    
    print_success "Tempus STA complete! Timing reports saved in: reports_tempus/"
fi

print_success "ASIC Flow Run Complete! Setup and Hold slacks are ready for review."
