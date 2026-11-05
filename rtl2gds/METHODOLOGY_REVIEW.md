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

### 2.1 Collateral Inventory & Signoff Reality
A complete RTL-to-GDS physical flow requires both logical timing libraries (`.lib`) and physical layout abstractions (`.lef`):

1. **Local ASAP7 7nm Collateral (`PDK/LIB/asap7sc7p5t_*.lib`)**:
   - **Status**: *Incomplete for Physical PnR*.
   - **Observed Fact**: The workspace contains Liberty NLDM timing models (`asap7sc7p5t_*_SS_nldm_*.lib`), but **no Tech LEF or standard cell LEFs exist in the local repository**.
   - **Verdict**: Innovus cannot place cells, build clock trees, or route metals without physical LEFs. Local ASAP7 collateral cannot support a complete PnR flow without external files.
2. **Server-Side SCL 180nm Collateral (`/cadence/scl180/...`)**:
   - **Status**: Complete (Liberty `.lib`, Tech LEF, Cell LEF present on server).
3. **Server-Side Cadence GPDK 45nm Collateral (`/cadence/FOUNDRY/digital/45nm/dig`)**:
   - **Status**: *Viable for Implementation with Qualified Limitations (Not Signoff-Complete)*.
   - **Observed Collateral Paths**:
     * Timing models: `lib/slow.lib` (10 MB, 1.08V/125C setup), `typical.lib`, `fast.lib` (1.32V/0C hold).
     * Physical layout LEFs: `lef/gsclib045_tech.lef` (18 KB, `M1`..`M11`), `lef/gsclib045_macro.lef` (1.6 MB).
     * Parasitic extraction: Native Innovus captable (`captable`) and Quantus `qx/qrcTechFile` (201 MB).
     * Cell GDSII: `/cadence/FOUNDRY/stdcell/lan/flow/t1u1/reference_libs/GPDK045/gsclib045_all_v4.4/gsclib045/gds/gsclib045.gds` (9.3 MB).
   - **Critical Collateral Caveat**:
     * The mere presence of files on disk does **not** establish this kit as signoff-complete.
     * The tech LEF uses `M1`..`M11` naming, whereas `qrcTechFile` and `streamOut.map` use `Metal1`..`Metal10`.
     * Post-route extraction with native Innovus captable is an internal implementation model, not a certified signoff extraction deck.
     * StreamOut GDS layer mapping must be verified against documented `gpdk045.layermap` layer numbers; guessing layer numbers is strictly prohibited.

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
   - For post-route extraction, using native Innovus captable with matched `M1`..`M11` layers is appropriate given the `M1` vs `Metal1` layer name discrepancy in `qx/qrcTechFile`. Note that captable-based RC is an implementation approximation, not signoff extraction.

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

**Diagnostic Policy vs Acceptance Standard**:
- **Diagnostic Only**: Evaluating the original uncorrected `coprocessor_commercial.sdc` is permitted strictly as a diagnostic baseline to document the pre-existing constraint error ($WNS \le -4.25\text{ ns}$).
- **Acceptance Requirement**: Accepted baseline and candidate implementations must share a **corrected, physically realizable interface budget** (e.g. allocating $T_{\text{in}} = 10.0\text{ ns}$, $T_{\text{out}} = 6.0\text{ ns}$, leaving $3.75\text{ ns}$ for internal logic, or formally defining protocol multicycle path exceptions).
- A blanket unchanged invalid SDC that structurally guarantees negative slack cannot serve as the acceptance standard for candidate comparisons.

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

## 7. Runtime Synthesis Diagnosis & Process Ambiguity Root Cause

An investigation into the prolonged execution of `syn_map` during the baseline run uncovered a critical multi-process listener conflict and shared-memory failure:

### 7.1 Process Ambiguity & Double-Reader FIFO Race
- **Multi-Session Conflict**: Two distinct Genus sessions were executing concurrently from `/home/vaibhav22555/Desktop/rtl2gds`:
  * Older batch/TUI session: **PID 21628**
  * Newer GUI session: **PID 34703** (`genus -gui`)
