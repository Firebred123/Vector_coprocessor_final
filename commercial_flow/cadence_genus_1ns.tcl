# cadence_genus_1ns.tcl - Genus Synthesis Script for VCoP (1.0 GHz ASAP7)
# Usage: genus -files commercial_flow/cadence_genus_1ns.tcl

# Create output directories
shell mkdir -p reports_genus_1ns outputs_genus_1ns

# =========================================================================
# 1. Define Library and Search Paths
# =========================================================================
# Set HDL search paths for include directories
set_db init_hdl_search_path [list \
    "." \
    "./rtl/include" \
    "./vendor/cv32e40x/rtl/include" \
]

# Set the 5 uncompressed ASAP7 Liberty timing library files from your PDK/LIB folder
set_db library [list \
    "PDK/LIB/asap7sc7p5t_AO_RVT_SS_nldm_211120.lib" \
    "PDK/LIB/asap7sc7p5t_INVBUF_RVT_SS_nldm_220122.lib" \
    "PDK/LIB/asap7sc7p5t_OA_RVT_SS_nldm_211120.lib" \
    "PDK/LIB/asap7sc7p5t_SEQ_RVT_SS_nldm_220123.lib" \
    "PDK/LIB/asap7sc7p5t_SIMPLE_RVT_SS_nldm_211120.lib" \
]

# =========================================================================
# 2. Read HDL and Elaborate
# =========================================================================
# Force Genus to parse all HDL files as SystemVerilog globally
set_db hdl_input_language system_verilog

# Read files in SystemVerilog format (minimal VCoP files only)
read_hdl -language sv {
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

# Elaborate the top design module
elaborate vector_coprocessor
check_design -unresolved > reports_genus_1ns/check_design_elaboration.rpt

# =========================================================================
# 3. Apply Constraints
# =========================================================================
# Reads the 1.0 ns (1.0 GHz) SDC file
read_sdc commercial_flow/coprocessor_1ns.sdc

# =========================================================================
# 4. Synthesize Design
# =========================================================================
# RTL logical compilation & generic cell mapping
syn_generic

# Map generic gates to ASAP7 standard cells
syn_map

# Gate-level timing, power, and area optimizations
syn_opt

# =========================================================================
# 5. Export Reports and Outputs
# =========================================================================
report_area > reports_genus_1ns/area.rpt
report_timing > reports_genus_1ns/timing.rpt
report_power > reports_genus_1ns/power.rpt
report_gates > reports_genus_1ns/gates.rpt

# Write out the synthesized structural gate-level verilog netlist & updated SDC
write_hdl > outputs_genus_1ns/vector_coprocessor.synth.v
write_sdc > outputs_genus_1ns/vector_coprocessor.synth.sdc

echo "=== Synthesis Complete. Netlist saved at: outputs_genus_1ns/vector_coprocessor.synth.v ==="
exit
