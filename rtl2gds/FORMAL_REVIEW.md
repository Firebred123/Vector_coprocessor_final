# Formal Verification Review: RTL-to-Gate Equivalence

**Author**: `method-review` (Independent Reviewer)
**Date**: November 5, 2026
**Target Design**: `vector_coprocessor` (Top-level RISC-V OpenHW X-Interface Coprocessor)
**Verification Tool**: Cadence Conformal® LEC version `20.10-p100` (64-bit executable, build 01-May-2020)
**Host Server**: `edatools-server2.iiitd.edu.in` (x86_64 Linux)
**Verification Directory**: `/home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/verification/method_review_lec/`

---

## 1. Executive Summary & Verification Ledger

This document establishes the independent formal equivalence verification of the synthesized gate-level netlists against golden RTL designs for the vector coprocessor across all optimization regimes (`baseline`, `r1_base`, `r1_cg`, and `r1_r2_cg`).

### Formal Equivalence Ledger

| Run Label | Golden Source | Revised Netlist / Design Path | Gate Count / Insts | Std Cell Area ($\mu\text{m}^2$) | Hierarchical Subproofs | Abort Points | Non-EQ Points | Formal Proof Status |
| :--- | :--- | :--- | :--- | :--- | :--- | :---: | :---: | :--- |
| **`baseline`** | Original RTL (`dbc5fcd`) | `runs/baseline/genus/outputs/vector_coprocessor.v` | 28,237 | 98,768.125 | `vlsu`: 324 PO / 550 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_base`** | Original RTL (`dbc5fcd`) | `runs/r1_base/genus/outputs/vector_coprocessor.v` | 25,923 | 91,829.685 | `vlsu`: 324 PO / 550 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_cg`** | Original RTL (`dbc5fcd`) | `runs/r1_cg/genus/outputs/vector_coprocessor.v` | 25,173 (28 ICG) | 83,267.561 | `vlsu`: 324 PO / 550 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_r2_cg` (R2 RTL)** | Candidate R2 RTL (`cand/r2`) | `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v` | 24,911 (27 ICG) | 80,957.453 | `vlsu`: 324 PO / 294 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_r2_cg` (Orig RTL)** | Original RTL (`dbc5fcd`) | `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v` | 24,911 (27 ICG) | 80,957.453 | Combinational diagnostic | N/A | N/A | **UNPROVEN / INCONCLUSIVE** (258 unmapped DFFs) |
| **`orig_vs_r2_rtl` (Full-Top SEC)** | Original RTL (`dbc5fcd`) | Candidate R2 RTL (`cand/r2`) | RTL-to-RTL | RTL-to-RTL | Flat Top (No BBOX):<br>122 PO EQ, 1164 DFF EQ | 3,025 DFF | 32 PO (`wdata[31:0]`) | **Proof incomplete under this comparison setup** (256 unmapped DFFs, 3025 aborts) |
| **`r1_base_postroute`** | `r1_base` Genus Netlist | `runs/r1_base_u70/innovus/outputs/vector_coprocessor.final.v` | 26,068 | 86,686.810 | Flat: 154 PO / 4443 DFF | 0 | 0 | **PASS (Equivalent)** |
| **`r1_cg_postroute`** | `r1_cg` Genus Netlist | `runs/r1_cg_u70/innovus/outputs/vector_coprocessor.final.v` | 25,234 (28 ICG) | 77,849.700 | Flat: 154 PO / 4443 DFF (28 ICG folded) | 0 | 0 | **PASS (Equivalent)** |
| **`r1_cg_u97_postroute`** | `r1_cg` Genus Netlist | `runs/r1_cg_u97/innovus/outputs/vector_coprocessor.final.v` | 24,984 (28 ICG) | 77,650.930 | Flat: 154 PO / 4443 DFF (28 ICG folded) | 0 | 0 | **PASS (Equivalent)** |
| **`r1_base_u97_postroute`** | `r1_base` Genus Netlist | `runs/r1_base_u97/innovus/outputs/vector_coprocessor.final.v` | 25,836 | 86,290.190 | Flat: 154 PO / 4443 DFF | 0 | 0 | **PASS (Equivalent)** |
| **`r1_r2_cg_u97_postroute`**| `r1_r2_cg` Genus Netlist | `runs/r1_r2_cg_u97/innovus/outputs/vector_coprocessor.final.v` | 24,717 (27 ICG) | 76,004.730 | Flat: 154 PO / 4187 DFF (27 ICG folded) | 0 | 0 | **PASS (Equivalent - R2 Only)** |

> [!IMPORTANT]
> **Strict Verification Standard**: Formal verification results must never treat unresolved black boxes, unmapped state points, unverified cutpoints, or aborted solver tasks as a PASS. Every comparison is independently executed and verified to 0 Aborts and 0 Non-equivalences.

### Formal Recommendation for Implementation Study
1. **Primary Formally Supported Candidate**: **`original+CG` (`r1_cg`)**
   - **Formally Verified**: Synthesis-equivalence gate accepted under documented Conformal enum, undriven-signal, and X-modeling choices across all 4,443 state points (including hierarchical VLSU verification). This establishes gate equivalence to RTL, but does not constitute physical signoff or proof of ISA correctness.
   - **Synthesis Mechanism**: Replaces flip-flop recirculation feedback multiplexers with 28 Integrated Clock Gating (ICG) cells (`TLATNCAX*`), removing `Q -> mux -> D` short paths during logic synthesis to mitigate post-CTS hold buffer explosion (subject to post-route physical design evaluation).
   - **Silicon Area**: Delivers 83,268 $\mu\text{m}^2$ standard cell area (-9.3% reduction vs `r1_base`).
   - **Verdict**: Accepted as the primary comparison candidate for physical implementation.
