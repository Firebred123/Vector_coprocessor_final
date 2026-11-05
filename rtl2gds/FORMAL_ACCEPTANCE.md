# Coordinator acceptance of formal evidence

The independent report added in commit `366bc88` is **provisional pending evidence review**. It reports successful synthesis-equivalence comparisons, but the following acceptance questions remain open:

- Identify the one BBOX compare point and show all required hierarchical child proofs. A proven hierarchical abstraction is different from an unresolved or unproved blackbox; report each explicitly.
- Explain omitted/merged state points and list unmapped, abort, unknown and non-equivalent counts for each relevant module, not only the active top-level compare session.
- Original RTL versus the R2 transformation is not proven by candidate-R2 RTL versus its own netlist. The reported 258 unmapped golden state points mean that attempted comparison is incomplete, not proof of behavioral divergence. Sampled differential simulation supplies separate supporting evidence.
- Keep exact netlist hashes and golden source paths in standalone scripts. The reported stale `write_do_lec` revised paths must not be used for acceptance.
- Genus report timing is in ps: raw slack0.1 is0.1ps, not0.1ns. Nonnegative synthesis slack at printed precision is not postroute closure.
- Hardwired-zero v0 is a project-specific behavior, not a standard RISC-V vector-register convention.

The reviewer has been asked to resolve these points and correct its report. Final physical/equivalence acceptance remains open.
