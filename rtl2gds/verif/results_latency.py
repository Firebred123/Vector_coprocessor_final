#!/usr/bin/env python3
"""rtl2gds/verif/results_latency.py RUNDIR [RUNDIR...]
Per-run-directory workload metrics from run_matrix traces:
 - ALU latency: cycles from ISSUE handshake to RESULT handshake for
   VADD/VSUB/VMUL/VMAC in the no-stall runs (s*_l1_e1_st0).
 - VLD/VST latency in the same runs.
 - Total cycles summed over completing (hang=0) runs, per config class.
"""
import sys, re, glob, os, collections
F7 = {0x01: "VLD", 0x02: "VST", 0x03: "VMAC", 0x04: "VADD", 0x05: "VSUB", 0x06: "VMUL"}
for d in sys.argv[1:]:
    lat = collections.defaultdict(list)
    for t in sorted(glob.glob(os.path.join(d, "s*_l1_e1_st0.trace"))):
        pend = None
        for line in open(t):
            m = re.match(r"(\d+) ISSUE id=(\d+) instr=([0-9a-f]+)", line)
            if m:
                ins = int(m.group(3), 16)
                if ins & 0x7f == 0x0b:
                    pend = (int(m.group(1)), F7.get(ins >> 25, "?"))
                continue
            m = re.match(r"(\d+) RESULT ", line)
            if m and pend:
                lat[pend[1]].append(int(m.group(1)) - pend[0]); pend = None
    tot = collections.Counter(); nrun = collections.Counter()
    for sfile in glob.glob(os.path.join(d, "summary_*.txt")):
        for line in open(sfile):
            m = re.match(r"(\S+) OK .* cycles=(\d+) .* hang=0 ", line)
            if m:
                cls = re.sub(r"^s\d+_", "", m.group(1)); tot[cls] += int(m.group(2)); nrun[cls] += 1
    al = sorted(set(v for k in ("VADD", "VSUB", "VMUL", "VMAC") for v in lat[k]))
    print(f"{os.path.basename(d.rstrip('/'))}: issue->result cycles (no stalls): ALU={al} "
          f"VLD={sorted(set(lat['VLD']))} VST={sorted(set(lat['VST']))}")
    print("   total cycles over completing runs: " +
          ", ".join(f"{c}={tot[c]}({nrun[c]} runs)" for c in sorted(tot)))
