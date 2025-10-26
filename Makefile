# Makefile for Vector Coprocessor Simulation

# Tools
RISCV_PREFIX = riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
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

# Test selection
TEST ?= test_all_units_inline

# Files
ELF_FILE = $(TEST).elf
MEM_FILE = memory_words.hex
VCD_FILE = simulation.vcd

# RISC-V compilation flags
RISCV_CFLAGS = -march=rv32im -mabi=ilp32 -nostartfiles -T$(TEST_DIR)/link.ld -I$(TEST_DIR)

# Verilator flags
VERILATOR_FLAGS = --cc --exe --build -j 4 \
	--top-module soc_top \
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
	--Wno-fatal

# CV32E40X RTL files (essential only, no bhv/sva)
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

# Only essential behavioral model
CV32E40X_BHV = $(VENDOR_DIR)/bhv/cv32e40x_sim_clock_gate.sv

# Project RTL files
PROJECT_RTL = \
	$(RTL_DIR)/core/vector_reg_file.sv \
	$(RTL_DIR)/core/vector_reg_file_3port.sv \
	$(RTL_DIR)/execution/vmac_unit.sv \
	$(RTL_DIR)/execution/vlsu.sv \
	$(RTL_DIR)/core/vector_coprocessor.sv \
	$(SIM_DIR)/soc_top.sv

# Testbench
TESTBENCH = $(TEST_DIR)/main.cpp

# All RTL files
ALL_RTL = $(CV32E40X_RTL) $(CV32E40X_BHV) $(PROJECT_RTL)

# Default target
all: compile

# Clean target
clean:
	@echo "--- Cleaning up ---"
	rm -rf $(OBJ_DIR) *.vcd $(MEM_FILE) *.elf *.bin *.dump

# Compile RISC-V assembly
$(ELF_FILE): $(TEST_DIR)/$(TEST).s $(TEST_DIR)/link.ld $(TEST_DIR)/opcodes.inc
	@echo "--- Compiling RISC-V Assembly: $(TEST).s ---"
	$(CC) $(RISCV_CFLAGS) $(TEST_DIR)/$(TEST).s -o $(ELF_FILE)
	@echo "--- Disassembly ---"
	$(OBJDUMP) -d $(ELF_FILE) | head -50

# Convert ELF to memory file
$(MEM_FILE): $(ELF_FILE)
	@echo "--- Converting ELF to Memory File ---"
	$(OBJCOPY) -O binary $(ELF_FILE) $(TEST).bin
	hexdump -v -e '1/4 "%08x\n"' $(TEST).bin > $(MEM_FILE)
	@echo "Created $(MEM_FILE) with $$(wc -l < $(MEM_FILE)) words"
	rm -f $(TEST).bin

# Compile hardware with Verilator
compile: $(MEM_FILE)
	@echo "--- Compiling Hardware with Verilator ---"
	$(VERILATOR) $(VERILATOR_FLAGS) $(ALL_RTL) $(TESTBENCH)

# Run simulation
run: compile
	@echo "--- Running Simulation ---"
	cd $(OBJ_DIR) && ./Vsoc_top

# Run with debug output
run-debug: compile
	@echo "--- Running Simulation with Debug ---"
	cd $(OBJ_DIR) && ./Vsoc_top +DEBUG

# Run with waveforms
run-waves: compile
	@echo "--- Running Simulation with Waveforms ---"
	cd $(OBJ_DIR) && ./Vsoc_top +WAVES

# Run with both debug and waves
run-full: compile
	@echo "--- Running Full Debug Simulation ---"
	cd $(OBJ_DIR) && ./Vsoc_top +DEBUG +WAVES

# View waveforms
waves:
	gtkwave $(VCD_FILE) &

# Quick test (compile and run)
test: compile run

# Test with different programs
test-vmac:
	$(MAKE) clean
	$(MAKE) TEST=vmac_test run-debug

test-matmul:
	$(MAKE) clean
	$(MAKE) TEST=matmul_8x8 run-debug

test-vector:
	$(MAKE) clean
	$(MAKE) TEST=vector_test run-debug

# Help target
help:
	@echo "Available targets:"
	@echo "  all         - Compile everything (default)"
	@echo "  clean       - Clean build files"
	@echo "  compile     - Compile hardware and software"
	@echo "  run         - Run simulation"
	@echo "  run-debug   - Run with debug output"
	@echo "  run-waves   - Run with waveform dumping"
	@echo "  run-full    - Run with debug and waves"
	@echo "  waves       - View waveforms with GTKWave"
	@echo "  test        - Quick compile and run"
	@echo "  test-vmac   - Test VMAC instruction"
	@echo "  test-matmul - Test matrix multiply"
	@echo "  test-vector - Test vector load/store"
	@echo "  help        - Show this help"
	@echo ""
	@echo "To test a specific program:"
	@echo "  make TEST=your_test_name run"

.PHONY: all clean compile run run-debug run-waves run-full waves test test-vmac test-matmul test-vector help
