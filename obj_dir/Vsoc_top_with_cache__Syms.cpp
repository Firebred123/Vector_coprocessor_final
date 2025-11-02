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
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

Vsoc_top_with_cache__Syms::Vsoc_top_with_cache__Syms(VerilatedContext* contextp, const char* namep,Vsoc_top_with_cache* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if(Verilated::catName(namep, "soc_top_with_cache.cpu_core.m_c_obi_instr_if"))
    , TOP__soc_top_with_cache__DOT__xif(Verilated::catName(namep, "soc_top_with_cache.xif"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if = &TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if;
    TOP.__PVT__soc_top_with_cache__DOT__xif = &TOP__soc_top_with_cache__DOT__xif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.__Vconfigure(this, true);
    TOP__soc_top_with_cache__DOT__xif.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}

void Vsoc_top_with_cache__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vsoc_top_with_cache__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vsoc_top_with_cache__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
