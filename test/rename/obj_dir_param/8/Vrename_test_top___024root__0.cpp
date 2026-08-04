// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___eval_triggers_vec__ico__0(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___eval_triggers_vec__ico__2(Vrename_test_top___024root* vlSelf);

void Vrename_test_top___024root___eval_triggers_vec__ico(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_triggers_vec__ico\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrename_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
    {
        // Inlined CFunc: _eval_triggers_vec__ico__1
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__in_valid__0 
            = vlSelfRef.in_valid;
        vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc1_0__0 
            = vlSelfRef.in_lsrc1_0;
        vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc2_0__0 
            = vlSelfRef.in_lsrc2_0;
        vlSelfRef.__Vtrigprevexpr___TOP__in_ldst_0__0 
            = vlSelfRef.in_ldst_0;
        vlSelfRef.__Vtrigprevexpr___TOP__in_br_mask_0__0 
            = vlSelfRef.in_br_mask_0;
        vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc1_1__0 
            = vlSelfRef.in_lsrc1_1;
        vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc2_1__0 
            = vlSelfRef.in_lsrc2_1;
        vlSelfRef.__Vtrigprevexpr___TOP__in_ldst_1__0 
            = vlSelfRef.in_ldst_1;
        vlSelfRef.__Vtrigprevexpr___TOP__in_br_mask_1__0 
            = vlSelfRef.in_br_mask_1;
        vlSelfRef.__Vtrigprevexpr___TOP__in_allocate_brtag_0__0 
            = vlSelfRef.in_allocate_brtag_0;
        vlSelfRef.__Vtrigprevexpr___TOP__in_br_tag_0__0 
            = vlSelfRef.in_br_tag_0;
        vlSelfRef.__Vtrigprevexpr___TOP__in_allocate_brtag_1__0 
            = vlSelfRef.in_allocate_brtag_1;
        vlSelfRef.__Vtrigprevexpr___TOP__in_br_tag_1__0 
            = vlSelfRef.in_br_tag_1;
        vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid__0 
            = vlSelfRef.wakeup_valid;
        vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst__0 
            = vlSelfRef.wakeup_pdst;
        vlSelfRef.__Vtrigprevexpr___TOP__commit_valid__0 
            = vlSelfRef.commit_valid;
        vlSelfRef.__Vtrigprevexpr___TOP__commit_ldst__0 
            = vlSelfRef.commit_ldst;
        vlSelfRef.__Vtrigprevexpr___TOP__commit_pdst__0 
            = vlSelfRef.commit_pdst;
        vlSelfRef.__Vtrigprevexpr___TOP__commit_stale_pdst__0 
            = vlSelfRef.commit_stale_pdst;
        vlSelfRef.__Vtrigprevexpr___TOP__rollback__0 
            = vlSelfRef.rollback;
        vlSelfRef.__Vtrigprevexpr___TOP__kill__0 = vlSelfRef.kill;
        vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0 
            = vlSelfRef.br_mispredict;
        vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict_tag__0 
            = vlSelfRef.br_mispredict_tag;
        vlSelfRef.__Vtrigprevexpr___TOP__br_resolve_mask__0 
            = vlSelfRef.br_resolve_mask;
        vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict_mask__0 
            = vlSelfRef.br_mispredict_mask;
        vlSelfRef.__Vtrigprevexpr___TOP__dis_ready__0 
            = vlSelfRef.dis_ready;
        vlSelfRef.__Vtrigprevexpr___TOP__dis_fire__0 
            = vlSelfRef.dis_fire;
    }
    Vrename_test_top___024root___eval_triggers_vec__ico__2(vlSelf);
}

bool Vrename_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___trigger_anySet__ico\n"); );
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
