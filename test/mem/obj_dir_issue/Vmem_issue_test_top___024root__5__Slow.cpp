// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__4(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___stl_sequent__TOP__4\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
               & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
               & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 2U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
         & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
            >> 3U))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 3U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
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
    vlSelfRef.iss_valid = vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec;
    vlSelfRef.dis_ready = vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec;
    vlSelfRef.iss_rob_idx = (0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
                                             << 3U) 
                                            | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
                                               >> 0x0000001dU)));
    vlSelfRef.iss_use_agen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x0000000cU));
    vlSelfRef.iss_use_dgen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x0000000dU));
}