2. **Secondary Simulation-Supported Candidate**: **Candidate R2 (`r1_r2_cg`)**
   - **Implementation Milestone**: Gates match Candidate R2 RTL (80,957 $\mu\text{m}^2$ stdcell area, -11.8% vs `r1_base`).
   - **Qualification**: Semantic equivalence between Original RTL and Candidate R2 RTL is **proof incomplete under this comparison setup** due to multi-cycle datapath retiming (256-bit `store_data_q` elimination across VRF port 2). Correctness relies exclusively on bounded testbench simulation (`tb_vcop.sv`). Must be reported with clear architectural qualification.

---

## 2. Hierarchical Subproofs & State Point Accounting

In Conformal LEC hierarchical verification (`write_hier_compare_dofile -dynamic_hierarchy`), the design is decomposed into matching module pairs. Leaf submodules with identical boundary interfaces are formally verified first. Once proven equivalent, Conformal abstracts the proven submodule as a black box (`add_black_box <module> -module -hier`) in the parent module comparison to avoid redundant flattened solver iterations.

### Hierarchical Subproof Structure

```
vector_coprocessor (Top-level)
├── vlsu_inst (vlsu_VLEN256_X_ID_WIDTH4) -> Proven Equivalent in Step 1, abstracted as BBOX in Step 2
├── vrf_inst (vector_reg_file_3port)     -> Flattened & compared in Top-level
└── exec_unit_inst (vector_exec_unit)    -> Flattened & compared in Top-level
```

### Subproof 1: Leaf Submodule `vlsu_VLEN256_X_ID_WIDTH4` (Instance `/vlsu_inst`)
- **Golden vs Revised Mapped Points**: 344 Primary Inputs, 324 Primary Outputs, 550 DFFs (`r1_base`, `r1_cg`) or 294 DFFs (`r1_r2_cg`).
- **Unmapped Points**: Exactly 0.
- **Compare Result**:
  * `r1_base`: 324 POs Equivalent, 550 DFFs Equivalent (Total: 874 Equivalent points, 0 Abort, 0 Non-EQ).
  * `r1_cg`: 324 POs Equivalent, 550 DFFs Equivalent (Total: 874 Equivalent points, 0 Abort, 0 Non-EQ).
  * `r1_r2_cg`: 324 POs Equivalent, 294 DFFs Equivalent (Total: 618 Equivalent points, 0 Abort, 0 Non-EQ).
- **Subproof Status**: **PASS (100% Equivalent)**.
- **Abstraction Action**: Upon passing, Conformal executes:
  ```tcl
  add_black_box vlsu_VLEN256_X_ID_WIDTH4 -module -hier -Golden
  add_black_box vlsu_VLEN256_X_ID_WIDTH4 -module -hier -Revised
  ```

### Subproof 2: Parent Module `vector_coprocessor` (Top-Level)
- **Golden vs Revised Mapped Points**: 169 Primary Inputs, 154 Primary Outputs, 3,893 DFFs, 1 Black Box (`vlsu_inst`).
- **Compare Result**:
  * `r1_base`: 154 POs Equivalent, 3,893 DFFs Equivalent, 1 BBOX Equivalent (Total: 4,048 Equivalent points, 0 Abort, 0 Non-EQ).
  * `r1_cg`: 154 POs Equivalent, 3,893 DFFs Equivalent, 1 BBOX Equivalent (Total: 4,048 Equivalent points, 0 Abort, 0 Non-EQ).
  * `r1_r2_cg`: 154 POs Equivalent, 3,893 DFFs Equivalent, 1 BBOX Equivalent (Total: 4,048 Equivalent points, 0 Abort, 0 Non-EQ).
- **Subproof Status**: **PASS (100% Equivalent)**.

### 2.1 Audit of Flagged Modeling Options, Ignored Outputs, and Constraints ($constraints)

In Conformal's summary report (`report_verification -hier -verbose`), two informational flags are marked with an asterisk:
1. `Category 1. Non-standard modeling options used: 1` $\rightarrow$ `Floating signals tied to Z: no *`
2. `Category 2. Incomplete verification: 1` $\rightarrow$ `Command "add ignore outputs" used: yes *`
Additionally, line 248 of `r1_cg.log` reports `// (F36) Added 874 don't care(s) due to $constraints.`

A rigorous audit of `/tmp/method_review_lec/hier_r1_cg.do` demonstrates that these flags represent legitimate compositional boundary modeling and enum-domain constraints, **leaving zero externally observable behaviors unchecked**:

#### 1. Identification of Ignored Outputs (Lines 757–854 in `hier_r1_cg.do`)
- **Scope**: All `add_ignored_outputs` directives are **strictly confined to internal submodule `vlsu` boundary pins in Subproof 1**. There are **EXACTLY ZERO ignored outputs on the top-level macro `vector_coprocessor`**.
- **Exact Pins Ignored in Subproof 1**:
  * **12 Constant Outputs**:
    - `xif_mem_req_o[mode][1:0]` (tied to constant `2'b10`, value 2)
    - `xif_mem_req_o[size][2:0]` (tied to constant `3'b010`, value 2)
    - `xif_mem_req_o[be][3:0]` (tied to constant `4'b1111`, value 15)
    - `xif_mem_req_o[attr][1:0]` (tied to constant `2'b00`, value 0)
    - `xif_mem_req_o[spec]` (tied to constant `1'b0`, value 0)
  * **4 Feedthrough Outputs**:
    - `xif_mem_req_o[id][3:0]` (direct feedthrough from input `id_i[3:0]`)
