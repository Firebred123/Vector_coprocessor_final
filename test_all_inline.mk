# Makefile.test - Simple makefile for testing

# Use standard RISC-V toolchain for now
RISCV_PREFIX = riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
AS = $(RISCV_PREFIX)as
LD = $(RISCV_PREFIX)ld
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump

# Flags
ARCH = rv32im
ABI = ilp32
CFLAGS = -march=$(ARCH) -mabi=$(ABI) -nostartfiles
LDFLAGS = -Tsim/tests/link.ld

# Verilator
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build -j --trace \
    --top-module soc_top \
    -Wno-WIDTH -Wno-UNUSED -Wno-BLKSEQ -Wno-CASEINCOMPLETE

# Directories
OBJ_DIR = obj_dir

# Quick test
quick-test:
	@echo "=== Compiling Assembly ==="
	$(CC) $(CFLAGS) $(LDFLAGS) sim/tests/test_all_units_inline.s -o test.elf
	$(OBJCOPY) -O binary test.elf test.bin
	hexdump -v -e '1/4 "%08x\n"' test.bin > memory_words.hex
	@echo "=== Assembly compiled successfully ==="
	
	@echo "=== Checking generated instructions ==="
	$(OBJDUMP) -d test.elf | grep -A 20 "_start:"
	
	@echo "=== Compiling Verilator ==="
	$(VERILATOR) $(VERILATOR_FLAGS) \
	    -Ivendor/cv32e40x/rtl/include \
	    -Irtl/include \
	    -Iinclude \
	    vendor/cv32e40x/rtl/include/cv32e40x_pkg.sv \
	    rtl/include/cv32e40x_xif_pkg.sv \
	    rtl/core/vector_reg_file_3port.sv \
	    rtl/execution/vlsu.sv \
	    rtl/execution/systolic_2x2.sv \
	    rtl/execution/vector_exec_unit.sv \
	    rtl/core/vector_coprocessor.sv \
	    sim/soc_top.sv \
	    sim/tests/test_main.cpp
	
	@echo "=== Running Test ==="
	cd $(OBJ_DIR) && ./Vsoc_top

clean-test:
	rm -f test.elf test.bin memory_words.hex
	rm -rf $(OBJ_DIR)

.PHONY: quick-test clean-test
