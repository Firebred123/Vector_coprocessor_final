// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOC_TOP_DEBUG__SYMS_H_
#define VERILATED_VSOC_TOP_DEBUG__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vsoc_top_debug.h"

// INCLUDE MODULE CLASSES
#include "Vsoc_top_debug___024root.h"
#include "Vsoc_top_debug___024unit.h"
#include "Vsoc_top_debug_cv32e40x_if_xif.h"
#include "Vsoc_top_debug_cv32e40x_if_c_obi.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vsoc_top_debug__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsoc_top_debug* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsoc_top_debug___024root       TOP;
    Vsoc_top_debug_cv32e40x_if_c_obi TOP__soc_top_debug__DOT__cpu_inst__DOT__m_c_obi_instr_if;
    Vsoc_top_debug_cv32e40x_if_xif TOP__soc_top_debug__DOT__xif;

    // CONSTRUCTORS
    Vsoc_top_debug__Syms(VerilatedContext* contextp, const char* namep, Vsoc_top_debug* modelp);
    ~Vsoc_top_debug__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
