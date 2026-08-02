// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

#ifdef VL_DEBUG
void Vbpd_full_test_top___024root___eval_debug_assertions(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_debug_assertions\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.f0_valid & 0xfeU)))) {
        Verilated::overWidthError("f0_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.f1_update_valid & 0xfeU)))) {
        Verilated::overWidthError("f1_update_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.f1_is_br & 0xfeU)))) {
        Verilated::overWidthError("f1_is_br");
    }
    if (VL_UNLIKELY(((vlSelfRef.f1_taken & 0xfeU)))) {
        Verilated::overWidthError("f1_taken");
    }
    if (VL_UNLIKELY(((vlSelfRef.f1_is_call & 0xfeU)))) {
        Verilated::overWidthError("f1_is_call");
    }
    if (VL_UNLIKELY(((vlSelfRef.f1_is_ret & 0xfeU)))) {
        Verilated::overWidthError("f1_is_ret");
    }
    if (VL_UNLIKELY(((vlSelfRef.ras_read_idx & 0xe0U)))) {
        Verilated::overWidthError("ras_read_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.ghist_restore_valid 
                      & 0xfeU)))) {
        Verilated::overWidthError("ghist_restore_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.restore_saw_nt & 0xfeU)))) {
        Verilated::overWidthError("restore_saw_nt");
    }
    if (VL_UNLIKELY(((vlSelfRef.restore_ras_idx & 0xe0U)))) {
        Verilated::overWidthError("restore_ras_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_valid & 0xfeU)))) {
        Verilated::overWidthError("update_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_is_mispredict_update 
                      & 0xfeU)))) {
        Verilated::overWidthError("update_is_mispredict_update");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_is_repair_update 
                      & 0xfeU)))) {
        Verilated::overWidthError("update_is_repair_update");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_btb_mispredicts 
                      & 0xfcU)))) {
        Verilated::overWidthError("update_btb_mispredicts");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_br_mask & 0xfcU)))) {
        Verilated::overWidthError("update_br_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_valid & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_idx & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_taken & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_taken");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_mispredicted 
                      & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_mispredicted");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_is_br & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_is_br");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_is_b_bl 
                      & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_is_b_bl");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_cfi_is_jirl 
                      & 0xfeU)))) {
        Verilated::overWidthError("update_cfi_is_jirl");
    }
    if (VL_UNLIKELY(((vlSelfRef.update_meta[3U] & 0xff000000U)))) {
        Verilated::overWidthError("update_meta");
    }
}
#endif  // VL_DEBUG
