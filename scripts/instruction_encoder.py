#!/usr/bin/env python3
# Instruction encoder to verify our custom instruction encoding

def encode_vector_instruction(funct7, rs2, rs1, funct3, rd, opcode):
    """Encode a RISC-V instruction"""
    instr = 0
    instr |= (opcode & 0x7F)           # bits [6:0]
    instr |= ((rd & 0x1F) << 7)        # bits [11:7]
    instr |= ((funct3 & 0x7) << 12)    # bits [14:12]
    instr |= ((rs1 & 0x1F) << 15)      # bits [19:15]
    instr |= ((rs2 & 0x1F) << 20)      # bits [24:20]
    instr |= ((funct7 & 0x7F) << 25)   # bits [31:25]
    return instr

# Constants
OPCODE_CUSTOM0 = 0x0B
FUNCT7_VMAC = 0x03
V8 = 8
V9 = 9  
V10 = 10

# Encode VMAC v10, v8, v9
vmac_instr = encode_vector_instruction(FUNCT7_VMAC, V9, V8, 0, V10, OPCODE_CUSTOM0)

print(f"VMAC v{V10}, v{V8}, v{V9}")
print(f"Instruction: 0x{vmac_instr:08X}")
print(f"Binary: {vmac_instr:032b}")
print()

# Decode to verify
opcode = vmac_instr & 0x7F
rd = (vmac_instr >> 7) & 0x1F
funct3 = (vmac_instr >> 12) & 0x7
rs1 = (vmac_instr >> 15) & 0x1F
rs2 = (vmac_instr >> 20) & 0x1F
funct7 = (vmac_instr >> 25) & 0x7F

print("Decoded:")
print(f"  opcode: 0x{opcode:02X} ({'custom-0' if opcode == 0x0B else 'unknown'})")
print(f"  rd (destination): v{rd}")
print(f"  funct3: 0x{funct3:X}")
print(f"  rs1 (source 1): v{rs1}")
print(f"  rs2 (source 2): v{rs2}")
print(f"  funct7: 0x{funct7:02X} ({'VMAC' if funct7 == 0x03 else 'unknown'})")

# Generate the .word directive for assembly
print(f"\nAssembly .word directive:")
print(f".word 0x{vmac_instr:08X}")
