// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlWide<26>/*831:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h1cfef7ee_0;

VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__2(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___stl_sequent__TOP__2\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<26>/*827:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops;
    VL_ZERO_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops);
    VlWide<26>/*827:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop;
    VL_ZERO_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop);
    VlWide<26>/*827:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop;
    VL_ZERO_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop);
    VlWide<26>/*827:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop;
    VL_ZERO_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop);
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_379;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_379);
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_541;
    __VdfgRegularize_h6e95ff9d_0_541 = 0;
    VlWide<13>/*415:0*/ __Vtemp_35;
    VlWide<13>/*415:0*/ __Vtemp_37;
    VlWide<13>/*415:0*/ __Vtemp_39;
    VlWide<13>/*415:0*/ __Vtemp_41;
    VlWide<13>/*415:0*/ __Vtemp_43;
    VlWide<13>/*415:0*/ __Vtemp_45;
    // Body
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[0U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[1U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[2U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[5U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[6U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[7U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[8U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[9U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[10U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[11U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[12U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[13U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[14U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[15U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[18U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[19U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[20U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[21U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[22U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[23U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[24U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[25U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U] 
        = (0xdfffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U]);
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U] 
            = ((0xffffffc0U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U]) 
               | (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w) 
                                 + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U] 
            = ((0xdfffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U]) 
               | (0x20000000U & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U] 
                                     >> 0x0000000bU)) 
                                 << 0x0000001dU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset);
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
        = (0xf7ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U]);
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
            = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U]) 
               | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w) 
                   + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset) 
                  << 0x0000001eU));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
            = ((0xfffffff0U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U]) 
               | (0x0000000fU & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w) 
                                  + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset) 
                                 >> 2U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
            = ((0xf7ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U]) 
               | (0x08000000U & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
                                     >> 9U)) << 0x0000001bU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset);
    }
    __VdfgRegularize_h6e95ff9d_0_379[0U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                             << 2U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                               >> 0x0000001eU));
    __VdfgRegularize_h6e95ff9d_0_379[1U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                             << 2U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                               >> 0x0000001eU));
    __VdfgRegularize_h6e95ff9d_0_379[2U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                             << 2U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                               >> 0x0000001eU));
    __VdfgRegularize_h6e95ff9d_0_379[3U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                             << 2U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                               >> 0x0000001eU));
    __VdfgRegularize_h6e95ff9d_0_379[4U] = (0x3fffffffU 
                                            & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                                << 2U) 
                                               | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                                  >> 0x0000001eU)));
    __VdfgRegularize_h6e95ff9d_0_541 = (0x0000000fU 
                                        & ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                << 0x00000015U) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                  >> 0x0000000bU))) 
                                           & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                               << 6U) 
                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                 >> 0x0000001aU))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed 
        = ((0x01fffffeU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[2U] 
                            >> 7U) & ((0U != (0x0000000fU 
                                              & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 7U)) 
                                                 & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                     << 6U) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                       >> 0x0000001aU))))) 
                                      << 1U))) | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[2U] 
                                                   >> 8U) 
                                                  & (0U 
                                                     != 
                                                     (0x0000000fU 
                                                      & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                             >> 7U)) 
                                                         & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                                             << 4U) 
                                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                                               >> 0x0000001cU)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U] 
        = ((0xfff00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U]) 
           | (0x000fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U] 
        = ((0x000fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U]) 
           | (((0x00000fc0U & (((4U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U])
                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_544)
                                 : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                     << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                               >> 0x0000001aU))) 
                               << 6U)) | (0x0000003fU 
                                          & ((2U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U])
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_543)
                                              : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                                  << 0x0000000cU) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                                    >> 0x00000014U))))) 
              << 0x00000014U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
        = ((0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (0x0003ffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
        = ((0xc003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (((0x00000fc0U & (((1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U])
                                 ? ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid))
                                     ? ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                        >> 6U) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_544) 
                                                  >> 6U))
                                 : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                     << 8U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                               >> 0x00000018U))) 
                               << 6U)) | (0x0000003fU 
                                          & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                              >> 0x0000001fU)
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid))
                                                  ? 
                                                 ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_543) 
                                                  >> 6U))
                                              : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                  << 0x0000000eU) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                    >> 0x00000012U))))) 
              << 0x00000012U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
        = (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[4U] 
        = ((0xfc000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U]) 
           | ((0x03f00000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                              << 0x00000014U)) | (0x000fffffU 
                                                  & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[5U] 
        = ((0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U]) 
           | (0xfc000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[6U] 
        = ((0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[6U]) 
           | (0xfc000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[6U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U]) 
           | ((0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U]) 
              | (0x0c000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U] 
        = ((0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U]) 
           | (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                    << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       >> 0x0000000bU))) 
               & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                   << 4U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                             >> 0x0000001cU))) << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[8U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[9U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[10U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[11U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[12U] 
        = (0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[14U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[15U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[16U] 
        = (0x00000400U | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                           << 0x0000000dU) | (0x00001800U 
                                              & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                 >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[17U] 
        = ((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                                << 0x0000000dU) 
                                               | (0x00001800U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[18U] 
        = ((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                                << 0x0000000dU) 
                                               | (0x00001800U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[19U] 
        = ((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                                << 0x0000000dU) 
                                               | (0x00001800U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[20U] 
        = ((0x80000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[20U]) 
           | ((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                              >> 0x00000013U)) | (0x7ffff800U 
                                                  & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                      << 0x0000000dU) 
                                                     | (0x00001800U 
                                                        & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                                           >> 0x00000013U))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[20U] 
        = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[20U]) 
           | ((((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                 << 0x0000000eU) | (0x00003fc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                   >> 0x00000012U))) 
               | (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                                 >> 6U))) << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U] 
        = (((((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
               << 0x0000000eU) | (0x00003fc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                 >> 0x00000012U))) 
             | (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                               >> 6U))) >> 1U) | ((
                                                   (0x0000003fU 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                       >> 0x00000012U)) 
                                                   | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                       << 0x0000000eU) 
                                                      | (0x00003fc0U 
                                                         & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                            >> 0x00000012U)))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[22U] 
        = ((((0x0000003fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                             >> 0x00000012U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                  << 0x0000000eU) 
                                                 | (0x00003fc0U 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                       >> 0x00000012U)))) 
            >> 1U) | (((0x0000003fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                       >> 0x00000012U)) 
                       | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                           << 0x0000000eU) | (0x00003fc0U 
                                              & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                 >> 0x00000012U)))) 
                      << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[23U] 
        = ((((0x0000003fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                             >> 0x00000012U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                  << 0x0000000eU) 
                                                 | (0x00003fc0U 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                       >> 0x00000012U)))) 
            >> 1U) | (((0x0000003fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                       >> 0x00000012U)) 
                       | (0x000000c0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                         >> 0x00000012U))) 
                      << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[24U] 
        = ((0xfffff800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[24U]) 
           | ((0x7fffff80U & ((IData)(__VdfgRegularize_h6e95ff9d_0_541) 
                              << 7U)) | (((0x0000003fU 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                              >> 0x00000012U)) 
                                          | (0x000000c0U 
                                             & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                >> 0x00000012U))) 
                                         >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[24U] 
        = ((0x000007ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[24U]) 
           | (__VdfgRegularize_h6e95ff9d_0_379[0U] 
              << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[25U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[0U] >> 0x00000015U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[1U] 
              << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[26U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[1U] >> 0x00000015U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[2U] 
              << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[27U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[2U] >> 0x00000015U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[3U] 
              << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[28U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[3U] >> 0x00000015U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[4U] 
              << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U] 
        = (__VdfgRegularize_h6e95ff9d_0_379[4U] >> 0x00000015U);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[30U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[31U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[32U] = 0x00200000U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write 
        = ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write)) 
           | (1U & (((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_fire) 
                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid)) 
                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_ready)) 
                     & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed))) 
                    & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)))));
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor 
            = (0x0000000fU & ((IData)(1U) + (0x0000000fU 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_slot))));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write 
        = ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write)) 
           | (2U & (((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_fire) 
                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid)) 
                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_ready)) 
                       >> 1U) & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed) 
                                    >> 1U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                    << 1U)));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor 
            = (0x0000000fU & ((IData)(1U) + (0x0000000fU 
                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_slot) 
                                                >> 4U))));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint_next 
        = (0x0000000fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write 
        = ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write)) 
           | (1U & (((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_fire) 
                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid)) 
                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_ready)) 
                     & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed))) 
                    & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)))));
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor 
            = (0x0000000fU & ((IData)(1U) + (0x0000000fU 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_slot))));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write 
        = ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write)) 
           | (2U & (((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_fire) 
                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid)) 
                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_ready)) 
                       >> 1U) & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed) 
                                    >> 1U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                    << 1U)));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor 
            = (0x0000000fU & ((IData)(1U) + (0x0000000fU 
                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_slot) 
                                                >> 4U))));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint_next 
        = (0x0000000fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid = 0U;
    VL_ASSIGN_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h1cfef7ee_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid = 0U;
    VL_ASSIGN_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h1cfef7ee_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0U;
    if ((1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))))) {
        if ((1U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid 
                = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                   | (3U & ((IData)(1U) << (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot))));
            if ((0x033bU >= (0x000003ffU & ((IData)(0x0000019eU) 
                                            * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)))) {
                __Vtemp_35[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_35[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_35[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_35[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_35[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_35[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_35[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_35[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_35[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_35[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_35[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_35[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_35[12U] = (0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U]);
                VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                           & ((IData)(0x0000019eU) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_35);
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot 
                = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot);
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = 0U;
        VL_ASSIGN_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h1cfef7ee_0);
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0U;
        if ((1U != (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
            if ((4U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid 
                    = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot))));
                if ((0x033bU >= (0x000003ffU & ((IData)(0x0000019eU) 
                                                * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)))) {
                    __Vtemp_39[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                    __Vtemp_39[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                    __Vtemp_39[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                    __Vtemp_39[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                    __Vtemp_39[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                    __Vtemp_39[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                    __Vtemp_39[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                    __Vtemp_39[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                    __Vtemp_39[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                    __Vtemp_39[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                    __Vtemp_39[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                    __Vtemp_39[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                    __Vtemp_39[12U] = (0x3fffffffU 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U]);
                    VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                               & ((IData)(0x0000019eU) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_39);
                }
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot 
                    = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot);
            }
            if ((4U != (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
                if ((2U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid 
                        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                           | (3U & ((IData)(1U) << 
                                    (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot))));
                    if ((0x033bU >= (0x000003ffU & 
                                     ((IData)(0x0000019eU) 
                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)))) {
                        __Vtemp_43[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                        __Vtemp_43[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                        __Vtemp_43[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                        __Vtemp_43[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                        __Vtemp_43[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                        __Vtemp_43[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                        __Vtemp_43[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                        __Vtemp_43[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                        __Vtemp_43[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                        __Vtemp_43[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                        __Vtemp_43[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                        __Vtemp_43[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                        __Vtemp_43[12U] = (0x3fffffffU 
                                           & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U]);
                        VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_43);
                    }
                    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot 
                        = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot);
                }
            }
        }
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = 0U;
        VL_ASSIGN_W(828, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h1cfef7ee_0);
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
                  >> 1U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q) 
                               >> 1U))))) {
        if ((1U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                   >> 4U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid 
                = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                   | (3U & ((IData)(1U) << (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot))));
            if ((0x033bU >= (0x000003ffU & ((IData)(0x0000019eU) 
                                            * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)))) {
                __Vtemp_37[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
                                             >> 0x0000001eU));
                __Vtemp_37[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                             >> 0x0000001eU));
                __Vtemp_37[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                             >> 0x0000001eU));
                __Vtemp_37[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                             >> 0x0000001eU));
                __Vtemp_37[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                             >> 0x0000001eU));
                __Vtemp_37[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                             >> 0x0000001eU));
                __Vtemp_37[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                             >> 0x0000001eU));
                __Vtemp_37[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                             >> 0x0000001eU));
                __Vtemp_37[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                             >> 0x0000001eU));
                __Vtemp_37[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                             >> 0x0000001eU));
                __Vtemp_37[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                              >> 0x0000001eU));
                __Vtemp_37[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                              >> 0x0000001eU));
                __Vtemp_37[12U] = (0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                                   << 2U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                                     >> 0x0000001eU)));
                VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                           & ((IData)(0x0000019eU) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_37);
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot 
                = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot);
        }
        if ((1U != (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                   >> 4U)))) {
            if ((4U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                       >> 4U)))) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid 
                    = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot))));
                if ((0x033bU >= (0x000003ffU & ((IData)(0x0000019eU) 
                                                * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)))) {
                    __Vtemp_41[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                                 >> 0x0000001eU));
                    __Vtemp_41[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                                  >> 0x0000001eU));
                    __Vtemp_41[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                                  >> 0x0000001eU));
                    __Vtemp_41[12U] = (0x3fffffffU 
                                       & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                           >> 0x0000001eU)));
                    VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                               & ((IData)(0x0000019eU) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_41);
                }
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot 
                    = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot);
            }
            if ((4U != (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                       >> 4U)))) {
                if ((2U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                           >> 4U)))) {
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid 
                        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                           | (3U & ((IData)(1U) << 
                                    (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot))));
                    if ((0x033bU >= (0x000003ffU & 
                                     ((IData)(0x0000019eU) 
                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)))) {
                        __Vtemp_45[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                           << 2U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                           >> 0x0000001eU));
                        __Vtemp_45[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                              >> 0x0000001eU));
                        __Vtemp_45[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                              >> 0x0000001eU));
                        __Vtemp_45[12U] = (0x3fffffffU 
                                           & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                               << 2U) 
                                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                                 >> 0x0000001eU)));
                        VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_45);
                    }
                    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot 
                        = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot);
                }
            }
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[4U] 
        = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
            << 0x0000001aU) | (0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[8U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[9U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[10U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[11U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[12U] 
        = ((0xc0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[12U]) 
           | (0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[12U] 
        = (0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[12U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[13U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[14U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[15U] 
        = (0x00000100U | (((0x3ffff800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                           << 0x0000000bU)) 
                           | (0x00000600U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                             >> 0x00000015U))) 
                          | (((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                              >> 0x00000013U)) 
                              | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                  << 0x0000000dU) | 
                                 (0x00001800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                                 >> 0x00000013U)))) 
                             << 0x0000001eU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[16U] 
        = ((((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                             >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                                  << 0x0000000dU) 
                                                 | (0x00001800U 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                                       >> 0x00000013U)))) 
            >> 2U) | (((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                       >> 0x00000013U)) 
                       | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                           << 0x0000000dU) | (0x00001800U 
                                              & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                                 >> 0x00000013U)))) 
                      << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[17U] 
        = ((((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                             >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                                  << 0x0000000dU) 
                                                 | (0x00001800U 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                                       >> 0x00000013U)))) 
            >> 2U) | (((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                       >> 0x00000013U)) 
                       | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                           << 0x0000000dU) | (0x00001800U 
                                              & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                                 >> 0x00000013U)))) 
                      << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[18U] 
        = ((((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                             >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                                  << 0x0000000dU) 
                                                 | (0x00001800U 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                                       >> 0x00000013U)))) 
            >> 2U) | (((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                       >> 0x00000013U)) 
                       | (((0xfc000000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                           << 0x00000014U)) 
                           | (0x03ffffffU & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                              << 2U) 
                                             | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                                >> 0x0000001eU)))) 
                          << 0x0000000bU)) << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[19U] 
        = ((((0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                             >> 0x00000013U)) | (((0xfc000000U 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                                      << 0x00000014U)) 
                                                  | (0x03ffffffU 
                                                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                         << 2U) 
                                                        | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                                           >> 0x0000001eU)))) 
                                                 << 0x0000000bU)) 
            >> 2U) | (0xc0000000U & (((0xfc000000U 
                                       & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                          << 0x00000014U)) 
                                      | (0x03ffffffU 
                                         & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                             << 2U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                               >> 0x0000001eU)))) 
                                     << 9U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U] 
        = ((0xfffffe00U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U]) 
           | (((0xfc000000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                               << 0x00000014U)) | (0x03ffffffU 
                                                   & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                       << 2U) 
                                                      | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                                         >> 0x0000001eU)))) 
              >> 0x00000017U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U] 
        = ((0x000001ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U]) 
           | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
               << 0x0000000bU) | (0x00000600U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                 >> 0x00000015U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[21U] 
        = ((0x000001ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                           >> 0x00000015U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                << 0x0000000bU) 
                                               | (0x00000600U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                     >> 0x00000015U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[22U] 
        = ((0x000001ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                           >> 0x00000015U)) | (0xfffffe00U 
                                               & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                   << 0x0000000bU) 
                                                  | (0x00000600U 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                        >> 0x00000015U)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[23U] 
        = (((0x000001e0U & ((IData)(__VdfgRegularize_h6e95ff9d_0_541) 
                            << 5U)) | (0x0000001fU 
                                       & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                          >> 0x00000015U))) 
           | (__VdfgRegularize_h6e95ff9d_0_379[0U] 
              << 9U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[24U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[0U] >> 0x00000017U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[1U] 
              << 9U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[25U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[1U] >> 0x00000017U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[2U] 
              << 9U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[26U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[2U] >> 0x00000017U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[3U] 
              << 9U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[27U] 
        = ((__VdfgRegularize_h6e95ff9d_0_379[3U] >> 0x00000017U) 
           | (__VdfgRegularize_h6e95ff9d_0_379[4U] 
              << 9U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = ((0xffffff80U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]) 
           | (__VdfgRegularize_h6e95ff9d_0_379[4U] 
              >> 0x00000017U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = (0x0000007fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[29U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[30U] = 0x00020000U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[4U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[5U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[6U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[7U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[7U]) 
           | (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[7U] 
        = ((0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[7U]) 
           | (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                    << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       >> 0x0000000bU))) 
               & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                   << 4U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                             >> 0x0000001cU))) << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[9U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[10U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[11U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[12U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[13U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[14U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[15U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[16U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[17U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[18U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[19U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U] 
        = ((0xfc000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U]) 
           | (0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U] 
        = ((0xc3ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U]) 
           | (0x3c000000U & (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                     >> 0x0000000bU))) 
                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                  << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                            >> 0x0000001aU))) 
                             << 0x0000001aU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[22U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[22U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[23U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[23U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[24U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[24U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[25U] 
        = (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[25U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                           & ((0U != (0x0000000fU & 
                                      (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 7U)) 
                                       & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                           << 6U) | 
                                          (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                           >> 0x0000001aU))))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                                          & (0U != 
                                             (0x0000000fU 
                                              & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 7U)) 
                                                 & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                                                     << 4U) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                                                       >> 0x0000001cU)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[4U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[5U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[6U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[7U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[7U]) 
           | (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[7U] 
        = ((0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[7U]) 
           | (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                    << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       >> 0x0000000bU))) 
               & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                   << 4U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                             >> 0x0000001cU))) << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[9U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[10U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[11U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[12U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[13U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[14U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[15U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[16U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[17U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[18U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[19U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U] 
        = ((0xfc000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U]) 
           | (0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U] 
        = ((0xc3ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U]) 
           | (0x3c000000U & (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                     >> 0x0000000bU))) 
                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                  << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                            >> 0x0000001aU))) 
                             << 0x0000001aU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[22U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[22U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[23U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[23U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[24U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[24U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[25U] 
        = (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[25U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                           & ((0U != (0x0000000fU & 
                                      (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 7U)) 
                                       & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                           << 6U) | 
                                          (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                           >> 0x0000001aU))))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                                          & (0U != 
                                             (0x0000000fU 
                                              & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 7U)) 
                                                 & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                                                     << 4U) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                                                       >> 0x0000001cU)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[4U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[5U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[6U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[7U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[7U]) 
           | (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[7U] 
        = ((0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[7U]) 
           | (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                    << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       >> 0x0000000bU))) 
               & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                   << 4U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                             >> 0x0000001cU))) << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[9U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[10U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[11U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[12U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[13U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[14U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[15U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[16U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[17U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[18U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[19U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U] 
        = ((0xfc000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U]) 
           | (0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U] 
        = ((0xc3ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U]) 
           | (0x3c000000U & (((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                     >> 0x0000000bU))) 
                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                  << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                            >> 0x0000001aU))) 
                             << 0x0000001aU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[22U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[22U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[23U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[23U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[24U] 
        = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[24U]) 
           | (0xc0000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[25U] 
        = (0x0fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[25U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                           & ((0U != (0x0000000fU & 
                                      (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 7U)) 
                                       & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                           << 6U) | 
                                          (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                           >> 0x0000001aU))))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                                          & (0U != 
                                             (0x0000000fU 
                                              & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 7U)) 
                                                 & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                                                     << 4U) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                                                       >> 0x0000001cU)))))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore_top_contract_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__0(Vcore_top_contract_test_top___024root* vlSelf);
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__1(Vcore_top_contract_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vcore_top_contract_test_top___024root___eval_phase__stl(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__stl\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore_top_contract_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcore_top_contract_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vcore_top_contract_test_top___024root___stl_sequent__TOP__0(vlSelf);
                Vcore_top_contract_test_top___024root___stl_sequent__TOP__1(vlSelf);
                Vcore_top_contract_test_top___024root___stl_sequent__TOP__2(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vcore_top_contract_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcore_top_contract_test_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( imem_req_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( imem_resp_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( imem_resp_insts)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( dmem_req_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( dmem_resp_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( dmem_resp_is_store)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( dmem_resp_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( dmem_resp_idx)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( hw_irq)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( ipi_irq)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcore_top_contract_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcore_top_contract_test_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore_top_contract_test_top___024root___ctor_var_reset(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ctor_var_reset\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->imem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16078812764813148173ull);
    vlSelf->imem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295164739498033148ull);
    vlSelf->imem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14008838257255596747ull);
    vlSelf->imem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7387687715032006181ull);
    vlSelf->imem_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9314145971151784139ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->imem_resp_insts, __VscopeHash, 11201529057722218681ull);
    vlSelf->dmem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11163449224025498003ull);
    vlSelf->dmem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10088607018490729786ull);
    vlSelf->dmem_req_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 26205096547695164ull);
    vlSelf->dmem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 642292657722991981ull);
    vlSelf->dmem_req_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7591348588679148855ull);
    vlSelf->dmem_req_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7075930637259986089ull);
    vlSelf->dmem_req_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1750966613358248268ull);
    vlSelf->dmem_req_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 854278469646108965ull);
    vlSelf->dmem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5774640918001958128ull);
    vlSelf->dmem_resp_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6620712772984753936ull);
    vlSelf->dmem_resp_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11518110768268596214ull);
    vlSelf->dmem_resp_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14293880863806092472ull);
    vlSelf->hw_irq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15931156668881404995ull);
    vlSelf->ipi_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14014328947208719334ull);
    vlSelf->commit_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1248538124957539926ull);
    vlSelf->commit_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13273871951109446755ull);
    vlSelf->commit_inst = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5128824248803840457ull);
    vlSelf->commit_ldst = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15154423228884520275ull);
    vlSelf->exception_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18324506416411141223ull);
    vlSelf->exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16612269061222115007ull);
    vlSelf->exception_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7379024239501400619ull);
    vlSelf->exception_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11889171423339542449ull);
    vlSelf->exception_badvaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16056280132858937064ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1297272715207511406ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1586843854505200251ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8572988376765721785ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_redirect_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5008947115754344866ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__arch_valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18135901330014148548ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__uops, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__fp_flags = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__debug_insts = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__debug_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15692314158446377743ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4419301876737043670ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3600439102156859411ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12331918938310761417ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 829786263933877639ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops, __VscopeHash, 8549535545622266609ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__next_decode_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17192591130643301011ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_pcs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4400458675984337098ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unique_dispatch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10744214551817664008ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_finished_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 862898786102837704ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3461984874343898093ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 230177316574804092ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1754504598222605782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6855664172045629973ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1027793631038509218ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15515717777489443293ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15422386784730499310ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7730867471137643342ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw, __VscopeHash, 16563621486917358914ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13934260624498193047ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2606812677267845634ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2037723065496602122ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_unique_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17044856302190000494ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uses_ldq_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13163379442945628760ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uses_stq_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16544709295500998514ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_pc_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8933711423102691611ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_ready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4358789697493958061ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_ertn_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5731566896267456660ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_counter_value_w = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17796316469545479252ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_csr_update_mask_w = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8183439434104897933ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8618850644741704295ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_found_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11992243762372980445ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3463779280027956675ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_req_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10797525370764700555ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_owner_search_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3051373625700874212ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16361113123653764003ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10559594162515617171ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_e_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17412208204567709363ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inv_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7943494506005475642ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5077822733146322984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10486858077888349057ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops, __VscopeHash, 4603605814139308203ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iss_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4895143352307656256ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iss_valid__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3533557954142846819ull);
    VL_ZERO_RESET_W(1242, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop);
    VL_ZERO_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop);
    VL_ZERO_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8350128268744822169ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 4929091318504920177ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data, __VscopeHash, 148534381932496232ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10331254913056886610ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18135193927075115785ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16078486679126578891ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5610048627726506957ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7389923427213069017ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4791551107220928852ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13662176047072474491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4076511867064695641ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16710027989699457330ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17447782672257561340ull);
    VL_SCOPED_RAND_RESET_W(454, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt, __VscopeHash, 17294982327587053337ull);
    VL_SCOPED_RAND_RESET_W(454, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q, __VscopeHash, 16854437886675893044ull);
    VL_SCOPED_RAND_RESET_W(454, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_lxcpt_w, __VscopeHash, 11566972972252250661ull);
    VL_ZERO_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145123784549687944ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q, __VscopeHash, 12659047047012762840ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10369808734988390975ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8611600169860673327ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5138269493548462808ull);
    VL_SCOPED_RAND_RESET_W(2724, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps, __VscopeHash, 7870204114334927270ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w, __VscopeHash, 8487389894758906454ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_next_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1659084673176525078ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rob_inst__enq_partial_stall = 0;
    VL_SCOPED_RAND_RESET_W(495, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w, __VscopeHash, 17140793154739265952ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__res_valid = 0;
    VL_ZERO_RESET_W(454, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__xcpt);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__agen_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12747597651509187522ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop, __VscopeHash, 17365173913315775709ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16084157371760653278ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 557430192972526241ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14388427671501948002ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16269996464968670313ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6062528273819237385ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__issue_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9384704252032951315ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4518868946853341503ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12199654180191949754ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__dividend_abs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5242546486534960995ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__divisor_abs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6579378568904266091ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__quotient_negate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456414893013831250ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__remainder_negate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3308163666415259409ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__select_remainder_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2972385336558421346ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__divisor_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432618433588190415ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14595418976908683602ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8811963804524601680ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__divisor_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 9228998394999626506ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_count_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6068180592172619739ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_index_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10161975606004551784ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__recovery_shift_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2007451303325140616ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_digit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7290500583629539826ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_after_digit = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7658621512397180185ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10133523737129219573ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient_minus_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8061701922532255964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 391815740910549866ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15015493563316529579ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2064748370390174213ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__remainder_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6803506417794784361ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 380907717622217271ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__resp_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1344809847772062129ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14401135715169404333ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14049772194976342241ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13040366522719164286ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14904486999298088654ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2934194288558082341ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6968535710376973270ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_arch_busy_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17684844683453693582ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__br_snapshot_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13527039529883217408ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__br_snapshot_tag = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2300068775314325809ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6311015384169830331ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11461667752595323872ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_en = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5152657667885721620ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_preg = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16174483867028016525ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17326015110246477183ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15278013877102380372ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q, __VscopeHash, 5774068619822437864ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next, __VscopeHash, 679951275173041366ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 7666280077953967708ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 10784806796889743156ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[__Vi0] = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 3337591301498604255ull);
    }
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix, __VscopeHash, 574166636546218914ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13074690927201465144ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14711911121333163500ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4751436972737816073ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2155315046594134284ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10536127157931554590ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 302928011135521804ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6479411467484828037ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7764610587456553980ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10824158531946836098ull);
        }
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10718532903833614203ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6211881426429265083ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5688471617329916708ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15925421590804167259ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10794767308080858130ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8295773226383993996ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4382585760566381732ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6254062791331766000ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12751063316436696426ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12166217895783267734ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4476362485669241061ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14562878351758173363ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6039096684189441025ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9534020081272057949ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 173912463801759097ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__arb_locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5498792322814579729ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__locked_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 660225782390601055ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__prefer_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6908601215861283362ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 810621231533394697ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10094802220606310020ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_resp_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537405449746371729ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_arb_locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17137018813077323839ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_locked_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5584605495062989629ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_prefer_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4199279834903738684ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17607910946069116128ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3392264289287682722ull);
    VL_SCOPED_RAND_RESET_W(8368, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries, __VscopeHash, 8405975240839243699ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__next_gen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5852198563296297628ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8910684938332055524ull);
    VL_SCOPED_RAND_RESET_W(1046, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries, __VscopeHash, 12385857772606772816ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1400128153061549579ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15913085767320481162ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5416439060052488118ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5115713103972481020ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_fifo, __VscopeHash, 204816927416148679ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_head = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8137911176342128504ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16310086408219996112ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17798743057838394768ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4976870208427302041ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15968146917067145037ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8002336324034159788ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_push_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3544764183732156160ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_tail_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5739686758773939926ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1656216841372411277ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_head_tag = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16344085387394540347ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16510514973533879567ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2308534615256944864ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 543651495457399119ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11379536126013997498ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop, __VscopeHash, 9396590674241560547ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7796775034350985443ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__store_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8139941187886253034ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6851260257174877934ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 163483781112985869ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6762078639103809433ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_cursor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5068126521103320729ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16799368713482977320ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_candidate_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 273811582208863749ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13204315395664344673ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_tag = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11231719054842022150ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_vaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13846739572240481337ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11595375675266134637ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14878829902027018074ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 613858148562958775ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1696204906510632802ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10133057112025124904ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__agen_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5891980563565666279ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__dgen_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1983024256444436022ull);
    VL_SCOPED_RAND_RESET_W(7824, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries, __VscopeHash, 636674277303937207ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__next_gen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16776869802132451060ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7252223506154947620ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__query_cursor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17898759262212962082ull);
    VL_SCOPED_RAND_RESET_W(978, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries, __VscopeHash, 4474615668555603075ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16163033158216252312ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1392364894316875947ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11059800532901533980ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14280864393208433536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553327864181357950ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 652631808533325279ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_uop, __VscopeHash, 2520312739985264216ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050049294689022917ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2712507582048528847ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop, __VscopeHash, 11517817689026208845ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5092213280522347852ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12427458073831080570ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__dmem_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003463736154393964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204015213624726361ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6780500876931144583ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2215506657872578086ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11795831255555627395ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16490647019217747312ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4329156029115972036ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9860001094031131075ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_cursor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7363784944379251798ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15594396870316776374ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_candidate_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11969814308653083851ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11721546604453371117ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_tag = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13992256745873892997ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_vaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2823997364189815798ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12562480344958600401ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12164067474091715558ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13872773907836279972ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18142625757448408831ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9440442940051136353ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__agen_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17298699824029444087ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13910255640791311574ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2720447555522286242ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5717667849032096946ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_tag_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16108126972270517118ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1879133429248665514ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_asid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8979775160115540439ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8410845616135390232ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15765284201780724481ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_access_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17787755703938077764ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_tag_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6518673038144253129ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_paddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11185052508863262471ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_mat_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12531991458987286523ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_cacheable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2878005889805073967ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447466935406561859ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_code_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10273046622491874822ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_badvaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13152380874285375896ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14011572220692827293ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12572785704851732137ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13782941589531437183ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2314687175482881502ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_cacheable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15289364833325648597ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17465064316392333753ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460371639744913770ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4867668138771036072ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_badvaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15058691359654297558ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT____Vcellinp__trans__tlb_resp_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4367387707539511944ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__req_vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3699509459415764749ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16795910045968347177ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_asid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8448104644271337972ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2338721335359012267ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2584385076336248393ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14248397064823873147ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8334451018499144654ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1246152794594136637ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT____Vcellinp__trans__tlb_resp_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1130854184092641622ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4455545108006774685ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3271447758937357191ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 11854760615056528567ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16584176829233671712ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 822410369955533529ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10008566679432551548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15163823595746336807ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 3720445219667101380ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5566915443055178638ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5398669180632420803ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6614166816063209701ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9707277210849613619ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11837275390511475480ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742242573030037639ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041723977395607787ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 13372134163189682661ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4007400784621318964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6695478013611078603ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11283255009571658881ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11364708924613733812ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 16952450142074999296ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7583479013786928161ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17122364349467101258ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2702705767055644554ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 362616356973670170ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1720839223601671084ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484606096764492209ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5242961461092016066ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 18324486023234953274ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17653465556050131810ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1435310319889455984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4674075303718058947ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4114816821464189170ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 12991773725656144765ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13732562297125011885ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13327094039760451793ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14889982121781629345ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5877106952825052730ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7624401510536427262ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2101972983629259520ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17572441040255511787ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_uop, __VscopeHash, 2607681940361664415ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4346053630691122222ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7510705903975326659ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16177123155511417850ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082995495451191601ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop, __VscopeHash, 15863730113474928909ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12628358226839516549ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4406560963210425149ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10370176431729603899ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__eff_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503741373912235350ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17017024073714516426ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 9312535965010275768ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14754376405812263900ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505229462366456849ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9580219796959776421ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6111224788511684789ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15272235386627690386ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3986564249937896368ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4294868353484395064ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13878521120017136123ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2149472682911572417ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4239465821760858108ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15118682123132253684ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9006020800564393943ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2717768088059830253ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9048272002049432406ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15931352398011178629ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5080474319968390001ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13709977512864536856ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4170349301657488688ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4778434111273111825ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2116203889185916649ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rob_idx_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6746412517697119248ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11417291372976199531ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_inv_op_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 970089365531895841ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_inv_asid_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17427549316719328500ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_inv_vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16558479733780448679ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbidx_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5710299802317882211ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbehi_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15703496213591836882ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11394239248175898365ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18326405389117885939ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_asid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3742167197215166542ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_e_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1871363844224971933ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_vppn_q = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 11273293650921576983ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_asid_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10045118605941648959ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_g_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031321128611070909ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_ps_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 541189569509717407ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_ppn0_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10416206125764889253ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_ppn1_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5594587743889230741ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_mat0_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13594787809856803526ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_mat1_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4060779000621624411ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_plv0_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3727040724754177380ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_plv1_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2339153331420450262ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_d0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11206028251989275866ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_d1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6981634486056152371ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_v0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17201651976116871279ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rd_v1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15630300143565847943ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_search_found_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14933652780415537663ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_search_idx_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16911744839481913891ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__fill_idx_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3142482342632265703ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10868535652793522723ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13010961938074801553ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__commit_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7824799951080609713ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__crmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11746186842498581147ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__prmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12345996181385658976ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__euen_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2748712288257481676ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__ecfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16789354733268021831ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__estat_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15722300546560369277ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__era_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18206138533113464466ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__badv_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11691592314988217366ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__eentry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7486006245321589911ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbidx_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11326011299072386654ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbehi_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15502868508424600621ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbelo0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15425613387388323697ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbelo1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2558136358507089491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__asid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9773006541070024244ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pgdl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 373644095422919959ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pgdh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16563462983059066059ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9371687651433114409ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1226167685573322580ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tcfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18305629852671108617ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10685362639877440095ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__llbctl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10106943897486932962ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbrentry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15671884247665464924ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__dmw0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2552996540118105984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__dmw1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15500478636334973128ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__stable_counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9482853790162787024ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__badi_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11194852033171527154ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__cntc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14520892029517997301ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__timer_irq_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17308234037221171924ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__timer_armed_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16502695888454759536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1634572988583989193ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_rob_idx_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8516934764032069956ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_addr_q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2175219910109177665ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_cmd_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3213591485927480496ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4806207536569369189ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_wmask_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4739611246275142580ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__resp_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15194500695389048788ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_tcfg_write_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14024083065270000291ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__commit_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17362578768156535284ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__interrupt_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15528052700327405384ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12930509113855792222ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18016643013689773279ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4092056515453962939ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(13248, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop[__Vi0], __VscopeHash, 13999879201120921992ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(1024, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata[__Vi0], __VscopeHash, 8289719558678379500ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5195689504291375587ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15555060997400277532ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13631731639397501601ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5756715141922759836ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 535111172751999817ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17835723432764860614ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8750611512102875536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head_vals = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8491481497824229050ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(1024, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause[__Vi0], __VscopeHash, 3003002840226402953ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(1024, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr[__Vi0], __VscopeHash, 4935772062529207402ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__lxcpt_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9245912903324822999ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15825826781444522473ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2939163423750714254ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5966500890448823884ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14374619381740541022ull);
    VL_SCOPED_RAND_RESET_W(414, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop, __VscopeHash, 10833347356335573167ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3157685659191178782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9853320999892649673ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16676541976316957294ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__finished_committing_row = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16272637926468014075ull);
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17025389862334918570ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 852764741487700953ull);
    VL_SCOPED_RAND_RESET_W(4968, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop, __VscopeHash, 16955459105290969812ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4762455091213898914ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8267802625329891313ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9780955978283587491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8976733595182221786ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated, __VscopeHash, 2405043580386518716ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18373736060116036149ull);
    VL_SCOPED_RAND_RESET_W(6624, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_uop, __VscopeHash, 125126960643065226ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4080026178585933850ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 529211962787420767ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11876875151851420143ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2767480488598873237ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated, __VscopeHash, 9019154580632305800ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12458225995475049279ull);
    VL_SCOPED_RAND_RESET_W(6624, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_uop, __VscopeHash, 1677684345798050147ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6058820023219643131ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11448386138112822196ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13919958115403047957ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15851333280260707247ull);
    VL_SCOPED_RAND_RESET_W(828, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated, __VscopeHash, 13717983146653294343ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161566405390956263ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13530342932146034544ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2834312585520972971ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__inst_mem, __VscopeHash, 13212810271083274051ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__pc_mem, __VscopeHash, 12762185431776592098ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__xcpt_valid_mem = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4478797876786030413ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__xcpt_code_mem = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17568560155873853224ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2171912365813943959ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11000534450624538505ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__head_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2666169747002069967ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__tail_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13291665614683531272ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__count_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13855581929312839429ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, __VscopeHash, 2395112886688518917ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, __VscopeHash, 3684850844605096807ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9072602513423626319ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__deq_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15917224006430264745ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13015398341129179546ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 62453665419780510ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7619804654762842559ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_stale_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3158079960870660273ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__redirect_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11449801065830495423ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_valid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2428415591284666429ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q, __VscopeHash, 12765783187894066056ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q, __VscopeHash, 9988448591770051490ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_paddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15652808781348326830ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_valid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4006261006192108250ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_code_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3311322206826391600ull);
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__data = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__addr = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__size = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__byte_offset = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__102__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_22 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_41 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_42 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_43 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_44 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_46 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_47 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_48 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_49 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_50 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_51 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_54 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_56 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_57 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_58 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_59 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_60 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_74 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_75 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_76 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_77 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_78 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_79 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_80 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_81 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_82 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_83 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_84 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_85 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_86 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_87 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_88 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_89 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_90 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_91 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_92 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_93 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_100 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_104 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_107 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_108 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_109 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_110 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_111 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_112 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_113 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_114 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_115 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_116 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_117 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_118 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_119 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_120 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_121 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_122 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_123 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_124 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_125 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_126 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_127 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_128 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_129 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_130 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_131 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_132 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_133 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_134 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_135 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_136 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_137 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_138 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_139 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_143 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_144 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_145 = 0;
    VL_ZERO_RESET_W(414, vlSelf->__VdfgRegularize_h6e95ff9d_0_151);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_152 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_153 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_154 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_155 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_156 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_157 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_158 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_159 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_160 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_161 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_162 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_163 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_164 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_165 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_166 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_167 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_168 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_169 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_170 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_171 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_172 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_173 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_174 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_175 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_176 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_177 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_178 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_179 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_180 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_181 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_182 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_183 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_184 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_191 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_192 = 0;
    VL_ZERO_RESET_W(447, vlSelf->__VdfgRegularize_h6e95ff9d_0_193);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_204 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_205 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_206 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_207 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_208 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_211 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_215 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_216 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_217 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_218 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_219 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_220 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_221 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_222 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_223 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_224 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_225 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_226 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_227 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_228 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_229 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_230 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_231 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_232 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_233 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_234 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_235 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_236 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_237 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_238 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_239 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_240 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_241 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_242 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_243 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_244 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_245 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_246 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_259 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_260 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_261 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_262 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_277 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_279 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_281 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_282 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_286 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_287 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_288 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_300 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_302 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_304 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_306 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_308 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_310 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_312 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_314 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_316 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_318 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_320 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_322 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_324 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_326 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_328 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_330 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_332 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_334 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_336 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_338 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_340 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_342 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_344 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_346 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_348 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_350 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_352 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_354 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_356 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_358 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_360 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_362 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_364 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_365 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_370 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_381 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_382 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_387 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_388 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_391 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_393 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_398 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_399 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_400 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_401 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_402 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_403 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_404 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_405 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_406 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_407 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_408 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_409 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_410 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_411 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_412 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_413 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_414 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_415 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_416 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_417 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_418 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_419 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_420 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_421 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_422 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_423 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_424 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_425 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_426 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_427 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_428 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_429 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_430 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_432 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_433 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_434 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_435 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_436 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_437 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_438 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_440 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_441 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_444 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_445 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_448 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_449 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_452 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_453 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_456 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_457 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_460 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_461 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_464 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_465 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_468 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_469 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_472 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_473 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_476 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_477 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_480 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_481 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_484 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_485 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_488 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_489 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_490 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_492 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_493 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_496 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_497 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_500 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_526 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_532 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_543 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_544 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_545 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_546 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_547 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_548 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_581 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_587 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_594 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_596 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_597 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_599 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_600 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_605 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_607 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_608 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_609 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_610 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_611 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_612 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_613 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_614 = 0;
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_615);
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_616);
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_617);
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_618);
    VL_ZERO_RESET_W(295, vlSelf->__VdfgRegularize_h6e95ff9d_0_627);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_633 = 0;
    VL_ZERO_RESET_W(454, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state = 0;
    VL_ZERO_RESET_W(414, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_count_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_index_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__recovery_shift_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient_minus_one = 0;
    VL_ZERO_RESET_W(8368, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_tag = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_vaddr = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__next_gen = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__next_gen = 0;
    VL_ZERO_RESET_W(7824, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_tag = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_vaddr = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__state = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__state = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tval_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__dmw1_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__dmw0_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__asid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbelo1_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbelo0_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbehi_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbidx_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__estat_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__prmd_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__crmd_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state = 0;
    VL_ZERO_RESET_W(4968, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6624, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6624, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_uop);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__head_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__tail_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_valid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_valid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_stale_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__redirect_pc_q = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v4 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v6 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v7 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v8 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v8 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v9 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v10 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v4 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v6 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v7 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v8 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v9 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v10 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v11 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v12 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v13 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v14 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v15 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v16 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v17 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v18 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v19 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v20 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v21 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v22 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v23 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v24 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v25 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v26 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v27 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v28 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v29 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v30 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v31 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v32 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v33 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v34 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v35 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v36 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v37 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v38 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v39 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v40 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v41 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v42 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v43 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v44 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v45 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v46 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v47 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v48 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v49 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v50 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v51 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v52 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v53 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v54 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v55 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v56 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v57 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v58 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v59 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v60 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v61 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v62 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v63 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v64 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v64 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v65 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v66 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v67 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v68 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v69 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v70 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v71 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v72 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v73 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v74 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v75 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v76 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v77 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v78 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v79 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v80 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v81 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v82 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v83 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v84 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v85 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v86 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v87 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v88 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v89 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v90 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v91 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v92 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v93 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v94 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v95 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v96 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v0 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v1 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v2 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v3 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v4 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v4 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v5 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v6 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v6 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v7 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v7 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v8 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v8 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v9 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v9 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v10 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v10 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v11 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v11 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v12 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v12 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v13 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v13 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v14 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v14 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v15 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v15 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v16 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v16 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v17 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v17 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v18 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v18 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v19 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v19 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v20 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v20 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v21 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v21 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v22 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v22 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v23 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v23 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v24 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v24 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v25 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v25 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v26 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v26 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v27 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v27 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v28 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v28 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v29 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v29 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v30 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v30 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v31 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v31 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v32 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v32 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v33 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v33 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v34 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v34 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v35 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v35 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v36 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v36 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v37 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v37 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v38 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v38 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v39 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v39 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v40 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v40 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v41 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v41 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v42 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v42 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v43 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v43 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v44 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v44 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v45 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v45 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v46 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v46 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v47 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v47 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v48 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v48 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v49 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v49 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v50 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v50 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v51 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v51 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v52 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v52 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v53 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v53 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v54 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v54 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v55 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v55 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v56 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v56 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v57 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v57 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v58 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v58 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v59 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v59 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v60 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v60 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v61 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v61 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v62 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v62 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v63 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v63 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v64 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v7 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v9 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v11 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v12 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v12 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v13 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v14 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v14 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v15 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v16 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v16 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v17 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v18 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v18 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v19 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v21 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v22 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v22 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v23 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v24 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v24 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v25 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v26 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v26 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v27 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v28 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v28 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v29 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v30 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v30 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v31 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v33 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v34 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v34 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v35 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v36 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v36 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v37 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v38 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v38 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v39 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v40 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v40 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v41 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v42 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v42 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v43 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v44 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v44 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v45 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v46 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v46 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v47 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v48 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v48 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v49 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v50 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v50 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v51 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v52 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v52 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v53 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v54 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v54 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v55 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v56 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v56 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v57 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v58 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v58 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v59 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v60 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v60 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v61 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v62 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v62 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v63 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e__v64 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v2 = 0;
    VL_ZERO_RESET_W(414, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0);
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v5 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v4 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v6 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v6 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v7 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v7 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v7 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v6 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v6 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v6 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v8 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v8 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v9 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v11 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v5 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v7 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v11 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v12 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v13 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v14 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v15 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v16 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v17 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v18 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v19 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v21 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v22 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v23 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v24 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v25 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v26 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v27 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v28 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v29 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v30 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v31 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v33 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v34 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v34 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v35 = 0;
    VL_ZERO_RESET_W(414, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1);
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v12 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v12 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v12 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v11 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v11 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v8 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v8 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v8 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v13 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v13 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v12 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v14 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v14 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v13 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v9 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v9 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v9 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v15 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v15 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v14 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v10 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v10 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v10 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v16 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v16 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v15 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v11 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v11 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v11 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v17 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v17 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v16 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v12 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v12 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v12 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v18 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v18 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v17 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v13 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v13 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v13 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v19 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v19 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v18 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated__v14 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v14 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata__v14 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v20 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v19 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v21 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v21 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v22 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v23 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v36 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v36 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v37 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v38 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v39 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v40 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v41 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v42 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v43 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v44 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v45 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v46 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v47 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v48 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v49 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v50 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v51 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v52 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v53 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v54 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v55 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v56 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v57 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v58 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v59 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v60 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v61 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v62 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v63 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v64 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v65 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v66 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v67 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v68 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v69 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v70 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v70 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v71 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__imem_req_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__imem_resp_valid__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vtrigprevexpr___TOP__imem_resp_insts__0);
    vlSelf->__Vtrigprevexpr___TOP__dmem_req_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_is_store__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__hw_irq__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ipi_irq__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
