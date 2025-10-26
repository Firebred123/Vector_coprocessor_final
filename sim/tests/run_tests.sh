#!/bin/bash
# run_tests.sh - Automated test runner for vector coprocessor

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
BOLD='\033[1m'
NC='\033[0m' # No Color

# Function to print headers
print_header() {
    echo -e "${BOLD}${BLUE}========================================${NC}"
    echo -e "${BOLD}${YELLOW}$1${NC}"
    echo -e "${BOLD}${BLUE}========================================${NC}"
}

# Function to check if command exists
check_command() {
    if ! command -v $1 &> /dev/null; then
        echo -e "${RED}Error: $1 is not installed${NC}"
        exit 1
    fi
}

# Main test execution
main() {
    print_header "VECTOR COPROCESSOR TEST SUITE"
    
    # Check prerequisites
    echo "Checking prerequisites..."
    check_command "riscv64-unknown-elf-gcc"
    check_command "verilator"
    echo -e "${GREEN}✓ All prerequisites met${NC}\n"
    
    # Clean previous builds
    echo "Cleaning previous builds..."
    make clean > /dev/null 2>&1
    echo -e "${GREEN}✓ Clean complete${NC}\n"
    
    # Run tests
    print_header "COMPILING AND RUNNING TESTS"
    
    # Compile
    echo -e "${YELLOW}Compiling test assembly...${NC}"
    make test-compile
    if [ $? -ne 0 ]; then
        echo -e "${RED}✗ Compilation failed${NC}"
        exit 1
    fi
    echo -e "${GREEN}✓ Compilation successful${NC}\n"
    
    # Run tests
    echo -e "${YELLOW}Running tests...${NC}"
    make test-run | tee test_output.log
    
    # Parse results
    echo ""
    print_header "TEST RESULTS SUMMARY"
    
    # Check for passed tests
    VADD_PASS=$(grep "VADD PASSED" test_output.log)
    VSUB_PASS=$(grep "VSUB PASSED" test_output.log)
    VMUL_PASS=$(grep "VMUL PASSED" test_output.log)
    VMAC_PASS=$(grep "VMAC PASSED" test_output.log)
    MATMUL_PASS=$(grep "Matrix Multiply PASSED" test_output.log)
    
    TOTAL_TESTS=5
    PASSED_TESTS=0
    
    echo "Individual Test Results:"
    echo "------------------------"
    
    if [ ! -z "$VADD_PASS" ]; then
        echo -e "VADD:    ${GREEN}✓ PASSED${NC}"
        ((PASSED_TESTS++))
    else
        echo -e "VADD:    ${RED}✗ FAILED${NC}"
    fi
    
    if [ ! -z "$VSUB_PASS" ]; then
        echo -e "VSUB:    ${GREEN}✓ PASSED${NC}"
        ((PASSED_TESTS++))
    else
        echo -e "VSUB:    ${RED}✗ FAILED${NC}"
    fi
    
    if [ ! -z "$VMUL_PASS" ]; then
        echo -e "VMUL:    ${GREEN}✓ PASSED${NC}"
        ((PASSED_TESTS++))
    else
        echo -e "VMUL:    ${RED}✗ FAILED${NC}"
    fi
    
    if [ ! -z "$VMAC_PASS" ]; then
        echo -e "VMAC:    ${GREEN}✓ PASSED${NC}"
        ((PASSED_TESTS++))
    else
        echo -e "VMAC:    ${RED}✗ FAILED${NC}"
    fi
    
    if [ ! -z "$MATMUL_PASS" ]; then
        echo -e "MATMUL:  ${GREEN}✓ PASSED${NC}"
        ((PASSED_TESTS++))
    else
        echo -e "MATMUL:  ${RED}✗ FAILED${NC}"
    fi
    
    echo ""
    echo -e "${BOLD}Overall: $PASSED_TESTS/$TOTAL_TESTS tests passed${NC}"
    
    if [ $PASSED_TESTS -eq $TOTAL_TESTS ]; then
        echo -e "${BOLD}${GREEN}ALL TESTS PASSED! 🎉${NC}"
        exit 0
    else
        echo -e "${BOLD}${RED}SOME TESTS FAILED!${NC}"
        exit 1
    fi
}

# Run with options
if [ "$1" == "--waves" ]; then
    echo "Running with waveform generation..."
    make test-waves
    echo -e "${GREEN}✓ Waveform saved to obj_dir/simulation.vcd${NC}"
    echo "Opening GTKWave..."
    gtkwave obj_dir/simulation.vcd &
elif [ "$1" == "--debug" ]; then
    echo "Running in debug mode..."
    make test-run DEBUG=1
elif [ "$1" == "--help" ]; then
    echo "Usage: ./run_tests.sh [OPTIONS]"
    echo "Options:"
    echo "  --waves    Generate waveforms and open GTKWave"
    echo "  --debug    Run with debug output"
    echo "  --help     Show this help message"
else
    main
fi
