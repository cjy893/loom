// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__1(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__1\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((IData)(vlSelfRef.commit_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.commit_ldst)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_lreg 
        = ((IData)(vlSelfRef.commit_ldst) & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
}

void Vrename_test_top___024root___ico_sequent__TOP__0(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_sequent__TOP__0\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.dis_fire) 
                                                 & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q));
}

void Vrename_test_top___024root___ico_comb__TOP__2(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__2\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.rollback) 
                                                     | (IData)(vlSelfRef.kill))));
}

void Vrename_test_top___024root___ico_comb__TOP__3(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__3\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*31:0*/ __Vtemp_11;
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[0U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[0U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[2U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[2U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[3U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[3U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[4U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[4U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[5U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[5U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[6U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[6U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[8U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[9U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[9U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[10U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[10U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[11U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[11U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[12U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[12U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[13U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[13U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[15U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[15U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[16U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[16U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[17U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[17U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[18U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[18U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[19U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[19U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[20U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[21U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[22U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[22U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[23U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[23U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[24U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[24U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[25U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[25U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[26U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[26U];
    if (vlSelfRef.dis_ready) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next 
            = ((IData)(vlSelfRef.in_valid) & (- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            (0U 
                                                             != (IData)(vlSelfRef.stalls)))))));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[0U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U] 
            = (0xfffffff8U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U]);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U] 
            = ((0xfff00007U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U]) 
               | (((IData)(vlSelfRef.in_ldst_0) << 0x0000000fU) 
                  | (((IData)(vlSelfRef.in_lsrc1_0) 
                      << 9U) | ((IData)(vlSelfRef.in_lsrc2_0) 
                                << 3U))));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U] 
            = (0x000fffffU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U]);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[2U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[3U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[4U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[5U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[6U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
            = (((IData)(vlSelfRef.in_br_mask_0) << 0x0000001fU) 
               | (((IData)(vlSelfRef.in_br_tag_0) << 0x0000001cU) 
                  | ((IData)(vlSelfRef.in_allocate_brtag_0) 
                     << 0x0000001bU)));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
            = ((0xffffff80U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U]) 
               | (0x000fffffU & ((IData)(vlSelfRef.in_br_mask_0) 
                                 >> 1U)));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
            = (0x0000007fU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U]);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[9U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[10U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[11U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[12U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[13U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U] 
            = (0xffffff00U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U]);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U] 
            = ((0xfe0000ffU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U]) 
               | (((IData)(vlSelfRef.in_ldst_1) << 0x00000014U) 
                  | (((IData)(vlSelfRef.in_lsrc1_1) 
                      << 0x0000000eU) | ((IData)(vlSelfRef.in_lsrc2_1) 
                                         << 8U))));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U] 
            = (0x01ffffffU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U]);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[15U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[16U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[17U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[18U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[19U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[20U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
            = ((0xfffff000U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U]) 
               | ((0x01fffff0U & ((IData)(vlSelfRef.in_br_mask_1) 
                                  << 4U)) | ((0x01fffffeU 
                                              & ((IData)(vlSelfRef.in_br_tag_1) 
                                                 << 1U)) 
                                             | (0x01ffffffU 
                                                & (IData)(vlSelfRef.in_allocate_brtag_1)))));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
            = (0x00000fffU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U]);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[22U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[23U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[24U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[25U] = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[26U] = 0U;
    } else {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next 
            = ((IData)(vlSelfRef.out_valid) & (~ (IData)(vlSelfRef.dis_fire)));
    }
    if ((0U != (0x000000ffU & (((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
                                 << 1U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
                                           >> 0x0000001fU)) 
                               & ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                   << 0x00000012U) 
                                  | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                     >> 0x0000000eU)))))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next 
            = (2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next));
    }
    if ((1U & (~ (IData)(vlSelfRef.dis_ready)))) {
        __Vtemp_11 = (0x000000ffU & (((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
                                       << 1U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
                                                 >> 0x0000001fU)) 
                                     & (~ ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                            << 0x0000000aU) 
                                           | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                              >> 0x00000016U)))));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
            = ((0x7fffffffU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U]) 
               | ((((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
                     << 1U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
                               >> 0x0000001fU)) & (~ 
                                                   ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                     << 0x0000000aU) 
                                                    | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                       >> 0x00000016U)))) 
                  << 0x0000001fU));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
            = ((0xffffff80U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U]) 
               | (__Vtemp_11 >> 1U));
    }
    if ((0U != (0x000000ffU & (((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                 << 0x0000001cU) | 
                                (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                 >> 4U)) & ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                               >> 0x0000000eU)))))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next 
            = (1U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next));
    }
    if ((1U & (~ (IData)(vlSelfRef.dis_ready)))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
            = ((0xfffff00fU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U]) 
               | (0x00000ff0U & ((((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                    << 0x0000001cU) 
                                   | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                      >> 4U)) & (~ 
                                                 ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                   << 0x0000000aU) 
                                                  | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                     >> 0x00000016U)))) 
                                 << 4U)));
    }
}
