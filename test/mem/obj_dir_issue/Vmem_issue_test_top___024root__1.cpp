// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___eval_triggers_vec__ico__1(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_triggers_vec__ico__1\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__rob_head_idx__0 
        = vlSelfRef.rob_head_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_valid__0 = vlSelfRef.dis_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx__0 
        = vlSelfRef.dis_rob_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1__0 = vlSelfRef.dis_psrc1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2__0 = vlSelfRef.dis_psrc2;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy__0 
        = vlSelfRef.dis_psrc1_busy;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy__0 
        = vlSelfRef.dis_psrc2_busy;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen__0 
        = vlSelfRef.dis_use_agen;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen__0 
        = vlSelfRef.dis_use_dgen;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_br_mask__0 
        = vlSelfRef.dis_br_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_valid_1__0 
        = vlSelfRef.dis_valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx_1__0 
        = vlSelfRef.dis_rob_idx_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_1__0 
        = vlSelfRef.dis_psrc1_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_1__0 
        = vlSelfRef.dis_psrc2_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy_1__0 
        = vlSelfRef.dis_psrc1_busy_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy_1__0 
        = vlSelfRef.dis_psrc2_busy_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen_1__0 
        = vlSelfRef.dis_use_agen_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen_1__0 
        = vlSelfRef.dis_use_dgen_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_br_mask_1__0 
        = vlSelfRef.dis_br_mask_1;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_0__0 
        = vlSelfRef.wakeup_valid_0;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_0__0 
        = vlSelfRef.wakeup_pdst_0;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_1__0 
        = vlSelfRef.wakeup_valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_1__0 
        = vlSelfRef.wakeup_pdst_1;
    vlSelfRef.__Vtrigprevexpr___TOP__src1_data__0 = vlSelfRef.src1_data;
    vlSelfRef.__Vtrigprevexpr___TOP__src2_data__0 = vlSelfRef.src2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__imm_data__0 = vlSelfRef.imm_data;
    vlSelfRef.__Vtrigprevexpr___TOP__resolve_mask__0 
        = vlSelfRef.resolve_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__mispredict_mask__0 
        = vlSelfRef.mispredict_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0 
        = vlSelfRef.br_mispredict;
    vlSelfRef.__Vtrigprevexpr___TOP__flush_pipeline__0 
        = vlSelfRef.flush_pipeline;
}

void Vmem_issue_test_top___024root___eval_triggers_vec__ico__2(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_triggers_vec__ico__2\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000001000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000002000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000004000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000008000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000010000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000020000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000040000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000080000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000100000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000200000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000400000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000800000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000001000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000002000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000004000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000008000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000010000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000020000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000040000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000080000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}
