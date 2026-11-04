# Independent Methodology & Area Optimization Review

**Project**: Vector Coprocessor (VCoP) RTL-to-GDS Hardening
**Author**: `method-review` (Independent Reviewer)
**Target Design Top**: `vector_coprocessor`
**Date**: November 2026
**Status**: Evidence-Grounded Methodology Review & Implementation Audit

---

## 1. Executive Summary & Audit Scope

This report provides an independent methodology audit of the RTL-to-GDS flow, physical collateral feasibility, SDC timing constraints, area optimization choices, formal equivalence requirements, and runtime synthesis diagnostics for the `vector_coprocessor` macro.

In accordance with [COORDINATION.md](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/COORDINATION.md):
- `phys-lead` is the sole writer driving live Genus and Innovus EDA sessions via RTL2GDS_MCP.
- `method-review` maintains strict independence, performing no live tool mutations or source code overrides.
- All conclusions in this review distinguish verified tool evidence from analytical hypotheses, avoiding unsupported numerical claims.

---

## 2. Physical Collateral & PDK Feasibility Audit

### 2.1 Collateral Inventory
A complete RTL-to-GDS physical flow requires both logical timing libraries (`.lib`) and physical layout abstractions (`.lef`):

1. **Local ASAP7 7nm Collateral (`PDK/LIB/asap7sc7p5t_*.lib`)**:
   - **Status**: *Incomplete for Physical PnR*.
   - **Observed Fact**: The workspace contains Liberty NLDM timing models (`asap7sc7p5t_*_SS_nldm_*.lib`), but **no Tech LEF or standard cell LEFs exist in the local repository**.
   - **Verdict**: Innovus cannot place cells, build clock trees, or route metals without physical LEFs. Local ASAP7 collateral cannot support a complete PnR flow without external files.
2. **Server-Side SCL 180nm Collateral (`/cadence/scl180/...`)**:
   - **Status**: Complete (Liberty `.lib`, Tech LEF, Cell LEF present on server).
3. **Server-Side Cadence GPDK 45nm Collateral (`/cadence/FOUNDRY/digital/45nm/dig`)**:
   - **Status**: *Recommended & Feasible*.
   - **Observed Collateral Paths**:
     * Timing models: `lib/slow.lib` (10 MB), `typical.lib`, `fast.lib`.
     * Physical layout LEFs: `lef/gsclib045_tech.lef` (18 KB), `lef/gsclib045_macro.lef` (1.6 MB).
     * Quantus QRC parasitics: `qx/qrcTechFile` (201 MB) and layer map `qx/mapFile`.
     * Cell GDSII: `/cadence/FOUNDRY/stdcell/lan/flow/t1u1/reference_libs/GPDK045/gsclib045_all_v4.4/gsclib045/gds/gsclib045.gds` (9.3 MB).
   - **Verdict**: Fully viable for Genus Physical Layout Estimation (PLE) and closed-loop Innovus PnR.

### 2.2 Collateral Verification Items
- **Unit Consistency**: Ensure SDC `set_units` matches Liberty library defaults (`slow.lib`: time unit `1ns`, capacitive load unit `1pF`).

---

## 3. Stage Ordering & Interactive Flow Safety

### 3.1 RTL2GDS_MCP Operating Safeguards
- Genus and Innovus are driven via persistent FIFOs (`MCP_genus.command`, `MCP_innovus.command`) connected to interactive GUI event loops.
- **Rule**: Flow scripts must **never** call `exit` or `quit`. Sourcing scripts containing `exit` terminates the GUI and permanently drops the MCP bridge.
- Modular Tcl procs (e.g. [`rtl2gds/flow/genus_flow.tcl`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/flow/genus_flow.tcl)) encapsulate flow stages safely without terminal commands.

