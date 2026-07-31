// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__8(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__8\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed 
        = ((IData)(vlSelfRef.br_mispredict) & (0U != 
                                               ((IData)(vlSelfRef.mispredict_mask) 
                                                & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                    << 4U) 
                                                   | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                      >> 0x0000001cU)))));
    vlSelfRef.iss_valid = vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec;
    vlSelfRef.dis_ready = vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec;
    vlSelfRef.iss_rob_idx = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U]);
    vlSelfRef.iss_use_agen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x0000000fU));
    vlSelfRef.iss_use_dgen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x00000010U));
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed 
        = ((IData)(vlSelfRef.br_mispredict) & (0U != 
                                               ((IData)(vlSelfRef.mispredict_mask) 
                                                & ((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                                    << 4U) 
                                                   | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                                      >> 0x0000001cU)))));
    vlSelfRef.agen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                            & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid));
    vlSelfRef.dgen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                               & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                                  >> 0x00000010U)));
}

void Vmem_issue_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}
