# synopsys_dc_synth.tcl - Synopsys Design Compiler Synthesis Script
# Usage: dc_shell -f commercial_flow/synopsys_dc_synth.tcl

# Create output directories if they do not exist
sh mkdir -p reports_dc outputs_dc

# =========================================================================
# 1. Define Library and Search Paths
# =========================================================================
# Replace with the path to your university's PDK directory
set PDK_PATH "/path/to/your/commercial/pdk"

set search_path [concat $search_path [list \
    "." \
    "./rtl/include" \
    "./vendor/cv32e40x/rtl/include" \
    "${PDK_PATH}/libs/db" \
]]

# Define target library (Standard cell .db timing database)
set target_library "sky130_fd_sc_hd__tt_025C_1v80.db"

# Define link library (* represents design files, dw_foundation represents Synopsys DesignWare)
set link_library [concat "*" $target_library "dw_foundation.sldb"]

# =========================================================================
# 2. Read and Elaborate Design
# =========================================================================
define_design_lib WORK -path ./work

# Analyze files in dependency order (SystemVerilog format)
analyze -format sysverilog ./vendor/cv32e40x/rtl/include/cv32e40x_pkg.sv
analyze -format sysverilog ./rtl/include/cv32e40x_xif_pkg.sv
analyze -format sysverilog ./rtl/core/vector_reg_file.sv
analyze -format sysverilog ./rtl/core/vector_reg_file_3port.sv
analyze -format sysverilog ./rtl/execution/vlsu.sv
analyze -format sysverilog ./rtl/execution/vmac_unit.sv
analyze -format sysverilog ./rtl/execution/systolic_2x2.sv
analyze -format sysverilog ./rtl/execution/vector_exec_unit.sv
analyze -format sysverilog ./rtl/execution/vector_matmul_unit.sv
analyze -format sysverilog ./rtl/core/vector_coprocessor.sv

# Elaborate top level hierarchy
elaborate vector_coprocessor
current_design vector_coprocessor

# Resolve reference links and verify design integrity
link
check_design > reports_dc/check_design.rpt

# =========================================================================
# 3. Apply Constraints
# =========================================================================
read_sdc commercial_flow/coprocessor_commercial.sdc

# =========================================================================
# 4. Synthesize Design
# =========================================================================
# compile_ultra executes high-level optimizations, register retiming, and datapath restructuring
compile_ultra

# =========================================================================
# 5. Export Reports and Outputs
# =========================================================================
report_area -hierarchy > reports_dc/area.rpt
report_timing -delay max -max_paths 10 > reports_dc/setup_timing.rpt
report_timing -delay min -max_paths 10 > reports_dc/hold_timing.rpt
report_constraint -all_violators > reports_dc/violators.rpt
report_power > reports_dc/power.rpt

# Write outputs
write -format verilog -hierarchy -output outputs_dc/vector_coprocessor.synth.v
write_sdc outputs_dc/vector_coprocessor.synth.sdc
write -format ddc -hierarchy -output outputs_dc/vector_coprocessor.synth.ddc

exit
