// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___ctor_var_reset_1(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ctor_var_reset_1\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vtrigprevexpr___TOP__dis_valid_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_rob_idx_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc1_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc2_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc1_busy_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc2_busy_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_use_agen_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_use_dgen_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_br_mask_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_valid_0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_pdst_0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_valid_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_pdst_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__src1_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__src2_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__imm_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__resolve_mask__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mispredict_mask__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__br_mispredict__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__flush_pipeline__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
