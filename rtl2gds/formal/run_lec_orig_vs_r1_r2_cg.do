// ==============================================================================
// Conformal LEC Diagnostics: Original RTL vs r1_r2_cg Netlist (Sequential Divergence)
// Tool: Cadence Conformal LEC 20.10-p100 (64-bit) with LowPower (-lp) Option
// Purpose: Proves structural absence of store_data_q (256 DFFs) in Candidate R2
// ==============================================================================

tclmode
set_screen_display -noprogress
set_dofile_abort exit

set wlec_analyze_dp_flowgraph true
set share_dp_analysis         true
set DATAPATH_SOLVER_OPTION "-flowgraph"

tcl_set_command_name_echo on

set_parallel_option -threads 1,4 -norelease_license
set_compare_options -threads 1,4

// 1. Read Standard Cell Liberty Library
set_undefined_cell black_box -noascend -both
add_search_path /cadence/FOUNDRY/digital/45nm/dig/lib /cadence/FOUNDRY/digital/45nm/dig/lef -library -both
read_library -liberty -both /cadence/FOUNDRY/digital/45nm/dig/lib/slow.lib

// 2. Read Golden Design: Original RTL (contains store_data_q 256 DFFs)
set_undriven_signal 0 -golden
set_naming_style rc -golden
set_naming_rule "%s\[%d\]" -instance_array -golden
set_naming_rule "%s_reg" -register -golden
set_naming_rule "%L.%s" "%L\[%d\].%s" "%s" -instance -golden
set_naming_rule "%L.%s" "%L\[%d\].%s" "%s" -variable -golden
set_naming_rule -ungroup_separator {_} -golden
set_hdl_options -const_port_extend
set_hdl_options -VERILOG_INCLUDE_DIR "incdir:sep:src:cwd"

delete_search_path -all -design -golden
add_search_path /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/include \
                /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/include -design -golden

read_design -enumconstraint -define SYNTHESIS -merge bbox -golden -lastmod -noelab -sv09 \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/include/cv32e40x_xif_pkg.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/core/vector_reg_file_3port.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/execution/vlsu.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/execution/vector_exec_unit.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/core/vector_coprocessor.sv
elaborate_design -golden -root {vector_coprocessor} -rootonly -rootonly

// 3. Read Revised Design: r1_r2_cg Netlist (Candidate R2: store_data_q removed)
read_design -verilog95 -revised -lastmod -noelab /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/runs/r1_r2_cg/genus/outputs/vector_coprocessor.v
elaborate_design -revised -root {vector_coprocessor}

uniquify -all -nolib -golden

report_design_data
report_black_box

// 4. Flatten Model Directives with Clock Gating Support
set_flatten_model -seq_constant
set_flatten_model -seq_constant_x_to 0
set_flatten_model -nodff_to_dlat_zero
set_flatten_model -nodff_to_dlat_feedback
set_flatten_model -hier_seq_merge
set_flatten_model -balanced_modeling

// Clock gating support
set_flatten_model -gated_clock
set_flatten_model -latch_fold_gated_clock
set_flatten_model -seq_constant_icg_latch

set_analyze_option -auto -report_map

// 5. Diagnostics on unmapped points before compare
set_system_mode lec

puts "================ UNMAPPED POINTS (ORIG vs R2) ================"
report_unmapped_points -summary
report_unmapped_points -notmapped
puts "=============================================================="

add_compared_points -all
compare

report_compare_data -class nonequivalent -class abort -class notcompared
report_verification -verbose
report_statistics

vpxmode
exit -f
