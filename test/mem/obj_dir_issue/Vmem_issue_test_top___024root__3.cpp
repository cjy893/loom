// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__2(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__2\n"); );
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
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[7U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U] 
        = (((IData)(vlSelfRef.dis_use_dgen) << 0x00000012U) 
           | ((IData)(vlSelfRef.dis_use_agen) << 0x00000011U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[9U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[10U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[11U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[12U] = 0U;
}
