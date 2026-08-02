// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vicache_test_top__pch.h"

//============================================================
// Constructors

Vicache_test_top::Vicache_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vicache_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , req_valid{vlSymsp->TOP.req_valid}
    , req_ready{vlSymsp->TOP.req_ready}
    , req_cacheable{vlSymsp->TOP.req_cacheable}
    , resp_valid{vlSymsp->TOP.resp_valid}
    , resp_ready{vlSymsp->TOP.resp_ready}
    , maint_valid{vlSymsp->TOP.maint_valid}
    , maint_ready{vlSymsp->TOP.maint_ready}
    , maint_mode{vlSymsp->TOP.maint_mode}
    , maint_all{vlSymsp->TOP.maint_all}
    , maint_done{vlSymsp->TOP.maint_done}
    , mem_req_valid{vlSymsp->TOP.mem_req_valid}
    , mem_req_ready{vlSymsp->TOP.mem_req_ready}
    , mem_req_len{vlSymsp->TOP.mem_req_len}
    , mem_resp_valid{vlSymsp->TOP.mem_resp_valid}
    , mem_resp_ready{vlSymsp->TOP.mem_resp_ready}
    , mem_resp_last{vlSymsp->TOP.mem_resp_last}
    , req_paddr{vlSymsp->TOP.req_paddr}
    , resp_insts{vlSymsp->TOP.resp_insts}
    , maint_vaddr{vlSymsp->TOP.maint_vaddr}
    , maint_paddr{vlSymsp->TOP.maint_paddr}
    , mem_req_addr{vlSymsp->TOP.mem_req_addr}
    , mem_resp_data{vlSymsp->TOP.mem_resp_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vicache_test_top::Vicache_test_top(const char* _vcname__)
    : Vicache_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vicache_test_top::~Vicache_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vicache_test_top___024root___eval_debug_assertions(Vicache_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vicache_test_top___024root___eval_static(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___eval_initial(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___eval_settle(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___eval(Vicache_test_top___024root* vlSelf);

void Vicache_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vicache_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vicache_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vicache_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vicache_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vicache_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vicache_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vicache_test_top::eventsPending() { return false; }

uint64_t Vicache_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vicache_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vicache_test_top___024root___eval_final(Vicache_test_top___024root* vlSelf);

VL_ATTR_COLD void Vicache_test_top::final() {
    contextp()->executingFinal(true);
    Vicache_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vicache_test_top::hierName() const { return vlSymsp->name(); }
const char* Vicache_test_top::modelName() const { return "Vicache_test_top"; }
unsigned Vicache_test_top::threads() const { return 1; }
void Vicache_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vicache_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
