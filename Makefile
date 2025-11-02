# Makefile for Vector Coprocessor with Cache Support

# Tools
RISCV_PREFIX = riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
AS = $(RISCV_PREFIX)as
LD = $(RISCV_PREFIX)ld
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump
VERILATOR = verilator

# Directories  
RTL_DIR = rtl
SIM_DIR = sim
TEST_DIR = $(SIM_DIR)/tests
VENDOR_DIR = vendor/cv32e40x
INC_DIR = include
OBJ_DIR = obj_dir
CACHE_DIR = cache_build

# Test selection
TEST ?= test_cache_full

# Files
ELF_FILE = $(TEST).elf
MEM_FILE = memory_words.hex
VCD_FILE = simulation.vcd

# RISC-V compilation flags
ARCH = rv32im
ABI = ilp32
RISCV_CFLAGS = -march=$(ARCH) -mabi=$(ABI) -nostartfiles -nostdlib
RISCV_LDFLAGS = -T$(TEST_DIR)/link.ld

# Verilator flags
VERILATOR_FLAGS = --cc --exe --build -j 4 \
	--top-module soc_top_with_cache \
	--timescale 1ns/1ps \
	--trace \
	-I$(VENDOR_DIR)/rtl/include/ \
	-I$(RTL_DIR)/include/ \
	-I$(INC_DIR) \
	-Wno-BLKANDNBLK \
	-Wno-UNOPTFLAT \
	-Wno-WIDTH \
	-Wno-LATCH \
	-Wno-CASEINCOMPLETE \
	-Wno-UNUSED \
	-Wno-PINMISSING \
	-Wno-IMPLICIT \
	-Wno-MODDUP \
	-Wno-TIMESCALEMOD \
	--Wno-fatal

# CV32E40X RTL files (core only)
CV32E40X_RTL = \
	$(VENDOR_DIR)/rtl/include/cv32e40x_pkg.sv \
	$(RTL_DIR)/include/cv32e40x_xif_pkg.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_if_xif.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_pc_target.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_pma.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_register_file.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_load_store_unit.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_int_controller.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_controller_bypass.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_id_stage.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_data_obi_interface.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_mult.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_mpu.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_cs_registers.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_wpt.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_csr.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_controller.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_ex_stage.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_alu.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_prefetcher.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_alu_b_cpop.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_lsu_response_filter.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_if_stage.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_write_buffer.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_i_decoder.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_prefetch_unit.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_register_file_wrapper.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_instr_obi_interface.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_wb_stage.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_debug_triggers.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_clic_int_controller.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_popcnt.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_controller_fsm.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_ff_one.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_alignment_buffer.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_sequencer.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_sleep_unit.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_div.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_m_decoder.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_compressed_decoder.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_align_check.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_if_c_obi.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_b_decoder.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_a_decoder.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_decoder.sv \
	$(VENDOR_DIR)/rtl/cv32e40x_core.sv

# Behavioral models
CV32E40X_BHV = $(VENDOR_DIR)/bhv/cv32e40x_sim_clock_gate.sv

# Vector coprocessor RTL
VECTOR_RTL = \
	$(RTL_DIR)/core/vector_reg_file_3port.sv \
	$(RTL_DIR)/execution/systolic_2x2.sv \
	$(RTL_DIR)/execution/vector_exec_unit.sv \
	$(RTL_DIR)/execution/vlsu.sv \
	$(RTL_DIR)/core/vector_coprocessor.sv

# SoC top with cache
SOC_TOP = $(SIM_DIR)/soc_top_with_cache.sv

# Testbench
TESTBENCH = $(TEST_DIR)/main.cpp

# All RTL files
ALL_RTL = $(CV32E40X_RTL) $(CV32E40X_BHV) $(VECTOR_RTL) $(SOC_TOP)

# =========================================================================
# Main Targets
# =========================================================================

.PHONY: all clean test compile run help

# Default target
all: test

# Help
help:
	@echo "===================== Cache Simulation Makefile ====================="
	@echo "Targets:"
	@echo "  make test           - Compile and run test with cache"
	@echo "  make compile        - Compile hardware only"
	@echo "  make run            - Run simulation (requires compile)"
	@echo "  make run-debug      - Run with debug output"
	@echo "  make run-waves      - Run with waveform generation"
	@echo "  make test-nocache   - Run without cache (baseline)"
	@echo "  make compare        - Compare cache vs no-cache performance"
	@echo "  make clean          - Clean all build files"
	@echo ""
	@echo "Test Programs:"
	@echo "  make TEST=test_cache_full   - Full cache test (default)"
	@echo "  make TEST=test_vmac         - VMAC instruction test"
	@echo "  make TEST=test_matmul       - Matrix multiply test"
	@echo "  make TEST=test_vector       - Vector operations test"
	@echo ""
	@echo "Options:"
	@echo "  make MEMORY_FILE=program.hex - Use custom memory file"
	@echo "====================================================================="

# Clean
clean:
	@echo "=== Cleaning build files ==="
	rm -rf $(OBJ_DIR) $(CACHE_DIR) *.vcd *.hex *.elf *.bin *.dump
	rm -f soc_top_with_cache.sv

# =========================================================================
# Compilation Steps
# =========================================================================

