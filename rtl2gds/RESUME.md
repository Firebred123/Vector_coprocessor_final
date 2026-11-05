# Resume after Claude usage reset

Coordinator checkpoint: 2026-11-05 around 06:00 IST. Claude Opus 5.5 (`claude-opus-5-5`) reported its five-hour quota exhausted, reset 07:30 Asia/Kolkata. The first exec-session timer exited before its deadline and was replaced around 06:55 IST. A detached one-shot scheduler will message phys-lead and codex-1 at **07:31 IST / 02:01 UTC**. Its current PID and state are in `/tmp/rtl2gds-resume-20261105.json`, with `.log` and `-process.log` alongside it. A second, hub-owned quota-reset wakeup watches phys-lead with idle_for=5548 seconds (last idle start 00:28:32 UTC), targeting the same deadline independently of the local process. Preserve the original all-idle rule; remove only the one-off `RTL2GDS_QUOTA_RESET_20261105` rule after handling it. Check whether phys-lead is already busy before dispatch to avoid duplicate runs. Do not repeatedly call the limited account before reset.

## Updated candidate priority (07:16 IST)

**Primary physical comparison: original RTL baseline `r1_base` versus original RTL plus clock gating `r1_cg`.** Its measured synthesis saving is9.32%. R2 plus clock gating (`r1_r2_cg`,11.84% synthesis saving) is secondary because original-RTL-to-R2 equivalence remains incomplete. Later standalone Conformal comparisons prove R2 RTL to its own gates only. The flattened original-vs-R2 attempt has32 non-equivalent output key points and3025 aborts under its comparison setup; without a reset-reachable witness this does not establish an actual behavioral counterexample, and without successful proof it cannot establish equivalence. The m91 audit and independent native log/netlist checks resolve the internal VLSU exclusions for r1_cg; its synthesis-equivalence gate is accepted under the documented enum/undriven/X modeling domain (see FORMAL_ACCEPTANCE.md). This does not establish physical signoff or behavior in invalid/X domains. This priority supersedes older queued/scheduled briefs naming R2 as primary.

## Preserved state

- Local branch: `experiment/rtl2gds-area`; flow edits checkpointed in `2ba0d44`. Original design RTL remains unchanged in the local source tree. R2 is isolated in the server candidate tree `cand/r2` and local candidate patches.
- Server experiment: `/home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor`; latest inspected commit `79b27c6` (R1 synthesis results, candidate R2 tree, wrappers). Remote working tree was clean at this checkpoint.
- Local and remote `genus_flow.tcl` SHA256: `68b2dd13bc78e93431d1107883853d173d98ba65970afade00648ddc45ce9670`.
- Local and remote `innovus_flow.tcl` SHA256: `83dd9a5bde82fbd3f66f72f532bfccc846136a7132f793dc465ca88f96ec873b`.
- Keep the existing intended Genus and Innovus GUI sessions. Confirm actual process identity before mutation. Preserve the original counter demo and bridge files. The separate offline single-owner fix remains in the PD_MCP worktree, not deployed.
- Genus super-threading workaround includes `auto_super_thread false`, empty servers and one CPU. The distributed redirect/worker failure is documented in the committed flow and STATUS.md. Do not touch other users' processes or IPC resources.

## Native Genus measurements already completed

All three runs use the same implementation SDC, matched gsclib045 slow library and default synthesis effort. Source of numbers: `runs/<run>/genus/reports/qor_ledger.txt` final line and `opt_qor.rpt` Cell Area. Use **standard-cell area**, not design `.area`, which includes estimated net area.

| Run | RTL | Clock gating | Standard-cell area (um2) | Improvement vs comparison baseline | Instances | Sequential instances | ICGs |
|---|---|---|---:|---:|---:|---:|---:|
| r1_base | original | off | 91829.685 | baseline | 25923 | 4443 | 0 |
| r1_cg | original | on | 83267.561 | 9.32% | 25173 | 4471 | 28 |
| r1_r2_cg | R2 store-buffer removal | on | 80957.453 | 11.84% | 24911 | 4214 | 27 |

