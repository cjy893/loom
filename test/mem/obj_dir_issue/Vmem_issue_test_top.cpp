// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmem_issue_test_top__pch.h"

//============================================================
// Constructors

Vmem_issue_test_top::Vmem_issue_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmem_issue_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , dis_valid{vlSymsp->TOP.dis_valid}
    , dis_ready{vlSymsp->TOP.dis_ready}
    , dis_rob_idx{vlSymsp->TOP.dis_rob_idx}
    , dis_psrc1{vlSymsp->TOP.dis_psrc1}
    , dis_psrc2{vlSymsp->TOP.dis_psrc2}
    , dis_psrc1_busy{vlSymsp->TOP.dis_psrc1_busy}
    , dis_psrc2_busy{vlSymsp->TOP.dis_psrc2_busy}
    , dis_use_agen{vlSymsp->TOP.dis_use_agen}
    , dis_use_dgen{vlSymsp->TOP.dis_use_dgen}
    , wakeup_valid_0{vlSymsp->TOP.wakeup_valid_0}
    , wakeup_pdst_0{vlSymsp->TOP.wakeup_pdst_0}
    , wakeup_valid_1{vlSymsp->TOP.wakeup_valid_1}
    , wakeup_pdst_1{vlSymsp->TOP.wakeup_pdst_1}
    , resolve_mask{vlSymsp->TOP.resolve_mask}
    , mispredict_mask{vlSymsp->TOP.mispredict_mask}
    , br_mispredict{vlSymsp->TOP.br_mispredict}
    , flush_pipeline{vlSymsp->TOP.flush_pipeline}
    , iss_valid{vlSymsp->TOP.iss_valid}
    , iss_rob_idx{vlSymsp->TOP.iss_rob_idx}
    , iss_use_agen{vlSymsp->TOP.iss_use_agen}
    , iss_use_dgen{vlSymsp->TOP.iss_use_dgen}
    , agen_valid{vlSymsp->TOP.agen_valid}
    , agen_rob_idx{vlSymsp->TOP.agen_rob_idx}
    , dgen_valid{vlSymsp->TOP.dgen_valid}
    , dgen_rob_idx{vlSymsp->TOP.dgen_rob_idx}
    , src1_data{vlSymsp->TOP.src1_data}
    , src2_data{vlSymsp->TOP.src2_data}
    , imm_data{vlSymsp->TOP.imm_data}
    , agen_addr{vlSymsp->TOP.agen_addr}
    , dgen_data{vlSymsp->TOP.dgen_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmem_issue_test_top::Vmem_issue_test_top(const char* _vcname__)
    : Vmem_issue_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmem_issue_test_top::~Vmem_issue_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmem_issue_test_top___024root___eval_debug_assertions(Vmem_issue_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmem_issue_test_top___024root___eval_static(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___eval_initial(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___eval_settle(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___eval(Vmem_issue_test_top___024root* vlSelf);

void Vmem_issue_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmem_issue_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmem_issue_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmem_issue_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vmem_issue_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vmem_issue_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmem_issue_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmem_issue_test_top::eventsPending() { return false; }

uint64_t Vmem_issue_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmem_issue_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmem_issue_test_top___024root___eval_final(Vmem_issue_test_top___024root* vlSelf);

VL_ATTR_COLD void Vmem_issue_test_top::final() {
    contextp()->executingFinal(true);
    Vmem_issue_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmem_issue_test_top::hierName() const { return vlSymsp->name(); }
const char* Vmem_issue_test_top::modelName() const { return "Vmem_issue_test_top"; }
unsigned Vmem_issue_test_top::threads() const { return 1; }
void Vmem_issue_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vmem_issue_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
