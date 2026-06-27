# Commercial ASIC Tool Flow Guide: Hardening & STA for Coprocessor

This guide provides instructions and templates for executing the physical design flow (RTL to GDS) and timing sign-off (STA) using commercial toolchains (Synopsys and Cadence) commonly available in university laboratories.

---

## 1. Overview of Commercial Toolchains

| Stage | Synopsys Toolchain | Cadence Toolchain |
| :--- | :--- | :--- |
| **1. RTL Synthesis** | **Design Compiler (DC)** / `dc_shell` | **Genus Synthesis** / `genus` |
| **2. Physical Design (PnR)**| **IC Compiler II (ICC2)** / `icc2_shell` | **Innovus Implementation** / `innovus` |
| **3. Sign-off STA** | **PrimeTime (PT)** / `pt_shell` | **Tempus Sign-off** / `tempus` |
| **4. Equivalence Checking** | **Formality** / `fm_shell` | **Conformal LEC** / `lec` |

All scripts are stored in the newly created [commercial_flow/](file:///Users/vs/function/coprocessor/commercial_flow) folder in your workspace root.

---

## 2. Phase 1: RTL Synthesis

In synthesis, high-level SystemVerilog RTL is compiled and mapped into technology standard cells.

### Option A: Using Synopsys Design Compiler (DC)
We have created **[synopsys_dc_synth.tcl](file:///Users/vs/function/coprocessor/commercial_flow/synopsys_dc_synth.tcl)**. Run synthesis using:

```bash
dc_shell -f commercial_flow/synopsys_dc_synth.tcl | tee dc_synthesis.log
```

* **Outputs**:
  * Gate Netlist: `outputs_dc/vector_coprocessor.synth.v`
  * Netlist constraints: `outputs_dc/vector_coprocessor.synth.sdc`
  * Setup/Hold Reports: `reports_dc/setup_timing.rpt` and `reports_dc/hold_timing.rpt`

### Option B: Using Cadence Genus
We have created **[cadence_genus_synth.tcl](file:///Users/vs/function/coprocessor/commercial_flow/cadence_genus_synth.tcl)**. Run synthesis using:

```bash
genus -files commercial_flow/cadence_genus_synth.tcl | tee genus_synthesis.log
```

* **Outputs**:
  * Gate Netlist: `outputs_genus/vector_coprocessor.synth.v`
  * Netlist constraints: `outputs_genus/vector_coprocessor.synth.sdc`
  * Setup/Hold Reports: `reports_genus/timing.rpt`

---

## 3. Phase 2: Place & Route (PnR / Block Hardening)

After synthesis, the gate-level netlist is imported into PnR tools (Cadence Innovus or Synopsys ICC2) to generate the physical GDSII layout. The steps to harden the coprocessor macro are:

```
  1. Floorplanning ──► 2. Power Grid ──► 3. Placement ──► 4. Clock Tree (CTS) ──► 5. Routing ──► 6. Verification & GDS
```

### Steps in Cadence Innovus (Command Summary)
Run Innovus (`innovus`) and execute the following sequence to build the layout:

```tcl
# 1. Initialize design
set_db init_verilog outputs_genus/vector_coprocessor.synth.v
set_db init_top_cell vector_coprocessor
set_db init_lef_file {tech.lef cells.lef}
set_db init_power_nets VDD
set_db init_ground_nets VSS
read_physical_db
init_design

# 2. Floorplanning: Define die boundary and pin placements
# Coprocessor has X-IF pins; place pins on the macro edge for core interface
create_floorplan -site core_site -aspect_ratio 1.0 -core_util 0.60 -std_cell_border_to_core 10.0

# 3. Power Grid Synthesis (Power Rings and Stripes)
add_rings -nets {VDD VSS} -width 2.0 -spacing 1.0 -layer top_metal
add_stripes -nets {VDD VSS} -width 1.0 -spacing 10.0 -layer intermediate_metal
sroute -connect {pad_ring pad_stripe block_ring block_stripe std_cell_pin}

# 4. Standard Cell Placement
place_design

# 5. Clock Tree Synthesis (CTS)
# Essential to buffer and balance clock networks to clk_i to limit skew
ccopt_design

# 6. Signal Routing (Global and Detail Routing)
route_design

# 7. Physical and Timing Verification
check_drc
check_connectivity
report_timing

# 8. Export Outputs
write_db outputs_pnr/vector_coprocessor.pnr.db
write_stream -map_file gds.map outputs_pnr/vector_coprocessor.gds  ;# Output GDSII!
write_spef outputs_pnr/vector_coprocessor.spef                    ;# Extract wire parasitics
```

---

## 4. Phase 3: Sign-Off Static Timing Analysis (STA)

After PnR, parasitic extraction (RC extraction) outputs a `.spef` file containing exact wiring delays. Sign-off STA reads the netlist and SPEF to ensure timing closure under best-case and worst-case corners.

### Option A: Using Synopsys PrimeTime
We have created **[synopsys_primetime.tcl](file:///Users/vs/function/coprocessor/commercial_flow/synopsys_primetime.tcl)**. Run using:

```bash
pt_shell -f commercial_flow/synopsys_primetime.tcl | tee primetime.log
```

* **Timing Reports**: Stored in `reports_pt/setup.rpt` and `reports_pt/hold.rpt`.

### Option B: Using Cadence Tempus
We have created **[cadence_tempus.tcl](file:///Users/vs/function/coprocessor/commercial_flow/cadence_tempus.tcl)**. Run using:

```bash
tempus -files commercial_flow/cadence_tempus.tcl | tee tempus.log
```

* **Timing Reports**: Stored in `reports_tempus/setup.rpt` and `reports_tempus/hold.rpt`.