- **Shared Pipe Race**: Both processes sourced `MCP_setup.tcl` and opened the identical named pipe `/home/vaibhav22555/Desktop/rtl2gds/MCP_genus.command` in non-blocking read-write mode.
- **Command Misdirection**: When `vc::synth` was dispatched via the FIFO, it was consumed by the older session (PID 21628), rather than the monitored GUI session (PID 34703).
- **Misleading CPU Accumulation**: The newer session PID 34703 was completely idle regarding synthesis. Its accumulating CPU time (~2–3 CPU seconds per 25s wall time in wait channel `hrtime`) was solely driven by the Qt/X11 Mesa `llvmpipe` software rasterizer and GUI event loop timer heartbeat, not mapping progress.

### 7.2 Root Failure in Active Synthesis Session (PID 21628)
- In the active session PID 21628, `syn_generic` completed, producing the generic reports.
- Upon entering `syn_map`, Genus invoked its super-threading infrastructure, spawning distributed worker processes (`localhost_1_8`, PID 63550, PID 60552).
- As confirmed by `phys-lead`'s tool log inspection (message `m41`), the super-threading engine encountered **shared memory `shm` failure: `errno 28` (`ENOSPC`: No space left on device)**.
- Exhaustion of system shared memory segments caused the super-threading worker to hang and the synthesis mapping thread to deadlock.

### 7.3 Methodological Safeguards & Corrective Actions
1. **Bridge Single-Owner Enforcement & Lock Contention**:
   - A live MCP detach attempt timed out after 120s with `'another Genus command holds lock'`.
   - The original `vc::synth` Python client `FileLock` remains held until its client-side timeout expires.
   - Sending new MCP requests while the lock is held is blocked.
   - Lead must recover/wait for the original run's client timeout first, rather than deleting the held lock.
   - Then, implement a **PID-conditional `close_fifo`** so only the unintended PID detaches, rather than disabling `fileevent` globally.
   - Root has prepared an offline single-owner fix (`12d49fa`) in an isolated PD_MCP worktree (passing 28 tests; not deployed).
2. **Super-Threading Resource Management**:
   - On heavily shared multi-user server environments where `/dev/shm` can be depleted, distributed super-threading is prone to `errno 28` deadlocks.
   - Genus should be constrained to local multi-threading without distributed shared-memory dispatch (`set_db max_cpus 1` or explicitly controlled thread pools) to prevent unrecoverable shm deadlocks.

---

## 8. Audit of Physical Lead Implementation Choices (Message m48 & m50)

Review and formal verdict on implementation strategy proposed by `phys-lead`:

1. **Collateral & Library Strategy**:
   - *Verdict*: **Approved for Implementation with Signoff Qualifications**.
   - Pairing `gsclib045` official release (`slow.lib` for setup, `fast.lib` for hold) with tech LEF (`M1`..`M11`) and macro LEF is the only physically complete path.
   - `set_db use_area_from_lef true` is strictly necessary because `slow.lib` carries `area : 0.0`.
   - Adopting native Innovus captable extraction avoids layer name discrepancies with `qrcTechFile` (`M1` vs `Metal1`). Note that captable extraction is an internal approximation, not signoff QRC extraction.
   - Generating a custom GDS map for `M1`..`M11` based on `gpdk045.layermap` layer numbers prevents empty metal geometries. **Layer numbers must be independently cross-checked against documented PDK layermaps; guessing layer mappings is prohibited.**
   - Rejecting `gsclib045.fixed.lef` is fully endorsed: off-grid widths (e.g. `INVX1` 0.405 $\mu\text{m}$ on a 0.200 $\mu\text{m}$ site grid) trigger unroutable placement DRC violations.
2. **Constraints Strategy & Acceptance Standard**:
   - *Verdict*: **Original SDC is Diagnostic Only; Corrected SDC Required for Acceptance**.
   - Keeping `coprocessor_commercial.sdc` unchanged is permitted **strictly as a diagnostic run** to document pre-existing constraints.
   - Combinational feedthrough paths (`xif_issue_req_i -> xif_issue_resp_o` and `xif_mem_valid_o/req_o`) will deterministically report negative slack ($WNS \le -4.25\text{ ns}$) because $in12 + out12 + unc0.25 = 24.25\text{ ns} > 20.0\text{ ns}$.
   - For valid candidate area comparisons requiring achievable timing closure ($WNS \ge 0$), both baseline and candidate must evaluate under a consistent, re-balanced interface budget.
