# Makefile additions for comprehensive testing

# Test all units
test-all: test-compile test-run

# Compile test
test-compile:
	@echo "$(BOLD)$(BLUE)===== Compiling Test Assembly =====$(RESET)"
	$(CC) $(RISCV_CFLAGS) sim/tests/test_all_units.s -o test_all.elf
	$(OBJCOPY) -O binary test_all.elf test_all.bin
	hexdump -v -e '1/4 "%08x\n"' test_all.bin > memory_words.hex
	rm -f test_all.bin
	@echo "$(GREEN)✓ Assembly compiled$(RESET)"
	
	@echo "$(BOLD)$(BLUE)===== Compiling Hardware =====$(RESET)"
	$(VERILATOR) $(VERILATOR_FLAGS) $(ALL_RTL) sim/tests/test_main.cpp
	@echo "$(GREEN)✓ Hardware compiled$(RESET)"

# Run test
test-run: test-compile
	@echo "$(BOLD)$(YELLOW)===== Running Tests =====$(RESET)"
	cd $(OBJ_DIR) && ./Vsoc_top

# Run with waveforms
test-waves: test-compile
	@echo "$(BOLD)$(YELLOW)===== Running Tests with Waveforms =====$(RESET)"
	cd $(OBJ_DIR) && ./Vsoc_top +WAVES
	@echo "$(GREEN)✓ Waveform saved to $(OBJ_DIR)/simulation.vcd$(RESET)"

# Individual unit tests
test-vadd:
	@echo "Testing VADD operation..."
	@$(MAKE) test-run TEST_OP=VADD

test-vsub:
	@echo "Testing VSUB operation..."
	@$(MAKE) test-run TEST_OP=VSUB

test-vmul:
	@echo "Testing VMUL operation..."
	@$(MAKE) test-run TEST_OP=VMUL

test-vmac:
	@echo "Testing VMAC operation..."
	@$(MAKE) test-run TEST_OP=VMAC

test-matmul:
	@echo "Testing Matrix Multiply..."
	@$(MAKE) test-run TEST_OP=MATMUL

# View waveforms
view-waves:
	gtkwave $(OBJ_DIR)/simulation.vcd &

# Clean test files
test-clean:
	rm -f test_all.elf memory_words.hex
	rm -f $(OBJ_DIR)/simulation.vcd

# Colors for output
BOLD := \033[1m
RED := \033[31m
GREEN := \033[32m
YELLOW := \033[33m
BLUE := \033[34m
RESET := \033[0m

.PHONY: test-all test-compile test-run test-waves test-vadd test-vsub test-vmul test-vmac test-matmul view-waves test-clean
