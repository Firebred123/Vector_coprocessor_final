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

| Run Label | Golden Source | Revised Netlist Path | Gate Count / Insts | Std Cell Area ($\mu\text{m}^2$) | Hierarchical Subproofs | Abort Points | Non-EQ Points | Formal Proof Status |
| :--- | :--- | :--- | :--- | :--- | :--- | :---: | :---: | :--- |
| **`baseline`** | Original RTL (`dbc5fcd`) | `runs/baseline/genus/outputs/vector_coprocessor.v` | 28,237 | 98,768.125 | Flat: 154 PO / 4443 DFF | 0 | 0 | **PASS (Equivalent)** |
| **`r1_base`** | Original RTL (`dbc5fcd`) | `runs/r1_base/genus/outputs/vector_coprocessor.v` | 25,923 | 91,829.685 | `vlsu`: 324 PO / 550 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_cg`** | Original RTL (`dbc5fcd`) | `runs/r1_cg/genus/outputs/vector_coprocessor.v` | 25,173 (28 ICG) | 83,267.561 | `vlsu`: 324 PO / 550 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_r2_cg` (R2 RTL)** | Candidate R2 RTL (`cand/r2`) | `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v` | 24,911 (27 ICG) | 80,957.453 | `vlsu`: 324 PO / 294 DFF<br>`top`: 154 PO / 3893 DFF + 1 BBOX | 0 | 0 | **PASS (Equivalent)** |
| **`r1_r2_cg` (Orig RTL)** | Original RTL (`dbc5fcd`) | `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v` | 24,911 (27 ICG) | 80,957.453 | 258 unmapped DFFs in Golden | N/A | N/A | **UNPROVEN / INCONCLUSIVE** |

> [!IMPORTANT]
> **Strict Verification Standard**: Formal verification results must never treat unresolved black boxes, unmapped state points, unverified cutpoints, or aborted solver tasks as a PASS. Every comparison is independently executed and verified to 0 Aborts and 0 Non-equivalences.

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

### Full Design State Point Accounting

$$\text{Total Design DFFs} = \text{DFFs in } vlsu\_inst + \text{DFFs in Top Module}$$

- **`baseline`**: 4,443 DFFs (flat compare: 4,443 DFFs).
- **`r1_base`**: $550\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,443\ \text{DFFs}}$ (exact match to baseline).
- **`r1_cg`**: $550\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,443\ \text{DFFs}}$ (plus 28 ICG latches modeled and folded).
- **`r1_r2_cg`**: $294\ (\text{in } vlsu) + 3,893\ (\text{in top}) = \mathbf{4,187\ \text{DFFs}}$ (plus 27 ICG latches = 4,214 sequential instances).
  * Note: $4,443 - 256\ (\text{removed } store\_data\_q) = \mathbf{4,187\ \text{DFFs}}$ (exact mathematical match).

---

## 3. Candidate R2 Equivalence Status: Globally Unproven

While `r1_r2_cg` is **100% formally equivalent to Candidate R2 RTL**, the global semantic equivalence between **Original RTL** and **Candidate R2 RTL** remains **UNPROVEN / INCONCLUSIVE**:

1. **258 Unmapped State Points**:
   Direct comparison between Original RTL and `r1_r2_cg` netlist in Conformal LEC identifies 258 unmapped DFF key points in Golden:
   * 256 DFFs of `/vlsu_inst/store_data_q_reg[255:0]`.
   * 2 DFFs of `/rs1_q_reg[4]` and `/rs2_q_reg[4]`.
2. **Sequential Re-Timing Boundary**:
   In Original RTL, store burst data is latched into `store_data_q` in the first cycle. In Candidate R2, `store_data_q` is eliminated and store data is read combinationally from VRF port 2 across the burst. Because combinational LEC cuts state feedback at register boundaries, it cannot prove functional equivalence across cycle-re-timed boundaries.
3. **Simulation Limitations**:
   Sampled differential simulation (`tb_vcop.sv`) tests discrete stimulus sequences, but does not provide exhaustive formal proof of semantic equivalence across all possible concurrent instruction issues and corner cases.
4. **Verdict**: Candidate R2 is proven to match its own synthesized gates, but its equivalence to the original baseline RTL specification is **formally inconclusive**.

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

### Synthesized Gate-Level Netlists
- `runs/baseline/genus/outputs/vector_coprocessor.v`: `4c58bbb1641a1d0408709fb5e6b4bc54ead46b5604f30d9677f9b7f6d59b6c62` (5,008,576 bytes)
- `runs/r1_base/genus/outputs/vector_coprocessor.v`: `0689e87255c1f39065c15127b133bd3d98206c8cb2bb96be354452d2426d428b` (4,655,550 bytes)
- `runs/r1_cg/genus/outputs/vector_coprocessor.v`: `4db54594a70b162df23c6add84fc2ef73fc7f99b492342e0cef692597ba0e3e9` (4,506,747 bytes)
- `runs/r1_r2_cg/genus/outputs/vector_coprocessor.v`: `8077824d3cc5315b789d84091a94cae1fa040641872240ae95bb8bc2c529c732` (4,516,189 bytes)

### Reproduction Scripts & Logs
- Batch runner: [`rtl2gds/formal/run_all_lec.sh`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_all_lec.sh)
- `r1_base` script: [`rtl2gds/formal/run_lec_r1_base.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_base.do)
- `r1_cg` script: [`rtl2gds/formal/run_lec_r1_cg.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_cg.do)
- `r1_r2_cg` script: [`rtl2gds/formal/run_lec_r1_r2_cg.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_r1_r2_cg.do)
- Sequential divergence diagnostics: [`rtl2gds/formal/run_lec_orig_vs_r1_r2_cg.do`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/formal/run_lec_orig_vs_r1_r2_cg.do)
- Server log paths:
  * `verification/method_review_lec/r1_base.log` (31,415 bytes)
  * `verification/method_review_lec/r1_cg.log` (33,310 bytes)
  * `verification/method_review_lec/r1_r2_cg.log` (33,668 bytes)
  * `verification/method_review_lec/orig_vs_r1_r2_cg.log` (35,622 bytes)
