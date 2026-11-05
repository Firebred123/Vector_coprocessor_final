tclmode
set_screen_display -noprogress
set_dofile_abort exit

set wlec_analyze_dp_flowgraph true
set share_dp_analysis         true
set DATAPATH_SOLVER_OPTION "-flowgraph"

tcl_set_command_name_echo on

set_parallel_option -threads 1,4 -norelease_license
set_compare_options -threads 1,4

# Library
set_undefined_cell black_box -noascend -both
add_search_path /cadence/FOUNDRY/digital/45nm/dig/lib /cadence/FOUNDRY/digital/45nm/dig/lef -library -both
read_library -liberty -both /cadence/FOUNDRY/digital/45nm/dig/lib/slow.lib

# 1. Golden: Original RTL (Full Top, no black boxes)
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

# 2. Revised: Candidate R2 RTL (Full Top, no black boxes)
set_undriven_signal 0 -revised
set_naming_style rc -revised
set_naming_rule "%s\[%d\]" -instance_array -revised
set_naming_rule "%s_reg" -register -revised
set_naming_rule "%L.%s" "%L\[%d\].%s" "%s" -instance -revised
set_naming_rule "%L.%s" "%L\[%d\].%s" "%s" -variable -revised
set_naming_rule -ungroup_separator {_} -revised

delete_search_path -all -design -revised
add_search_path /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/include \
                /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/rtl/include \
                /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/include \
                /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/rtl/include -design -revised

read_design -enumconstraint -define SYNTHESIS -merge bbox -revised -lastmod -noelab -sv09 \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/rtl/include/cv32e40x_xif_pkg.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/rtl/core/vector_reg_file_3port.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/rtl/execution/vlsu.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/rtl/execution/vector_exec_unit.sv \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/cand/r2/rtl/core/vector_coprocessor.sv
elaborate_design -revised -root {vector_coprocessor} -rootonly -rootonly

uniquify -all -nolib -golden
uniquify -all -nolib -revised

report_design_data
report_black_box

# 3. Model Flattening Directives: Full Flattening across VLSU boundary
set_flatten_model -seq_constant
set_flatten_model -seq_constant_x_to 0
set_flatten_model -nodff_to_dlat_zero
set_flatten_model -nodff_to_dlat_feedback
set_flatten_model -hier_seq_merge
set_flatten_model -balanced_modeling

set_analyze_option -auto -report_map

set_system_mode lec

# 4. Key Point Diagnostics
puts "================ KEY POINT MAPPING REPORT ================"
report_unmapped_points -summary
report_unmapped_points -notmapped
puts "=========================================================="

add_compared_points -all
compare

report_compare_data -class nonequivalent -class abort -class notcompared
report_verification -verbose
report_statistics

puts "================ FINAL RESULTS: ORIG RTL vs R2 RTL ================"
puts "No of compare points = [get_compare_points -count]"
puts "No of diff points    = [get_compare_points -NONequivalent -count]"
puts "No of abort points   = [get_compare_points -abort -count]"
puts "No of unknown points = [get_compare_points -unknown -count]"
puts "==================================================================="

vpxmode
exit -f
