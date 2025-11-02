// include/custom_opcodes.vh - Complete custom opcode definitions for vector instructions

`ifndef CUSTOM_OPCODES_VH
`define CUSTOM_OPCODES_VH

// Custom opcode for vector instructions (uses CUSTOM-0 encoding space)
`define OPCODE_CUSTOM0  7'b0001011  // 0x0B

// Function codes for vector instructions (funct7 field)
`define FUNCT7_VLD      7'b0000001  // Vector load
`define FUNCT7_VST      7'b0000010  // Vector store
`define FUNCT7_VMAC     7'b0000011  // Vector multiply-accumulate
`define FUNCT7_VADD     7'b0000100  // Vector add
`define FUNCT7_VSUB     7'b0000101  // Vector subtract
`define FUNCT7_VMUL     7'b0000110  // Vector multiply
`define FUNCT7_VDOT     7'b0000111  // Vector dot product
`define FUNCT7_VMMUL    7'b0001000  // Vector matrix multiply
`define FUNCT7_VMAX     7'b0001001  // Vector maximum
`define FUNCT7_VMIN     7'b0001010  // Vector minimum
`define FUNCT7_VSLL     7'b0001011  // Vector shift left logical
`define FUNCT7_VSRL     7'b0001100  // Vector shift right logical
`define FUNCT7_VSRA     7'b0001101  // Vector shift right arithmetic
`define FUNCT7_VAND     7'b0001110  // Vector AND
`define FUNCT7_VOR      7'b0001111  // Vector OR
`define FUNCT7_VXOR     7'b0010000  // Vector XOR

// Vector configuration instructions
`define FUNCT7_VSETVL   7'b0100000  // Set vector length
`define FUNCT7_VCONFIG  7'b0100001  // Configure vector unit

// Function codes for different matrix sizes (funct3 field)
`define FUNCT3_MAT_2X2  3'b000      // 2x2 matrix
`define FUNCT3_MAT_4X4  3'b001      // 4x4 matrix  
`define FUNCT3_MAT_8X8  3'b010      // 8x8 matrix

// Vector register addressing modes
`define VMODE_UNIT      2'b00       // Unit stride
`define VMODE_STRIDE    2'b01       // Strided access
`define VMODE_INDEXED   2'b10       // Indexed access
`define VMODE_SEGMENT   2'b11       // Segmented access

`endif // CUSTOM_OPCODES_VH

