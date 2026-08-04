// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrename_test_top__pch.h"

//============================================================
// Constructors

Vrename_test_top::Vrename_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrename_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , in_valid{vlSymsp->TOP.in_valid}
    , in_lsrc1_0{vlSymsp->TOP.in_lsrc1_0}
    , in_lsrc2_0{vlSymsp->TOP.in_lsrc2_0}
    , in_ldst_0{vlSymsp->TOP.in_ldst_0}
    , in_br_mask_0{vlSymsp->TOP.in_br_mask_0}
    , in_lsrc1_1{vlSymsp->TOP.in_lsrc1_1}
    , in_lsrc2_1{vlSymsp->TOP.in_lsrc2_1}
    , in_ldst_1{vlSymsp->TOP.in_ldst_1}
    , in_br_mask_1{vlSymsp->TOP.in_br_mask_1}
    , in_allocate_brtag_0{vlSymsp->TOP.in_allocate_brtag_0}
    , in_br_tag_0{vlSymsp->TOP.in_br_tag_0}
    , in_allocate_brtag_1{vlSymsp->TOP.in_allocate_brtag_1}
    , in_br_tag_1{vlSymsp->TOP.in_br_tag_1}
    , wakeup_valid{vlSymsp->TOP.wakeup_valid}
    , wakeup_pdst{vlSymsp->TOP.wakeup_pdst}
    , commit_valid{vlSymsp->TOP.commit_valid}
    , commit_ldst{vlSymsp->TOP.commit_ldst}
    , commit_pdst{vlSymsp->TOP.commit_pdst}
    , commit_stale_pdst{vlSymsp->TOP.commit_stale_pdst}
    , rollback{vlSymsp->TOP.rollback}
    , kill{vlSymsp->TOP.kill}
    , br_mispredict{vlSymsp->TOP.br_mispredict}
    , br_mispredict_tag{vlSymsp->TOP.br_mispredict_tag}
    , br_resolve_mask{vlSymsp->TOP.br_resolve_mask}
    , br_mispredict_mask{vlSymsp->TOP.br_mispredict_mask}
    , dis_ready{vlSymsp->TOP.dis_ready}
    , dis_fire{vlSymsp->TOP.dis_fire}
    , out_valid{vlSymsp->TOP.out_valid}
    , out_psrc1_0{vlSymsp->TOP.out_psrc1_0}
    , out_psrc2_0{vlSymsp->TOP.out_psrc2_0}
    , out_pdst_0{vlSymsp->TOP.out_pdst_0}
    , out_stale_0{vlSymsp->TOP.out_stale_0}
    , out_psrc1_busy_0{vlSymsp->TOP.out_psrc1_busy_0}
    , out_psrc1_1{vlSymsp->TOP.out_psrc1_1}
    , out_psrc2_1{vlSymsp->TOP.out_psrc2_1}
    , out_pdst_1{vlSymsp->TOP.out_pdst_1}
    , out_stale_1{vlSymsp->TOP.out_stale_1}
    , out_psrc1_busy_1{vlSymsp->TOP.out_psrc1_busy_1}
    , out_br_mask_0{vlSymsp->TOP.out_br_mask_0}
    , out_br_mask_1{vlSymsp->TOP.out_br_mask_1}
    , stalls{vlSymsp->TOP.stalls}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrename_test_top::Vrename_test_top(const char* _vcname__)
    : Vrename_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrename_test_top::~Vrename_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrename_test_top___024root___eval_debug_assertions(Vrename_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vrename_test_top___024root___eval_static(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___eval_initial(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___eval_settle(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___eval(Vrename_test_top___024root* vlSelf);

void Vrename_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrename_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrename_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrename_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vrename_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vrename_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrename_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrename_test_top::eventsPending() { return false; }

uint64_t Vrename_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrename_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrename_test_top___024root___eval_final(Vrename_test_top___024root* vlSelf);

VL_ATTR_COLD void Vrename_test_top::final() {
    contextp()->executingFinal(true);
    Vrename_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrename_test_top::hierName() const { return vlSymsp->name(); }
const char* Vrename_test_top::modelName() const { return "Vrename_test_top"; }
unsigned Vrename_test_top::threads() const { return 1; }
void Vrename_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vrename_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