3. **Area Metrics Suite**:
   - *Verdict*: **Approved**.
   - Tracking Genus cell area ($\mu\text{m}^2$) alongside Innovus post-route cell area, core area, and die area across achievable core utilizations fulfills `COORDINATION.md` Rule 7.
4. **Innovus Stage Flow & Conformal LEC**:
   - *Verdict*: **Approved**.
   - Innovus sequence (init $\rightarrow$ floorplan $\rightarrow$ PG rings/stripes $\rightarrow$ place/preCTS $\rightarrow$ ccopt $\rightarrow$ postCTS $\rightarrow$ NanoRoute $\rightarrow$ postRoute $\rightarrow$ fillers $\rightarrow$ signoff checks) is sound.
   - *Reminder*: Restrict CCOpt explicitly to `CLKBUFX*` / `CLKINVX*` cells. Remember that `gsclib045` has no `WELLTAP` macro; use `TIEHI`/`TIELO` and `FILL*`.
   - Conformal LEC (`CONFRML201`) batch verification provides the required formal equivalence gate.
5. **Super-Threading & Lock Recovery Recommendation**:
   - *Verdict*: **Wait for Client Timeout, Disconnect Stale Listener with PID Check, Disable Super-Threading**.
   - Do not delete the held `FileLock`. Wait for the 120s client timeout to clear.
   - Execute a PID-conditional `close_fifo` to safely detach PID 21628.
   - Disable distributed super-threading in Genus (`set_db super_thread_servers ""` / `set_db max_cpus 1`).

---

## 9. Equivalence Checking & Verification Requirements

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

## 10. Audit of Baseline Route & Implementation SDC Proposals (Message m56)

Detailed review of the empirical baseline implementation run and proposed methodological axes:

### 10.1 Empirical Baseline Metrics & Post-CTS Hold Crisis Analysis
- **Genus Synthesis (`syn_opt`)**:
  * Standard cell area: **98,768 $\mu\text{m}^2$** (28,237 instances).
  * Sequential count: **4,443 flip-flops** (~36% of cell area).
  * Register-to-register slack: strictly positive.
  * Negative slack: Confined to primary I/O, with worst slack $WNS = -5.5\text{ ns}$ on `issue_req.instr -> mem_req.wdata`. This empirical data completely validates the structural feedthrough defect prediction ($in12 + out12 > 20\text{ ns}$).
- **Innovus Pre-CTS**:
  * Standard cell area: **91,692 $\mu\text{m}^2$**, utilization 0.65 in a 376.8 $\times$ 374.5 $\mu\text{m}$ core boundary.
  * Register-to-register setup slack: $WNS = +11.4\text{ ns}$.
- **Innovus Post-CTS Hold Buffer Explosion**:
  * Measured clock skew at hold corner: **0.103 ns**.
  * **Root Cause of Area Blowup**: The un-split SDC command `set_clock_uncertainty 0.25 [get_clocks clk]` applied a 250 ps uncertainty to **both setup and hold**.
  * On propagated clocks at the fast corner (1.32V/0C), requiring data path delay $> T_{\text{skew}} + T_{\text{unc}} = 0.103 + 0.250 = 0.353\text{ ns}$ triggered **4,900 register-to-register hold violations** ($WNS = -0.157\text{ ns}$) across short flip-flop recirculation loops (`Q -> mux -> D`).
  * Innovus hold fixing inserted **~8,700 delay/buffer cells**, driving cell area from 91,692 to **124,301 $\mu\text{m}^2$ (+35.6% explosion)**, pushing core density to 88.1% with 40 remaining violations.

### 10.2 Formal Verdict on 'Implementation SDC'
- **Verdict**: **STRONGLY APPROVED as a separately labeled constraint regime**.
- **Regime Distinction**:
  1. *As-Given Baseline SDC*: Kept through final route as the reference anchor documenting original constraint limitations.
  2. *Implementation SDC*: Applied identically to baseline RTL and all candidates:
     * Split uncertainty: `set_clock_uncertainty -setup 0.25 [get_clocks clk]` (pre-CTS/synthesis and post-CTS setup) and `set_clock_uncertainty -hold 0.05 [get_clocks clk]` post-CTS with `set_propagated_clock`. This aligns with physical clock jitter margins and prevents artificial delay-cell bloating.
     * Non-clock input transition: `set_input_transition 0.10 [remove_from_collection [all_inputs] [get_ports clk_i]]`, closing the 168-input lint gap.
     * **Mandatory Feedthrough Re-budgeting**: Implementation SDC must also rebalance interface delays (e.g. $T_{\text{in}} = 10.0\text{ ns}$, $T_{\text{out}} = 6.0\text{ ns}$) or declare multicycle exceptions on `issue_req.instr -> mem_req.wdata` so candidate runs achieve valid timing closure ($WNS \ge 0$).