### 3.2 Synthesis Stage Sequence (Genus 19.13)
```
1. Setup & Environment  ──► 2. HDL Read & Elab  ──► 3. Design Health Audit
      (Libs, Search Paths)         (read_hdl, elaborate)        (check_design -all, latch check)
                                                                       │
6. Gate Optimization   ◄── 5. Tech Mapping      ◄── 4. SDC & Intent Check
      (syn_opt)                  (syn_map)              (read_sdc, check_timing_intent)
         │
7. Reports & Quality   ──► 8. Signoff Export
   (area, qor, timing, dp)       (write_hdl, write_sdc, write_do_lec)
```

- **Elaboration Health**: Run `check_design -unresolved` and `check_design -all` before synthesis. Verify that inferred latches (`get_db insts -if {.is_latch==true}`) evaluate to zero.
- **Timing Intent**: Run `check_timing_intent -verbose` and `report_timing -lint` before `syn_generic` so logic optimization is driven by verified constraints.
- **Stepwise Checkpoints**: Record intermediate area and timing slack at `syn_generic`, `syn_map`, and `syn_opt`.

### 3.3 Physical Design Stage Sequence & Implementation Pitfalls (Innovus)
```
1. Design Import & MMMC ──► 2. Floorplan & Pins ──► 3. Power Grid Synthesis
      (init_design, LEFs)         (create_floorplan, editPin)   (add_rings, add_stripes, sroute)
                                                                       │
6. Post-CTS Optimization◄── 5. Clock Tree (CTS) ◄── 4. Placement & Pre-CTS
   (opt_design -post_cts)         (ccopt_design)                (place_opt_design)
         │
7. Global & Detail Route──► 8. Post-Route Signoff──► 9. Verification & GDS
      (routeDesign)               (opt_design -post_route)      (verify_drc, verify_connectivity)
```

**Critical Physical Pitfalls for Lead**:
1. **Power Grid & FollowPin Routing (`sroute`)**:
   - In `gsclib045_macro.lef`, cell power/ground pins are strictly `PIN VDD` (`USE POWER`) and `PIN VSS` (`USE GROUND`).
   - Standard cell FollowPin rails reside on layer `M1`. Power rings and stripes should be allocated on upper metals (`M8`/`M9` or `M10`/`M11`).
   - The standard cell placement site name in `gsclib045_macro.lef` is `CoreSite`.
2. **Clock Tree Synthesis (CTS) Cell Selection**:
   - `gsclib045_macro.lef` provides dedicated clock tree cells: buffers `CLKBUFX2` through `CLKBUFX16`, and inverters `CLKINVX1` through `CLKINVX16`.
   - CCOpt must be constrained to use dedicated clock cells:
     ```tcl
     set_ccopt_property buffer_cells [list CLKBUFX2 CLKBUFX3 CLKBUFX6 CLKBUFX8 CLKBUFX12 CLKBUFX16]
     set_ccopt_property inverter_cells [list CLKINVX1 CLKINVX3 CLKINVX6 CLKINVX16]
     ```
     Avoid allowing CCOpt to select general logic `BUFX*` or `INVX*` cells, which exhibit asymmetric rise/fall slews.
3. **Substrate Tap & Tie-off Cells**:
   - `gsclib045_macro.lef` contains **no separate `WELLTAP` or `ENDCAP` macro**. Substrate connections are integrated into standard cell rows. Do not call `addWellTap` with non-existent cell names.
   - Tie-off cells are `TIEHI` and `TIELO` (`set_db add_tieoffs_cells {TIEHI TIELO}`).
   - Filler cells are `FILL1`, `FILL2`, `FILL4`, `FILL8`, `FILL16`, `FILL32`, and `FILL64`.
4. **GDS StreamOut Layer Mapping Pitfall**:
   - In `gsclib045_tech.lef`, metal routing layers are named `M1`, `M2`, ..., `M11`.
   - Standard analog/SoC stream maps (`/cadence/FOUNDRY/analog/45nm/soce/streamOut.map`) expect `Metal1`, `Metal2`, etc.
   - Calling `streamOut` without a layer map translating `M1` $\rightarrow$ `Metal1` will omit metal geometries from the exported GDSII layout.
