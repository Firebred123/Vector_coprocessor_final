// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOC_TOP_WITH_CACHE__SYMS_H_
#define VERILATED_VSOC_TOP_WITH_CACHE__SYMS_H_  // guard

#include "verilated_heavy.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vsoc_top_with_cache.h"

// INCLUDE MODULE CLASSES
#include "Vsoc_top_with_cache___024root.h"
#include "Vsoc_top_with_cache___024unit.h"
#include "Vsoc_top_with_cache_cv32e40x_if_xif.h"
#include "Vsoc_top_with_cache_cv32e40x_if_c_obi.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vsoc_top_with_cache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsoc_top_with_cache* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsoc_top_with_cache___024root  TOP;
    Vsoc_top_with_cache_cv32e40x_if_c_obi TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if;
    Vsoc_top_with_cache_cv32e40x_if_xif TOP__soc_top_with_cache__DOT__xif;

    // CONSTRUCTORS
    Vsoc_top_with_cache__Syms(VerilatedContext* contextp, const char* namep, Vsoc_top_with_cache* modelp);
    ~Vsoc_top_with_cache__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
