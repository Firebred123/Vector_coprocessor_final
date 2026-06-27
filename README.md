# RISC-V CPU + Vector Coprocessor (VCoP) System

This repository contains the design, simulation, and verification files for a **RISC-V Vector Coprocessor (VCoP)** integrated with an OpenHW Group **CV32E40X CPU Core**. The system is accelerated using custom vector instructions (Custom-0 space, 0x0B opcode) and interfaces with custom Direct-Mapped caches via the Open Bus Interface (OBI).

---

## Repository Structure

The directory structure is organized as follows:
* **`rtl/`**: Register-Transfer Level (RTL) hardware design source code.
  * **`rtl/core/`**: Main coprocessor controller ([vector_coprocessor.sv](file:///Users/vs/function/coprocessor/rtl/core/vector_coprocessor.sv)) implementing the OpenHW eXtension Interface (X-IF), and the vector register files ([vector_reg_file.sv](file:///Users/vs/function/coprocessor/rtl/core/vector_reg_file.sv) and [vector_reg_file_3port.sv](file:///Users/vs/function/coprocessor/rtl/core/vector_reg_file_3port.sv)) offering 3 read ports and 1 write port.
  * **`rtl/execution/`**: Datapaths for element-wise vector arithmetic ([vector_exec_unit.sv](file:///Users/vs/function/coprocessor/rtl/execution/vector_exec_unit.sv)), zero-latency vector load-store memory serialization ([vlsu.sv](file:///Users/vs/function/coprocessor/rtl/execution/vlsu.sv)), and matrix multiplication ([vector_matmul_unit.sv](file:///Users/vs/function/coprocessor/rtl/execution/vector_matmul_unit.sv)) driven by a 2×2 skewed processing element grid ([systolic_2x2.sv](file:///Users/vs/function/coprocessor/rtl/execution/systolic_2x2.sv)).
  * **`rtl/cache/`**: OBI-compliant direct-mapped Cache Controller ([simple_cache.sv](file:///Users/vs/function/coprocessor/rtl/cache/simple_cache.sv)) along with RAM behaviors for Tag and Data array caches.
  * **`rtl/adapters/`**: Adapters (e.g. [obi_cache_adapter.sv](file:///Users/vs/function/coprocessor/rtl/adapters/obi_cache_adapter.sv)) that bridge custom hardware interfaces to Open Bus Interface (OBI) protocols.
* **`include/`**: C and SystemVerilog headers, including [custom_opcodes.vh](file:///Users/vs/function/coprocessor/include/custom_opcodes.vh), defining custom R-type instruction encodings, function values, and matrix modes.
* **`sim/`**: Verification and simulation environments.
  * **`sim/tests/`**: Assembly test cases (`vmac_test.s`, `matmul_test.s`, etc.), C test applications, linker scripts, and the regression test runner [run_tests.sh](file:///Users/vs/function/coprocessor/sim/tests/run_tests.sh).
  * **`sim/tb/`**: C++ testbench files utilized by Verilator to drive clocks, reset, and memory initialization.
  * **`sim/soc_top_with_cache.sv`**: SoC top module instantiating the CPU core, VCoP, ICache, DCache, and the bus arbiter.
* **`vendor/`**: Third-party IP libraries. Specifically contains open-source code for OpenHW Group's **CV32E40X RISC-V CPU Core**.
* **`yosys/`**: Synthesis environment folder containing synthesis scripts for area and gate count estimation.
* **`skywater-pdk-libs-sky130_fd_sc_hd/`**: Vendored standard cell libraries (SkyWater 130nm) used to map gates during Yosys synthesis.
* **`ARCHITECTURE.md`**: Comprehensive architectural specification, timing behavior, and programming manual.

---

## Prerequisites

Before running the simulation or compiling software, ensure the following dependencies are installed:
1. **RISC-V GNU Toolchain** (`riscv64-unknown-elf-gcc` compiled with `ilp32` ABI / `rv32im` architecture support).
2. **Verilator** (verilog simulation engine, version 5.0+ recommended).
3. **Yosys** (optional, for gate synthesis estimation).
4. **GTKWave** (optional, for tracing signal waveforms).

---

## Quick Start & Verification

### Running the Test Suite
The easiest way to verify the entire system functionality (including VADD, VSUB, VMUL, VMAC, and Systolic Matrix Multiplication) is to use the automated test script:

```bash
cd sim/tests
./run_tests.sh
```

To run the tests with waveform trace generation:
```bash
./run_tests.sh --waves
```

To run with full debugging logging:
```bash
./run_tests.sh --debug
```

---

## Makefile Targets

You can configure and run individual simulations using the root [Makefile](file:///Users/vs/function/coprocessor/Makefile):

| Target | Command | Description |
| :--- | :--- | :--- |
| **Run Default Test** | `make test` | Compiles and executes `test_cache_full` (default) with caching enabled. |
| **Hw Compilation Only**| `make compile` | Runs Verilator compilation on SystemVerilog files. |
| **Run Simulation** | `make run` | Runs compiled C++ executable testbench. |
| **Run in Debug Mode**  | `make run-debug` | Runs simulator with internal debug logs printed to console. |
| **Generate Waveforms** | `make run-waves` | Runs simulation and dumps signals to `simulation.vcd`. |
| **Baseline Test** | `make test-nocache` | Runs the test with caches bypassed (direct memory mapping). |
| **Performance Compare**| `make compare` | Compares execution cycles between Cache-Enabled vs Cache-Disabled runs. |
| **Clean Build** | `make clean` | Removes compiled binaries, object folders, and `.vcd`/`.hex` files. |

### Selecting a Specific Test Program
To run a specific test program from the `sim/tests/` folder, use the `TEST` variable:

```bash
# Run Vector VMAC verification
make test TEST=test_vmac

# Run Matrix Multiplication verification
make test TEST=test_matmul

# Run Basic Vector Addition/Subtraction verification
make test TEST=test_vector
```

---

## Software Programming

Software interacts with VCoP by compiling custom instructions using assembly `.word` encodings in either assembly (.s) or inline macros inside C (.c) applications.

See **[ARCHITECTURE.md](file:///Users/vs/function/coprocessor/ARCHITECTURE.md)** for a complete instruction map, register details, assembly templates, and C macro libraries.
