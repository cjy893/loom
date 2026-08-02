// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vftq_test_top__pch.h"

//============================================================
// Constructors

Vftq_test_top::Vftq_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vftq_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enq_valid{vlSymsp->TOP.enq_valid}
    , enq_ready{vlSymsp->TOP.enq_ready}
    , enq_br_mask{vlSymsp->TOP.enq_br_mask}
    , enq_cfi_valid{vlSymsp->TOP.enq_cfi_valid}
    , enq_cfi_idx{vlSymsp->TOP.enq_cfi_idx}
    , enq_cfi_type{vlSymsp->TOP.enq_cfi_type}
    , enq_cfi_is_call{vlSymsp->TOP.enq_cfi_is_call}
    , enq_cfi_is_ret{vlSymsp->TOP.enq_cfi_is_ret}
    , enq_cfi_npc_plus4{vlSymsp->TOP.enq_cfi_npc_plus4}
    , enq_cfi_taken{vlSymsp->TOP.enq_cfi_taken}
    , enq_ras_idx{vlSymsp->TOP.enq_ras_idx}
    , enq_start_bank{vlSymsp->TOP.enq_start_bank}
    , enq_idx{vlSymsp->TOP.enq_idx}
    , commit_valid{vlSymsp->TOP.commit_valid}
    , commit_ftq_idx{vlSymsp->TOP.commit_ftq_idx}
    , redirect_valid{vlSymsp->TOP.redirect_valid}
    , redirect_ftq_idx{vlSymsp->TOP.redirect_ftq_idx}
    , brupdate_b2_mispredict{vlSymsp->TOP.brupdate_b2_mispredict}
    , brupdate_b2_ftq_idx{vlSymsp->TOP.brupdate_b2_ftq_idx}
    , brupdate_b2_taken{vlSymsp->TOP.brupdate_b2_taken}
    , brupdate_b2_pc_lob{vlSymsp->TOP.brupdate_b2_pc_lob}
    , brupdate_b2_cfi_type{vlSymsp->TOP.brupdate_b2_cfi_type}
    , bpd_update_valid{vlSymsp->TOP.bpd_update_valid}
    , bpd_update_is_mispredict_update{vlSymsp->TOP.bpd_update_is_mispredict_update}
    , bpd_update_is_repair_update{vlSymsp->TOP.bpd_update_is_repair_update}
    , bpd_update_br_mask{vlSymsp->TOP.bpd_update_br_mask}
    , bpd_update_cfi_valid{vlSymsp->TOP.bpd_update_cfi_valid}
    , bpd_update_cfi_idx{vlSymsp->TOP.bpd_update_cfi_idx}
    , bpd_update_cfi_taken{vlSymsp->TOP.bpd_update_cfi_taken}
    , bpd_update_cfi_mispredicted{vlSymsp->TOP.bpd_update_cfi_mispredicted}
    , bpd_update_cfi_is_br{vlSymsp->TOP.bpd_update_cfi_is_br}
    , bpd_update_cfi_is_b_bl{vlSymsp->TOP.bpd_update_cfi_is_b_bl}
    , bpd_update_cfi_is_jirl{vlSymsp->TOP.bpd_update_cfi_is_jirl}
    , ghist_restore_valid{vlSymsp->TOP.ghist_restore_valid}
    , ras_repair_valid{vlSymsp->TOP.ras_repair_valid}
    , ras_repair_idx{vlSymsp->TOP.ras_repair_idx}
    , query_valid{vlSymsp->TOP.query_valid}
    , query_idx{vlSymsp->TOP.query_idx}
    , query_resp_valid{vlSymsp->TOP.query_resp_valid}
    , query_br_mask{vlSymsp->TOP.query_br_mask}
    , query_cfi_valid{vlSymsp->TOP.query_cfi_valid}
    , query_cfi_idx{vlSymsp->TOP.query_cfi_idx}
    , query_cfi_type{vlSymsp->TOP.query_cfi_type}
    , query_cfi_is_call{vlSymsp->TOP.query_cfi_is_call}
    , query_cfi_is_ret{vlSymsp->TOP.query_cfi_is_ret}
    , query_cfi_npc_plus4{vlSymsp->TOP.query_cfi_npc_plus4}
    , query_cfi_taken{vlSymsp->TOP.query_cfi_taken}
    , query_ras_idx{vlSymsp->TOP.query_ras_idx}
    , query_start_bank{vlSymsp->TOP.query_start_bank}
    , enq_pc{vlSymsp->TOP.enq_pc}
    , enq_next_pc{vlSymsp->TOP.enq_next_pc}
    , enq_ras_top{vlSymsp->TOP.enq_ras_top}
    , enq_meta{vlSymsp->TOP.enq_meta}
    , brupdate_b2_target{vlSymsp->TOP.brupdate_b2_target}
    , bpd_update_pc{vlSymsp->TOP.bpd_update_pc}
    , bpd_update_target{vlSymsp->TOP.bpd_update_target}
    , bpd_update_meta{vlSymsp->TOP.bpd_update_meta}
    , ras_repair_addr{vlSymsp->TOP.ras_repair_addr}
    , query_pc{vlSymsp->TOP.query_pc}
    , query_ras_top{vlSymsp->TOP.query_ras_top}
    , enq_ghist{vlSymsp->TOP.enq_ghist}
    , bpd_update_ghist{vlSymsp->TOP.bpd_update_ghist}
    , ghist_restore{vlSymsp->TOP.ghist_restore}
    , query_ghist{vlSymsp->TOP.query_ghist}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vftq_test_top::Vftq_test_top(const char* _vcname__)
    : Vftq_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vftq_test_top::~Vftq_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vftq_test_top___024root___eval_debug_assertions(Vftq_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vftq_test_top___024root___eval_static(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___eval_initial(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___eval_settle(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___eval(Vftq_test_top___024root* vlSelf);

void Vftq_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vftq_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vftq_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vftq_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vftq_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vftq_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vftq_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vftq_test_top::eventsPending() { return false; }

uint64_t Vftq_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vftq_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vftq_test_top___024root___eval_final(Vftq_test_top___024root* vlSelf);

VL_ATTR_COLD void Vftq_test_top::final() {
    contextp()->executingFinal(true);
    Vftq_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vftq_test_top::hierName() const { return vlSymsp->name(); }
const char* Vftq_test_top::modelName() const { return "Vftq_test_top"; }
unsigned Vftq_test_top::threads() const { return 1; }
void Vftq_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vftq_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
