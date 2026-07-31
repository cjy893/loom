// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbpd_full_test_top__pch.h"

//============================================================
// Constructors

Vbpd_full_test_top::Vbpd_full_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbpd_full_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , f0_valid{vlSymsp->TOP.f0_valid}
    , f1_update_valid{vlSymsp->TOP.f1_update_valid}
    , f1_is_br{vlSymsp->TOP.f1_is_br}
    , f1_taken{vlSymsp->TOP.f1_taken}
    , f1_is_call{vlSymsp->TOP.f1_is_call}
    , f1_is_ret{vlSymsp->TOP.f1_is_ret}
    , bim_ready{vlSymsp->TOP.bim_ready}
    , ras_read_idx{vlSymsp->TOP.ras_read_idx}
    , ghist_restore_valid{vlSymsp->TOP.ghist_restore_valid}
    , restore_saw_nt{vlSymsp->TOP.restore_saw_nt}
    , restore_ras_idx{vlSymsp->TOP.restore_ras_idx}
    , update_valid{vlSymsp->TOP.update_valid}
    , update_is_mispredict_update{vlSymsp->TOP.update_is_mispredict_update}
    , update_is_repair_update{vlSymsp->TOP.update_is_repair_update}
    , update_btb_mispredicts{vlSymsp->TOP.update_btb_mispredicts}
    , update_br_mask{vlSymsp->TOP.update_br_mask}
    , update_cfi_valid{vlSymsp->TOP.update_cfi_valid}
    , update_cfi_idx{vlSymsp->TOP.update_cfi_idx}
    , update_cfi_taken{vlSymsp->TOP.update_cfi_taken}
    , update_cfi_mispredicted{vlSymsp->TOP.update_cfi_mispredicted}
    , update_cfi_is_br{vlSymsp->TOP.update_cfi_is_br}
    , update_cfi_is_b_bl{vlSymsp->TOP.update_cfi_is_b_bl}
    , update_cfi_is_jirl{vlSymsp->TOP.update_cfi_is_jirl}
    , f0_pc{vlSymsp->TOP.f0_pc}
    , bim_f2_meta{vlSymsp->TOP.bim_f2_meta}
    , ras_read_addr{vlSymsp->TOP.ras_read_addr}
    , update_pc{vlSymsp->TOP.update_pc}
    , update_target{vlSymsp->TOP.update_target}
    , update_meta{vlSymsp->TOP.update_meta}
    , ubtb_f1_preds{vlSymsp->TOP.ubtb_f1_preds}
    , bim_f2_preds{vlSymsp->TOP.bim_f2_preds}
    , btb_f3_preds{vlSymsp->TOP.btb_f3_preds}
    , current_ghist{vlSymsp->TOP.current_ghist}
    , restore_old_history{vlSymsp->TOP.restore_old_history}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbpd_full_test_top::Vbpd_full_test_top(const char* _vcname__)
    : Vbpd_full_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbpd_full_test_top::~Vbpd_full_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbpd_full_test_top___024root___eval_debug_assertions(Vbpd_full_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vbpd_full_test_top___024root___eval_static(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___eval_initial(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___eval_settle(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___eval(Vbpd_full_test_top___024root* vlSelf);

void Vbpd_full_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbpd_full_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbpd_full_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbpd_full_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vbpd_full_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vbpd_full_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbpd_full_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbpd_full_test_top::eventsPending() { return false; }

uint64_t Vbpd_full_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbpd_full_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbpd_full_test_top___024root___eval_final(Vbpd_full_test_top___024root* vlSelf);

VL_ATTR_COLD void Vbpd_full_test_top::final() {
    contextp()->executingFinal(true);
    Vbpd_full_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbpd_full_test_top::hierName() const { return vlSymsp->name(); }
const char* Vbpd_full_test_top::modelName() const { return "Vbpd_full_test_top"; }
unsigned Vbpd_full_test_top::threads() const { return 1; }
void Vbpd_full_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vbpd_full_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
