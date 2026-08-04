// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__wakeup_valid 
        = (((IData)(vlSelfRef.wakeup_valid_1) << 1U) 
           | (IData)(vlSelfRef.wakeup_valid_0));
}

void Vmem_issue_test_top___024root___ico_comb__TOP__1(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__1\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst 
        = (((IData)(vlSelfRef.wakeup_pdst_1) << 6U) 
           | (IData)(vlSelfRef.wakeup_pdst_0));
}

void Vmem_issue_test_top___024root___ico_comb__TOP__2(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__2\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec 
        = (((IData)(vlSelfRef.dis_valid_1) << 1U) | (IData)(vlSelfRef.dis_valid));
}

void Vmem_issue_test_top___024root___ico_comb__TOP__3(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__3\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[0U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[1U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U] 
        = (0xfffffffeU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U] 
        = ((0xfffffff9U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U]) 
           | ((((~ (IData)(vlSelfRef.dis_use_dgen)) 
                & (IData)(vlSelfRef.dis_use_agen)) 
               << 2U) | ((IData)(vlSelfRef.dis_use_dgen) 
                         << 1U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U] 
        = ((7U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U]) 
           | ((IData)(((QData)((IData)((((IData)(vlSelfRef.dis_psrc1_busy) 
                                         << 1U) | (IData)(vlSelfRef.dis_psrc2_busy)))) 
                       << 0x00000031U)) << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
        = (((IData)(((QData)((IData)((((IData)(vlSelfRef.dis_psrc1_busy) 
                                       << 1U) | (IData)(vlSelfRef.dis_psrc2_busy)))) 
                     << 0x00000031U)) >> 0x0000001dU) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.dis_psrc1_busy) 
                                          << 1U) | (IData)(vlSelfRef.dis_psrc2_busy)))) 
                        << 0x00000031U) >> 0x00000020U)) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.dis_rob_idx)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.dis_psrc1) 
                                                        << 6U) 
                                                       | (IData)(vlSelfRef.dis_psrc2))))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[5U] 
        = ((0xffffffc0U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[5U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.dis_rob_idx)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.dis_psrc1) 
                                                            << 6U) 
                                                           | (IData)(vlSelfRef.dis_psrc2))))) 
                      >> 0x00000020U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[5U] 
        = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[5U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[6U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[7U] 
        = (0x80000000U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[7U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[7U] 
        = ((0x7fffffffU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[7U]) 
           | (((~ (IData)(vlSelfRef.resolve_mask)) 
               & (IData)(vlSelfRef.dis_br_mask)) << 0x0000001fU));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U] 
        = ((0xffffffe0U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U]) 
           | (((~ (IData)(vlSelfRef.resolve_mask)) 
               & (IData)(vlSelfRef.dis_br_mask)) >> 1U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U] 
        = ((0x0000001fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U]) 
           | (((IData)(vlSelfRef.dis_use_dgen) << 0x00000015U) 
              | ((IData)(vlSelfRef.dis_use_agen) << 0x00000014U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[9U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[10U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[11U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[12U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[13U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[14U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U] 
        = (0xfffffff0U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U] 
        = ((0xffffffcfU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U]) 
           | ((((~ (IData)(vlSelfRef.dis_use_dgen_1)) 
                & (IData)(vlSelfRef.dis_use_agen_1)) 
               << 5U) | ((IData)(vlSelfRef.dis_use_dgen_1) 
                         << 4U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U] 
        = ((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.dis_psrc1_busy_1)) 
                        << 0x00000032U) | ((QData)((IData)(vlSelfRef.dis_psrc2_busy_1)) 
                                           << 0x00000031U))) 
              << 6U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[16U] 
        = (((IData)((((QData)((IData)(vlSelfRef.dis_psrc1_busy_1)) 
                      << 0x00000032U) | ((QData)((IData)(vlSelfRef.dis_psrc2_busy_1)) 
                                         << 0x00000031U))) 
            >> 0x0000001aU) | ((IData)(((((QData)((IData)(vlSelfRef.dis_psrc1_busy_1)) 
                                          << 0x00000032U) 
                                         | ((QData)((IData)(vlSelfRef.dis_psrc2_busy_1)) 
                                            << 0x00000031U)) 
                                        >> 0x00000020U)) 
                               << 6U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U] 
        = ((0xfffffff8U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.dis_psrc1_busy_1)) 
                         << 0x00000032U) | ((QData)((IData)(vlSelfRef.dis_psrc2_busy_1)) 
                                            << 0x00000031U)) 
                       >> 0x00000020U)) >> 0x0000001aU));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U] 
        = ((7U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.dis_rob_idx_1)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.dis_psrc1_1) 
                                                            << 6U) 
                                                           | (IData)(vlSelfRef.dis_psrc2_1)))))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U] 
        = ((0xfffffe00U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.dis_rob_idx_1)) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.dis_psrc1_1) 
                                                             << 6U) 
                                                            | (IData)(vlSelfRef.dis_psrc2_1)))))) 
               >> 0x0000001dU) | ((IData)(((((QData)((IData)(vlSelfRef.dis_rob_idx_1)) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.dis_psrc1_1) 
                                                                << 6U) 
                                                               | (IData)(vlSelfRef.dis_psrc2_1))))) 
                                           >> 0x00000020U)) 
                                  << 3U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U] 
        = (0x000001ffU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[19U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[20U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U] 
        = (0xfffffffcU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U] 
        = ((0xff800003U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U]) 
           | (((~ (IData)(vlSelfRef.resolve_mask)) 
               & (IData)(vlSelfRef.dis_br_mask_1)) 
              << 2U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U] 
        = ((0x007fffffU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U]) 
           | (((IData)(vlSelfRef.dis_use_dgen_1) << 0x00000018U) 
              | ((IData)(vlSelfRef.dis_use_agen_1) 
                 << 0x00000017U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[22U] 
        = ((IData)(vlSelfRef.dis_use_agen_1) >> 9U);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[23U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[24U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[25U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[26U] = 0U;
}
