#!/bin/bash
# fix_hpdcache_setup.sh - Script to properly set up HPDcache without submodule issues

echo "=== Setting up HPDcache for CV32E40X integration ==="

# Remove the problematic submodule if it was partially added
if [ -d "vendor/hpdcache" ]; then
    echo "Removing existing hpdcache directory..."
    rm -rf vendor/hpdcache
    git submodule deinit -f vendor/hpdcache 2>/dev/null
    git rm -f vendor/hpdcache 2>/dev/null
    rm -rf .git/modules/vendor/hpdcache 2>/dev/null
fi

# Clone HPDcache without initializing its submodules
echo "Cloning HPDcache without submodules..."
git submodule add https://github.com/openhwgroup/cv-hpdcache.git vendor/hpdcache
cd vendor/hpdcache

# The skywater-pdk submodule is only needed for ASIC synthesis examples
# We don't need it for RTL integration
echo "Removing unnecessary submodule references..."
git config --local submodule.skywater-pdk-libs-sky130_fd_sc_hd.active false 2>/dev/null

# Go back to project root
cd ../..

# Create a list of the essential HPDcache files we need
echo "Creating file list for HPDcache integration..."
cat > vendor/hpdcache_files.txt << 'EOF'
# Essential HPDcache RTL files for integration
rtl/include/hpdcache_typedef.svh
rtl/include/hpdcache_param_pkg.sv
rtl/src/hpdcache_pkg.sv
rtl/src/hpdcache.sv
rtl/src/hpdcache_core.sv
rtl/src/hpdcache_core_arbiter.sv
rtl/src/hpdcache_core_controller.sv
rtl/src/hpdcache_core_mmu.sv
rtl/src/hpdcache_core_utils.sv
rtl/src/hpdcache_data.sv
rtl/src/hpdcache_data_ram.sv
rtl/src/hpdcache_data_ram_req_arbiter.sv
rtl/src/hpdcache_data_ram_resp_demux.sv
rtl/src/hpdcache_data_updt.sv
rtl/src/hpdcache_data_way_mux.sv
rtl/src/hpdcache_demux.sv
rtl/src/hpdcache_dir.sv
rtl/src/hpdcache_dir_victim_sel.sv
rtl/src/hpdcache_fxarb.sv
rtl/src/hpdcache_mem_req_arbiter.sv
rtl/src/hpdcache_mem_resp_demux.sv
rtl/src/hpdcache_memctrl.sv
rtl/src/hpdcache_miss_handler.sv
rtl/src/hpdcache_mux.sv
rtl/src/hpdcache_plru.sv
rtl/src/hpdcache_plru_class.sv
rtl/src/hpdcache_plru_tree.sv
rtl/src/hpdcache_req_arbiter.sv
rtl/src/hpdcache_rrarb.sv
rtl/src/hpdcache_rtab.sv
rtl/src/hpdcache_tag_cmp.sv
rtl/src/hpdcache_uncached.sv
rtl/src/hpdcache_victim_sel.sv
rtl/src/hpdcache_wbuf.sv

# Utilities
rtl/src/utils/hpdcache_fifo_reg.sv
rtl/src/utils/hpdcache_sram.sv
rtl/src/utils/hpdcache_sram_1rw.sv
rtl/src/utils/hpdcache_sram_1r1w.sv
rtl/src/utils/hpdcache_sram_1r1w_be.sv
rtl/src/utils/hpdcache_lfsr.sv
rtl/src/utils/hpdcache_one_hot_to_bin.sv
rtl/src/utils/hpdcache_fifo.sv

# Adapters (optional, but useful)
rtl/adapters/axi2mem/hpdcache_adapt_axi2mem.sv
EOF

echo ""
echo "=== HPDcache setup complete ==="
echo ""
echo "The HPDcache files are now available in vendor/hpdcache/"
echo "You don't need the skywater PDK submodule for RTL integration."
echo ""
echo "Next steps:"
echo "1. Add HPDcache files to your Makefile (see vendor/hpdcache_files.txt)"
echo "2. Include the HPDcache package in your design"
echo "3. Create an OBI-to-HPDcache adapter"
echo ""
