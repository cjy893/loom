// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcore_top_contract_test_top__pch.h"

//============================================================
// Constructors

Vcore_top_contract_test_top::Vcore_top_contract_test_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcore_top_contract_test_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , imem_req_valid{vlSymsp->TOP.imem_req_valid}
    , imem_req_ready{vlSymsp->TOP.imem_req_ready}
    , imem_resp_valid{vlSymsp->TOP.imem_resp_valid}
    , imem_resp_ready{vlSymsp->TOP.imem_resp_ready}
    , dmem_req_valid{vlSymsp->TOP.dmem_req_valid}
    , dmem_req_ready{vlSymsp->TOP.dmem_req_ready}
    , dmem_req_is_store{vlSymsp->TOP.dmem_req_is_store}
    , dmem_req_mask{vlSymsp->TOP.dmem_req_mask}
    , dmem_req_size{vlSymsp->TOP.dmem_req_size}
    , dmem_req_idx{vlSymsp->TOP.dmem_req_idx}
    , dmem_resp_valid{vlSymsp->TOP.dmem_resp_valid}
    , dmem_resp_is_store{vlSymsp->TOP.dmem_resp_is_store}
    , dmem_resp_idx{vlSymsp->TOP.dmem_resp_idx}
    , hw_irq{vlSymsp->TOP.hw_irq}
    , ipi_irq{vlSymsp->TOP.ipi_irq}
    , commit_valid{vlSymsp->TOP.commit_valid}
    , commit_ldst{vlSymsp->TOP.commit_ldst}
    , exception_valid{vlSymsp->TOP.exception_valid}
    , imem_req_addr{vlSymsp->TOP.imem_req_addr}
    , imem_resp_insts{vlSymsp->TOP.imem_resp_insts}
    , dmem_req_addr{vlSymsp->TOP.dmem_req_addr}
    , dmem_req_data{vlSymsp->TOP.dmem_req_data}
    , dmem_resp_data{vlSymsp->TOP.dmem_resp_data}
    , commit_pc{vlSymsp->TOP.commit_pc}
    , commit_inst{vlSymsp->TOP.commit_inst}
    , exception_pc{vlSymsp->TOP.exception_pc}
    , exception_inst{vlSymsp->TOP.exception_inst}
    , exception_cause{vlSymsp->TOP.exception_cause}
    , exception_badvaddr{vlSymsp->TOP.exception_badvaddr}
    , __PVT__loom_types{vlSymsp->TOP.__PVT__loom_types}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcore_top_contract_test_top::Vcore_top_contract_test_top(const char* _vcname__)
    : Vcore_top_contract_test_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcore_top_contract_test_top::~Vcore_top_contract_test_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcore_top_contract_test_top___024root___eval_debug_assertions(Vcore_top_contract_test_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcore_top_contract_test_top___024root___eval_static(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___eval_initial(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___eval_settle(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___eval(Vcore_top_contract_test_top___024root* vlSelf);

void Vcore_top_contract_test_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcore_top_contract_test_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcore_top_contract_test_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcore_top_contract_test_top___024root___eval_static(&(vlSymsp->TOP));
        Vcore_top_contract_test_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcore_top_contract_test_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcore_top_contract_test_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcore_top_contract_test_top::eventsPending() { return false; }

uint64_t Vcore_top_contract_test_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcore_top_contract_test_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcore_top_contract_test_top___024root___eval_final(Vcore_top_contract_test_top___024root* vlSelf);

VL_ATTR_COLD void Vcore_top_contract_test_top::final() {
    contextp()->executingFinal(true);
    Vcore_top_contract_test_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcore_top_contract_test_top::hierName() const { return vlSymsp->name(); }
const char* Vcore_top_contract_test_top::modelName() const { return "Vcore_top_contract_test_top"; }
unsigned Vcore_top_contract_test_top::threads() const { return 1; }
void Vcore_top_contract_test_top::prepareClone() const { contextp()->prepareClone(); }
void Vcore_top_contract_test_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
