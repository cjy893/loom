// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__3(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___stl_sequent__TOP__3\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                                       << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 9U))))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                         >> 3U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                      >> 3U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U])))) 
              << 3U));
    if ((IData)((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                  >> 3U) & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[39U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[40U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[44U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[45U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[48U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[49U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[50U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[51U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                     << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                           << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                << 0x00000013U) | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant 
            = (8U | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant)) 
                          | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)));
    vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 0U;
    if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 0U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
}