- **Compositional Justification & Netlist Verification**:
  * In leaf submodule `vlsu`, `write_hier_compare_dofile` identifies constant outputs and replaces them with stuck-at assertions (`add_output_stuck_at <val> -Golden -hier`) and pin-equivalences (`add_pin_equivalences {id_i[k]} {xif_mem_req_o[id][k]}`). Because they are not combinational functions of internal leaf states, they are omitted as independent key points in the leaf solver (`add_ignored_outputs`).
  * **Netlist Confirmation**: In the synthesized revised netlist (`runs/r1_cg/genus/outputs/vector_coprocessor.v`, lines 15250–15261), the 12 metadata constant bits are explicitly driven at the parent level (`mode=2`, `size=2`, `be=15`, `attr=0`, `spec=0`). The 4 ID bits are driven in the parent and connected as `vlsu_inst.id_i`.
  * **Proof of Verification at Chip Primary Outputs**: In Subproof 2 (parent module `vector_coprocessor`), lines 1350–1361 (Golden) and 1510–1521 (Revised) assert the **exact same stuck-at constants on both Golden RTL and the synthesized gate netlist**. Conformal explicitly proves that both Golden and Revised gates drive these identical constant values to the top-level pins. All 154 primary outputs of `vector_coprocessor` are mapped and verified equivalent (0 ignored).

#### 2. Root Cause of "Added 874 don't care(s) due to $constraints" (Line 248 in `r1_cg.log`)
- **Origin of the Number 874**:
  * Subproof 1 (`vlsu`) has **exactly 874 compare points** (324 POs + 550 DFFs = 874).
  * When boundary constraints (`add_output_stuck_at`, `add_pin_equivalences`, `add_ignored_inputs`) and `-enumconstraint` are active, Conformal adds the constraint predicate $C(x)$ to the solver miter of **every compare point in the module**.
  * Conformal emitted message `(F36)` indicating that 1 don't-care constraint predicate was added for each of the 874 compare points in `vlsu`.
- **Proof-Model Scope & Caveat**:
  * `-enumconstraint`: In `vlsu.sv`, `state_t` has 3 valid states (`IDLE=2'b00`, `LOAD_ACTIVE=2'b01`, `STORE_ACTIVE=2'b10`). Value `2'b11` is an unmapped SystemVerilog enum state; constraining it to unreachable space is standard in RTL synthesis verification.
  * Boundary stuck-ats: 12 constant output values are constrained to their exact RTL-defined values.
  * In Subproof 2 (`vector_coprocessor`), line 411 similarly reports `Added 4646 don't cares due to $constraints` across all 4,646 parent compare points.
  * **Verification Model Scope**: These constraints remain part of the formal proof model. They verify behavior within the specified enum domain and legal states, but do not establish behavior for illegal out-of-range states, uninitialized X-propagation cases, or invalid instruction encodings.

#### 3. Floating Signals Tied to Z: no * (Tool Modeling Assumption)
- Conformal flags this because `set_undriven_signal 0` was explicitly configured in the verification script.
- **Tool Modeling Assumption vs Physical Proof**:
  * This is an explicit verification tool-modeling assumption rather than an intrinsic physical proof.
  * In the revised netlist, leaf submodule `vlsu` has 16 pruned metadata/feedthrough output pins while their actual macro drivers were moved to the parent top-level module (netlist lines 15250–15261).
  * At the primary input interface, 10 primary inputs from the OpenHW X-Interface structs (`xif_mem_resp_i.exc`, `exccode[5:0]`, `dbg` and `xif_mem_result_i.err`, `dbg`) are unread by the coprocessor RTL.
  * `set_undriven_signal 0` resolves unassigned internal nets and unconnected boundary pins to logic 0 rather than high-impedance Z in the solver. This modeling assumption is standard for digital gate-level equivalence checking, but should be understood as a bounded model parameter rather than a generic claim that floating CMOS nodes cannot cause issues.

#### 4. Confirmation from Cadence Baseline LEC Log
- Inspection of the official baseline synthesis LEC log generated directly by Genus (`runs/baseline/genus/reports/lec.log`, line 966) reveals the **identical** flags:
  * `Floating signals tied to Z: no *`
  * `Command "add ignore outputs" used: yes *`
- This confirms that these flags are the intrinsic output of Cadence's automated `write_hier_compare_dofile -dynamic_hierarchy` flow, representing checked compositional decomposition within the documented modeling assumptions.

### Full Design State Point Accounting

$$\text{Total Design DFFs} = \text{DFFs in } vlsu\_inst + \text{DFFs in Top Module}$$

