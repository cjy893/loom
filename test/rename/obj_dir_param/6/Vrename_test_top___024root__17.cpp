// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__18(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__18\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][30U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][30U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][31U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][31U];
    if ((((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en) 
          >> 1U) & (0U != (0x0000001fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg) 
                                          >> 5U))))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][(0x0000001fU 
                                                                                & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg) 
                                                                                >> 5U))] 
            = (0x0000003fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg) 
                              >> 6U));
    }
}

void Vrename_test_top___024root___ico_comb__TOP__19(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__19\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[0U] 
        = (0x00ffffffffffffffULL & ((((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[1U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[0U]))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en)))))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[1U] 
        = (0x00ffffffffffffffULL & ((((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[3U])) 
                                      << 0x00000028U) 
                                     | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[2U])) 
                                         << 8U) | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[1U])) 
                                                   >> 0x00000018U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en) 
                                                             >> 1U)))))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[0U] = 0U;
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U] = 0U;
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[2U] = 0U;
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U] = 0U;
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[4U] = 0U;
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[5U] = 0U;
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U] 
        = ((0x00ffffffU & vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U]) 
           | ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[1U]) 
              << 0x00000018U));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[2U] 
        = (((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[1U]) 
            >> 8U) | ((IData)((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[1U] 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U] 
        = ((0xffff0000U & vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U]) 
           | ((IData)((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[1U] 
                       >> 0x00000020U)) >> 8U));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[0U] 
        = (IData)((0x00ffffffffffffffULL & ((((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U])) 
                                              << 0x00000028U) 
                                             | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                   >> 0x00000018U))) 
                                            | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[0U])));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U] 
        = ((0xff000000U & vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U]) 
           | (IData)(((0x00ffffffffffffffULL & ((((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U])) 
                                                  << 0x00000028U) 
                                                 | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                       >> 0x00000018U))) 
                                                | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[0U])) 
                      >> 0x00000020U)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all 
        = (0x00ffffffffffffffULL & (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[0U]))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask = 0ULL;
    if (((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_en) 
         & (0U != (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg))))) {
        if ((0x37U >= (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg)))) {
            vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask 
                = (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask 
                   | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg)))));
        }
    }
    if ((((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_en) 
          >> 1U) & (0U != (0x0000003fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg) 
                                          >> 6U))))) {
        if ((0x37U >= (0x0000003fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg) 
                                      >> 6U)))) {
            vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask 
                = (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask 
                   | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg) 
                                                      >> 6U)))));
        }
    }
}
