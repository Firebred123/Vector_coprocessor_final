/* vmac_comparison.c - CPU vs Vector Coprocessor Performance Comparison */

#include <stdint.h>

#define VECTOR_LEN 8
#define NUM_ITERATIONS 100

// Memory addresses for results
#define RESULT_BASE    0x300
#define FINISH_ADDR    0x1000

// Custom instruction encodings
#define OPCODE_CUSTOM0  0x0B
#define FUNCT7_VLD      0x00
#define FUNCT7_VST      0x01
#define FUNCT7_VMAC     0x04

// CSR addresses
#define CSR_CYCLE      0xC00
#define CSR_INSTRET    0xC02

// Read cycle counter
static inline uint32_t read_cycles(void) {
    uint32_t cycles;
    asm volatile("csrr %0, %1" : "=r"(cycles) : "i"(CSR_CYCLE));
    return cycles;
}

// Read instruction counter
static inline uint32_t read_instret(void) {
    uint32_t instret;
    asm volatile("csrr %0, %1" : "=r"(instret) : "i"(CSR_INSTRET));
    return instret;
}

// Vector load instruction
static inline void vector_load(int vd, volatile void* addr) {
    asm volatile(
        "mv a0, %1\n\t"
        ".word ((%2 << 25) | (0 << 20) | (10 << 15) | (0 << 12) | (%0 << 7) | %3)"
        :: "i"(vd), "r"(addr), "i"(FUNCT7_VLD), "i"(OPCODE_CUSTOM0)
        : "a0", "memory"
    );
}

// Vector store instruction
static inline void vector_store(int vs, volatile void* addr) {
    asm volatile(
        "mv a0, %1\n\t"
        ".word ((%2 << 25) | (%0 << 20) | (10 << 15) | (0 << 12) | (0 << 7) | %3)"
        :: "i"(vs), "r"(addr), "i"(FUNCT7_VST), "i"(OPCODE_CUSTOM0)
        : "a0", "memory"
    );
}

// Vector MAC instruction: vd = vs1 * vs2 + vd
static inline void vector_mac(int vd, int vs1, int vs2) {
    asm volatile(
        ".word ((%3 << 25) | (%2 << 20) | (%1 << 15) | (0 << 12) | (%0 << 7) | %4)"
        :: "i"(vd), "i"(vs1), "i"(vs2), "i"(FUNCT7_VMAC), "i"(OPCODE_CUSTOM0)
        : "memory"
    );
}

// Test data arrays (aligned for vector operations)
volatile int32_t vec_a[VECTOR_LEN] __attribute__((aligned(32))) = {1, 2, 3, 4, 5, 6, 7, 8};
volatile int32_t vec_b[VECTOR_LEN] __attribute__((aligned(32))) = {10, 10, 10, 10, 10, 10, 10, 10};
volatile int32_t vec_c[VECTOR_LEN] __attribute__((aligned(32))) = {100, 100, 100, 100, 100, 100, 100, 100};
volatile int32_t cpu_result[VECTOR_LEN] __attribute__((aligned(32)));
volatile int32_t vec_result[VECTOR_LEN] __attribute__((aligned(32)));

// CPU implementation of VMAC
void cpu_vmac(volatile int32_t* result, 
              volatile const int32_t* a, 
              volatile const int32_t* b, 
              volatile const int32_t* c) {
    for (int i = 0; i < VECTOR_LEN; i++) {
        result[i] = (a[i] * b[i]) + c[i];
    }
}

// CPU implementation with loop unrolling
void cpu_vmac_unrolled(volatile int32_t* result,
                       volatile const int32_t* a,
                       volatile const int32_t* b,
                       volatile const int32_t* c) {
    // Fully unroll for 8 elements
    result[0] = (a[0] * b[0]) + c[0];
    result[1] = (a[1] * b[1]) + c[1];
    result[2] = (a[2] * b[2]) + c[2];
    result[3] = (a[3] * b[3]) + c[3];
    result[4] = (a[4] * b[4]) + c[4];
    result[5] = (a[5] * b[5]) + c[5];
    result[6] = (a[6] * b[6]) + c[6];
    result[7] = (a[7] * b[7]) + c[7];
}

