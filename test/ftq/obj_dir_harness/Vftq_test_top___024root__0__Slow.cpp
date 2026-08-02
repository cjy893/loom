// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

VL_ATTR_COLD void Vftq_test_top___024root___eval_static(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_static\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vftq_test_top___024root___eval_initial__TOP__0(Vftq_test_top___024root* vlSelf);

VL_ATTR_COLD void Vftq_test_top___024root___eval_initial(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_initial\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        Vftq_test_top___024root___eval_initial__TOP__0(vlSelf);
        vlSelfRef.query_ras_idx = 0U;
        vlSelfRef.query_start_bank = 0U;
        vlSelfRef.query_ghist[0U] = 0U;
        vlSelfRef.query_ghist[1U] = 0U;
        vlSelfRef.query_ghist[2U] = 0U;
    }
}

extern const VlWide<8>/*255:0*/ Vftq_test_top__ConstPool__CONST_h7f3586b3_0;

VL_ATTR_COLD void Vftq_test_top___024root___eval_initial__TOP__0(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_initial__TOP__0\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.enq_ready = 1U;
    vlSelfRef.enq_idx = 0U;
    vlSelfRef.bpd_update_valid = 0U;
    vlSelfRef.bpd_update_is_mispredict_update = 0U;
    vlSelfRef.bpd_update_is_repair_update = 0U;
    vlSelfRef.bpd_update_pc = 0U;
    vlSelfRef.bpd_update_br_mask = 0U;
    vlSelfRef.bpd_update_cfi_valid = 0U;
    vlSelfRef.bpd_update_cfi_idx = 0U;
    vlSelfRef.bpd_update_cfi_taken = 0U;
    vlSelfRef.bpd_update_cfi_mispredicted = 0U;
    vlSelfRef.bpd_update_cfi_is_br = 0U;
    vlSelfRef.bpd_update_cfi_is_b_bl = 0U;
    vlSelfRef.bpd_update_cfi_is_jirl = 0U;
    vlSelfRef.bpd_update_target = 0U;
    vlSelfRef.bpd_update_ghist[0U] = 0U;
    vlSelfRef.bpd_update_ghist[1U] = 0U;
    vlSelfRef.bpd_update_ghist[2U] = 0U;
    VL_ASSIGN_W(240, vlSelfRef.bpd_update_meta, Vftq_test_top__ConstPool__CONST_h7f3586b3_0);
    vlSelfRef.ghist_restore_valid = 0U;
    vlSelfRef.ghist_restore[0U] = 0U;
    vlSelfRef.ghist_restore[1U] = 0U;
    vlSelfRef.ghist_restore[2U] = 0U;
    vlSelfRef.ras_repair_valid = 0U;
    vlSelfRef.ras_repair_idx = 0U;
    vlSelfRef.ras_repair_addr = 0U;
    vlSelfRef.query_resp_valid = 0U;
    vlSelfRef.query_pc = 0U;
    vlSelfRef.query_br_mask = 0U;
    vlSelfRef.query_cfi_valid = 0U;
    vlSelfRef.query_cfi_idx = 0U;
    vlSelfRef.query_cfi_type = 0U;
    vlSelfRef.query_cfi_is_call = 0U;
    vlSelfRef.query_cfi_is_ret = 0U;
    vlSelfRef.query_cfi_npc_plus4 = 0U;
    vlSelfRef.query_cfi_taken = 0U;
    vlSelfRef.query_ras_top = 0U;
}
