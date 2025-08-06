// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoc_top.h"
#include "Vsoc_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsoc_top::Vsoc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsoc_top__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , __PVT__soc_top__DOT__xif{vlSymsp->TOP.__PVT__soc_top__DOT__xif}
    , __PVT__soc_top__DOT__cpu_inst__DOT__m_c_obi_instr_if{vlSymsp->TOP.__PVT__soc_top__DOT__cpu_inst__DOT__m_c_obi_instr_if}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsoc_top::Vsoc_top(const char* _vcname__)
    : Vsoc_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsoc_top::~Vsoc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsoc_top___024root___eval_initial(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___eval_settle(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf);
QData Vsoc_top___024root___change_request(Vsoc_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoc_top___024root___final(Vsoc_top___024root* vlSelf);

static void _eval_initial_loop(Vsoc_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsoc_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsoc_top___024root___eval_settle(&(vlSymsp->TOP));
        Vsoc_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsoc_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sim/soc_top.sv", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsoc_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsoc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsoc_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsoc_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sim/soc_top.sv", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsoc_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vsoc_top::final() {
    Vsoc_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vsoc_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsoc_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vsoc_top___024root__traceInitTop(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsoc_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vsoc_top___024root__traceRegister(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsoc_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vsoc_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
