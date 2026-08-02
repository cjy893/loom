// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcacop_ctrl_test_top__pch.h"

//============================================================
// Constructors

Vcacop_ctrl_test_top::Vcacop_ctrl_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcacop_ctrl_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , req_valid{vlSymsp->TOP.req_valid}
    , req_ready{vlSymsp->TOP.req_ready}
    , req_rob_idx{vlSymsp->TOP.req_rob_idx}
    , req_code{vlSymsp->TOP.req_code}
    , req_xcpt_valid{vlSymsp->TOP.req_xcpt_valid}
    , req_xcpt_code{vlSymsp->TOP.req_xcpt_code}
    , resp_valid{vlSymsp->TOP.resp_valid}
    , resp_ready{vlSymsp->TOP.resp_ready}
    , resp_rob_idx{vlSymsp->TOP.resp_rob_idx}
    , resp_xcpt_valid{vlSymsp->TOP.resp_xcpt_valid}
    , resp_xcpt_code{vlSymsp->TOP.resp_xcpt_code}
    , flush_pending{vlSymsp->TOP.flush_pending}
    , icache_maint_valid{vlSymsp->TOP.icache_maint_valid}
    , icache_maint_ready{vlSymsp->TOP.icache_maint_ready}
    , icache_maint_mode{vlSymsp->TOP.icache_maint_mode}
    , icache_maint_done{vlSymsp->TOP.icache_maint_done}
    , dcache_maint_valid{vlSymsp->TOP.dcache_maint_valid}
    , dcache_maint_ready{vlSymsp->TOP.dcache_maint_ready}
    , dcache_maint_op{vlSymsp->TOP.dcache_maint_op}
    , dcache_maint_mode{vlSymsp->TOP.dcache_maint_mode}
    , dcache_maint_done{vlSymsp->TOP.dcache_maint_done}
    , req_vaddr{vlSymsp->TOP.req_vaddr}
    , req_paddr{vlSymsp->TOP.req_paddr}
    , req_badvaddr{vlSymsp->TOP.req_badvaddr}
    , resp_badvaddr{vlSymsp->TOP.resp_badvaddr}
    , icache_maint_vaddr{vlSymsp->TOP.icache_maint_vaddr}
    , icache_maint_paddr{vlSymsp->TOP.icache_maint_paddr}
    , dcache_maint_vaddr{vlSymsp->TOP.dcache_maint_vaddr}
    , dcache_maint_paddr{vlSymsp->TOP.dcache_maint_paddr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcacop_ctrl_test_top::Vcacop_ctrl_test_top(const char* _vcname__)
    : Vcacop_ctrl_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcacop_ctrl_test_top::~Vcacop_ctrl_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcacop_ctrl_test_top___024root___eval_debug_assertions(Vcacop_ctrl_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcacop_ctrl_test_top___024root___eval_static(Vcacop_ctrl_test_top___024root* vlSelf);
void Vcacop_ctrl_test_top___024root___eval_initial(Vcacop_ctrl_test_top___024root* vlSelf);
void Vcacop_ctrl_test_top___024root___eval_settle(Vcacop_ctrl_test_top___024root* vlSelf);
void Vcacop_ctrl_test_top___024root___eval(Vcacop_ctrl_test_top___024root* vlSelf);

void Vcacop_ctrl_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcacop_ctrl_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcacop_ctrl_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcacop_ctrl_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vcacop_ctrl_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcacop_ctrl_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcacop_ctrl_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcacop_ctrl_test_top::eventsPending() { return false; }

uint64_t Vcacop_ctrl_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcacop_ctrl_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcacop_ctrl_test_top___024root___eval_final(Vcacop_ctrl_test_top___024root* vlSelf);

VL_ATTR_COLD void Vcacop_ctrl_test_top::final() {
    contextp()->executingFinal(true);
    Vcacop_ctrl_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcacop_ctrl_test_top::hierName() const { return vlSymsp->name(); }
const char* Vcacop_ctrl_test_top::modelName() const { return "Vcacop_ctrl_test_top"; }
unsigned Vcacop_ctrl_test_top::threads() const { return 1; }
void Vcacop_ctrl_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vcacop_ctrl_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
