// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

void Vdecode_test_top___024root___ico_sequent__TOP__1(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___ico_sequent__TOP__1\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = (IData)(
                                                            (0x0000000000000040ULL 
                                                             | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                                                << 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = (IData)(
                                                            ((0x0000000000000040ULL 
                                                              | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                                                 << 0x00000017U)) 
                                                             >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] = 0x80000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
         << 0x0000000cU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] = 
        (0x007fffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                        >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[5U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
          << 1U) | (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[5U] 
                          >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] = 
        (0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
                        >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] = (IData)(
                                                           (0x03fffffffffff000ULL 
                                                            & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U])) 
                                                                << 0x0000002cU) 
                                                               | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U])) 
                                                                  << 0x0000000cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] = 
        (0x34000000U | (IData)(((0x03fffffffffff000ULL 
                                 & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U])) 
                                     << 0x0000002cU) 
                                    | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U])) 
                                       << 0x0000000cU))) 
                                >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] = 0x04000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] = 0x000000c0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U] = 
        (0x000001ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                        >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((0x0007c000U 
                                                  & (vlSelfRef.inst 
                                                     << 4U)) 
                                                 | (0x00003fffU 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[0U] = (IData)(
                                                            (0x00ffffffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                                                 << 0x0000001fU) 
                                                                | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])) 
                                                                   >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U] = 
        (0x0d000000U | (IData)(((0x00ffffffffffffffULL 
                                 & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])) 
                                       >> 1U))) >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U] = 
        (0x01000000U | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                       << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U] = 
        (((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                          << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                     >> 0x0000001eU)) 
         | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                           << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U] = 
        (((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                          << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                     >> 0x0000001eU)) 
         | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                           << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U] = 
        (((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                          << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                     >> 0x0000001eU)) 
         | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                           << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[6U] = 
        (0x0000000fU & ((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] 
                                        << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                                   >> 0x0000001eU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
          << 0x00000014U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] = 0x0000000cU;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] = 0x02000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U] = 0x00000020U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (((QData)((IData)(
                                                                  (0x007fffffU 
                                                                   & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                                       << 0x00000014U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                                                                         >> 0x0000000cU))))) 
                                                  << 0x00000014U) 
                                                 | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)));
}
