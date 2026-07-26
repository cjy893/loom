// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

void Vcsr_file_test_top___024root___eval_triggers_vec__ico__0(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___eval_triggers_vec__ico__2(Vcsr_file_test_top___024root* vlSelf);

void Vcsr_file_test_top___024root___eval_triggers_vec__ico(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_triggers_vec__ico\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcsr_file_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
    {
        // Inlined CFunc: _eval_triggers_vec__ico__1
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__csr_req_valid__0 
            = vlSelfRef.csr_req_valid;
        vlSelfRef.__Vtrigprevexpr___TOP__csr_req_rob_idx__0 
            = vlSelfRef.csr_req_rob_idx;
        vlSelfRef.__Vtrigprevexpr___TOP__csr_req_addr__0 
            = vlSelfRef.csr_req_addr;
        vlSelfRef.__Vtrigprevexpr___TOP__csr_cmd__0 
            = vlSelfRef.csr_cmd;
        vlSelfRef.__Vtrigprevexpr___TOP__csr_wdata__0 
            = vlSelfRef.csr_wdata;
        vlSelfRef.__Vtrigprevexpr___TOP__csr_wmask__0 
            = vlSelfRef.csr_wmask;
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
        vlSelfRef.__Vtrigprevexpr___TOP__xcpt_pc__0 
            = vlSelfRef.xcpt_pc;
        vlSelfRef.__Vtrigprevexpr___TOP__xcpt_code__0 
            = vlSelfRef.xcpt_code;
        vlSelfRef.__Vtrigprevexpr___TOP__xcpt_esubcode__0 
            = vlSelfRef.xcpt_esubcode;
        vlSelfRef.__Vtrigprevexpr___TOP__xcpt_badvaddr__0 
            = vlSelfRef.xcpt_badvaddr;
        vlSelfRef.__Vtrigprevexpr___TOP__ertn_valid__0 
            = vlSelfRef.ertn_valid;
        vlSelfRef.__Vtrigprevexpr___TOP__hw_irq__0 
            = vlSelfRef.hw_irq;
        vlSelfRef.__Vtrigprevexpr___TOP__ipi_irq__0 
            = vlSelfRef.ipi_irq;
    }
    Vcsr_file_test_top___024root___eval_triggers_vec__ico__2(vlSelf);
}

bool Vcsr_file_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vcsr_file_test_top___024root___eval_triggers_vec__ico__0(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_triggers_vec__ico__0\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.ipi_irq) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ipi_irq__0)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.hw_irq) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hw_irq__0)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.ertn_valid) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ertn_valid__0)) 
                                                           << 1U) 
                                                          | (vlSelfRef.xcpt_badvaddr 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__xcpt_badvaddr__0))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.xcpt_esubcode) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__xcpt_esubcode__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.xcpt_code) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__xcpt_code__0)) 
                                                               << 2U)) 
                                                           | (((vlSelfRef.xcpt_pc 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__xcpt_pc__0) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.xcpt_valid) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__xcpt_valid__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.csr_flush_pending) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_flush_pending__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.csr_commit_rob_idx) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_commit_rob_idx__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.csr_commit_valid) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_commit_valid__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.csr_resp_ready) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_resp_ready__0)))) 
                                                            << 8U)) 
                                                        | ((((((vlSelfRef.csr_wmask 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__csr_wmask__0) 
                                                               << 3U) 
                                                              | ((vlSelfRef.csr_wdata 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__csr_wdata__0) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.csr_cmd) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_cmd__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.csr_req_addr) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_req_addr__0)))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.csr_req_rob_idx) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_req_rob_idx__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.csr_req_valid) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csr_req_valid__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.rst_n) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.clk) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))))));
}