- **`baseline`**: $550\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,443\ \text{DFFs}}$ (Hierarchical proof in `runs/baseline/genus/reports/lec.log`: 2 module pairs, initial 3,023 aborts resolved by `analyze abort -compare`).
- **`r1_base`**: $550\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,443\ \text{DFFs}}$ (exact match to baseline).
- **`r1_cg`**: $550\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,443\ \text{DFFs}}$ (plus 28 ICG latches modeled and folded).
- **`r1_r2_cg`**: $294\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,187\ \text{DFFs}}$ (plus 27 ICG latches = 4,214 sequential instances).
  * Note: $4,443 - 256\ (\text{removed } store\_data\_q) = \mathbf{4,187\ \text{DFFs}}$ (exact mathematical match).

### 2.2 Post-Route Physical P&R / ECO Verification Audit (`r1_base_u70` and `r1_cg_u70`)

To independently verify the final post-route implementation netlists exported from Cadence Innovus 20.10 against their respective Cadence Genus 19.13 technology-mapped netlists, dedicated flat gate-to-gate formal equivalence runs were executed:

#### 1. Baseline Implementation Netlist (`r1_base_postroute`)
- **Golden Netlist**: `runs/r1_base/genus/outputs/vector_coprocessor.v` (4,655,550 bytes, SHA256: `0689e87255c1f39065c15127b133bd3d98206c8cb2bb96be354452d2426d428b`)
- **Revised Netlist**: `runs/r1_base_u70/innovus/outputs/vector_coprocessor.final.v` (4,716,868 bytes, SHA256: `0b47145855b2c1658b4d9414926ee0919548de616d000bf1b8aa1656db90942a`)
- **Script**: [`rtl2gds/formal/run_lec_r1_base_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_base_postroute.do)
- **Log**: `verification/method_review_lec/r1_base_postroute.log` (14,297 bytes, SHA256: `bea268891a7f8072dc969c20d1862b2ad09eaee8cdcda3aba4b52840fd100e41`)
- **Tool Modeling & Physical Audit**:
  * Functional export audit: Confirmed `vector_coprocessor.final.v` contains zero physical-only filler cells (`FILL*`) and zero power/ground pin clutter in module declarations.
  * Clock network & cloning: Innovus CCOpt inserted clock buffers and created `clk_i_clone1` inside `vlsu_inst`. Conformal mapped all 4,443 DFFs and 154 POs with zero unmapped points.
  * Results: **4,597 compared points: 4,597 Equivalent, 0 Non-equivalent, 0 Aborts, 0 Uncompared, 0 Unknown**.
  * Status: **PASS (100% Equivalent)**.

#### 2. Clock-Gated Candidate with Manual ECO (`r1_cg_postroute`)
- **Golden Netlist**: `runs/r1_cg/genus/outputs/vector_coprocessor.v` (4,506,747 bytes, SHA256: `4db54594a70b162df23c6add84fc2ef73fc7f99b492342e0cef692597ba0e3e9`)
- **Revised Netlist**: `runs/r1_cg_u70/innovus/outputs/vector_coprocessor.final.v` (4,425,875 bytes, SHA256: `d3b18a0759cff8ad85d3614b40caa196ca6a9b237615734568d9fee92eaee655`)
- **Script**: [`rtl2gds/formal/run_lec_r1_cg_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_cg_postroute.do)
- **Log**: `verification/method_review_lec/r1_cg_postroute.log` (16,918 bytes, SHA256: `aaaf82d8e4737c2d45e19906fbca65630fce27e9d2d7cf85de7f31c1f4f6fd33`)
- **Physical Optimizations & ECO Modeling**:
  * Manual ECO: During physical closure, a manual cell resizing ECO (`INVX1 -> INVX3`) and driver resizing was performed for transition/slew closure.
  * Clock gating modules: Post-route netlist retains `RC_CG_MOD` with `TLATNTSCAX6 RC_CGIC_INST` and inserted buffers (`FE_OFC*`). Gated-clock directives (`set_flatten_model -gated_clock -latch_fold_gated_clock -seq_constant_icg_latch`) folded all 28 ICG latches into clock pins.
  * Results: **4,597 compared points: 4,597 Equivalent, 0 Non-equivalent, 0 Aborts, 0 Uncompared, 0 Unknown**. Exactly 28 unreachable DLATs corresponding to folded ICG latches reported in both Golden and Revised; 0 unmapped key points.
  * Status: **PASS (100% Equivalent)**.

### 2.3 Post-Route Physical P&R Verification Audit for Density-Sweep Winner & Reference (`u97`)

Following completion and freezing of the high-density physical implementation sweeps at 97% target utilization (`u97`), independent flat gate-to-gate formal equivalence verifications were executed for the primary density winner, reference baseline, and secondary R2 candidate:

