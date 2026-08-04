// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__7(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__7\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = 
            (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                      & (((IData)(vlSelfRef.dis_fire) 
                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)) 
                         >> 1U))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = 
            (0x00000fffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35) 
                             << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = 
            (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                   >> 1U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = 
            (0x00000fffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                    >> 0x00000012U)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((1U 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43))
                                                 ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32
                                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13);
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[0U] 
        = (IData)(((0x00ffffffffffff00ULL & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[1U] 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            << 0x00000018U) | (IData)((((0x00ffffffffffff00ULL 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
                                       >> 0x00000020U)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[2U] 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            >> 8U) | ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[3U] 
        = ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                    >> 0x00000020U)) >> 8U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = (((
                                                   (0U 
                                                    != 
                                                    (0x00ffffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                >> 0x00000020U)))) 
                                                   << 5U) 
                                                  | (((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x00ff0000ffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                      << 4U) 
                                                     | ((IData)(
                                                                (0ULL 
                                                                 != 
                                                                 (0x0000ff00ff00ff00ULL 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                        << 3U))) 
                                                 | (((IData)(
                                                             (0ULL 
                                                              != 
                                                              (0x00f0f0f0f0f0f0f0ULL 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((IData)(
                                                                   ((0ULL 
                                                                     != 
                                                                     (0x00cccccccccccc00ULL 
                                                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                                >> 6U)) 
                                                                           | (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                                >> 2U))))))) 
                                                           << 1U)) 
                                                       | (IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x00aaaaaaaaaaaaaaULL 
                                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
}
