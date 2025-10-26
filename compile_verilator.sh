#!/bin/bash
# compile_verilator.sh - Compile only essential RTL files

set -e  # Exit on error

echo "=== Compiling with Verilator (Essential RTL only) ==="

# Clean previous build
rm -rf obj_dir

# Compile with Verilator - excluding problematic bhv and sva files
verilator --cc --exe --build -j 4 \
    --top-module soc_top \
    --timescale 1ns/1ps \
    --trace \
    -I./vendor/cv32e40x/rtl/include/ \
    -I./rtl/include/ \
    -I./include/ \
    -Wno-BLKANDNBLK \
    -Wno-UNOPTFLAT \
    -Wno-WIDTH \
    -Wno-LATCH \
    -Wno-CASEINCOMPLETE \
    -Wno-UNUSED \
    -Wno-PINMISSING \
    -Wno-IMPLICIT \
    --Wno-fatal \
    vendor/cv32e40x/rtl/include/cv32e40x_pkg.sv \
    rtl/include/cv32e40x_xif_pkg.sv \
    vendor/cv32e40x/rtl/cv32e40x_if_xif.sv \
    vendor/cv32e40x/rtl/cv32e40x_pc_target.sv \
    vendor/cv32e40x/rtl/cv32e40x_pma.sv \
    vendor/cv32e40x/rtl/cv32e40x_register_file.sv \
    vendor/cv32e40x/rtl/cv32e40x_load_store_unit.sv \
    vendor/cv32e40x/rtl/cv32e40x_int_controller.sv \
    vendor/cv32e40x/rtl/cv32e40x_controller_bypass.sv \
    vendor/cv32e40x/rtl/cv32e40x_id_stage.sv \
    vendor/cv32e40x/rtl/cv32e40x_data_obi_interface.sv \
    vendor/cv32e40x/rtl/cv32e40x_mult.sv \
    vendor/cv32e40x/rtl/cv32e40x_mpu.sv \
    vendor/cv32e40x/rtl/cv32e40x_cs_registers.sv \
    vendor/cv32e40x/rtl/cv32e40x_wpt.sv \
    vendor/cv32e40x/rtl/cv32e40x_csr.sv \
    vendor/cv32e40x/rtl/cv32e40x_controller.sv \
    vendor/cv32e40x/rtl/cv32e40x_ex_stage.sv \
    vendor/cv32e40x/rtl/cv32e40x_alu.sv \
    vendor/cv32e40x/rtl/cv32e40x_prefetcher.sv \
    vendor/cv32e40x/rtl/cv32e40x_alu_b_cpop.sv \
    vendor/cv32e40x/rtl/cv32e40x_lsu_response_filter.sv \
    vendor/cv32e40x/rtl/cv32e40x_if_stage.sv \
    vendor/cv32e40x/rtl/cv32e40x_write_buffer.sv \
    vendor/cv32e40x/rtl/cv32e40x_i_decoder.sv \
    vendor/cv32e40x/rtl/cv32e40x_prefetch_unit.sv \
    vendor/cv32e40x/rtl/cv32e40x_register_file_wrapper.sv \
    vendor/cv32e40x/rtl/cv32e40x_instr_obi_interface.sv \
    vendor/cv32e40x/rtl/cv32e40x_wb_stage.sv \
    vendor/cv32e40x/rtl/cv32e40x_debug_triggers.sv \
    vendor/cv32e40x/rtl/cv32e40x_clic_int_controller.sv \
    vendor/cv32e40x/rtl/cv32e40x_popcnt.sv \
    vendor/cv32e40x/rtl/cv32e40x_controller_fsm.sv \
    vendor/cv32e40x/rtl/cv32e40x_ff_one.sv \
    vendor/cv32e40x/rtl/cv32e40x_alignment_buffer.sv \
    vendor/cv32e40x/rtl/cv32e40x_sequencer.sv \
    vendor/cv32e40x/rtl/cv32e40x_sleep_unit.sv \
    vendor/cv32e40x/rtl/cv32e40x_div.sv \
    vendor/cv32e40x/rtl/cv32e40x_m_decoder.sv \
    vendor/cv32e40x/rtl/cv32e40x_compressed_decoder.sv \
    vendor/cv32e40x/rtl/cv32e40x_align_check.sv \
    vendor/cv32e40x/rtl/cv32e40x_if_c_obi.sv \
    vendor/cv32e40x/rtl/cv32e40x_b_decoder.sv \
    vendor/cv32e40x/rtl/cv32e40x_a_decoder.sv \
    vendor/cv32e40x/rtl/cv32e40x_decoder.sv \
    vendor/cv32e40x/rtl/cv32e40x_core.sv \
    vendor/cv32e40x/bhv/cv32e40x_sim_clock_gate.sv \
    rtl/core/vector_reg_file.sv \
    rtl/core/vector_reg_file_3port.sv \
    rtl/execution/vmac_unit.sv \
    rtl/execution/vlsu.sv \
    rtl/core/vector_coprocessor.sv \
    sim/soc_top.sv \
    sim/tests/main.cpp

if [ $? -eq 0 ]; then
    echo "=== Compilation successful! ==="
    echo "Executable created at: obj_dir/Vsoc_top"
else
    echo "=== Compilation failed ==="
    exit 1
fi
