# Coordinator verification notes

These are independent observations during the run, not final signoff results. The implementation stage ledger in STATUS.md will contain final measurements.

## Verified environment and source synchronization

- Claude implementation and RTL review agents use exact model ID `claude-opus-5-5`; independent AGY reviewer reports `Gemini 3.8 Flash (High)`.
- RTL2GDS_MCP health replies identify live Genus `19.13-s073_1` and Innovus `20.10-p004_1`, both launched from `/home/vaibhav22555/Desktop/rtl2gds`.
- The intended `~/Descktop/rtl2gds` spelling does not exist; the configured `~/Desktop/rtl2gds` does.
- Remote experiment directory `/home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor` contains baseline input commit `2482b21`.
- Independent remote SHA256 checks match SOURCE_MANIFEST.json for original top `2164c442606947da9262b0e93aa98ed9907e76982ea5fda999deffb69a688826` and execution unit `b6432211e287d34f6281b910c6483af2ad0f86ced78aa080a9b9b053bc62f831`.
- WorkBoard registry maps source folders through `/tmp/vector_coprocessor_wb`; final experiment copies and subsequent updates must be checked separately. Remote Git is 1.7.1 and does not support `git -C`.

## Baseline checks inspected independently

Report root: `<server experiment>/runs/baseline/genus/reports/`.

- `elab_unresolved.rpt`: no unresolved references and no empty modules.
- `timing_intent.rpt`: zero inputs/outputs without clocked external delays, zero multiply driven nets, zero loop-breaking cells; 168 input ports lack external driver/transition constraints. This shows the baseline wildcard collections actually covered the ports in this tool configuration.
- Original SDC has 12ns input and 12ns output budgets on a 20ns clock. A real same-cycle input-to-output path therefore has a negative setup budget before logic delay. Retain this diagnostic but use the same documented feasible constraints for both accepted baseline and optimized comparisons.
- `generic_area.rpt`: generic synthesis completed with cell area 219540.582 in report units and cell count 71148. This is an intermediate generic estimate, not mapped or placed area and not an optimization result.
- The generic hierarchy lists eight multiplier instances (not sixteen), and eight combined add/sub instances. Genus has already shared some arithmetic in the original RTL; duplicated source expressions alone do not establish an area opportunity. Confirm with mapped datapath reports before changing RTL.

## Acceptance requirements

- Report library/corner, constraints, sources, tool versions and stage alongside every metric. Compare like stages only.
- A finite differential simulation matrix supplies sampled evidence, not a proof of full equivalence. Gate failures, missing completion markers, crashes and empty traces must fail validation even when a test deliberately tolerates known baseline ISA bugs.
- Do not reduce uncertainty or remove constrained functionality to manufacture gains. Document any experimental environment assumptions and preserve baseline/candidate comparability.
- GDS export alone does not establish clean DRC, LVS, connectivity, timing, or equivalence.

## Differential gate review (draft, before reviewer fixes)

Independent negative checks of the draft `verif/compare.sh` returned exit 0 for both (a) two empty equal traces and (b) differing `s1_l0_e1.trace` files. Draft `run_matrix.sh` also discards simulator exit status with `|| true`. These are gate weaknesses, not DUT results. The reviewer has been asked to fail missing/empty results, crashes, mismatched file sets, and unexpected differences by default. Out-of-domain simulator-dependent cases require an explicit documented exclusion and separate classification, not a blanket success result.

Offline MCP protocol verification: `python3 -m pytest -q tests` in PD_MCP completed with 21 passing tests. This does not replace the live flow test.

## Mapping recovery and bridge safeguard

The initial runtime monitoring watched newer GUI PID34703; phys-lead later identified the actual synthesis in older PID21628. Both processes were reading the same Genus FIFO. The earlier healthy-progress interpretation is withdrawn: GUI CPU accumulation did not demonstrate mapping progress. Phys-lead reports a super-threading shared-memory errno28 deadlock in the active synthesis process; recovery must use the exact listener/worker identities and preserve unrelated processes.

An isolated PD_MCP fix is committed as `12d49fa` on `fix/gui-bridge-single-owner` in `/Users/vs/function/copilot-worktrees/PD_MCP-bridge-owner`. A kernel-owned localhost socket lease prevents two updated bridges for the same normalized directory/tool, preserves ownership across re-source, and releases on explicit detach or process exit. All 28 offline tests pass, including competing Tcl processes and simultaneous starts. This fix is not deployed to the live experiment. Legacy listeners must first be detached individually; old scripts do not honor the new lease. Native Cadence socket/zlib compatibility and live migration remain to be verified by the implementation owner.

The committed RTL review supplies 89/89 matching candidate-vs-baseline runs on each simulator for R2, along with negative-gate tests. Yosys/ABC ASAP7 estimates are exploratory and must not be substituted for gsclib045 Genus/Innovus measurements. Latency-changing R5 variants may be evaluated as separately labeled alternatives, while the primary comparison preserves cycle behavior.

## Independently checked corrected-R1 physical results (u70)

| Run | Final cell area (um2) | Core area (um2) | Die area (um2) | Setup WNS (ns) | Hold WNS (ns) | Native geometry/connectivity/antenna |
|---|---:|---:|---:|---:|---:|---|
| r1_base_u70 | 86686.81 | 131190.52 | 140087.53 | +0.007 | +0.043 | clean |
| r1_cg_u70 | 77849.70 | 118992.40 | 127472.63 | +0.021 | +0.071 | clean |

Source: final QoR ledgers, native verify reports, and compressed final setup/hold summaries read directly from the server. Both timing summaries have zero violating paths and zero cap/transition/fanout/length DRVs. These runs use matched R1 constraints/corners and target utilization0.70. CG reduces final cell area about10.2% and die area about9.0% at that utilization. Denser floorplans remain under evaluation by phys-lead. Native implementation checks do not replace unavailable foundry signoff DRC/LVS or QRC. Post-route/ECO netlist equivalence is assigned to method-review and remains pending at this checkpoint.

The public `verify_gds_structure.py` checker was tested with seven local positive/negative fixtures and run with Python2.6.6 on both final server GDS files. It checks record completion, expected routed top geometry, duplicate/cyclic/undefined structure references, and units; it is not a complete GDS semantics, layer-rule, DRC or LVS checker. Both files have database unit0.5nm and zero missing/cyclic references:

- Baseline:44308544bytes,232structures,500390direct-top geometry elements. SHA256 `ea90babad1ec618f46a602112d371c6eded53091e3d4ffe609fbd709d2b9c4b6`.
- CG:35485172bytes,238structures,360339direct-top geometry elements. SHA256 `bdc59bc88f27e185b4db4e92a455c21a2b15e058f45da2b806e2c28806f2a142`.

Checker and full JSON summaries were committed server-side as `382926f` under `verification/coordinator/`; design/library GDS remains server-only.

The quota-reset scheduler successfully resumed exact-model phys-lead at07:31IST. A subsequent SSH outage was traced to the existing FortiClient VPN profile being disconnected. Starting that existing profile restored the utun route and SSH without credential or profile edits. The completed one-off quota wakeup was removed; the user's original all-idle wakeup remains.
