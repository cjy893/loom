// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_sequent__TOP__0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed 
        = (0U != ((IData)(vlSelfRef.mispredict_mask) 
                  & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[8U] 
                      << 2U) | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                >> 0x0000001eU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((~ 
                                                 (0U 
                                                  != 
                                                  ((IData)(vlSelfRef.mispredict_mask) 
                                                   & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                                                       << 2U) 
                                                      | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                                                         >> 0x0000001eU))))) 
                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_valid));
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid 
        = ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
            >> 0x00000011U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (1U 
                                                & (~ 
                                                   (((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U] 
                                                          >> 4U)))
                                                      ? vlSelfRef.agen_addr
                                                      : (IData)(
                                                                ((0x00000020U 
                                                                  == 
                                                                  (0x00000030U 
                                                                   & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelfRef.agen_addr))))) 
                                                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid))));
    vlSelfRef.agen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                            & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid));
    vlSelfRef.dgen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                               & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                                  >> 0x00000012U)));
}
