// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__12(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__12\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write 
        = ((~ (0U != (0x0000000fU & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[9U] 
                                     >> 1U)))) & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update_valid) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr 
        = (0x0000000fU & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit)
                           ? vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data
                          [vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx]
                           : vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = (((IData)(vlSelfRef.f1_is_br)
                                                   ? (IData)(vlSelfRef.f1_taken)
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)) 
                                                 & (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_cfi_valid));
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 0U;
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0U;
    if ((1U & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 1U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 2U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 2U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 3U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 3U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 4U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 4U;
    }
}
