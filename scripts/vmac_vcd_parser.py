import sys
import re

def parse_vcd(vcd_file):
    print(f"Scanning {vcd_file} for register values...")
    
    # These map signal IDs (e.g., "#!") to Register Names
    id_map = {}
    
    # Store the last known value for every signal ID
    current_values = {}
    
    # We are looking for the General Purpose Registers
    # Common names in Verilator VCDs: 
    # TOP.soc_top.cv32e40x_core_i.register_file_i.mem(10) -> a0
    targets = {
        10: "a0", 11: "a1", 12: "a2", 13: "a3", 14: "a4"
    }
    target_ids = {} # {id: reg_index}

    # 1. READ HEADER (Find Signal IDs)
    with open(vcd_file, 'r', errors='ignore') as f:
        in_reg_file = False
        
        for line in f:
            line = line.strip()
            
            # Detect Register File Scope
            if "$scope" in line and "register_file" in line:
                in_reg_file = True
            if "$upscope" in line:
                in_reg_file = False
                
            # Find Register Signals (e.g., $var reg 32 #! mem(10) [31:0] $end)
            if in_reg_file and "$var" in line and "mem(" in line:
                # Extract ID and Index
                parts = line.split()
                # parts[3] is usually the ID (e.g. #!)
                sig_id = parts[3]
                # parts[4] is the name (e.g. mem(10))
                name_part = parts[4]
                
                try:
                    idx = int(name_part.split('(')[1].split(')')[0])
                    if idx in targets:
                        target_ids[sig_id] = idx
                        print(f"Found Signal for x{idx} ({targets[idx]}): {sig_id}")
                except:
                    pass
            
            if "$enddefinitions" in line:
                break
        
        if not target_ids:
            print("ERROR: Could not find register file signals in VCD.")
            print("Please ensure your simulator creates a VCD and traces the core.")
            return

        # 2. READ DATA (Find 0xDEADBEEF)
        found_done = False
        final_values = {}
        
        for line in f:
            # Skip comments/commands
            if line.startswith('$'): continue
            
            # VCD format: b101010 ID
            if line.startswith('b'):
                try:
                    val_str, sig_id = line[1:].split()
                    if sig_id in target_ids:
                        val = int(val_str, 2)
                        reg_idx = target_ids[sig_id]
                        current_values[reg_idx] = val
                        
                        # Check for Magic Done Signal in a4 (x14)
                        if reg_idx == 14 and val == 0xDEADBEEF:
                            found_done = True
                            # Snapshot current values
                            final_values = current_values.copy()
                except:
                    pass

    if found_done:
        print("\n=== RESULTS FOUND IN WAVEFORM ===")
        match = final_values.get(10, 0)
        cpu   = final_values.get(11, 0)
        unrol = final_values.get(12, 0)
        vec   = final_values.get(13, 0)
        
        print(f"Verification: {'PASS' if match else 'FAIL'}")
        print(f"CPU (Basic):      {cpu} cycles")
        print(f"CPU (Unrolled):   {unrol} cycles")
        print(f"Vector Unit:      {vec} cycles")
        
        # Save JSON for graph plotter
        import json
        with open("vmac_results.json", "w") as jf:
            json.dump({"cpu_basic": cpu, "cpu_unrolled": unrol, "vector": vec}, jf)
            
    else:
        print("Analysis Failed: Did not see 0xDEADBEEF in register a4 (x14).")
        print("Last known values:", current_values)

if __name__ == "__main__":
    import os
    if os.path.exists("simulation.vcd"):
        parse_vcd("simulation.vcd")
    elif os.path.exists("obj_dir/simulation.vcd"):
        parse_vcd("obj_dir/simulation.vcd")
    else:
        print("Error: Could not find simulation.vcd in . or ./obj_dir")
