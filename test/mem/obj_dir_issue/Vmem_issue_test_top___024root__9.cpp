// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__10(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__10\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete)) 
           | ((IData)((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                        >> 3U) & (((0x20000000U != 
                                    (0x24000000U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U])) 
                                   | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen) 
                                      >> 3U)) & ((0x40000000U 
                                                  != 
                                                  (0x42000000U 
                                                   & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U])) 
                                                 | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen) 
                                                    >> 3U))))) 
              << 3U));
    vlSelfRef.iss_valid = vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec;
    vlSelfRef.iss_rob_idx = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U]);
    vlSelfRef.iss_use_agen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x00000014U));
    vlSelfRef.iss_use_dgen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x00000015U));
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed 
        = (0U != (((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                    << 1U) | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                              >> 0x0000001fU)) & (IData)(vlSelfRef.mispredict_mask)));
}

void Vmem_issue_test_top___024root___ico_comb__TOP__11(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__11\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor 
        = (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
            & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete))) 
           & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire 
        = ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire)) 
           | (1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed)))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire 
        = ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire)) 
           | (2U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    & ((~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed) 
                           >> 1U)) << 1U))));
    if ((1U & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor)))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfffeU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((3U != (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfffdU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((5U != (5U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfffbU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((9U != (9U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfff7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
}