These are synthesis results, not routed area or final acceptance. Reports use **ps** for timing (20ns clock displays as 20000); never label raw `get_db .slack` values as ns. The baseline QoR reports zero violating setup paths at printed precision; R2+CG top path is printed MET (0ps). Physical setup/hold closure remains to be checked.

## Constraint regimes and prior diagnostic run

- R0: unchanged original 20ns, input12ns/output12ns SDC. This is diagnostic only: its feedthrough budget is negative and hold uncertainty0.25ns inflated buffers.
- R1 implementation SDC: same 20ns period, input10ns/output6ns, setup uncertainty0.25ns, hold uncertainty0.05ns, input transition0.10ns. These interface and jitter numbers are explicit experimental assumptions for a standalone macro; do not describe them as a verified host-CPU budget. Apply identically to accepted baseline and all candidates; no unsupported multicycle exceptions.
- `baseline_u70` completed route/export under R0. Final cell area128222.55um2, core141107.83um2, die150329.52um2. The final geometry report has **23 spacing violations**, connectivity reports no problems. DEF/GDS/SDF/netlists and final database exist. This run is not a clean accepted result and must not be compared to R1 as if constraints matched.
- Installed GDS was regenerated server-side from the OA library; see STATUS.md for inspected LEF boundary matching and layer-map origin. All PDK/OA/GDS library material stays server-only and ignored by Git. Native captable extraction is not foundry signoff QRC.

## Next work, in order

1. Read the full queued reviews and current STATUS.md; verify the saved files and no unfinished native command before proceeding.
2. method-review is authorized to inspect/run **Conformal batch only**, with artifacts under `verification/method_review_lec` and owned local report `rtl2gds/FORMAL_REVIEW.md`. Coordinate proof ownership before duplicating it. Its revised report and FORMAL_ACCEPTANCE.md document the proved hierarchical VLSU abstraction, verified constant/feedthrough exclusions, and corrected ps timing units. The R2-RTL-to-netlist proof remains distinct from the incomplete original-RTL-to-R2 comparison. It must reject unresolved blackboxes/unmapped/aborted verification and record explicit assumptions. It may not mutate Genus/Innovus.
3. Implement `r1_base` and the primary cycle-preserving `r1_cg` through Innovus; keep `r1_r2_cg` as an optional secondary run from their existing netlist/SDC outputs. Use independent run directories/checkpoints, matched constraints/corners and a utilization that closes routing and timing. Retain intermediate placement/CTS/route reports. Compare final cell/core/die area only between accepted runs.
4. Close geometry/connectivity/antenna and setup/hold checks, validate stream-out layers/cell references and complete formal/equivalence evidence. Record failing or unavailable signoff checks honestly. Do not equate GDS existence or STATUS OK with a passed stage.
5. Optional R5 latency/area alternatives are authorized as separately labeled experiments if time permits; keep the primary result cycle-preserving. Bug-fix proposals stay separate from this experiment.
6. Update the stage ledger (currently incomplete beyond attempt0), collect small public result summaries/manifest, commit each meaningful source/flow/report change with rationale locally and on the server, and push the experiment branch. Sync through WorkBoard /tmp staging and verify promoted final-destination hashes. Coordinator observed that pushing a mapped directory `handoff` nested updates under `handoff/handoff` instead of replacing the intended files; explicit leaf-file export corrected this. Treat folder-push success messages as insufficient and check actual destination contents/hashes. Keep proprietary collateral and large databases out of public Git.

## Existing verification evidence

`rtl2gds/verif/results/eval_results.txt`, RTL_REVIEW.md and commit `e533c9e` record 89/89 R2 candidate/baseline traces per simulator, 11 rejected harness negatives and four rejected RTL mutants. Cross-simulator baseline agrees on72/89; the17 differences hit pre-existing out-of-range behavior. Candidate UB-count divergence fails the gate. Finite simulation is sampled evidence, not formal proof. Yosys/ASAP7 estimates are separate from the native Genus figures above.
