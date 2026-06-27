#!/bin/bash
# run_simulation.sh - Complete simulation run script

set -e

# Configuration
TEST_NAME="${1:-test_all_units_fixed}"
echo "=== Running simulation for: $TEST_NAME ==="

# Step 1: Compile the test program
echo "Step 1: Compiling test program..."
riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostartfiles \
    -Tsim/tests/link.ld -Isim/tests \
    sim/tests/${TEST_NAME}.s -o ${TEST_NAME}.elf

# Step 2: Check the assembly
echo "Step 2: Checking assembly (first 30 lines)..."
riscv64-unknown-elf-objdump -d ${TEST_NAME}.elf | head -30

# Step 3: Convert to hex
echo "Step 3: Converting to hex format..."
riscv64-unknown-elf-objcopy -O binary ${TEST_NAME}.elf ${TEST_NAME}.bin
hexdump -v -e '1/4 "%08x\n"' ${TEST_NAME}.bin > memory_words.hex
echo "Created memory_words.hex with $(wc -l < memory_words.hex) words"

# Step 4: Run the compile script
echo "Step 4: Compiling RTL with Verilator..."
chmod +x compile_verilator.sh
./compile_verilator.sh

# Step 5: Run the simulation
echo "Step 5: Running simulation..."
cd obj_dir
./Vsoc_top +DEBUG

echo "=== Simulation complete ==="
