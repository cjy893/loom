// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__2(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__2\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    if (vlSelfRef.rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.flush_pipeline)))) {
            if (((IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid) 
                 & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed)))) {
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_imm 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm;
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[0U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[0U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[1U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[1U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[2U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[3U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[3U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[4U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[4U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[5U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[5U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[6U] 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[6U];
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                    = ((0xe0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U]) 
                       | ((0x1e000000U & (((~ (IData)(vlSelfRef.resolve_mask)) 
                                           & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                               << 7U) 
                                              | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                 >> 0x00000019U))) 
                                          << 0x00000019U)) 
                          | (0x01ffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U])));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                    = ((0x1fffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U]) 
                       | (0xe0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                    = ((0x1fffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[8U]) 
                       | (0xe0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[8U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[9U] 
                    = ((0x1fffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[9U]) 
                       | (0xe0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[9U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[10U] 
                    = ((0x1fffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[10U]) 
                       | (0xe0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[10U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[11U] 
                    = ((0x1fffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[11U]) 
                       | (0xe0000000U & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[11U]));
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[12U] 
                    = (0x07ffffffU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[12U]);
            }
            if (((IData)(vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec) 
                 & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed)))) {
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_src2 
                    = vlSelfRef.src2_data;
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_src1 
                    = vlSelfRef.src1_data;
            }
        }
    }
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000033U)) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[__Vilp1] 
            = vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.dgen_data = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_src2;
}
