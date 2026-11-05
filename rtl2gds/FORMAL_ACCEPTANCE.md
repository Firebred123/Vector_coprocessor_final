# Coordinator acceptance of formal evidence

## Primary candidate: original RTL plus clock gating (`r1_cg`)

The synthesis-equivalence gate is accepted for this experiment **under the documented Conformal enum, undriven-signal, and X-modeling choices**. This is not physical signoff or proof of the original project's ISA correctness.

Independent checks of native `verification/method_review_lec/r1_cg.log` establish two equivalent module pairs, zero final non-equivalent/abort/unknown points, no undefined-cell blackbox, and no unmapped state warning. The VLSU child proves 324 output points plus 550 DFFs; the parent proves 154 output points plus 3893 DFFs and the previously proved VLSU abstraction. The 4443 original state points are accounted for; inserted ICG latches are handled by the documented gated-clock modeling.

The reported ignored outputs are confined to the internal VLSU boundary. Inspection of `/tmp/method_review_lec/hier_r1_cg.do` confirms 12 constant metadata bits and four ID feedthrough bits are excluded there. Independent inspection of the actual revised netlist confirms the 12 macro output bits are explicitly assigned mode=2, size=2, be=15, attr=0, spec=0 at lines15250–15261. The ID bits are driven in the parent and also connected as VLSU id_i; the RTL VLSU assigns output id directly from id_i. Parent comparison retains all154 macro output points. Thus these exclusions have a checked structural/compositional explanation, rather than an unresolved functional blackbox.

The generated constraints and enum-domain don't-cares remain part of the proof model. They do not establish behavior for invalid states, uninitialized/X cases, or out-of-range vector addresses. The `set_undriven_signal 0` policy must be reported as a tool-model assumption; a generic CMOS rationale or a count of unused input fields does not by itself prove it harmless. The revised leaf has16 pruned/undriven metadata/feedthrough output pins while their actual macro drivers reside in the parent; do not confuse that with the10 unused input fields.

## Secondary candidate: R2 plus clock gating

R2 RTL to its own gates is supported by the independent hierarchical synthesis-equivalence run. Original RTL to R2 remains **unproven under the attempted comparison setups**. The full-top attempt reports32 non-equivalent output key points,3025 aborts,256 unmapped golden DFFs and804 revised cutpoints. Without a reset-reachable witness this is not a demonstrated behavioral bug; without a successful proof it is not equivalence. Finite differential simulation is separate supporting evidence. R2 remains a secondary experiment with explicit limits.

## Other acceptance limits

- Standalone formal dofiles must name exact golden inputs and netlist hashes. Do not use the stale auto-generated `write_do_lec` revised paths.
- Genus timing reports use ps: raw slack0.1 is0.1ps, not0.1ns. Printed nonnegative synthesis slack is not postroute setup/hold closure.
- Hardwired-zero v0 is this project's custom behavior, not a standard RISC-V vector convention.
- The corrected R1 baseline and clock-gated candidate at 70% utilization have passed native Innovus geometry/connectivity/antenna checks, postroute setup/hold checks, and structural stream-out checks. These are experiment checks, not foundry DRC/LVS signoff. The older R0 diagnostic GDS still has23 native geometry violations.

## Postroute equivalence acceptance: 70% utilization

The coordinator independently inspected both native Conformal log summaries and SHA256 values. Genus-to-final-netlist equivalence is accepted for `r1_base_u70` and `r1_cg_u70`: each reports 4597 equivalent points (154 outputs and 4443 DFFs), zero non-equivalent, abort, unknown, uncompared or unmapped key points, no blackboxes, and no ignored outputs. Both reports mark incomplete verification and non-standard modeling as zero. The clock-gated comparison folds the same 28 unreachable ICG latches on each side. This extends the synthesis proof through physical implementation under the documented formal models; it does not prove the project's ISA or replace physical signoff.

| Run | Final functional netlist SHA256 | Native Conformal log SHA256 |
| --- | --- | --- |
| `r1_base_u70` | `0b47145855b2c1658b4d9414926ee0919548de616d000bf1b8aa1656db90942a` | `bea268891a7f8072dc969c20d1862b2ad09eaee8cdcda3aba4b52840fd100e41` |
| `r1_cg_u70` | `d3b18a0759cff8ad85d3614b40caa196ca6a9b237615734568d9fee92eaee655` | `aaaf82d8e4737c2d45e19906fbca65630fce27e9d2d7cf85de7f31c1f4f6fd33` |

Logs reside in server `verification/method_review_lec/`; exact standalone comparison scripts are committed in `rtl2gds/formal/`. Any later density winner requires its own final-netlist comparison and artifact hashes before inheriting this acceptance.