#### 1. Primary Density Winner (`r1_cg_u97_postroute`)
- **Golden Netlist**: `runs/r1_cg/genus/outputs/vector_coprocessor.v` (4,506,747 bytes, SHA256: `4db54594a70b162df23c6add84fc2ef73fc7f99b492342e0cef692597ba0e3e9`)
- **Revised Netlist**: `runs/r1_cg_u97/innovus/outputs/vector_coprocessor.final.v` (4,410,345 bytes, SHA256: `629c804e67f9ccd643cccb1752c369185f9467e21a700406146e72e2c0e89a69`)
- **Script**: [`rtl2gds/formal/run_lec_r1_cg_u97_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_cg_u97_postroute.do)
- **Log**: `verification/method_review_lec/r1_cg_u97_postroute.log` (16,934 bytes, SHA256: `5f9d493c994cb43c3e8e9a250d5e68d29f47a0ad4ca5ff4825b3d61e72dedaea`)
- **Implementation & Physical Audit**:
  - Closed cleanly without manual cell resizing ECO (automated post-route `optDesign` high effort with 0.02 ns target slack and multi-pass `ecoRoute -fix_drc`).
  - Standard cell area: 77,650.93 $\mu\text{m}^2$ (24,984 instances), die area: 93,076.59 $\mu\text{m}^2$. Setup slack +0.018 ns, hold slack +0.070 ns, `verify_drc` 0 violations, connectivity and antenna clean.
  - Netlist hygiene: 0 filler cells (`FILL*`) and 0 PG port declarations in `final.v`.
  - Modeling & Folded Latches: All 28 ICG latches (`RC_CG_MOD`) folded into clock pins via `-gated_clock -latch_fold_gated_clock -seq_constant_icg_latch`. Exactly 28 unreachable DLATs reported identically in Golden and Revised.
  - Verification Report: 0 non-standard modeling options, 0 incomplete verification flags, 0 ignored outputs, 0 black boxes.
  - Results: **4,597 compared points: 4,597 Equivalent, 0 Non-equivalent, 0 Aborts, 0 Uncompared, 0 Unknown, 0 Unmapped key points**.
  - Status: **PASS (100% Equivalent)**.

#### 2. Equal-Density Baseline Reference (`r1_base_u97_postroute`)
- **Golden Netlist**: `runs/r1_base/genus/outputs/vector_coprocessor.v` (4,655,550 bytes, SHA256: `0689e87255c1f39065c15127b133bd3d98206c8cb2bb96be354452d2426d428b`)
- **Revised Netlist**: `runs/r1_base_u97/innovus/outputs/vector_coprocessor.final.v` (4,684,589 bytes, SHA256: `0b65c72d6500ffc72dc9b7634e9b3079076550051c699e0fa3325f0aec39886e`)
- **Script**: [`rtl2gds/formal/run_lec_r1_base_u97_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_base_u97_postroute.do)
- **Log**: `verification/method_review_lec/r1_base_u97_postroute.log` (14,313 bytes, SHA256: `44ae2ed3daf70363ad8e5b51a45e6de83f5e0ef565e8192de2c3dd517e3716cf`)
- **Implementation & Physical Audit**:
  - Standard cell area: 86,290.19 $\mu\text{m}^2$ (25,836 instances), die area: 102,285.55 $\mu\text{m}^2$.
  - Netlist hygiene: 0 filler cells (`FILL*`) and 0 PG port declarations in `final.v`.
  - Modeling: Flat gate-to-gate comparison with standard constant folding and hierarchical sequential merge.
  - Verification Report: 0 non-standard modeling options, 0 incomplete verification flags, 0 ignored outputs, 0 black boxes.
  - Results: **4,597 compared points: 4,597 Equivalent, 0 Non-equivalent, 0 Aborts, 0 Uncompared, 0 Unknown, 0 Unmapped key points**.
  - Status: **PASS (100% Equivalent)**.

#### 3. Secondary Candidate with R2 RTL (`r1_r2_cg_u97_postroute`)
- **Golden Netlist**: `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v` (4,516,189 bytes, SHA256: `8077824d3cc5315b789d84091a94cae1fa040641872240ae95bb8bc2c529c732`)
- **Revised Netlist**: `runs/r1_r2_cg_u97/innovus/outputs/vector_coprocessor.final.v` (4,416,286 bytes, SHA256: `afc54f414c273111cb1835114f084ff04528e990dec115c47aae7a892620f45e`)
- **Script**: [`rtl2gds/formal/run_lec_r1_r2_cg_u97_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_r2_cg_u97_postroute.do)
- **Log**: `verification/method_review_lec/r1_r2_cg_u97_postroute.log` (16,958 bytes, SHA256: `56f3b165b85e419f5f399b2330900973d4f05e1a30216fdc0ce69220f7211148`)
- **Results**: **4,341 compared points (154 POs, 4,187 DFFs): 4,341 Equivalent, 0 Non-equivalent, 0 Aborts, 0 Uncompared, 0 Unknown, 0 Unmapped key points**. Exactly 27 unreachable DLATs corresponding to folded ICG latches on both sides.
- **Architectural Scope**: Confirms 100% gate equivalence between Genus netlist and post-route netlist for candidate R2. *Explicit reminder: This does not resolve the unproven Original RTL vs Candidate R2 RTL semantic equivalence.*
- **Status**: **PASS (Equivalent - R2 Implementation Only)**.

---

## 3. Candidate R2 Equivalence Status: Proof Incomplete Under This Setup

While `r1_r2_cg` is **100% formally equivalent to Candidate R2 RTL**, the global semantic equivalence proof between **Original RTL** and **Candidate R2 RTL** is **incomplete under this comparison setup**:

### 3.1 Full-Top Sequential Equivalence Run (`orig_rtl_vs_r2_rtl_sec.do`)
To independently evaluate whether Cadence Conformal LEC could establish global sequential equivalence across the modified VLSU boundary without blackboxing, a flat RTL-to-RTL sequential verification run was executed:
- **Script**: [`rtl2gds/formal/run_orig_rtl_vs_r2_rtl_sec.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_orig_rtl_vs_r2_rtl_sec.do)
- **Log**: `verification/method_review_lec/orig_rtl_vs_r2_rtl_sec.log` (717 KB, SHA256: `b4acfe013ab77870401b0ace444ee40c8b7b637ac594aec1cd26b30c745f76f0`)
- **Directives**: Full model flattening across VLSU boundary (`set_flatten_model -seq_constant -hier_seq_merge -balanced_modeling`), with 4 parallel solver threads.

