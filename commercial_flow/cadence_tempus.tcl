# cadence_tempus.tcl - Cadence Tempus Timing Signoff Script
# Usage: tempus -files commercial_flow/cadence_tempus.tcl

# Create report directory
shell mkdir -p reports_tempus

# =========================================================================
# 1. Load Cell Libraries and Mapped Verilog Netlist
# =========================================================================
# Replace with the path to your university's PDK directory
set PDK_PATH "/path/to/your/commercial/pdk"

# Define cell libraries (.lib format)
set PDK_LIB "${PDK_PATH}/libs/lib/sky130_fd_sc_hd__tt_025C_1v80.lib"

read_lib -liberty $PDK_LIB
read_verilog outputs_genus/vector_coprocessor.synth.v

# Set top design
set_top_module vector_coprocessor

# =========================================================================
# 2. Read Timing Constraints (SDC)
# =========================================================================
read_sdc commercial_flow/coprocessor_commercial.sdc

# =========================================================================
# 3. Read Parasitics (Optional - used post-PnR/Layout)
# =========================================================================
# In a post-layout flow, read SPEF (Standard Parasitic Exchange Format)
# read_spef outputs_pnr/vector_coprocessor.spef

# =========================================================================
# 4. Analyze Timing and Export Reports
# =========================================================================
check_timing > reports_tempus/check_timing.rpt

# Generate timing reports
report_timing -early -max_paths 20 > reports_tempus/hold.rpt
report_timing -late -max_paths 20 > reports_tempus/setup.rpt
report_constraint -all_violators > reports_tempus/violators.rpt

exit
