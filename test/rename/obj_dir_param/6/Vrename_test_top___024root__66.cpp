// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

#ifdef VL_DEBUG
void Vrename_test_top___024root___eval_debug_assertions(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_debug_assertions\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_valid & 0xfcU)))) {
        Verilated::overWidthError("in_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_lsrc1_0 & 0xe0U)))) {
        Verilated::overWidthError("in_lsrc1_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_lsrc2_0 & 0xe0U)))) {
        Verilated::overWidthError("in_lsrc2_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_ldst_0 & 0xe0U)))) {
        Verilated::overWidthError("in_ldst_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_br_mask_0 & 0xc0U)))) {
        Verilated::overWidthError("in_br_mask_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_lsrc1_1 & 0xe0U)))) {
        Verilated::overWidthError("in_lsrc1_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_lsrc2_1 & 0xe0U)))) {
        Verilated::overWidthError("in_lsrc2_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_ldst_1 & 0xe0U)))) {
        Verilated::overWidthError("in_ldst_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_br_mask_1 & 0xc0U)))) {
        Verilated::overWidthError("in_br_mask_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_allocate_brtag_0 
                      & 0xfeU)))) {
        Verilated::overWidthError("in_allocate_brtag_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_br_tag_0 & 0xf8U)))) {
        Verilated::overWidthError("in_br_tag_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_allocate_brtag_1 
                      & 0xfeU)))) {
        Verilated::overWidthError("in_allocate_brtag_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_br_tag_1 & 0xf8U)))) {
        Verilated::overWidthError("in_br_tag_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_valid & 0xfeU)))) {
        Verilated::overWidthError("wakeup_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_pdst & 0xc0U)))) {
        Verilated::overWidthError("wakeup_pdst");
    }
    if (VL_UNLIKELY(((vlSelfRef.commit_valid & 0xfeU)))) {
        Verilated::overWidthError("commit_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.commit_ldst & 0xe0U)))) {
        Verilated::overWidthError("commit_ldst");
    }
    if (VL_UNLIKELY(((vlSelfRef.commit_pdst & 0xc0U)))) {
        Verilated::overWidthError("commit_pdst");
    }
    if (VL_UNLIKELY(((vlSelfRef.commit_stale_pdst & 0xc0U)))) {
        Verilated::overWidthError("commit_stale_pdst");
    }
    if (VL_UNLIKELY(((vlSelfRef.rollback & 0xfeU)))) {
        Verilated::overWidthError("rollback");
    }
    if (VL_UNLIKELY(((vlSelfRef.kill & 0xfeU)))) {
        Verilated::overWidthError("kill");
    }
    if (VL_UNLIKELY(((vlSelfRef.br_mispredict & 0xfeU)))) {
        Verilated::overWidthError("br_mispredict");
    }
    if (VL_UNLIKELY(((vlSelfRef.br_mispredict_tag & 0xf8U)))) {
        Verilated::overWidthError("br_mispredict_tag");
    }
    if (VL_UNLIKELY(((vlSelfRef.br_resolve_mask & 0xc0U)))) {
        Verilated::overWidthError("br_resolve_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.br_mispredict_mask 
                      & 0xc0U)))) {
        Verilated::overWidthError("br_mispredict_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_ready & 0xfeU)))) {
        Verilated::overWidthError("dis_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_fire & 0xfcU)))) {
        Verilated::overWidthError("dis_fire");
    }
}
#endif  // VL_DEBUG
