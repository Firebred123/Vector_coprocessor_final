# Final artifact manifest (phys-lead)

Server root: `~/Desktop/rtl2gds/vector_coprocessor` on eda-uni (server git 449b5b1). The artifacts
stay server-only: they contain or are derived from the installed Cadence 45 nm kit. Everything
uses the R1 implementation SDC with gsclib045 slow (setup) and fast (hold) corners and captable
RC. "Clean" here means: 0 setup and 0 hold violators, 0 max_tran/max_cap, Innovus `verify_drc` 0
(LEF rules), `verifyConnectivity` clean and `verifyProcessAntenna` clean. **Not foundry
DRC/LVS signoff.**

| Run | Role | Die um2 | Cell um2 | Final GDS sha256 | Final netlist sha256 |
|---|---|---:|---:|---|---|
| r1_cg_u97 | **primary best** (original RTL + clock gating) | 93,076.59 | 77,650.93 | 7b10e61f1fc1388c9326d6f7ca99f1f5d5645a0f1dd96b9ea55a71a387cab805 | 629c804e67f9ccd643cccb1752c369185f9467e21a700406146e72e2c0e89a69 |
| r1_base_u97 | equal-utilization baseline | 102,285.55 | 86,290.19 | 698e2b3c475e7b408af10ca8b393da233955b4ecb0b74154c98a46f9ae342d1e | 0b65c72d6500ffc72dc9b7634e9b3079076550051c699e0fa3325f0aec39886e |
| r1_r2_cg_u97 | secondary (R2 + CG; R2 formal proof incomplete) | 90,610.54 | 76,004.73 | 219a2e449ce64aa15ebca6f5c80b336a31243060ad2bfe05db3fe16385c6b941 | afc54f414c273111cb1835114f084ff04528e990dec115c47aae7a892620f45e |
| r1_cg_u70 | CG at 0.70 (post-route LEC in progress) | 127,472.63 | 77,849.70 | bdc59bc88f27e185b4db4e92a455c21a2b15e058f45da2b806e2c28806f2a142 | d3b18a0759cff8ad85d3614b40caa196ca6a9b237615734568d9fee92eaee655 |
| r1_base_u70 | baseline at 0.70 (post-route LEC in progress) | 140,087.53 | 86,686.81 | ea90babad1ec618f46a602112d371c6eded53091e3d4ffe609fbd709d2b9c4b6 | 0b47145855b2c1658b4d9414926ee0919548de616d000bf1b8aa1656db90942a |

File paths: `runs/<run>/innovus/outputs/vector_coprocessor.final.{gds,v,pg.v,def,sdf}`. The final
database is `runs/<run>/innovus/db/final.enc`.

GDS structure check: the coordinator checker `verification/coordinator/verify_gds_structure.py`
(sha256 67c16744...) gave rc 0 on all three u97 GDS files: top `vector_coprocessor`, no undefined
references, DBU 0.5 nm. The JSON outputs are in `rtl2gds/results/gds_structure/` (server:
`verification/phys_lead/`). The u70 JSONs are in the coordinator's `verification/coordinator/`. This
checks record integrity and references only, not DRC or LVS.

Closure procedure: `rtl2gds/flow/innovus_flow.tcl` (vi::front / vi::back). The manual post-route
steps are in `rtl2gds/flow/recipes/`.
