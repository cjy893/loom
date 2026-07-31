// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

extern const VlWide<13>/*415:0*/ Vmem_issue_test_top__ConstPool__CONST_hf75f4d44_0;

void Vmem_issue_test_top___024root___ico_comb__TOP__4(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__4\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__brupdate[0U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[1U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[2U] 
        = ((IData)(vlSelfRef.br_mispredict) << 8U);
    vlSelfRef.mem_issue_test_top__DOT__brupdate[3U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[4U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[5U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[6U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[7U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[8U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[9U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[10U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[11U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[12U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[13U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[14U] = 0U;
    vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
        = (((IData)(vlSelfRef.resolve_mask) << 0x0000000bU) 
           | ((IData)(vlSelfRef.mispredict_mask) << 7U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant = 0U;
    vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec = 0U;
    VL_ASSIGN_W(414, vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop, Vmem_issue_test_top__ConstPool__CONST_hf75f4d44_0);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | (0U != (0x0000000fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                                      << 4U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                                                >> 0x0000001cU)) 
                                    & ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                        << 0x00000019U) 
                                       | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                          >> 7U))))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
               & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed))) 
              & (0U == (0x00380000U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]))));
    if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready))) {
        vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[0U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[1U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[2U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[5U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[6U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[9U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[10U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[11U];
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U] 
            = (0x3fffffffU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[12U]);
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((0x0fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                     << 4U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                               >> 0x0000001cU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000015U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000bU)))) 
                  << 0x0000001cU));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant 
            = (1U | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = 1U;
    }
}
