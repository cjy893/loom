// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___ico_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ico_sequent__TOP__0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__invalidate_set 
        = ((0x000003e0U & (((IData)(4U) + vlSelfRef.update_pc) 
                           << 3U)) | (0x0000001fU & 
                                      (vlSelfRef.update_pc 
                                       >> 2U)));
}

void Vbpd_full_test_top___024root___ico_comb__TOP__0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ico_comb__TOP__0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__update_packed[0U] 
        = vlSelfRef.update_meta[0U];
    vlSelfRef.bpd_full_test_top__DOT__update_packed[1U] 
        = vlSelfRef.update_meta[1U];
    vlSelfRef.bpd_full_test_top__DOT__update_packed[2U] 
        = vlSelfRef.update_meta[2U];
    vlSelfRef.bpd_full_test_top__DOT__update_packed[3U] 
        = ((vlSelfRef.update_target << 0x00000018U) 
           | vlSelfRef.update_meta[3U]);
    vlSelfRef.bpd_full_test_top__DOT__update_packed[4U] 
        = (vlSelfRef.update_target >> 8U);
    vlSelfRef.bpd_full_test_top__DOT__update_packed[5U] = 0U;
    vlSelfRef.bpd_full_test_top__DOT__update_packed[6U] = 0U;
    vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
        = ((0xf0000000U & vlSelfRef.bpd_full_test_top__DOT__update_packed[7U]) 
           | (((((IData)(vlSelfRef.update_cfi_mispredicted) 
                 << 3U) | ((IData)(vlSelfRef.update_cfi_is_br) 
                           << 2U)) | (((IData)(vlSelfRef.update_cfi_is_b_bl) 
                                       << 1U) | (IData)(vlSelfRef.update_cfi_is_jirl))) 
              << 0x00000018U));
    vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
        = ((0x0fffffffU & vlSelfRef.bpd_full_test_top__DOT__update_packed[7U]) 
           | (((IData)(vlSelfRef.update_br_mask) << 0x0000001fU) 
              | (((IData)(vlSelfRef.update_cfi_valid) 
                  << 0x0000001eU) | (((IData)(vlSelfRef.update_cfi_idx) 
                                      << 0x0000001dU) 
                                     | ((IData)(vlSelfRef.update_cfi_taken) 
                                        << 0x0000001cU)))));
    vlSelfRef.bpd_full_test_top__DOT__update_packed[8U] 
        = ((0xfffffffeU & vlSelfRef.bpd_full_test_top__DOT__update_packed[8U]) 
           | ((0x0fffffffU & ((IData)(vlSelfRef.update_br_mask) 
                              >> 1U)) | ((IData)(vlSelfRef.update_cfi_taken) 
                                         >> 4U)));
    vlSelfRef.bpd_full_test_top__DOT__update_packed[8U] 
        = ((1U & vlSelfRef.bpd_full_test_top__DOT__update_packed[8U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.update_is_mispredict_update)) 
                        << 0x00000023U) | (((QData)((IData)(vlSelfRef.update_is_repair_update)) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(vlSelfRef.update_btb_mispredicts)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.update_pc)))))) 
              << 1U));
    vlSelfRef.bpd_full_test_top__DOT__update_packed[9U] 
        = (0x0000001fU & (((IData)((((QData)((IData)(vlSelfRef.update_is_mispredict_update)) 
                                     << 0x00000023U) 
                                    | (((QData)((IData)(vlSelfRef.update_is_repair_update)) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(vlSelfRef.update_btb_mispredicts)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.update_pc)))))) 
                           >> 0x0000001fU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.update_is_mispredict_update)) 
                                                         << 0x00000023U) 
                                                        | (((QData)((IData)(vlSelfRef.update_is_repair_update)) 
                                                            << 0x00000022U) 
                                                           | (((QData)((IData)(vlSelfRef.update_btb_mispredicts)) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(vlSelfRef.update_pc))))) 
                                                       >> 0x00000020U)) 
                                              << 1U)));
}