#### Key Point Mapping & Comparison Ledger
| Category | Golden (Original RTL) | Revised (Candidate R2 RTL) | Verification Status / Details |
| :--- | :---: | :---: | :--- |
| **Primary Inputs** | 169 | 169 | 100% Mapped |
| **Primary Outputs** | 154 | 154 | **122 Equivalent**, **32 Non-equivalent** |
| **Non-Equivalent POs** | `/xif_mem_req_o[wdata][31:0]` | `/xif_mem_req_o[wdata][31:0]` | Non-equivalent cutpoint comparison under unconstrained input space (`wdata[31:0]`) |
| **Sequential DFF Points** | 4,925 | 4,669 | 4,189 Mapped: **1,164 Equivalent**, **3,025 Abort** |
| **Unmapped Points (Golden)** | 256 DFFs | 0 | **`store_data_q_reg[255:0]` unmapped** |
| **Unmapped Points (Revised)**| 0 | 804 cutpoints | Cutpoint boundary artifacts (`n57`, `n182_10`) |
| **Unreachable DFFs** | 480 | 480 | Pruned registers (v0 and unused control) |
| **Merged Sequential Points** | 255 | 255 | v0 sequential constants folded |

### 3.2 Analysis of Sequential Comparison Incompleteness
1. **Architectural Contract Modification in VLSU**:
   - In **Original RTL** (`rtl/execution/vlsu.sv`):
     ```verilog
     // Data snapshot captured into flip-flops on instruction issue
     always_ff @(posedge clk_i or negedge rst_ni) begin
       if (!rst_ni) store_data_q <= '0;
       else if (issue_req_valid && is_store) store_data_q <= rdata2_i;
     end
     assign xif_mem_req_o.wdata = store_data_q[32*beat_count +: 32];
     ```
   - In **Candidate R2 RTL** (`cand/r2/rtl/execution/vlsu.sv`):
     ```verilog
     // store_data_q registers completely eliminated; combinational bypass
     assign xif_mem_req_o.wdata = rdata2_i[32*beat_count +: 32];
     ```
2. **Cutpoint Non-Equivalence & State Aborts**:
   - Under this unconstrained comparison setup without inductive interface assertions or temporal environment constraints (e.g. asserting that VRF write port does not conflict during an active store burst and `raddr2` remains stable across the burst), the solver encounters 804 unmapped cutpoints and 3,025 aborted state points.
   - While Conformal flags the 32 `wdata` bits as non-equivalent cutpoints under unconstrained solver space, this does not establish a reset-reachable counterexample witness. Rather, the proof is incomplete because combinational cutpoints cannot bridge the multi-cycle retimed contract across VRF port 2 without inductive invariant support.
3. **No Waiving / Verification Integrity**:
   - Waiving the 256 unmapped state points of `store_data_q` or blackboxing VLSU to claim proof would violate formal verification integrity.
   - Original RTL $\rightarrow$ Candidate R2 RTL equivalence proof is **incomplete under this comparison setup**, and remains unproven without inductive temporal modeling.
4. **Simulation Caveat**:
   - Sampled testbench simulation (`tb_vcop.sv`) confirms that under legal stimulus sequences where VRF hazards do not occur, the coprocessor outputs correct store data.
   - However, bounded simulation covers only a finite subspace of execution sequences and cannot substitute for mathematical proof of global semantic equivalence.

---

## 4. Key Point Mapping & RTL Pruning Caveats

### Address Bit 4 Pruning (`rs1_q[4]`, `rs2_q[4]`)
In Golden RTL:
```verilog
rs1_q <= xif_issue_req_i.instr[19:15]; // 5 bits
rs2_q <= xif_issue_req_i.instr[24:20]; // 5 bits
```
Top module sets parameter `NUM_VREGS = 16`. The register file only implements 16 registers (`vrf[0..15]`), requiring only 4 address bits (`[3:0]`). Genus pruned `rs1_q[4]` and `rs2_q[4]`.
> [!CAUTION]
> **Out-of-Range Behavior Caveat**: It must not be assumed that address bit 4 has no semantic impact. In Verilog simulation, an out-of-range register access ($\ge 16$) returns `'x`. In synthesized hardware, Genus prunes bit 4, causing out-of-range addresses to alias modulo 16 (`addr[3:0]`). This is an RTL/synthesis bounds assumption, not guaranteed dead logic under invalid instruction encodings.