### 10.3 Formal Verdict on Genus Clock Gating & ICG Selection
- **Verdict**: **STRONGLY APPROVED**.
- **Dual Mechanism & Value**:
  * Replacing recirculation feedback multiplexers with Integrated Clock Gating (ICG) cells reduces combinational cell area by ~11% during synthesis.
  * **Hold Crisis Solution**: By eliminating the `Q -> mux -> D` feedback loops, clock gating eliminates the exact short-path hold violations that triggered 8,700 buffer insertions post-CTS, offering a massive physical area recovery.
- **Resolving the `LBR-76` Warning**:
  * In `gsclib045` `slow.lib`, cells named `TLATNTSCA*` possess `clock_gating_integrated_cell : "latch_posedge_precontrol"` (requiring a scan test control pin `TE`). Because the design does not configure DFT scan, Genus rejects them with `LBR-76`.
  * **Solution**: Use the non-scan ICG family present in `gsclib045`: **`TLATNCA*`** (`TLATNCAX2`, `TLATNCAX3`, `TLATNCAX4`, `TLATNCAX8`, `TLATNCAX12`, `TLATNCAX16`, `TLATNCAX20`), which carry `clock_gating_integrated_cell : "latch_posedge"` with standard `CK` and `E` pins.
  * Direct Genus to target this cell family:
    ```tcl
    set_db lp_insert_clock_gating true
    set_db [get_db lib_cells *TLATNCA*] .dont_use false
    set_db lp_clock_gating_cell [get_db lib_cells *TLATNCAX4*]
    ```
  * Alternatively, allow Genus to synthesize discrete latch+AND clock gating (`set_db lp_clock_gating_style latch`).

### 10.4 Formal Equivalence Methodology & Genus `write_do_lec` Hazard
- **Discovery**: In `flow/genus_flow.tcl`, multiple runs (`baseline`, `r1_base`, `r1_cg`, `r1_r2_cg`) are executed in the same persistent Genus session. Genus 19.13 retains session-level root attributes for formal verification across `delete_obj [get_db designs]`. Consequently, `write_do_lec` in all candidate runs generated dofiles hardcoded to `/runs/baseline/genus/outputs/vector_coprocessor.v` and relied on volatile intermediate `fv/vector_coprocessor/` netlists overwritten across runs.
- **Remediation**: Independent direct RTL-to-gate dofiles must be maintained (under [`rtl2gds/formal/`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/)) that explicitly reference each run's own synthesized netlist and do not rely on volatile session state.

### 10.5 Area Accounting: Cell Area vs Net Area vs Total Area
- **Evidence**: In `r1_base`, `vc::summary` reported `cell_area = 130723.310 um2`, whereas the leaf instance area sum reported `final std_cell_area = 91829.685 um2`.
- **Root Cause**: In physical synthesis mode (PLE wire modelling with tech LEF), Genus reports `Total Area = Cell Area + Net Area`.
  * `Cell Area`: 91,829.685 $\mu\text{m}^2$ (standard cell active silicon area).
  * `Net Area`: 38,893.625 $\mu\text{m}^2$ (estimated routing wire area).
  * `Total Area`: 130,723.310 $\mu\text{m}^2$ (returned by `get_db [get_db designs] .area`).
- **Requirement**: Area comparisons across runs must strictly track `Cell Area` (active silicon footprint) to prevent conflating physical wire estimates with silicon area.

