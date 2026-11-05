# vector_coprocessor_impl.sdc -- "implementation SDC" (regime R1) for the area study.
# Derived from commercial_flow/coprocessor_commercial.sdc (regime R0, unchanged copy in
# vector_coprocessor.sdc). Used identically for the baseline RTL and every candidate.
# Changes (approved by method-review, rtl2gds/METHODOLOGY_REVIEW.md section 10):
#  1. Clock uncertainty split: setup 0.25 ns (unchanged), hold 0.05 ns. R0 applied
#     0.25 ns to hold too; with propagated clocks the measured skew (~0.10 ns) is already
#     in the analysis, and the 0.25 ns hold margin alone forced ~8.7k delay cells (+36%).
#  2. IO budget rebalanced from 12/12 ns to 10 ns input / 6 ns output delay, so the X-IF
#     same-cycle feedthrough (issue_req -> issue_resp / mem_req) is not negative by
#     construction (12+12+0.25 > 20 ns in R0).
#  3. Input transition 0.10 ns on inputs (R0 left 168 inputs at ideal 0 ns slew).
# coprocessor_commercial.sdc - Commercial SDC constraints for vector_coprocessor macro
# Compatible with Synopsys Design Compiler, Cadence Genus, Innovus, ICC2, PrimeTime, and Tempus.

# =========================================================================
# 1. Timing Units
# =========================================================================
set_units -time ns -resistance kOhm -capacitance pF -voltage V -current mA

# =========================================================================
# 2. Clock Constraints (50 MHz = 20 ns period)
# =========================================================================
create_clock -name clk -period 20.0 [get_ports clk_i]
set_clock_uncertainty -setup 0.25 [get_clocks clk]
set_clock_uncertainty -hold 0.05 [get_clocks clk]
set_clock_transition 0.15 [get_clocks clk]

# =========================================================================
# 3. Input & Output Budgets (X-IF & OBI interface constraints)
# =========================================================================
# BUDGETING MODEL:
# For hierarchical hardening, the 20.0 ns clock cycle is budgeted as:
# - Launch Delay (Host CPU logic path to pins): 8.0 ns (40% of cycle)
# - Interconnect Net Flight Delay: 4.0 ns (20% of cycle)
# - Coprocessor Capture Setup Delay: 8.0 ns (40% of cycle)
# SDC input_delay = Launch Delay + Net Delay = 8.0 + 4.0 = 12.0 ns.

# Apply input delays (signals coming from CPU)
set_input_delay -clock clk 10.0 [get_ports rst_ni]
set_input_delay -clock clk 10.0 [get_ports xif_issue_valid_i]
set_input_delay -clock clk 10.0 [get_ports xif_issue_req_i*]
set_input_delay -clock clk 10.0 [get_ports xif_commit_valid_i]
set_input_delay -clock clk 10.0 [get_ports xif_commit_i*]
set_input_delay -clock clk 10.0 [get_ports xif_result_ready_i]
set_input_delay -clock clk 10.0 [get_ports xif_mem_ready_i]
set_input_delay -clock clk 10.0 [get_ports xif_mem_resp_i*]
set_input_delay -clock clk 10.0 [get_ports xif_mem_result_valid_i]
set_input_delay -clock clk 10.0 [get_ports xif_mem_result_i*]

# Remove input delay on clock port itself
remove_input_delay [get_ports clk_i]
set_input_transition 0.10 [all_inputs]

# Apply output delays (signals traveling to CPU)
# SDC output_delay = Clock Period - Coprocessor Output Delay Budget = 20.0 - 8.0 = 12.0 ns.
set_output_delay -clock clk 6.0 [get_ports xif_issue_ready_o]
set_output_delay -clock clk 6.0 [get_ports xif_issue_resp_o*]
set_output_delay -clock clk 6.0 [get_ports xif_result_valid_o]
set_output_delay -clock clk 6.0 [get_ports xif_result_o*]
set_output_delay -clock clk 6.0 [get_ports xif_mem_valid_o]
set_output_delay -clock clk 6.0 [get_ports xif_mem_req_o*]

# =========================================================================
# 4. DRC Constraints (Design Rule Constraints)
# =========================================================================
# Limit maximum load on outputs to mimic downstream buffers (0.034 pF)
set_load 0.034 [all_outputs]

# Restrict maximum transition and capacitance rules
set_max_transition 0.50 [current_design]
set_max_fanout 20 [current_design]
