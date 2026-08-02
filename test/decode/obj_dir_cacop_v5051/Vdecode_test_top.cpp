// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode_test_top__pch.h"

//============================================================
// Constructors

Vdecode_test_top::Vdecode_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecode_test_top__Syms(contextp(), _vcname__, this)}
    , status_prv{vlSymsp->TOP.status_prv}
    , iq_type{vlSymsp->TOP.iq_type}
    , ldst{vlSymsp->TOP.ldst}
    , lsrc1{vlSymsp->TOP.lsrc1}
    , lsrc2{vlSymsp->TOP.lsrc2}
    , dst_rtype{vlSymsp->TOP.dst_rtype}
    , lsrc1_rtype{vlSymsp->TOP.lsrc1_rtype}
    , lsrc2_rtype{vlSymsp->TOP.lsrc2_rtype}
    , op1_sel{vlSymsp->TOP.op1_sel}
    , op2_sel{vlSymsp->TOP.op2_sel}
    , fcn_op{vlSymsp->TOP.fcn_op}
    , imm_sel{vlSymsp->TOP.imm_sel}
    , br_type{vlSymsp->TOP.br_type}
    , allocate_brtag{vlSymsp->TOP.allocate_brtag}
    , is_br{vlSymsp->TOP.is_br}
    , is_b_bl{vlSymsp->TOP.is_b_bl}
    , is_jirl{vlSymsp->TOP.is_jirl}
    , uses_ldq{vlSymsp->TOP.uses_ldq}
    , uses_stq{vlSymsp->TOP.uses_stq}
    , mem_cmd{vlSymsp->TOP.mem_cmd}
    , mem_size{vlSymsp->TOP.mem_size}
    , mem_signed{vlSymsp->TOP.mem_signed}
    , is_unique{vlSymsp->TOP.is_unique}
    , is_rdcnt{vlSymsp->TOP.is_rdcnt}
    , is_ertn{vlSymsp->TOP.is_ertn}
    , flush_on_commit{vlSymsp->TOP.flush_on_commit}
    , csr_cmd{vlSymsp->TOP.csr_cmd}
    , tlb_cmd{vlSymsp->TOP.tlb_cmd}
    , exception{vlSymsp->TOP.exception}
    , exc_adef{vlSymsp->TOP.exc_adef}
    , fu_code{vlSymsp->TOP.fu_code}
    , inst{vlSymsp->TOP.inst}
    , pc{vlSymsp->TOP.pc}
    , imm_packed{vlSymsp->TOP.imm_packed}
    , exc_cause{vlSymsp->TOP.exc_cause}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecode_test_top::Vdecode_test_top(const char* _vcname__)
    : Vdecode_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecode_test_top::~Vdecode_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecode_test_top___024root___eval_debug_assertions(Vdecode_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode_test_top___024root___eval_static(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___eval_initial(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___eval_settle(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___eval(Vdecode_test_top___024root* vlSelf);

void Vdecode_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecode_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vdecode_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vdecode_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecode_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecode_test_top::eventsPending() { return false; }

uint64_t Vdecode_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecode_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecode_test_top___024root___eval_final(Vdecode_test_top___024root* vlSelf);

VL_ATTR_COLD void Vdecode_test_top::final() {
    contextp()->executingFinal(true);
    Vdecode_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecode_test_top::hierName() const { return vlSymsp->name(); }
const char* Vdecode_test_top::modelName() const { return "Vdecode_test_top"; }
unsigned Vdecode_test_top::threads() const { return 1; }
void Vdecode_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vdecode_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
