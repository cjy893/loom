// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

VL_ATTR_COLD void Vcsr_file_test_top___024root___eval_static(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_static\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_req_valid__0 
        = vlSelfRef.csr_req_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_req_rob_idx__0 
        = vlSelfRef.csr_req_rob_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_req_addr__0 
        = vlSelfRef.csr_req_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_cmd__0 = vlSelfRef.csr_cmd;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_wdata__0 = vlSelfRef.csr_wdata;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_wmask__0 = vlSelfRef.csr_wmask;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_resp_ready__0 
        = vlSelfRef.csr_resp_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_commit_valid__0 
        = vlSelfRef.csr_commit_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_commit_rob_idx__0 
        = vlSelfRef.csr_commit_rob_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__csr_flush_pending__0 
        = vlSelfRef.csr_flush_pending;
    vlSelfRef.__Vtrigprevexpr___TOP__xcpt_valid__0 
        = vlSelfRef.xcpt_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__xcpt_pc__0 = vlSelfRef.xcpt_pc;
    vlSelfRef.__Vtrigprevexpr___TOP__xcpt_code__0 = vlSelfRef.xcpt_code;
    vlSelfRef.__Vtrigprevexpr___TOP__xcpt_esubcode__0 
        = vlSelfRef.xcpt_esubcode;
    vlSelfRef.__Vtrigprevexpr___TOP__xcpt_badvaddr__0 
        = vlSelfRef.xcpt_badvaddr;
    vlSelfRef.__Vtrigprevexpr___TOP__ertn_valid__0 
        = vlSelfRef.ertn_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__hw_irq__0 = vlSelfRef.hw_irq;
    vlSelfRef.__Vtrigprevexpr___TOP__ipi_irq__0 = vlSelfRef.ipi_irq;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcsr_file_test_top___024root___eval_initial(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_initial\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcsr_file_test_top___024root___eval_final(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_final\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcsr_file_test_top___024root___eval_phase__stl(Vcsr_file_test_top___024root* vlSelf);

VL_ATTR_COLD void Vcsr_file_test_top___024root___eval_settle(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_settle\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcsr_file_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("test/csr/csr_file_test_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcsr_file_test_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}
