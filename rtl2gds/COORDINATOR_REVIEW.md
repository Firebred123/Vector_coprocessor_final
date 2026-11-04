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
