// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___eval_triggers_vec__ico__1(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_triggers_vec__ico__1\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__f0_valid__0 = vlSelfRef.f0_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__f0_pc__0 = vlSelfRef.f0_pc;
    vlSelfRef.__Vtrigprevexpr___TOP__f1_update_valid__0 
        = vlSelfRef.f1_update_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__f1_is_br__0 = vlSelfRef.f1_is_br;
    vlSelfRef.__Vtrigprevexpr___TOP__f1_taken__0 = vlSelfRef.f1_taken;
    vlSelfRef.__Vtrigprevexpr___TOP__f1_is_call__0 
        = vlSelfRef.f1_is_call;
    vlSelfRef.__Vtrigprevexpr___TOP__f1_is_ret__0 = vlSelfRef.f1_is_ret;
    vlSelfRef.__Vtrigprevexpr___TOP__ras_read_idx__0 
        = vlSelfRef.ras_read_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__ghist_restore_valid__0 
        = vlSelfRef.ghist_restore_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__restore_old_history__0 
        = vlSelfRef.restore_old_history;
    vlSelfRef.__Vtrigprevexpr___TOP__restore_saw_nt__0 
        = vlSelfRef.restore_saw_nt;
    vlSelfRef.__Vtrigprevexpr___TOP__restore_ras_idx__0 
        = vlSelfRef.restore_ras_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__update_valid__0 
        = vlSelfRef.update_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__update_is_mispredict_update__0 
        = vlSelfRef.update_is_mispredict_update;
    vlSelfRef.__Vtrigprevexpr___TOP__update_is_repair_update__0 
        = vlSelfRef.update_is_repair_update;
    vlSelfRef.__Vtrigprevexpr___TOP__update_btb_mispredicts__0 
        = vlSelfRef.update_btb_mispredicts;
    vlSelfRef.__Vtrigprevexpr___TOP__update_pc__0 = vlSelfRef.update_pc;
    vlSelfRef.__Vtrigprevexpr___TOP__update_br_mask__0 
        = vlSelfRef.update_br_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_valid__0 
        = vlSelfRef.update_cfi_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_idx__0 
        = vlSelfRef.update_cfi_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_taken__0 
        = vlSelfRef.update_cfi_taken;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_mispredicted__0 
        = vlSelfRef.update_cfi_mispredicted;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_is_br__0 
        = vlSelfRef.update_cfi_is_br;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_is_b_bl__0 
        = vlSelfRef.update_cfi_is_b_bl;
    vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_is_jirl__0 
        = vlSelfRef.update_cfi_is_jirl;
    vlSelfRef.__Vtrigprevexpr___TOP__update_target__0 
        = vlSelfRef.update_target;
    vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[0U] 
        = vlSelfRef.update_meta[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[1U] 
        = vlSelfRef.update_meta[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[2U] 
        = vlSelfRef.update_meta[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[3U] 
        = vlSelfRef.update_meta[3U];
}