5. **Parasitic Extraction Collateral**:
   - Use the native 45nm QRC techfile (`/cadence/FOUNDRY/digital/45nm/dig/qx/qrcTechFile`) with layer map `qx/mapFile` for signoff extraction rather than the mismatched `cln28hpl` captable.

---

## 4. SDC Timing Audit & Budget Defect Analysis

### 4.1 Negative In-to-Out Timing Budget Defect ($in12 + out12 > 20\text{ ns}$)
In [`commercial_flow/coprocessor_commercial.sdc`](file:///Users/vs/function/Vector_coprocessor_final/commercial_flow/coprocessor_commercial.sdc) and [`rtl2gds/flow/constraints/vector_coprocessor.sdc`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/flow/constraints/vector_coprocessor.sdc):
- Clock period $T_{\text{period}} = 20.0\text{ ns}$
- Input delay $T_{\text{in}} = 12.0\text{ ns}$
- Output delay $T_{\text{out}} = 12.0\text{ ns}$
- Clock uncertainty $T_{\text{unc}} = 0.25\text{ ns}$

**Structural Timing Defect**:
For any combinational path from a primary input to a primary output:
$$\text{Available Internal Logic Window} = T_{\text{period}} - T_{\text{out}} - T_{\text{unc}} - T_{\text{in}} = 20.0 - 12.0 - 0.25 - 12.0 = \mathbf{-4.25\text{ ns}}$$

Before accounting for internal gate delays, transitions, or wire parasitics, the path budget is **inherently negative by $-4.25\text{ ns}$**.

**Affected RTL Paths**:
1. `xif_issue_req_i` $\rightarrow$ decode $\rightarrow$ `xif_issue_resp_o`: Combinational handshake decode in `vector_coprocessor.sv` when `state == IDLE`.
2. `xif_issue_req_i` / `xif_issue_valid_i` $\rightarrow$ `vlsu_inst` $\rightarrow$ `xif_mem_valid_o` / `xif_mem_req_o`: Combinational zero-latency memory request generation in `vlsu.sv`.

**Actionable Remedy**:
- The I/O budget must be re-budgeted to provide a positive internal capture window (e.g. allocating $T_{\text{in}} = 10.0\text{ ns}$, $T_{\text{out}} = 6.0\text{ ns}$, leaving $3.75\text{ ns}$ for internal logic), or protocol-allowed multicycle exceptions must be formally specified.

### 4.2 SDC Coverage: Baseline Evidence vs Preventive Practices
- **Port Coverage (Evidence)**: Genus baseline `check_timing_intent` confirms **0 unconstrained input and output ports**. The wildcard patterns (`xif_issue_req_i*`, `xif_commit_i*`, etc.) successfully matched all elaborated ports in Genus 19.13.
- **Missing Transition (Evidence)**: Genus baseline `check_timing_intent` reports **168 input pins with missing slew/driver**. Data inputs currently default to ideal (0 ps transition) drive, understating boundary gate delays.
  - *Preventive Action*: Add `set_input_transition 0.15 [remove_from_collection [all_inputs] [get_ports clk_i]]`.
- **Reset Network**:
  - `rst_ni` fans out to thousands of sequential endpoints. Constraining it with standard data delay induces an unplaced buffer tree during logic synthesis.
  - *Action*: Apply `set_ideal_network [get_ports rst_ni]` during logic synthesis, deferring buffer tree synthesis to physical implementation.

### 4.3 Clock Uncertainty Methodology
- **Pre-CTS (Synthesis)**: Clock uncertainty covers clock source/PLL jitter plus an estimated clock tree skew margin ($T_{\text{jitter}} + T_{\text{skew\_margin}}$).
- **Post-CTS (Innovus)**: With `set_propagated_clock [all_clocks]` active, clock network insertion delay and skew are measured from the actual clock tree. Uncertainty should then represent documented jitter only.
- **Methodology Rule**: Uncertainty must not be arbitrarily reduced to manufacture artificial slack or area gains. Baseline and candidate runs must use consistent, documented uncertainty budgets.

---

## 5. Structural RTL Analysis & Area Drivers

### 5.1 Storage Elements (Vector Register File)
- **Active Registers**: `vector_coprocessor.sv` instantiates `vector_reg_file_3port` with `NUM_REGS = 16`.
- **Register v0 Pruning**: In `vector_reg_file_3port.sv`, write enable is conditioned on `waddr_i != 5'b0`, and reads from address 0 return zero. As a result, register `v0` contains no active flip-flops.
- **Hardware Sequential Count**: The VRF implements **15 active 256-bit registers = 3,840 flip-flops**.
- **Read Multiplexers**: Three 256-bit read ports each require 16-to-1 multiplexing across the register array.

### 5.2 Arithmetic Datapath Elements (Observed Baseline Evidence)
- `vector_exec_unit.sv` implements eight 32-bit execution lanes for 256-bit vectors (`vmac_result` for $A \times B + C$, and `vmul_result` for $A \times B$).
- **Tool Observation**: Genus baseline report `generic_area.rpt` lists **exactly eight `mult_unsigned` instances and eight combined add/sub instances** (cell count 71,148; generic cell area 219,540.582).
- **Finding**: Genus generic synthesis automatically shared arithmetic operators between VMAC and VMUL. Duplicated RTL source expressions did not result in 16 multiplier instances in the generic netlist.
- **Methodology Rule**: Datapath sharing recommendations should be report-driven: verify mapped datapath reports (`opt_dp.rpt` / `report_dp`) to ensure technology mapping retains this shared structure under timing optimization.

---

## 6. Actionable Tool-Driven Area Optimization Levers

The following directives target area recovery without modifying source RTL. Syntax is verified against Cadence Genus 19.13 Common UI:

1. **Automated Clock-Gating Insertion**:
   - Command: `set_db lp_insert_clock_gating true`
   - *Target*: Replaces individual recirculation multiplexers on the 3,840 VRF flip-flops with Integrated Clock Gating (ICG) cells based on register write enables (`vrf_we && waddr_i == k`).
2. **Datapath Optimization Monitoring**:
   - Commands:
     ```tcl
     set_db dp_sharing true
     set_db syn_generic_effort high
     set_db syn_opt_effort high
     ```
   - *Target*: Monitor via `report_dp` / `opt_dp.rpt` to ensure mapped gates preserve arithmetic sharing without duplicating logic under timing pressure.
3. **Hierarchical Boundary Optimization (Ungrouping)**:
   - Command: `set_db auto_ungroup both`
   - *Target*: Removes module boundaries between top and execution submodules, enabling constant propagation and redundant logic pruning.
4. **Unloaded Sequential Pruning**:
   - Command: `set_db delete_unloaded_seqs true`
   - *Target*: Automatically eliminates registers that do not drive observable design logic.

---

## 7. Read-Only Runtime Diagnosis of Long Synthesis (PID 34703)

An independent OS and filesystem inspection was conducted on active Genus PID 34703 executing baseline `vc::synth`:

### 7.1 Observed OS & Process Evidence
- **Process State**: PID 34703 (`genus -gui`) is in state `Sl` with 21 active threads (including Mesa `llvmpipe` rendering threads).
- **CPU Accumulation**: CPU time is monotonically increasing:
  * 00:02:36 $\rightarrow$ 00:02:47 $\rightarrow$ 00:02:53 $\rightarrow$ 00:03:02 $\rightarrow$ 00:03:16.
  * Measured rate: ~1.5–2.5 CPU seconds per 10–15 seconds wall time across threads 34703 and worker 34774.
- **Server Load & Resources**:
  * 72 logical CPUs (Dual Intel Xeon Gold 6354 @ 3.00 GHz), 528 GB RAM.
  * Overall system CPU is 74.3% idle, load average 12.62. **Zero host CPU starvation or memory swapping**.
- **I/O & System Calls**:
  * `/proc/34703/io`: 585 MB character read/write, 2.67M system calls, 32 KB disk read bytes. Process is not blocked on disk I/O.
- **License Status**:
  * Tool log `genus.log2` confirms initial `Genus_Synthesis` license checkout succeeded in 4 seconds. No blocked FlexLM socket calls or license wait queues exist.
- **GUI Event Loop Interaction**:
  * The process state `Sl` and wait channel `hrtime` correspond to high-resolution timer sleep intervals between Qt/X11 GUI event loop updates, pumping interface events while running the compute-heavy synthesis engine.

### 7.2 Diagnostic Verdict
**Healthy, active computation of technology mapping (`syn_map`) on a 71,148-instance generic netlist.** There is no license hang, deadlock, modal window block, or system CPU throttling. Given 71k generic cells, 3.8k sequential registers, and wide arithmetic logic, technology mapping in single-threaded GUI mode is expected to require 15–30 minutes of runtime.

---

## 8. Equivalence Checking & Verification Requirements

Area optimizations must maintain 100% functional equivalence against the baseline RTL:

1. **Conformal LEC Setup**:
   - Golden: Unmodified SystemVerilog RTL.
   - Revised: Synthesized / optimized gate-level netlist.
   - Genus export generates the LEC dofile:
     ```tcl
     write_do_lec -golden_design rtl -revised_design <netlist>.v \
         -logfile lec.log > rtl_to_final.lec.do
     ```
2. **LEC Directives**:
   - For clock gating: `add clock gate` / `set flatten model -gated_clock`.
   - For datapath multipliers: Configure Conformal datapath solvers (`set compare options -threads 4`, `set analyze abort -compare`).
3. **Differential Functional Verification**:
   - Candidate netlists must pass differential transaction/trace checks via [`rtl2gds/verif/tb_vcop.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/verif/tb_vcop.sv) across the randomized stimulus and stall matrix.

---

## 9. Action Checklist & Responsibilities

| Item | Status | Action Item / Owner |
| :--- | :---: | :--- |
| **PDK Collateral** | Verified | GPDK 45nm confirmed with timing, LEFs, and QRC techfile; `phys-lead` |
| **Synthesis Runtime** | Healthy | PID 34703 actively progressing in `syn_map` (no hang/lock); `phys-lead` |
| **SDC Budget Defect** | Action Required | Resolve $in12 + out12 > 20\text{ ns}$ negative timing window on feedthrough paths; `phys-lead` |
| **Input Transition** | Action Required | Fix 168 pins missing transition via `set_input_transition`; `phys-lead` |
| **Reset Network** | Action Required | Set `set_ideal_network [get_ports rst_ni]` during logic synthesis; `phys-lead` |
| **Clock Uncertainty** | Methodology Rule | Apply consistent, documented jitter/skew budget across runs; `phys-lead` |
| **CTS Cells** | Action Required | Restrict CCOpt to `CLKBUFX*` / `CLKINVX*` cells in `gsclib045`; `phys-lead` |
| **Tapcells / Tie-offs**| Action Required | Use `TIEHI`/`TIELO` and `FILL*`; do not call `addWellTap` (no tap macro); `phys-lead` |
| **GDS Layer Map** | Action Required | Verify `streamOut` layer map converts `M1`..`M11` to `Metal1`..`Metal11`; `phys-lead` |
| **Formal Equivalence** | Ready | Conformal LEC dofile generation integrated into flow; `phys-lead` |
| **Functional Gate** | Ready | `tb_vcop.sv` matrix ready for differential validation; `rtl-review` |
