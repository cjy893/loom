// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__2(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__2\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed 
        = ((IData)(vlSelfRef.br_mispredict) & (0U != 
                                               ((IData)(vlSelfRef.mispredict_mask) 
                                                & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                    << 7U) 
                                                   | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                      >> 0x00000019U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((~ 
                                                 ((IData)(vlSelfRef.br_mispredict) 
                                                  & (0U 
                                                     != 
                                                     ((IData)(vlSelfRef.mispredict_mask) 
                                                      & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                                                          << 7U) 
                                                         | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                                                            >> 0x00000019U)))))) 
                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_valid));
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid 
        = ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & (~ 
                                                   (((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U] 
                                                          >> 1U)))
                                                      ? vlSelfRef.agen_addr
                                                      : (IData)(
                                                                ((4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelfRef.agen_addr))))) 
                                                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid))));
    vlSelfRef.agen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                            & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid));
    vlSelfRef.dgen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                               & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                                  >> 0x0000000dU)));
}
