// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__3(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__3\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    // Body
    vlSelfRef.agen_addr = (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_rs1 
                           + vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_imm);
    if (vlSelfRef.rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.flush_pipeline)))) {
            if (((IData)(vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec) 
                 & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed)))) {
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm 
                    = vlSelfRef.imm_data;
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[0U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[1U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[2U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[3U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[4U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[5U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[6U] 
                    = vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                    = ((0xf0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U]) 
                       | ((0x0f000000U & (((~ (IData)(vlSelfRef.resolve_mask)) 
                                           & ((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                               << 8U) 
                                              | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                                 >> 0x00000018U))) 
                                          << 0x00000018U)) 
                          | (0x00ffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U])));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                    = ((0x0fffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U]) 
                       | (0xf0000000U & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[8U] 
                    = ((0x0fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U]) 
                       | (0xf0000000U & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[9U] 
                    = ((0x0fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U]) 
                       | (0xf0000000U & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[10U] 
                    = ((0x0fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U]) 
                       | (0xf0000000U & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[11U] 
                    = ((0x0fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U]) 
                       | (0xf0000000U & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[12U] 
                    = (0x03ffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U]);
            }
        }
    }
    vlSelfRef.agen_rob_idx = (0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[5U] 
                                              << 3U) 
                                             | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[4U] 
                                                >> 0x0000001dU)));
    __VdfgRegularize_h6e95ff9d_0_1 = ((~ ((IData)(vlSelfRef.br_mispredict) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.mispredict_mask) 
                                              & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                                                  << 8U) 
                                                 | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                                                    >> 0x00000018U)))))) 
                                      & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_valid));
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid 
        = ((IData)(vlSelfRef.rst_n) && ((1U & (~ (IData)(vlSelfRef.flush_pipeline))) 
                                        && ((IData)(vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec) 
                                            & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed)))));
    vlSelfRef.dgen_rob_idx = vlSelfRef.agen_rob_idx;
    vlSelfRef.agen_valid = ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                             >> 0x0000000bU) & (IData)(__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.dgen_valid = ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                             >> 0x0000000cU) & (IData)(__VdfgRegularize_h6e95ff9d_0_1));
}