### 10.6 Physical Signoff Realities (`baseline_u70`)
- **Evidence**: Innovus P&R streamed out `runs/baseline_u70/innovus/outputs/vector_coprocessor.final.gds` (70.5 MB).
- **Signoff Reality**: This layout is an intermediate implementation milestone, NOT a tapeout-clean signoff layout:
  * `verify_drc` reports **23 geometry DRC violations**: 20 on Metal 1 and 3 on Metal 2 (`ParallelRunLength Spacing` violations).
  * The kit lacks signoff Calibre DRC/LVS decks; signoff DRC/LVS has not been run.
  * Extraction was performed using native Innovus captable extraction due to LEF/QRC layer naming discrepancies, rather than signoff Quantus QRC.

### 10.7 Formal Equivalence Audit & Area Study Recommendations
An exhaustive formal equivalence campaign using Cadence Conformal LEC (`20.10-p100`) across all regimes establishes the following conclusions (detailed in [`rtl2gds/FORMAL_REVIEW.md`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/FORMAL_REVIEW.md)):
1. **Primary Formally Supported Comparison**: **`original+CG` (`r1_cg`)**
   - **Formally Verified**: 100% equivalent to the original baseline RTL across all 4,443 state points (including hierarchical VLSU subproof). 0 Aborts, 0 Non-equivalences.
   - **Hold Crisis Solution**: Replaces recirculation feedback muxes with 28 Integrated Clock Gating (ICG) cells (`TLATNCAX*`), eliminating the short-path hold violations that triggered 8,700 delay buffer insertions post-CTS.
   - **Area & Timing**: Delivers 83,268 $\mu\text{m}^2$ standard cell area (-9.3% vs `r1_base` 91,830 $\mu\text{m}^2$), with $+0.0\text{ ps}$ slack.
   - **Recommendation**: Serves as the primary, formally supported comparison candidate for the area reduction study.
2. **Secondary Simulation-Supported Exploration**: **Candidate R2 (`r1_r2_cg`)**
   - **Netlist Equivalence**: Synthesized gates match Candidate R2 RTL (80,957 $\mu\text{m}^2$ stdcell area, -11.8% vs `r1_base`).
   - **Global Verification Reality**: Equivalence between Original RTL and Candidate R2 RTL is **formally inconclusive / non-equivalent under unconstrained formal verification** (`run_orig_rtl_vs_r2_rtl_sec.do`: 32 Non-equivalent POs on `/xif_mem_req_o[wdata][31:0]`, 256 unmapped Golden DFFs, 3,025 abort points).
   - **Reason**: The architectural contract of VLSU was changed from a registered snapshot model (`store_data_q`) to a combinational bypass model across VRF port 2. Without inductive protocol invariants guaranteeing VRF stability across multi-beat bursts, formal equivalence cannot be proven.
   - **Recommendation**: Candidate R2 is supported only by bounded differential simulation (`tb_vcop.sv`) and must be presented with clear architectural qualifications, not as an unconstrained drop-in replacement.

---

## 11. Action Checklist & Responsibilities

| Item | Status | Action Item / Owner |
| :--- | :---: | :--- |
| **PDK Collateral** | Qualified | GPDK 45nm approved for flow with captable/GDS map caveats; `phys-lead` |
| **Implementation SDC**| Approved | Separate regime with hold unc 0.05 post-CTS, input tran 0.1, rebalanced IO; `phys-lead` |
| **Hold Fixing Remedy** | Identified | Clock gating + 0.05 hold unc eliminates ~8.7k delay cell bloat; `phys-lead` |
| **Clock Gating Cells** | Action Required | Use `TLATNCA*` (non-scan latch_posedge) to bypass LBR-76 on `TLATNTSCA*`; `phys-lead` |
| **GDS Layer Map** | Action Required | Verify `M1`..`M11` numbers against `gpdk045.layermap` (no guessing); `phys-lead` |
| **CTS Cells** | Action Required | Restrict CCOpt to `CLKBUFX*` / `CLKINVX*` cells in `gsclib045`; `phys-lead` |
| **Tapcells / Tie-offs**| Action Required | Use `TIEHI`/`TIELO` and `FILL*`; do not call `addWellTap` (no tap macro); `phys-lead` |
| **Area Metric Suite** | Approved | Compare Genus cell area, Innovus stdcell area, core area, and die area; `phys-lead` |
| **Formal Equivalence** | Complete | Standalone LEC scripts and report complete; `r1_cg` primary, `r2` secondary; `method-review` |
| **Functional Gate** | Ready | `tb_vcop.sv` matrix ready for differential validation; `rtl-review` |
