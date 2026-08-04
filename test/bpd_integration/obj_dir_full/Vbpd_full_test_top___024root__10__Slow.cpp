// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__9(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__9\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec) 
                >> 0x0aU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = 0x0aU;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec) 
                >> 0x0bU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = 0x0bU;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec) 
                >> 0x0cU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = 0x0cU;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec) 
                >> 0x0dU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = 0x0dU;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec) 
                >> 0x0eU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = 0x0eU;
    }
    if ((IData)((((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec) 
                  >> 0x0000000fU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = 0x0fU;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                                  >> 0x0000001fU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.update_valid) 
                                                & ((IData)(vlSelfRef.update_cfi_valid) 
                                                   & ((~ 
                                                       (0U 
                                                        != 
                                                        (0x0000000fU 
                                                         & (vlSelfRef.bpd_full_test_top__DOT__update_packed[9U] 
                                                            >> 1U)))) 
                                                      & ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                                              >> 0x00000018U))) 
                                                         | ((IData)(vlSelfRef.update_cfi_taken) 
                                                            & (IData)(vlSelfRef.update_cfi_is_br))))));
}