int main() {
    uint32_t start_cycles, end_cycles, start_instret, end_instret;
    uint32_t cpu_cycles, cpu_unrolled_cycles, vector_cycles;
    uint32_t cpu_instret, cpu_unrolled_instret, vector_instret;
    
    // =========================================
    // Test 1: CPU Basic Implementation
    // =========================================
    start_cycles = read_cycles();
    start_instret = read_instret();
    
    for (int iter = 0; iter < NUM_ITERATIONS; iter++) {
        cpu_vmac(cpu_result, vec_a, vec_b, vec_c);
    }
    
    end_cycles = read_cycles();
    end_instret = read_instret();
    cpu_cycles = end_cycles - start_cycles;
    cpu_instret = end_instret - start_instret;
    
    // =========================================
    // Test 2: CPU Unrolled Implementation
    // =========================================
    start_cycles = read_cycles();
    start_instret = read_instret();
    
    for (int iter = 0; iter < NUM_ITERATIONS; iter++) {
        cpu_vmac_unrolled(cpu_result, vec_a, vec_b, vec_c);
    }
    
    end_cycles = read_cycles();
    end_instret = read_instret();
    cpu_unrolled_cycles = end_cycles - start_cycles;
    cpu_unrolled_instret = end_instret - start_instret;
    
    // =========================================
    // Test 3: Vector Coprocessor Implementation
    // =========================================
    start_cycles = read_cycles();
    start_instret = read_instret();
    
    // Load vectors once (outside loop for fairness)
    vector_load(1, (void*)vec_a);
    vector_load(2, (void*)vec_b);
    vector_load(3, (void*)vec_c);
    
    for (int iter = 0; iter < NUM_ITERATIONS; iter++) {
        // Perform VMAC: v4 = v1 * v2 + v3
        vector_mac(4, 1, 2);
        // Store result
        vector_store(4, (void*)vec_result);
    }
    
    end_cycles = read_cycles();
    end_instret = read_instret();
    vector_cycles = end_cycles - start_cycles;
    vector_instret = end_instret - start_instret;
    
    // =========================================
    // Verify Results Match
    // =========================================
    int verification_pass = 1;
    for (int i = 0; i < VECTOR_LEN; i++) {
        if (cpu_result[i] != vec_result[i]) {
            verification_pass = 0;
            break;
        }
    }
    
    // =========================================
    // Calculate Performance Metrics
    // =========================================
    
    // Calculate speedups
    uint32_t speedup_basic = 0;
    uint32_t speedup_unrolled = 0;
    if (vector_cycles > 0) {
        speedup_basic = cpu_cycles / vector_cycles;
        speedup_unrolled = cpu_unrolled_cycles / vector_cycles;
    }
    
    // Calculate cycles per element
    uint32_t total_elements = VECTOR_LEN * NUM_ITERATIONS;
    uint32_t cpu_cycles_per_elem = cpu_cycles / total_elements;
    uint32_t cpu_unrolled_cycles_per_elem = cpu_unrolled_cycles / total_elements;
    uint32_t vector_cycles_per_elem = vector_cycles / total_elements;
    
    // Calculate IPC (Instructions Per Cycle)
    uint32_t cpu_ipc_x100 = (cpu_instret * 100) / cpu_cycles;  // IPC * 100 for precision
    uint32_t vector_ipc_x100 = (vector_instret * 100) / vector_cycles;
    
    // =========================================
    // Write Results to Memory
    // =========================================
    volatile uint32_t* results = (volatile uint32_t*)RESULT_BASE;
    
    // Basic metrics
    results[0] = verification_pass;           // 0x300: Pass/Fail
    results[1] = cpu_cycles;                  // 0x304: CPU cycles
    results[2] = cpu_unrolled_cycles;         // 0x308: CPU unrolled cycles
    results[3] = vector_cycles;               // 0x30C: Vector cycles
    
    // Speedup metrics
    results[4] = speedup_basic;               // 0x310: Speedup vs basic
    results[5] = speedup_unrolled;            // 0x314: Speedup vs unrolled
    
    // Efficiency metrics
    results[6] = cpu_cycles_per_elem;         // 0x318: CPU cycles/element
    results[7] = cpu_unrolled_cycles_per_elem;// 0x31C: CPU unrolled cycles/element
    results[8] = vector_cycles_per_elem;      // 0x320: Vector cycles/element
    
    // Instruction metrics
    results[9] = cpu_instret;                 // 0x324: CPU instruction count
    results[10] = cpu_unrolled_instret;       // 0x328: CPU unrolled instruction count
    results[11] = vector_instret;             // 0x32C: Vector instruction count
    
    // IPC metrics (multiplied by 100 for precision)
    results[12] = cpu_ipc_x100;               // 0x330: CPU IPC * 100
    results[13] = vector_ipc_x100;            // 0x334: Vector IPC * 100
    
    // Test configuration
    results[14] = NUM_ITERATIONS;             // 0x338: Number of iterations
    results[15] = VECTOR_LEN;                 // 0x33C: Vector length
    
    // Memory fence
    asm volatile("fence");
    
    // Signal completion
    volatile uint32_t* finish = (volatile uint32_t*)FINISH_ADDR;
    *finish = 1;
    
    // Infinite loop
    while(1) {
        asm volatile("nop");
    }
    
    return 0;
}
