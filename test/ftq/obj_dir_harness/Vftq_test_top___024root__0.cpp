// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___eval(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
void Vftq_test_top___024root___eval_debug_assertions(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_debug_assertions\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_valid & 0xfeU)))) {
        Verilated::overWidthError("enq_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_br_mask & 0xf0U)))) {
        Verilated::overWidthError("enq_br_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_valid & 0xfeU)))) {
        Verilated::overWidthError("enq_cfi_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_idx & 0xfcU)))) {
        Verilated::overWidthError("enq_cfi_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_type & 0xf8U)))) {
        Verilated::overWidthError("enq_cfi_type");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_is_call & 0xfeU)))) {
        Verilated::overWidthError("enq_cfi_is_call");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_is_ret & 0xfeU)))) {
        Verilated::overWidthError("enq_cfi_is_ret");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_npc_plus4 & 0xfeU)))) {
        Verilated::overWidthError("enq_cfi_npc_plus4");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_cfi_taken & 0xfeU)))) {
        Verilated::overWidthError("enq_cfi_taken");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_ras_idx & 0xe0U)))) {
        Verilated::overWidthError("enq_ras_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.enq_start_bank & 0xfeU)))) {
        Verilated::overWidthError("enq_start_bank");
    }
    if (VL_UNLIKELY(((vlSelfRef.commit_valid & 0xfeU)))) {
        Verilated::overWidthError("commit_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.commit_ftq_idx & 0xf0U)))) {
        Verilated::overWidthError("commit_ftq_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.redirect_valid & 0xfeU)))) {
        Verilated::overWidthError("redirect_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.redirect_ftq_idx & 0xf0U)))) {
        Verilated::overWidthError("redirect_ftq_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.brupdate_b2_mispredict 
                      & 0xfeU)))) {
        Verilated::overWidthError("brupdate_b2_mispredict");
    }
    if (VL_UNLIKELY(((vlSelfRef.brupdate_b2_ftq_idx 
                      & 0xf0U)))) {
        Verilated::overWidthError("brupdate_b2_ftq_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.brupdate_b2_taken & 0xfeU)))) {
        Verilated::overWidthError("brupdate_b2_taken");
    }
    if (VL_UNLIKELY(((vlSelfRef.brupdate_b2_pc_lob 
                      & 0xc0U)))) {
        Verilated::overWidthError("brupdate_b2_pc_lob");
    }
    if (VL_UNLIKELY(((vlSelfRef.brupdate_b2_cfi_type 
                      & 0xf8U)))) {
        Verilated::overWidthError("brupdate_b2_cfi_type");
    }
    if (VL_UNLIKELY(((vlSelfRef.query_valid & 0xfeU)))) {
        Verilated::overWidthError("query_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.query_idx & 0xf0U)))) {
        Verilated::overWidthError("query_idx");
    }
}
#endif  // VL_DEBUG
