# cadence_genus_synth.tcl - Cadence Genus Synthesis Script
# Usage: genus -files commercial_flow/cadence_genus_synth.tcl

# Create output directories
shell mkdir -p reports_genus outputs_genus

# =========================================================================
# 1. Define Library and Search Paths
# =========================================================================
# Replace with the path to your university's PDK directory
set PDK_PATH "/path/to/your/commercial/pdk"

set_db init_lib_search_path [list "." "${PDK_PATH}/libs/lib"]
set_db init_hdl_search_path [list \
    "." \
    "./rtl/include" \
    "./vendor/cv32e40x/rtl/include" \
]

# Set timing target library (Liberty .lib format)
set_db library "sky130_fd_sc_hd__tt_025C_1v80.lib"

# Read files in SystemVerilog format
read_hdl -language sv {
    ./vendor/cv32e40x/rtl/include/cv32e40x_pkg.sv
    ./rtl/include/cv32e40x_xif_pkg.sv
    ./rtl/core/vector_reg_file.sv
    ./rtl/core/vector_reg_file_3port.sv
    ./rtl/execution/vlsu.sv
    ./rtl/execution/vmac_unit.sv
    ./rtl/execution/systolic_2x2.sv
    ./rtl/execution/vector_exec_unit.sv
    ./rtl/execution/vector_matmul_unit.sv
    ./rtl/core/vector_coprocessor.sv
}

# Elaborate the design
elaborate vector_coprocessor
redirect -to reports_genus/check_design.rpt {check_design -unresolved}

# =========================================================================
# 3. Apply Constraints
# =========================================================================
read_sdc commercial_flow/coprocessor_commercial.sdc

# =========================================================================
# 4. Synthesize Design
# =========================================================================
# syn_generic: RTL optimization and mapping to technology-independent gates
syn_generic

# syn_map: Mapping generic gates to target PDK standard cells
syn_map

# syn_opt: Gate-level optimization for timing, area, and power
syn_opt

# =========================================================================
# 5. Export Reports and Outputs
# =========================================================================
redirect -to reports_genus/area.rpt {report_area}
redirect -to reports_genus/timing.rpt {report_timing}
redirect -to reports_genus/power.rpt {report_power}
redirect -to reports_genus/gates.rpt {report_gates}

# Write outputs
redirect -to outputs_genus/vector_coprocessor.synth.v {write_hdl}
redirect -to outputs_genus/vector_coprocessor.synth.sdc {write_sdc}

exit
