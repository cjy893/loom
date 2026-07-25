// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

#ifdef VL_DEBUG
void Vmem_issue_test_top___024root___eval_debug_assertions(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_debug_assertions\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_valid & 0xfeU)))) {
        Verilated::overWidthError("dis_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_rob_idx & 0xc0U)))) {
        Verilated::overWidthError("dis_rob_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_prs1 & 0xc0U)))) {
        Verilated::overWidthError("dis_prs1");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_prs2 & 0xc0U)))) {
        Verilated::overWidthError("dis_prs2");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_prs1_busy & 0xfeU)))) {
        Verilated::overWidthError("dis_prs1_busy");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_prs2_busy & 0xfeU)))) {
        Verilated::overWidthError("dis_prs2_busy");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_use_agen & 0xfeU)))) {
        Verilated::overWidthError("dis_use_agen");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_use_dgen & 0xfeU)))) {
        Verilated::overWidthError("dis_use_dgen");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_valid_0 & 0xfeU)))) {
        Verilated::overWidthError("wakeup_valid_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_pdst_0 & 0xc0U)))) {
        Verilated::overWidthError("wakeup_pdst_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_valid_1 & 0xfeU)))) {
        Verilated::overWidthError("wakeup_valid_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_pdst_1 & 0xc0U)))) {
        Verilated::overWidthError("wakeup_pdst_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.resolve_mask & 0xf0U)))) {
        Verilated::overWidthError("resolve_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.mispredict_mask & 0xf0U)))) {
        Verilated::overWidthError("mispredict_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.br_mispredict & 0xfeU)))) {
        Verilated::overWidthError("br_mispredict");
    }
    if (VL_UNLIKELY(((vlSelfRef.flush_pipeline & 0xfeU)))) {
        Verilated::overWidthError("flush_pipeline");
    }
}
#endif  // VL_DEBUG
