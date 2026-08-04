// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

bool Vmem_issue_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___trigger_anySet__ico\n"); );
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

void Vmem_issue_test_top___024root___eval_triggers_vec__ico__0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_triggers_vec__ico__0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((((((((IData)(vlSelfRef.flush_pipeline) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flush_pipeline__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.br_mispredict) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.mispredict_mask) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mispredict_mask__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.resolve_mask) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__resolve_mask__0)))) 
                                                         << 0x0000000cU) 
                                                        | (((((vlSelfRef.imm_data 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__imm_data__0) 
                                                              << 3U) 
                                                             | ((vlSelfRef.src2_data 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__src2_data__0) 
                                                                << 2U)) 
                                                            | (((vlSelfRef.src1_data 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__src1_data__0) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.wakeup_pdst_1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_1__0)))) 
                                                           << 8U)) 
                                                       | (((((((IData)(vlSelfRef.wakeup_valid_1) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_1__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.wakeup_pdst_0) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_0__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.wakeup_valid_0) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_0__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.dis_br_mask_1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_br_mask_1__0)))) 
                                                           << 4U) 
                                                          | (((((IData)(vlSelfRef.dis_use_dgen_1) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen_1__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.dis_use_agen_1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen_1__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.dis_psrc2_busy_1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy_1__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.dis_psrc1_busy_1) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy_1__0)))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.dis_psrc2_1) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_1__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.dis_psrc1_1) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_1__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.dis_rob_idx_1) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx_1__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.dis_valid_1) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_valid_1__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.dis_br_mask) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_br_mask__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.dis_use_dgen) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.dis_use_agen) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.dis_psrc2_busy) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.dis_psrc1_busy) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.dis_psrc2) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.dis_psrc1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.dis_rob_idx) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx__0)))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.dis_valid) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dis_valid__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.rob_head_idx) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rob_head_idx__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.rst_n) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.clk) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))))));
}
