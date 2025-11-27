# Makefile for CPU vs Vector Coprocessor Performance Comparison
# This makefile builds and runs comprehensive performance tests

# Toolchain
RISCV_PREFIX = riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
AS = $(RISCV_PREFIX)as
LD = $(RISCV_PREFIX)ld
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump

# Directories
TEST_DIR = sim/tests
OBJ_DIR = obj_dir

# Compilation flags
CFLAGS = -march=rv32im_zicsr -mabi=ilp32 -nostartfiles -nostdlib -O2
ASFLAGS = -march=rv32im_zicsr -mabi=ilp32

# Test parameters (can be overridden)
NUM_ITERATIONS ?= 100
VECTOR_LEN ?= 8

.PHONY: all test-asm test-c compare clean help

all: compare

# =========================================
# Assembly Test (CPU vs Vector)
# =========================================
test-asm:
	@echo "=========================================="
	@echo "Building Assembly Comparison Test"
	@echo "=========================================="
	
	# Assemble the comparison test
	$(AS) $(ASFLAGS) vmac_performance_test.s -o vmac_comparison.o
	
	# Create linker script
	@echo "MEMORY { ram : ORIGIN = 0x00000000, LENGTH = 16K }" > link.ld
	@echo "SECTIONS {" >> link.ld
	@echo "  . = 0x00000000;" >> link.ld
	@echo "  .text : { *(.text) } > ram" >> link.ld
	@echo "  . = 0x100;" >> link.ld
	@echo "  .data : { *(.data) } > ram" >> link.ld
	@echo "}" >> link.ld
	
	# Link
	$(LD) -m elf32lriscv -T link.ld vmac_comparison.o -o vmac_comparison.elf
	
	# Convert to hex
	$(OBJCOPY) -O binary vmac_comparison.elf vmac_comparison.bin
	hexdump -v -e '1/4 "%08x\n"' vmac_comparison.bin > memory_words.hex
	@echo "Created memory_words.hex with $$(wc -l < memory_words.hex) words"
	
	# Create disassembly for debugging
	$(OBJDUMP) -d vmac_comparison.elf > vmac_comparison.dump
	
	# Copy to test directory
	cp memory_words.hex $(TEST_DIR)/
	
	# Run simulation
	@echo "Running assembly comparison test..."
	cd $(OBJ_DIR) && ./Vsoc_top +MEMORY_FILE=../$(TEST_DIR)/memory_words.hex > ../test_asm.log
	
	# Extract results
	@echo ""
	@echo "=== Assembly Test Results ==="
	@grep -A 30 "PERFORMANCE" test_asm.log || echo "No results found"
	@echo ""

# =========================================
# C Test (CPU vs Vector)
# =========================================
test-c:
	@echo "=========================================="
	@echo "Building C Comparison Test"
	@echo "=========================================="
	
	# Create startup code
	@echo ".section .text.init" > startup.s
	@echo ".globl _start" >> startup.s
	@echo "_start:" >> startup.s
	@echo "    li sp, 0x3000" >> startup.s
	@echo "    call main" >> startup.s
	@echo "hang: j hang" >> startup.s
	
	# Create linker script
	@echo "MEMORY { ram : ORIGIN = 0x00000000, LENGTH = 16K }" > link.ld
	@echo "SECTIONS {" >> link.ld
	@echo "  . = 0x00000000;" >> link.ld
	@echo "  .text : { *(.text.init) *(.text*) } > ram" >> link.ld
	@echo "  .rodata : { *(.rodata*) } > ram" >> link.ld
	@echo "  .data : { *(.data*) } > ram" >> link.ld
	@echo "  .bss : { *(.bss*) *(COMMON) } > ram" >> link.ld
	@echo "}" >> link.ld
	
	# Compile C test
	$(CC) $(CFLAGS) -T link.ld -DNUM_ITERATIONS=$(NUM_ITERATIONS) \
		startup.s vmac_performance_test.c -o vmac_comparison_c.elf
	
	# Convert to hex
	$(OBJCOPY) -O binary vmac_comparison_c.elf vmac_comparison_c.bin
	hexdump -v -e '1/4 "%08x\n"' vmac_comparison_c.bin > memory_words.hex
	@echo "Created memory_words.hex with $$(wc -l < memory_words.hex) words"
	
	# Create disassembly
	$(OBJDUMP) -d vmac_comparison_c.elf > vmac_comparison_c.dump
	
	# Copy to test directory
	cp memory_words.hex $(TEST_DIR)/
	
	# Run simulation
	@echo "Running C comparison test..."
	cd $(OBJ_DIR) && ./Vsoc_top +MEMORY_FILE=../$(TEST_DIR)/memory_words.hex > ../test_c.log
	
	# Extract results
	@echo ""
	@echo "=== C Test Results ==="
	@grep -A 30 "PERFORMANCE" test_c.log || echo "No results found"
	@echo ""

