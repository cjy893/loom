// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcsr_file_test_top__pch.h"

//============================================================
// Constructors

Vcsr_file_test_top::Vcsr_file_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcsr_file_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , csr_req_valid{vlSymsp->TOP.csr_req_valid}
    , csr_req_ready{vlSymsp->TOP.csr_req_ready}
    , csr_req_rob_idx{vlSymsp->TOP.csr_req_rob_idx}
    , csr_cmd{vlSymsp->TOP.csr_cmd}
    , csr_resp_valid{vlSymsp->TOP.csr_resp_valid}
    , csr_resp_ready{vlSymsp->TOP.csr_resp_ready}
    , csr_resp_rob_idx{vlSymsp->TOP.csr_resp_rob_idx}
    , csr_commit_valid{vlSymsp->TOP.csr_commit_valid}
    , csr_commit_rob_idx{vlSymsp->TOP.csr_commit_rob_idx}
    , csr_flush_pending{vlSymsp->TOP.csr_flush_pending}
    , xcpt_valid{vlSymsp->TOP.xcpt_valid}
    , xcpt_code{vlSymsp->TOP.xcpt_code}
    , ertn_valid{vlSymsp->TOP.ertn_valid}
    , hw_irq{vlSymsp->TOP.hw_irq}
    , ipi_irq{vlSymsp->TOP.ipi_irq}
    , interrupt_pending{vlSymsp->TOP.interrupt_pending}
    , current_plv{vlSymsp->TOP.current_plv}
    , current_ie{vlSymsp->TOP.current_ie}
    , csr_req_addr{vlSymsp->TOP.csr_req_addr}
    , xcpt_esubcode{vlSymsp->TOP.xcpt_esubcode}
    , interrupt_pending_bits{vlSymsp->TOP.interrupt_pending_bits}
    , csr_wdata{vlSymsp->TOP.csr_wdata}
    , csr_wmask{vlSymsp->TOP.csr_wmask}
    , csr_rdata{vlSymsp->TOP.csr_rdata}
    , xcpt_pc{vlSymsp->TOP.xcpt_pc}
    , xcpt_badvaddr{vlSymsp->TOP.xcpt_badvaddr}
    , xcpt_target{vlSymsp->TOP.xcpt_target}
    , ertn_target{vlSymsp->TOP.ertn_target}
    , crmd_value{vlSymsp->TOP.crmd_value}
    , asid_value{vlSymsp->TOP.asid_value}
    , dmw0_value{vlSymsp->TOP.dmw0_value}
    , dmw1_value{vlSymsp->TOP.dmw1_value}
    , era_value{vlSymsp->TOP.era_value}
    , eentry_value{vlSymsp->TOP.eentry_value}
    , tlbrentry_value{vlSymsp->TOP.tlbrentry_value}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcsr_file_test_top::Vcsr_file_test_top(const char* _vcname__)
    : Vcsr_file_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcsr_file_test_top::~Vcsr_file_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcsr_file_test_top___024root___eval_debug_assertions(Vcsr_file_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcsr_file_test_top___024root___eval_static(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___eval_initial(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___eval_settle(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___eval(Vcsr_file_test_top___024root* vlSelf);

void Vcsr_file_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcsr_file_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcsr_file_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcsr_file_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vcsr_file_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcsr_file_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcsr_file_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcsr_file_test_top::eventsPending() { return false; }

uint64_t Vcsr_file_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcsr_file_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcsr_file_test_top___024root___eval_final(Vcsr_file_test_top___024root* vlSelf);

VL_ATTR_COLD void Vcsr_file_test_top::final() {
    contextp()->executingFinal(true);
    Vcsr_file_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcsr_file_test_top::hierName() const { return vlSymsp->name(); }
const char* Vcsr_file_test_top::modelName() const { return "Vcsr_file_test_top"; }
unsigned Vcsr_file_test_top::threads() const { return 1; }
void Vcsr_file_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vcsr_file_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
