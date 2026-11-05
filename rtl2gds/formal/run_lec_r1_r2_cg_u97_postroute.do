tclmode
set_screen_display -noprogress
set_dofile_abort exit

set wlec_analyze_dp_flowgraph true
set share_dp_analysis         true
set DATAPATH_SOLVER_OPTION "-flowgraph"

tcl_set_command_name_echo on

set_parallel_option -threads 1,4 -norelease_license
set_compare_options -threads 1,4

# 1. Standard Cell Liberty Library
set_undefined_cell black_box -noascend -both
add_search_path /cadence/FOUNDRY/digital/45nm/dig/lib /cadence/FOUNDRY/digital/45nm/dig/lef -library -both
read_library -liberty -both /cadence/FOUNDRY/digital/45nm/dig/lib/slow.lib

# 2. Golden: Genus Synthesized Gate-Level Netlist (r1_r2_cg)
# SHA256: 8077824d3cc5315b789d84091a94cae1fa040641872240ae95bb8bc2c529c732
read_design -verilog95 -golden -lastmod -noelab \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/runs/r1_r2_cg/genus/outputs/vector_coprocessor.v
elaborate_design -golden -root {vector_coprocessor}

# 3. Revised: Innovus Post-Route P&R Gate-Level Netlist (r1_r2_cg_u97 - Secondary Candidate)
# SHA256: afc54f414c273111cb1835114f084ff04528e990dec115c47aae7a892620f45e
read_design -verilog95 -revised -lastmod -noelab \
    /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/runs/r1_r2_cg_u97/innovus/outputs/vector_coprocessor.final.v
elaborate_design -revised -root {vector_coprocessor}

uniquify -all -nolib -golden
uniquify -all -nolib -revised

report_design_data
report_black_box

# 4. Flatten Model Directives with Clock Gating Support
set_flatten_model -seq_constant
set_flatten_model -seq_constant_x_to 0
set_flatten_model -nodff_to_dlat_zero
set_flatten_model -nodff_to_dlat_feedback
set_flatten_model -hier_seq_merge
set_flatten_model -balanced_modeling

# Gated Clock Directives for ICG Cells
set_flatten_model -gated_clock
set_flatten_model -latch_fold_gated_clock
set_flatten_model -seq_constant_icg_latch

set_analyze_option -auto -report_map

set_system_mode lec

# 5. Mapping & Compare
puts "================ KEY POINT MAPPING REPORT ================"
report_unmapped_points -summary
report_unmapped_points -notmapped
puts "=========================================================="

add_compared_points -all
compare

report_compare_data -class nonequivalent -class abort -class notcompared
report_verification -verbose
report_statistics

puts "================ FINAL RESULTS: r1_r2_cg_u97 POST-ROUTE ================"
puts "No of compare points = [get_compare_points -count]"
puts "No of diff points    = [get_compare_points -NONequivalent -count]"
puts "No of abort points   = [get_compare_points -abort -count]"
puts "No of unknown points = [get_compare_points -unknown -count]"
puts "========================================================================"

vpxmode
exit -f