# Create test assembly program
$(TEST_DIR)/$(TEST).s:
	@echo "=== Creating test program: $(TEST).s ==="
	@mkdir -p $(TEST_DIR)
	@echo ".include \"opcodes.inc\"" > $@
	@echo ".section .text" >> $@
	@echo ".global _start" >> $@
	@echo "_start:" >> $@
	@echo "    # Initialize stack pointer" >> $@
	@echo "    li sp, 0x8000" >> $@
	@echo "" >> $@
	@echo "    # Test cache with multiple accesses" >> $@
	@echo "    # First access - cache miss" >> $@
	@echo "    li t0, 0x1000" >> $@
	@echo "    lw t1, 0(t0)" >> $@
	@echo "    # Second access - cache hit" >> $@
	@echo "    lw t2, 0(t0)" >> $@
	@echo "    # Different line - cache miss" >> $@
	@echo "    lw t3, 256(t0)" >> $@
	@echo "" >> $@
	@echo "    # Test vector operations" >> $@
	@echo "    li a0, 5" >> $@
	@echo "    li a1, 10" >> $@
	@echo "    .word 0x0052f00b  # vadd v0, a0, a1" >> $@
	@echo "" >> $@
	@echo "    # End test" >> $@
	@echo "end_test:" >> $@
	@echo "    j end_test" >> $@
	@echo "    nop" >> $@

# Compile assembly to ELF
$(ELF_FILE): $(TEST_DIR)/$(TEST).s $(TEST_DIR)/link.ld $(TEST_DIR)/opcodes.inc
	@echo "=== Compiling RISC-V Assembly ==="
	$(CC) $(RISCV_CFLAGS) $(RISCV_LDFLAGS) -I$(TEST_DIR) $(TEST_DIR)/$(TEST).s -o $(ELF_FILE)
	@echo "=== Disassembly ==="
	@$(OBJDUMP) -d $(ELF_FILE) | head -30

# Convert ELF to hex memory file
$(MEM_FILE): $(ELF_FILE)
	@echo "=== Converting to Memory File ==="
	$(OBJCOPY) -O binary $(ELF_FILE) $(TEST).bin
	hexdump -v -e '1/4 "%08x\n"' $(TEST).bin > $(MEM_FILE)
	@echo "Created $(MEM_FILE) with $$(wc -l < $(MEM_FILE)) words"
	@echo "First 10 words:"
	@head -10 $(MEM_FILE)
	@rm -f $(TEST).bin

# Ensure SOC file exists
$(SOC_TOP):
	@echo "=== Creating SoC with Cache ==="
	@if [ ! -f $(SOC_TOP) ]; then \
		echo "Error: $(SOC_TOP) not found. Run setup first."; \
		exit 1; \
	fi

# Compile hardware with Verilator
compile: $(MEM_FILE) $(SOC_TOP)
	@echo "=== Compiling Hardware with Verilator ==="
	$(VERILATOR) $(VERILATOR_FLAGS) $(ALL_RTL) $(TESTBENCH)
	@echo "=== Compilation Complete ==="

# =========================================================================
# Run Targets
# =========================================================================

# Basic run
run: compile
	@echo "=== Running Simulation with Cache ==="
	@cp $(MEM_FILE) $(OBJ_DIR)/
	cd $(OBJ_DIR) && ./Vsoc_top_with_cache +MEMORY_FILE=../$(MEM_FILE)

# Run with debug output
run-debug: compile
	@echo "=== Running with Debug Output ==="
	@cp $(MEM_FILE) $(OBJ_DIR)/
	cd $(OBJ_DIR) && ./Vsoc_top_with_cache +MEMORY_FILE=../$(MEM_FILE) +DEBUG

# Run with waveform generation
run-waves: compile
	@echo "=== Running with Waveform Generation ==="
	@cp $(MEM_FILE) $(OBJ_DIR)/
	cd $(OBJ_DIR) && ./Vsoc_top_with_cache +MEMORY_FILE=../$(MEM_FILE) +WAVES
	@echo "Waveform saved to $(OBJ_DIR)/simulation.vcd"

# Quick test
test: compile run
	@echo "=== Test Complete ==="

# =========================================================================
# Performance Comparison
# =========================================================================

# Run without cache (baseline)
test-nocache:
	@echo "=== Running WITHOUT Cache (Baseline) ==="
	# This would use the original soc_top.sv without caches
	# Implementation depends on having the non-cached version available

# Compare performance
compare:
	@echo "=== Performance Comparison: Cache vs No-Cache ==="
	@echo "Running with cache..."
	@make test > cache_run.log 2>&1
	@echo ""
	@echo "Cache Statistics:"
	@grep "Cache Statistics" cache_run.log | tail -5
	@echo ""
	@echo "To run without cache, use: make test-nocache"

# =========================================================================
# Specific Test Programs
# =========================================================================

test-vmac:
	@echo "=== Testing VMAC Instruction ==="
	$(MAKE) TEST=test_vmac test

test-matmul:
	@echo "=== Testing Matrix Multiply ==="
	$(MAKE) TEST=test_matmul test

test-vector:
	@echo "=== Testing Vector Operations ==="
	$(MAKE) TEST=test_vector test

# View waveforms
waves:
	gtkwave $(OBJ_DIR)/simulation.vcd &

# =========================================================================
# Cache Statistics
# =========================================================================

stats:
	@echo "=== Extracting Cache Statistics ==="
	@if [ -f cache_run.log ]; then \
		echo "I-Cache Hit Rate:"; \
		grep "I-Cache" cache_run.log | tail -1; \
		echo "D-Cache Hit Rate:"; \
		grep "D-Cache" cache_run.log | tail -1; \
		echo "IPC:"; \
		grep "Instructions" cache_run.log | tail -1; \
	else \
		echo "No statistics available. Run 'make test' first."; \
	fi

