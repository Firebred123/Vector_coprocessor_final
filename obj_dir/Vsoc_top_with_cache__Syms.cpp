// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoc_top_with_cache__Syms.h"
#include "Vsoc_top_with_cache.h"
#include "Vsoc_top_with_cache___024root.h"
#include "Vsoc_top_with_cache___024unit.h"
#include "Vsoc_top_with_cache_cv32e40x_if_xif.h"
#include "Vsoc_top_with_cache_cv32e40x_if_c_obi.h"

// FUNCTIONS
Vsoc_top_with_cache__Syms::~Vsoc_top_with_cache__Syms()
{
}

Vsoc_top_with_cache__Syms::Vsoc_top_with_cache__Syms(VerilatedContext* contextp, const char* namep,Vsoc_top_with_cache* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if(Verilated::catName(namep, "soc_top_with_cache.cpu.m_c_obi_instr_if"))
    , TOP__soc_top_with_cache__DOT__xif(Verilated::catName(namep, "soc_top_with_cache.xif"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if = &TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if;
    TOP.__PVT__soc_top_with_cache__DOT__xif = &TOP__soc_top_with_cache__DOT__xif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.__Vconfigure(this, true);
    TOP__soc_top_with_cache__DOT__xif.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
