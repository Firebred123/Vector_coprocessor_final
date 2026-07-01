# coprocessor_1ns.sdc - SDC constraints for VCoP targeting 1.0 ns (1.0 GHz)
# Compatible with Cadence Genus, Innovus, and Tempus.

# Timing units
set_units -time ns -resistance kOhm -capacitance pF -voltage V -current mA

# Define main clock: 1.0 ns period (1.0 GHz)
create_clock -name clk -period 1.0 [get_ports clk_i]

# Clock uncertainty (e.g. 5% of cycle time for clock jitter margin = 0.05 ns)
set_clock_uncertainty 0.05 [get_clocks clk]

# Clock transition times
set_input_transition 0.02 [get_ports clk_i]

# IO Constraints: Assume 60% delay budget at the interface boundaries (Launch + Net = 0.6 ns)
# This leaves 40% (0.4 ns) setup time inside the coprocessor macro.
set_input_delay -clock clk 0.6 [all_inputs]
remove_input_delay [get_ports clk_i]

# Output delay budget = Clock Period - Coprocessor Output Budget = 1.0 - 0.4 = 0.6 ns.
set_output_delay -clock clk 0.6 [all_outputs]

# Set load model for outputs (approximate load of a small 7nm buffer pin ~ 0.005 pF)
set_load 0.005 [all_outputs]

# Design Rules
set_max_transition 0.15 [current_design]
set_max_fanout 15 [current_design]
