// include/custom_opcodes.vh
`define OPCODE_CUSTOM0 7'b0001011
`define FUNCT7_VLD   7'b0000001
`define FUNCT7_VST   7'b0000010
`define FUNCT7_VMAC  7'b0000011
`define FUNCT7_VMMUL    7'b0000100

// Matrix size encoding in funct3 for VMMUL
`define MATSIZE_2X2     3'b000      // 2×2 matrix
`define MATSIZE_4X4     3'b001      // 4×4 matrix
`define MATSIZE_8X8     3'b010      // 8×8 matrix