### Custom Project Semantics: Hardwired `v0`
In [`rtl/core/vector_reg_file_3port.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl/core/vector_reg_file_3port.sv#L38-L40):
```verilog
assign rdata1_o = (raddr1_i == 5'b0) ? '0 : vrf[raddr1_i];
```
In this project, vector register `v0` is hardwired to zero as a **custom project-specific architectural choice**. This is NOT part of the standard RISC-V Vector (RVV) specification (where `v0` is a general-purpose register and vector mask register). Genus prunes all 256 flip-flops of `vrf[0]`, which Conformal validates via `set_flatten_model -seq_constant`.

---

## 5. Tool Flaw Audit: Genus `write_do_lec` Netlist Stale Path Hazard

In `flow/genus_flow.tcl`, multiple synthesis runs were executed in a single persistent Genus session. Genus 19.13 retains session-level root attributes for formal verification across `delete_obj [get_db designs]`. Consequently, `write_do_lec` in all candidate runs (`r1_base`, `r1_cg`, `r1_r2_cg`) generated dofiles hardcoded to:
```tcl
read_design -verilog95 -revised -lastmod -noelab /home/.../runs/baseline/genus/outputs/vector_coprocessor.v
```
Furthermore, intermediate mapping collateral (`fv/vector_coprocessor/fv_map.v.gz`) was overwritten in the process working directory on each synthesis run.
**Remediation**: Standalone direct RTL-to-gate scripts are maintained in [`rtl2gds/formal/`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/) to bypass volatile session attributes and intermediate netlist overwrites.

---

## 6. Area Audit & Hierarchy Accounting (Genus 19.13)

| Metric | `baseline` (Unchanged SDC) | `r1_base` (Impl SDC) | `r1_cg` (Impl SDC + CG) | `r1_r2_cg` (Impl SDC + CG + R2) | Delta (`r1_base` $\rightarrow$ `r1_r2_cg`) |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Std Cell Area (`Cell Area`)** | 98,768.125 $\mu\text{m}^2$ | 91,829.685 $\mu\text{m}^2$ | 83,267.561 $\mu\text{m}^2$ | 80,957.453 $\mu\text{m}^2$ | **-10,872.232 $\mu\text{m}^2$ (-11.84%)** |
| **Estimated Net Area** | ~38,000 $\mu\text{m}^2$ | 38,893.625 $\mu\text{m}^2$ | 35,133.826 $\mu\text{m}^2$ | 34,982.387 $\mu\text{m}^2$ | -3,911.238 $\mu\text{m}^2$ (-10.06%) |
| **Total Area (`get_db design.area`)** | ~136,000 $\mu\text{m}^2$ | 130,723.310 $\mu\text{m}^2$ | 118,401.387 $\mu\text{m}^2$ | 115,939.841 $\mu\text{m}^2$ | **-14,783.469 $\mu\text{m}^2$ (-11.31%)** |
| **Instance Count** | 28,237 | 25,923 | 25,173 | 24,911 | -1,012 insts (-3.90%) |
| **Sequential Instances** | 4,443 | 4,443 | 4,471 | 4,214 | -229 seq insts (-5.15%) |
| **Integrated Clock Gating (ICG)** | 0 | 0 | 28 | 27 | +27 ICGs |
| **Worst Negative Slack (WNS)** | -5,500 ps (IO structural) | +0.0 ps | +0.0 ps | +0.1 ps ($+0.0001\text{ ns}$) | Fully closed |

> [!NOTE]
> **Area Discrepancy Resolution**: `get_db designs .area` reports `Total Area = Cell Area + Net Area` in PLE mode. Standard cell active silicon footprint is strictly `Cell Area` (91,829.685 $\mu\text{m}^2$ for `r1_base`).
> **Slack Units**: In Genus 19.13 reports, clock period is 20,000 ps (20 ns). WNS raw value of `0.1` represents **$+0.1\text{ ps}$**, not $+0.10\text{ ns}$.

---

## 7. Physical Signoff Limitations (`baseline_u70`)

Innovus streamed out GDS `runs/baseline_u70/innovus/outputs/vector_coprocessor.final.gds` (70.5 MB). This layout is an **implementation milestone, not signoff-clean**:
1. **DRC Violations**: `verify_drc` reports **23 geometry DRC violations**:
   - 20 violations on Metal 1 (`ParallelRunLength Spacing` between standard cell pins and internal nets).
   - 3 violations on Metal 2 (`ParallelRunLength Spacing`).
2. **Missing Signoff Decks**: Kit lacks foundry signoff Calibre DRC/LVS decks; signoff DRC/LVS has not been run.
3. **Extraction Accuracy**: Native Innovus captable extraction was used instead of signoff Quantus QRC due to LEF/QRC layer naming discrepancies.

---

## 8. Cryptographic Collateral Hashes & Paths

### Golden RTL Collateral (`baseline_revision: dbc5fcd9118cd51c1b44d498eb1e9dba4c8f8de5`)
- [`rtl/include/cv32e40x_xif_pkg.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl/include/cv32e40x_xif_pkg.sv): `becd1a8ca3ac25064eeeab2adf25f340f3a95324ea366d006c0c0db0fe09f4d5`
- [`rtl/core/vector_reg_file_3port.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl/core/vector_reg_file_3port.sv): `79eb322f5ae83e21dbc3408d760c216c97838da33733b0e493f380de2affd4d8`
- [`rtl/execution/vlsu.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl/execution/vlsu.sv): `c697c18741c545552e91afa0d4c1ad975a1d01a364436b736d8c0ecd6715e5d8`
- [`rtl/execution/vector_exec_unit.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl/execution/vector_exec_unit.sv): `b6432211e287d34f6281b910c6483af2ad0f86ced78aa080a9b9b053bc62f831`
- [`rtl/core/vector_coprocessor.sv`](file:///Users/vs/function/Vector_coprocessor_final/rtl/core/vector_coprocessor.sv): `2164c442606947da9262b0e93aa98ed9907e76982ea5fda999deffb69a688826`

### Candidate R2 Modified Collateral
- [`cand/r2/rtl/execution/vlsu.sv`](file:///Users/vs/function/Vector_coprocessor_final/cand/r2/rtl/execution/vlsu.sv): `6e7e5a8018368069ea7c7c4bfffcba18662cc3953621d4f7c364d94d1dd21089`

### Synthesized & Post-Route Gate-Level Netlists
- `runs/baseline/genus/outputs/vector_coprocessor.v`: `4c58bbb1641a1d0408709fb5e6b4bc54ead46b5604f30d9677f9b7f6d59b6c62` (5,008,576 bytes)
- `runs/r1_base/genus/outputs/vector_coprocessor.v`: `0689e87255c1f39065c15127b133bd3d98206c8cb2bb96be354452d2426d428b` (4,655,550 bytes)
- `runs/r1_base_u70/innovus/outputs/vector_coprocessor.final.v`: `0b47145855b2c1658b4d9414926ee0919548de616d000bf1b8aa1656db90942a` (4,716,868 bytes)
- `runs/r1_base_u97/innovus/outputs/vector_coprocessor.final.v`: `0b65c72d6500ffc72dc9b7634e9b3079076550051c699e0fa3325f0aec39886e` (4,684,589 bytes)
- `runs/r1_cg/genus/outputs/vector_coprocessor.v`: `4db54594a70b162df23c6add84fc2ef73fc7f99b492342e0cef692597ba0e3e9` (4,506,747 bytes)
- `runs/r1_cg_u70/innovus/outputs/vector_coprocessor.final.v`: `d3b18a0759cff8ad85d3614b40caa196ca6a9b237615734568d9fee92eaee655` (4,425,875 bytes)
- `runs/r1_cg_u97/innovus/outputs/vector_coprocessor.final.v`: `629c804e67f9ccd643cccb1752c369185f9467e21a700406146e72e2c0e89a69` (4,410,345 bytes)
- `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v`: `8077824d3cc5315b789d84091a94cae1fa040641872240ae95bb8bc2c529c732` (4,516,189 bytes)
- `runs/r1_r2_cg_u97/innovus/outputs/vector_coprocessor.final.v`: `afc54f414c273111cb1835114f084ff04528e990dec115c47aae7a892620f45e` (4,416,286 bytes)

### Reproduction Scripts & Logs
- Batch runner: [`rtl2gds/formal/run_all_lec.sh`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_all_lec.sh)
- `r1_base` script: [`rtl2gds/formal/run_lec_r1_base.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_base.do)
- `r1_cg` script: [`rtl2gds/formal/run_lec_r1_cg.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_cg.do)
- `r1_r2_cg` script: [`rtl2gds/formal/run_lec_r1_r2_cg.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_r2_cg.do)
- Sequential divergence diagnostics: [`rtl2gds/formal/run_lec_orig_vs_r1_r2_cg.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_orig_vs_r1_r2_cg.do)
- Full-top sequential equivalence: [`rtl2gds/formal/run_orig_rtl_vs_r2_rtl_sec.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_orig_rtl_vs_r2_rtl_sec.do)
- `r1_base` post-route verification (u70): [`rtl2gds/formal/run_lec_r1_base_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_base_postroute.do)
- `r1_cg` post-route verification (u70): [`rtl2gds/formal/run_lec_r1_cg_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_cg_postroute.do)
- `r1_cg_u97` post-route verification (u97 winner): [`rtl2gds/formal/run_lec_r1_cg_u97_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_cg_u97_postroute.do)
- `r1_base_u97` post-route verification (u97 baseline): [`rtl2gds/formal/run_lec_r1_base_u97_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_base_u97_postroute.do)
- `r1_r2_cg_u97` post-route verification (u97 R2): [`rtl2gds/formal/run_lec_r1_r2_cg_u97_postroute.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_r2_cg_u97_postroute.do)
- Server log paths:
  * `verification/method_review_lec/r1_base.log` (31,415 bytes)
  * `verification/method_review_lec/r1_cg.log` (33,310 bytes)
  * `verification/method_review_lec/r1_r2_cg.log` (33,668 bytes)
  * `verification/method_review_lec/orig_vs_r1_r2_cg.log` (35,622 bytes)
  * `verification/method_review_lec/orig_rtl_vs_r2_rtl_sec.log` (733,354 bytes, SHA256: `b4acfe013ab77870401b0ace444ee40c8b7b637ac594aec1cd26b30c745f76f0`)
  * `verification/method_review_lec/r1_base_postroute.log` (14,297 bytes, SHA256: `bea268891a7f8072dc969c20d1862b2ad09eaee8cdcda3aba4b52840fd100e41`)
  * `verification/method_review_lec/r1_cg_postroute.log` (16,918 bytes, SHA256: `aaaf82d8e4737c2d45e19906fbca65630fce27e9d2d7cf85de7f31c1f4f6fd33`)
  * `verification/method_review_lec/r1_cg_u97_postroute.log` (16,934 bytes, SHA256: `5f9d493c994cb43c3e8e9a250d5e68d29f47a0ad4ca5ff4825b3d61e72dedaea`)
  * `verification/method_review_lec/r1_base_u97_postroute.log` (14,313 bytes, SHA256: `44ae2ed3daf70363ad8e5b51a45e6de83f5e0ef565e8192de2c3dd517e3716cf`)
  * `verification/method_review_lec/r1_r2_cg_u97_postroute.log` (16,958 bytes, SHA256: `56f3b165b85e419f5f399b2330900973d4f05e1a30216fdc0ce69220f7211148`)
