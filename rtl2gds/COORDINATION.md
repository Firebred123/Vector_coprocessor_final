# Area-oriented RTL-to-GDS experiment

User authorization: run the old vector coprocessor project through RTL2GDS_MCP Genus and Innovus; optimize area; use WorkBoard to synchronize the server workspace; commit each meaningful change with its rationale. The user is AFK and authorizes agents to resolve routine issues together.

## Ownership

- codex-1: coordinator; integration, evidence review, commit/sync verification.
- phys-lead: sole writer to live Genus and Innovus sessions; owns flow scripts, constraints, PDK discovery, WorkBoard sync, baseline and optimized implementation.
- rtl-review: review functional/synthesis risks and suggest area optimizations. Own rtl2gds/RTL_REVIEW.md and self-contained verification artifacts only. Do not modify design RTL or drive EDA sessions without an explicit ownership transfer.
- method-review: independent methodology/area tradeoff review. Own rtl2gds/METHODOLOGY_REVIEW.md only. No live EDA mutation.

## Rules

1. Use the actual RTL2GDS_MCP tools for live synthesis/implementation. See /Users/vs/function/PD_MCP/README.md and doc/genus_gui_bridge.md. Do not exit/restart the GUIs or source existing scripts containing exit. Inspect output even when STATUS is OK.
2. Local source repo is /Users/vs/function/Vector_coprocessor_final at initial commit dbc5fcd. Actual configured server root is /home/vaibhav22555/Desktop/rtl2gds. Keep the experiment in vector_coprocessor/ below that root; preserve the existing bridge files and counter demo.
3. Use WorkBoard under this project to export/sync experiment files. Commit source and flow changes locally and in the remote experiment repository with rationale. Keep machine-specific MCP config, credentials, proprietary PDK content, large tool databases and transient logs out of public Git. Public source pushes may go only to a dedicated experiment branch, never main.
4. Establish an unchanged-RTL baseline before optimization. Record exact tool versions, top, source revision/hashes, library/corner, units, constraints, cell/core area, timing, utilization, warnings and route status. Keep baseline and candidate outputs separate.
5. Default top is vector_coprocessor (the project commercial scripts target it); verify from actual RTL before selecting. Preserve public interfaces, function, width, reset/commit/kill behavior. Do not tie off inputs or remove functionality just to shrink area. Full SoC is a separate scope if the standalone top cannot be implemented.
6. Follow and checkpoint: source/lint/test audit, library+physical collateral audit, elaboration/unresolved/latch checks, SDC and timing coverage checks, generic/map/optimization, netlist and SDC export, equivalence or explicit functional verification, MMMC/init, floorplan/pins/power, placement/pre-CTS optimization, CTS, post-CTS setup/hold, global+detail route, extraction/postroute timing, connectivity/geometry checks, final netlist/DEF/GDS/checkpoint and report manifest. Never label a stage passed merely because Tcl returned OK.
7. Compare area at equal constraints/library and retain the best validated result. Report failing checks and physical/signoff limitations honestly; do not call a GDS signoff-clean without evidence. Keep a stage ledger in rtl2gds/STATUS.md with report paths and measured results.
8. Send progress/blockers to codex-1 through landline without waiting when possible; consult other reviewers directly. Coordinate before source changes. Do not push confidential PDKs or signoff decks.