# =========================================
# Run Both Tests and Compare
# =========================================
compare: clean test-asm test-c
	@echo ""
	@echo "=========================================="
	@echo "FINAL COMPARISON SUMMARY"
	@echo "=========================================="
	@echo ""
	@echo "Assembly Implementation Results:"
	@echo "---------------------------------"
	@grep "Vector vs CPU" test_asm.log | head -2 || echo "No assembly results"
	@echo ""
	@echo "C Implementation Results:"
	@echo "---------------------------------"
	@grep "Vector vs CPU" test_c.log | head -2 || echo "No C results"
	@echo ""
	@echo "=========================================="
	@echo "Tests complete. Check test_asm.log and test_c.log for details."

# =========================================
# Quick Performance Check
# =========================================
quick-check:
	@echo "Quick Performance Check (last run):"
	@echo "====================================="
	@if [ -f test_c.log ]; then \
		echo "From C Test:"; \
		grep -E "cycles|speedup|Summary" test_c.log | head -10; \
	else \
		echo "No C test results found. Run 'make test-c' first."; \
	fi

# =========================================
# Build Custom Testbench
# =========================================
build-testbench:
	@echo "Building custom comparison testbench..."
	@echo "Note: This requires modifying your Verilator build"
	@echo "to use main_comparison.cpp instead of default main.cpp"

# =========================================
# Clean
# =========================================
clean:
	rm -f *.o *.elf *.bin *.hex *.dump *.log
	rm -f startup.s link.ld
	rm -f $(TEST_DIR)/memory_words.hex

# =========================================
# Help
# =========================================
help:
	@echo "CPU vs Vector Coprocessor Performance Comparison"
	@echo "================================================"
	@echo ""
	@echo "This makefile runs comprehensive performance tests comparing"
	@echo "traditional CPU processing against vector coprocessor for VMAC."
	@echo ""
	@echo "Targets:"
	@echo "  all/compare  - Run both assembly and C tests and compare"
	@echo "  test-asm     - Run assembly-only comparison test"
	@echo "  test-c       - Run C comparison test"
	@echo "  quick-check  - Display results from last run"
	@echo "  clean        - Remove all generated files"
	@echo "  help         - Show this help"
	@echo ""
	@echo "Configuration:"
	@echo "  NUM_ITERATIONS=N  - Number of iterations (default: 100)"
	@echo "  VECTOR_LEN=N      - Vector length (default: 8)"
	@echo ""
	@echo "Examples:"
	@echo "  make compare NUM_ITERATIONS=1000"
	@echo "  make test-c NUM_ITERATIONS=500"
	@echo "  make quick-check"
	@echo ""
	@echo "The tests measure:"
	@echo "  - Raw cycle counts for CPU vs Vector"
	@echo "  - Speedup factors"
	@echo "  - Cycles per element"
	@echo "  - Instruction counts and IPC"
	@echo ""
	@echo "Expected Results:"
	@echo "  Vector should achieve 4-8x speedup over basic CPU"
	@echo "  due to parallel processing of 8 elements."
