// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___stl_sequent__TOP__0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dgen_data = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_src2;
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed 
        = (0U != ((IData)(vlSelfRef.mispredict_mask) 
                  & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[8U] 
                      << 2U) | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                >> 0x0000001eU))));
    vlSelfRef.mem_issue_test_top__DOT__wakeup_valid 
        = (((IData)(vlSelfRef.wakeup_valid_1) << 1U) 
           | (IData)(vlSelfRef.wakeup_valid_0));
    vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst 
        = (((IData)(vlSelfRef.wakeup_pdst_1) << 6U) 
           | (IData)(vlSelfRef.wakeup_pdst_0));
    vlSelfRef.agen_rob_idx = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[5U]);
    vlSelfRef.agen_addr = (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_src1 
                           + vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_imm);
    vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec 
        = (((IData)(vlSelfRef.dis_valid_1) << 1U) | (IData)(vlSelfRef.dis_valid));
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
        = (((~ (IData)(vlSelfRef.resolve_mask)) & (IData)(vlSelfRef.dis_br_mask)) 
           << 0x0000001eU);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U] 
        = ((0xfffffffcU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U]) 
           | (0x0000003fU & (((~ (IData)(vlSelfRef.resolve_mask)) 
                              & (IData)(vlSelfRef.dis_br_mask)) 
                             >> 2U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U] 
        = ((3U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U]) 
           | (((IData)(vlSelfRef.dis_use_dgen) << 0x00000012U) 
              | ((IData)(vlSelfRef.dis_use_agen) << 0x00000011U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[9U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[10U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[11U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[12U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[13U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[14U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U] 
        = (0xfffffffeU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U] 
        = ((0xfffffff9U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U]) 
           | ((((~ (IData)(vlSelfRef.dis_use_dgen_1)) 
                & (IData)(vlSelfRef.dis_use_agen_1)) 
               << 2U) | ((IData)(vlSelfRef.dis_use_dgen_1) 
                         << 1U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U] 
        = ((7U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U]) 
           | ((IData)(((QData)((IData)((((IData)(vlSelfRef.dis_psrc1_busy_1) 
                                         << 1U) | (IData)(vlSelfRef.dis_psrc2_busy_1)))) 
                       << 0x00000031U)) << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[16U] 
        = (((IData)(((QData)((IData)((((IData)(vlSelfRef.dis_psrc1_busy_1) 
                                       << 1U) | (IData)(vlSelfRef.dis_psrc2_busy_1)))) 
                     << 0x00000031U)) >> 0x0000001dU) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.dis_psrc1_busy_1) 
                                          << 1U) | (IData)(vlSelfRef.dis_psrc2_busy_1)))) 
                        << 0x00000031U) >> 0x00000020U)) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U] 
        = (IData)((((QData)((IData)(vlSelfRef.dis_rob_idx_1)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.dis_psrc1_1) 
                                                        << 6U) 
                                                       | (IData)(vlSelfRef.dis_psrc2_1))))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U] 
        = ((0xffffffc0U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.dis_rob_idx_1)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.dis_psrc1_1) 
                                                            << 6U) 
                                                           | (IData)(vlSelfRef.dis_psrc2_1))))) 
                      >> 0x00000020U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U] 
        = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U]);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[19U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[20U] 
        = (((~ (IData)(vlSelfRef.resolve_mask)) & (IData)(vlSelfRef.dis_br_mask_1)) 
           << 0x0000001eU);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U]) 
           | (0x0000003fU & (((~ (IData)(vlSelfRef.resolve_mask)) 
                              & (IData)(vlSelfRef.dis_br_mask_1)) 
                             >> 2U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U] 
        = ((3U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U]) 
           | (((IData)(vlSelfRef.dis_use_dgen_1) << 0x00000012U) 
              | ((IData)(vlSelfRef.dis_use_agen_1) 
                 << 0x00000011U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[22U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[23U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[24U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[25U] = 0U;
}
