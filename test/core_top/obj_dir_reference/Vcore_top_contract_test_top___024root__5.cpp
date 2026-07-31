// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlWide<26>/*831:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h1cfef7ee_0;

void Vcore_top_contract_test_top___024root___nba_sequent__TOP__5(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___nba_sequent__TOP__5\n"); );
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
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0;
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
    QData/*47:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_379;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_379);
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_541;
    __VdfgRegularize_h6e95ff9d_0_541 = 0;
    VlWide<13>/*415:0*/ __Vtemp_107;
    VlWide<13>/*415:0*/ __Vtemp_109;
    VlWide<13>/*415:0*/ __Vtemp_111;
    VlWide<13>/*415:0*/ __Vtemp_113;
    VlWide<13>/*415:0*/ __Vtemp_115;
    VlWide<13>/*415:0*/ __Vtemp_117;
    // Body
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder));
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)))))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)))));
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
        = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
           & (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask));
    {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 1U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 2U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 3U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 4U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 5U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 6U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 7U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 8U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 9U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x0aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x0bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x0cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x0dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x0eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x0fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x10U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x11U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x12U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x13U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x14U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x15U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x16U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x17U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x18U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x19U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x1aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x1bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x1cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x1dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x1eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x1fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x20U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x21U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x22U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x23U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x24U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x25U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x26U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x27U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x28U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x29U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x2aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x2bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x2cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x2dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x2eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__22__vec 
                           >> 0x2fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel0;
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel0: ;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder) 
              << 6U));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                 >> 6U)))))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                      >> 6U)))));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U] = 0ULL;
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en) 
         & (0U != (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand))))) {
        if ((0x2fU >= (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U] 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U] 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)))));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] = 0ULL;
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en) 
          >> 1U) & (0U != (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                          >> 6U))))) {
        if ((0x2fU >= (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                      >> 6U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                      >> 6U)))));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[0U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[3U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[4U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U]) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U]) 
              << 0x00000010U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U] 
        = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U]) 
            >> 0x00000010U) | ((IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[0U] 
        = (IData)((0x0000ffffffffffffULL & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U])) 
                                              << 0x00000030U) 
                                             | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                   >> 0x00000010U))) 
                                            | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U] 
        = ((0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U]) 
           | (IData)(((0x0000ffffffffffffULL & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                  << 0x00000030U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                     << 0x00000010U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                       >> 0x00000010U))) 
                                                | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U])) 
                      >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all 
        = (0x0000ffffffffffffULL & (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[0U]))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0ULL;
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en) 
         & (0U != (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg))))) {
        if ((0x2fU >= (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg)))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg)))));
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en) 
          >> 1U) & (0U != (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg) 
                                          >> 6U))))) {
        if ((0x2fU >= (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg) 
                                      >> 6U)))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg) 
                                                      >> 6U)))));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask = 0ULL;
    if ((0x00000100U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[2U])) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q
            [(3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[10U] 
                    >> 3U))];
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
             & (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all)) 
            | core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask) 
           | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next 
        = (0x0000fffffffffffeULL & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600 = (0x0000003fU 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_545 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                >> 5U)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                           >> 5U)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                          >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_546 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260))])));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 
            = (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                              >> 6U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594 
            = (0x00000fffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_545) 
                               << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_546)));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 
            = (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600) 
                              >> 6U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594 
            = (0x00000fffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                      >> 0x00000012U)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[7U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][8U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][9U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][10U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][11U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][12U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][13U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][14U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][15U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][16U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][17U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][18U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][19U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][20U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[20U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][21U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[21U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][22U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[22U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][23U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[23U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][24U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[24U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][25U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[25U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][26U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[26U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][27U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[27U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][28U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[28U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][29U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[29U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][30U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[30U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][31U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[31U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][7U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][8U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][9U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][10U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][11U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][12U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][13U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][14U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][15U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][16U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][17U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][18U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][19U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][20U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][20U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][21U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][21U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][22U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][22U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][23U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][23U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][24U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][24U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][25U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][25U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][26U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][26U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][27U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][27U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][28U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][28U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][29U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][29U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][30U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][30U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][31U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[0U][31U];
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en) 
         & (0U != (0x0000001fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_lreg))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][(0x0000001fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_lreg))] 
            = (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][7U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][8U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][9U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][10U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][11U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][12U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][13U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][14U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][15U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][16U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][17U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][18U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][19U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][20U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][20U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][21U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][21U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][22U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][22U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][23U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][23U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][24U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][24U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][25U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][25U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][26U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][26U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][27U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][27U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][28U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][28U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][29U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][29U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][30U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][30U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][31U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[1U][31U];
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en) 
          >> 1U) & (0U != (0x0000001fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_lreg) 
                                          >> 5U))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[2U][(0x0000001fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_lreg) 
                                                                                >> 5U))] 
            = (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg) 
                              >> 6U));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U] 
        = ((0xfffff000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U]) 
           | (0x00000fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U] 
        = ((0x00000fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U]) 
           | ((IData)((0x0000003fffffffffULL & ((1U 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_281) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_547) 
                                                                        << 0x00000014U)) 
                                                                    | ((0x000ffc00U 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                           >> 0x0000000cU)) 
                                                                       | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & (((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))))))))) 
                                                                           << 9U) 
                                                                          | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192 
                                                                                >> 0x0000000aU))])))))))))
                                                 : 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                  << 0x00000034U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                     << 0x00000014U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U])) 
                                                       >> 0x0000000cU)))))) 
              << 0x0000000cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U] 
        = ((0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U]) 
           | (((IData)((0x0000003fffffffffULL & ((1U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x0000003fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_281) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_547) 
                                                                         << 0x00000014U)) 
                                                                     | ((0x000ffc00U 
                                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                            >> 0x0000000cU)) 
                                                                        | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & (((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))))))))) 
                                                                            << 9U) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192 
                                                                                >> 0x0000000aU))])))))))))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                   << 0x00000034U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                      << 0x00000014U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U])) 
                                                        >> 0x0000000cU)))))) 
               >> 0x00000014U) | ((IData)(((0x0000003fffffffffULL 
                                            & ((1U 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0x0000003fU 
                                                                     & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_281) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_547) 
                                                                          << 0x00000014U)) 
                                                                      | ((0x000ffc00U 
                                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                             >> 0x0000000cU)) 
                                                                         | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & (((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))))))))) 
                                                                             << 9U) 
                                                                            | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 
                                                                                >> 6U)))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192 
                                                                                >> 0x0000000aU))])))))))))
                                                : (
                                                   ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                    << 0x00000034U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                       << 0x00000014U) 
                                                      | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U])) 
                                                         >> 0x0000000cU))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000cU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[5U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[5U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[5U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[6U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[6U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[6U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[7U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[8U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[8U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[8U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[9U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[9U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[9U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[10U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[10U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[10U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[11U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[11U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[11U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[12U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[12U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[13U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[14U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[14U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[14U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[15U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[15U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[15U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
        = ((0xfffffc00U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U]) 
           | (0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
        = ((0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U]) 
           | ((IData)((0x0000003fffffffffULL & ((2U 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (0x0000003fU 
                                                                   & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                       >> 6U) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_546) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_545) 
                                                                        << 0x00000014U)) 
                                                                    | ((0x000ffc00U 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                           >> 0x0000000aU)) 
                                                                       | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))))))) 
                                                                           << 9U) 
                                                                          | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x00600000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000aU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU))])))))))))))
                                                 : 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                  << 0x00000036U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                     << 0x00000016U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                       >> 0x0000000aU)))))) 
              << 0x0000000aU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U] 
        = ((0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U]) 
           | (((IData)((0x0000003fffffffffULL & ((2U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x0000003fU 
                                                                    & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                        >> 6U) 
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_546) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_545) 
                                                                         << 0x00000014U)) 
                                                                     | ((0x000ffc00U 
                                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                            >> 0x0000000aU)) 
                                                                        | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))))))) 
                                                                            << 9U) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x00600000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000aU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU))])))))))))))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                   << 0x00000036U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                      << 0x00000016U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                        >> 0x0000000aU)))))) 
               >> 0x00000016U) | ((IData)(((0x0000003fffffffffULL 
                                            & ((2U 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0x0000003fU 
                                                                     & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                         >> 6U) 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_546) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_545) 
                                                                          << 0x00000014U)) 
                                                                      | ((0x000ffc00U 
                                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                             >> 0x0000000aU)) 
                                                                         | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594))))))))) 
                                                                             << 9U) 
                                                                            | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x00600000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
                                                                                & ((0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                                                >> 0x0000000cU))))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                                                >> 6U))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000aU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
                                                                                >> 0x0000000aU))])))))))))))
                                                : (
                                                   ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                    << 0x00000036U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                       << 0x00000016U) 
                                                      | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                         >> 0x0000000aU))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000aU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[18U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[19U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[20U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[21U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[22U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[23U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[24U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U]) 
           | (0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[25U] 
        = (0x0fffffffU & ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U]) 
                          | (0x0fff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U])));
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
                __Vtemp_107[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_107[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_107[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_107[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_107[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_107[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_107[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_107[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_107[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_107[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_107[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_107[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_107[12U] = (0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U]);
                VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                           & ((IData)(0x0000019eU) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_107);
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
                    __Vtemp_111[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                    __Vtemp_111[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                    __Vtemp_111[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                    __Vtemp_111[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                    __Vtemp_111[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                    __Vtemp_111[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                    __Vtemp_111[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                    __Vtemp_111[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                    __Vtemp_111[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                    __Vtemp_111[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                    __Vtemp_111[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                    __Vtemp_111[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                    __Vtemp_111[12U] = (0x3fffffffU 
                                        & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U]);
                    VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                               & ((IData)(0x0000019eU) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_111);
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
                        __Vtemp_115[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                        __Vtemp_115[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                        __Vtemp_115[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                        __Vtemp_115[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                        __Vtemp_115[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                        __Vtemp_115[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                        __Vtemp_115[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                        __Vtemp_115[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                        __Vtemp_115[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                        __Vtemp_115[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                        __Vtemp_115[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                        __Vtemp_115[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                        __Vtemp_115[12U] = (0x3fffffffU 
                                            & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U]);
                        VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_115);
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
                __Vtemp_109[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
                                              >> 0x0000001eU));
                __Vtemp_109[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                              >> 0x0000001eU));
                __Vtemp_109[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                              >> 0x0000001eU));
                __Vtemp_109[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                              >> 0x0000001eU));
                __Vtemp_109[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                              >> 0x0000001eU));
                __Vtemp_109[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                              >> 0x0000001eU));
                __Vtemp_109[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                              >> 0x0000001eU));
                __Vtemp_109[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                              >> 0x0000001eU));
                __Vtemp_109[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                              >> 0x0000001eU));
                __Vtemp_109[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                    << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                              >> 0x0000001eU));
                __Vtemp_109[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                               >> 0x0000001eU));
                __Vtemp_109[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                               >> 0x0000001eU));
                __Vtemp_109[12U] = (0x3fffffffU & (
                                                   (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                                    << 2U) 
                                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                                      >> 0x0000001eU)));
                VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                           & ((IData)(0x0000019eU) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_109);
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
                    __Vtemp_113[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                        << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                                  >> 0x0000001eU));
                    __Vtemp_113[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                         << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                                   >> 0x0000001eU));
                    __Vtemp_113[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                         << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                                   >> 0x0000001eU));
                    __Vtemp_113[12U] = (0x3fffffffU 
                                        & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                              >> 0x0000001eU)));
                    VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                               & ((IData)(0x0000019eU) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_113);
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
                        __Vtemp_117[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                            << 2U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                              >> 0x0000001eU));
                        __Vtemp_117[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                             << 2U) 
                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                               >> 0x0000001eU));
                        __Vtemp_117[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                             << 2U) 
                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                               >> 0x0000001eU));
                        __Vtemp_117[12U] = (0x3fffffffU 
                                            & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                                << 2U) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                                  >> 0x0000001eU)));
                        VL_ASSIGNSEL_WW(828, 414, (0x000003ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_117);
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

void Vcore_top_contract_test_top___024root___nba_sequent__TOP__6(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___nba_sequent__TOP__6\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3;
    }
    if (vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4] 
            = vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_444 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_445 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_448 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_219 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_449 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_452 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_453 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_456 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_457 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_461 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_464 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_465 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_468 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_469 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_472 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_473 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_476 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_477 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_480 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_481 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_484 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_485 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_488 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_489 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_493 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_496 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_244 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500 = (1U 
                                                  & (~ 
                                                     ((0x0cU 
                                                       > vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U]) 
                                                      | (0x1fU 
                                                         < vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246 = (VL_SHIFTL_III(32,32,6, (IData)(0xffffffffU), 
                                                                (0x0000003fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U])))) 
                                                  & (- (IData)(
                                                               (0x1fU 
                                                                != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[31U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_360 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[30U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[29U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_356 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[28U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[27U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_219);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[26U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[25U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_348 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[24U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[23U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[22U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_342 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[21U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_340 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[20U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[19U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_336 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[18U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_334 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[17U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_332 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[16U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[15U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_328 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[14U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_326 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[13U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_324 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[12U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_322 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[11U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_320 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[10U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_318 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[9U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_316 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[8U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_314 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[7U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_312 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[6U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[5U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_308 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[4U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_306 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[3U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[2U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_244);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[1U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn[0U] 
                                                   << 0x0000000dU) 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246);
}

void Vcore_top_contract_test_top___024root___nba_comb__TOP__0(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___nba_comb__TOP__0\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w = 0;
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    __VdfgRegularize_h6e95ff9d_0_39 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    __VdfgRegularize_h6e95ff9d_0_61 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_62;
    __VdfgRegularize_h6e95ff9d_0_62 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_63;
    __VdfgRegularize_h6e95ff9d_0_63 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_64;
    __VdfgRegularize_h6e95ff9d_0_64 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_65;
    __VdfgRegularize_h6e95ff9d_0_65 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_66;
    __VdfgRegularize_h6e95ff9d_0_66 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_67;
    __VdfgRegularize_h6e95ff9d_0_67 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_68;
    __VdfgRegularize_h6e95ff9d_0_68 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_69;
    __VdfgRegularize_h6e95ff9d_0_69 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_70;
    __VdfgRegularize_h6e95ff9d_0_70 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_71;
    __VdfgRegularize_h6e95ff9d_0_71 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_72;
    __VdfgRegularize_h6e95ff9d_0_72 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_73;
    __VdfgRegularize_h6e95ff9d_0_73 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_442;
    __VdfgRegularize_h6e95ff9d_0_442 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_446;
    __VdfgRegularize_h6e95ff9d_0_446 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_450;
    __VdfgRegularize_h6e95ff9d_0_450 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_454;
    __VdfgRegularize_h6e95ff9d_0_454 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_458;
    __VdfgRegularize_h6e95ff9d_0_458 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_462;
    __VdfgRegularize_h6e95ff9d_0_462 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_466;
    __VdfgRegularize_h6e95ff9d_0_466 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_470;
    __VdfgRegularize_h6e95ff9d_0_470 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_474;
    __VdfgRegularize_h6e95ff9d_0_474 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_478;
    __VdfgRegularize_h6e95ff9d_0_478 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_482;
    __VdfgRegularize_h6e95ff9d_0_482 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_486;
    __VdfgRegularize_h6e95ff9d_0_486 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_494;
    __VdfgRegularize_h6e95ff9d_0_494 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_499;
    __VdfgRegularize_h6e95ff9d_0_499 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_502;
    __VdfgRegularize_h6e95ff9d_0_502 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_504;
    __VdfgRegularize_h6e95ff9d_0_504 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_506;
    __VdfgRegularize_h6e95ff9d_0_506 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_508;
    __VdfgRegularize_h6e95ff9d_0_508 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_510;
    __VdfgRegularize_h6e95ff9d_0_510 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_512;
    __VdfgRegularize_h6e95ff9d_0_512 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_514;
    __VdfgRegularize_h6e95ff9d_0_514 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_516;
    __VdfgRegularize_h6e95ff9d_0_516 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_518;
    __VdfgRegularize_h6e95ff9d_0_518 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_520;
    __VdfgRegularize_h6e95ff9d_0_520 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_522;
    __VdfgRegularize_h6e95ff9d_0_522 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_524;
    __VdfgRegularize_h6e95ff9d_0_524 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_528;
    __VdfgRegularize_h6e95ff9d_0_528 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_531;
    __VdfgRegularize_h6e95ff9d_0_531 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_154 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_src2 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_400)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_399)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_398)
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                        : (((0U != (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                            & (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                == (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                   >> 0x0000000cU))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))
                            ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[0U]
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_398)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_399)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_400)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                            : (((0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                & (0x2fU 
                                                   >= 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])))
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf
                                               [(0x0000003fU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])]
                                                : 0U))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_wdata 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_613)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_403)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_402)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_401)
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                        : (((0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                   >> 6U))) 
                            & (((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                >> 6U)) 
                                == (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[5U] 
                                                   >> 0x0000000cU))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))
                            ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[0U]
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_401)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_402)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_403)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_613)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                            : (((0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                     >> 6U))) 
                                                & (0x2fU 
                                                   >= 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 6U))))
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf
                                               [(0x0000003fU 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                    >> 6U))]
                                                : 0U))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[0U] 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500) 
                                                       & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[0U] 
                                                           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                              == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[0U])) 
                                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300 
                                                             == 
                                                             (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[0U] 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500) 
                                                        & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246) 
                                                            == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300) 
                                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[0U] 
                                                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                 == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[0U]))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_addr 
        = (0x00003fffU & ((3U == (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                                        >> 0x00000019U)))
                           ? (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_wdata 
                              + ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                                  << 0x0000000aU) | 
                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                                  >> 0x00000016U)))
                           : ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                               << 0x0000000aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                                                  >> 0x00000016U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[1U] 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497) 
                                                       & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)) 
                                                          & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[1U] 
                                                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                                 == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[1U])) 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302 
                                                                == 
                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[1U] 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497) 
                                                       & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[1U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[1U])))))));
    __VdfgRegularize_h6e95ff9d_0_499 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77));
    __VdfgRegularize_h6e95ff9d_0_531 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_499)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[2U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_496) 
                                                          & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[2U] 
                                                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                                 == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[2U])) 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304 
                                                                == 
                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_244)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_531)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[2U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_496) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_244) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[2U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[2U])))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[3U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_499)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_493) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)) 
                                                             & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[3U] 
                                                                 | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                                    == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[3U])) 
                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_306 
                                                                   == 
                                                                   (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[3U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_531)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_493) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_306) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[3U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[3U]))))))));
    __VdfgRegularize_h6e95ff9d_0_494 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_499)));
    __VdfgRegularize_h6e95ff9d_0_528 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_531)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_494)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[4U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492) 
                                                          & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[4U] 
                                                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                                 == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[4U])) 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_308 
                                                                == 
                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_528)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[4U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_308) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[4U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[4U])))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[5U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_494)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_489) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)) 
                                                             & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[5U] 
                                                                 | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                                    == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[5U])) 
                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310 
                                                                   == 
                                                                   (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[5U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_528)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_489) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[5U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[5U]))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_490 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42) 
                                                     | (IData)(__VdfgRegularize_h6e95ff9d_0_494)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                                     | (IData)(__VdfgRegularize_h6e95ff9d_0_528)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_490)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[6U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_488) 
                                                          & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[6U] 
                                                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                                 == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[6U])) 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_312 
                                                                == 
                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[6U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_488) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_312) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[6U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[6U])))))));
    __VdfgRegularize_h6e95ff9d_0_73 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[7U] 
                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_490)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_485) 
                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[7U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[7U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_314 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[7U] 
                                                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_485) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_314) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[7U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[7U]))))))));
    __VdfgRegularize_h6e95ff9d_0_486 = ((IData)(__VdfgRegularize_h6e95ff9d_0_73) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_490)));
    __VdfgRegularize_h6e95ff9d_0_524 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526)));
    __VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_486)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[8U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_484) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[8U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[8U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_316 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_524)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[8U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_484) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_316) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[8U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[8U])))))));
    __VdfgRegularize_h6e95ff9d_0_72 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[9U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_486)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_481) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_40)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[9U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[9U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_318 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[9U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_524)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_481) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_318) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[9U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[9U]))))))));
    __VdfgRegularize_h6e95ff9d_0_482 = ((IData)(__VdfgRegularize_h6e95ff9d_0_72) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_486)));
    __VdfgRegularize_h6e95ff9d_0_522 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_524)));
    __VdfgRegularize_h6e95ff9d_0_39 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_482)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[10U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_480) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[10U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[10U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_320 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_522)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[10U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_480) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_320) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[10U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[10U])))))));
    __VdfgRegularize_h6e95ff9d_0_71 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[11U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_482)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_477) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_39)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[11U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[11U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_322 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[11U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_522)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_477) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_322) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[11U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[11U]))))))));
    __VdfgRegularize_h6e95ff9d_0_478 = ((IData)(__VdfgRegularize_h6e95ff9d_0_71) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_482)));
    __VdfgRegularize_h6e95ff9d_0_520 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_522)));
    __VdfgRegularize_h6e95ff9d_0_38 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_478)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[12U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_476) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[12U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[12U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_324 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_520)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[12U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_476) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_324) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[12U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[12U])))))));
    __VdfgRegularize_h6e95ff9d_0_70 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[13U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_478)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_473) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_38)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[13U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[13U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_326 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[13U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_520)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_473) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_326) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[13U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[13U]))))))));
    __VdfgRegularize_h6e95ff9d_0_474 = ((IData)(__VdfgRegularize_h6e95ff9d_0_70) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_478)));
    __VdfgRegularize_h6e95ff9d_0_518 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_520)));
    __VdfgRegularize_h6e95ff9d_0_37 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_474)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[14U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_472) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[14U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[14U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_328 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_518)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[14U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_472) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_328) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[14U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[14U])))))));
    __VdfgRegularize_h6e95ff9d_0_69 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[15U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_474)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_469) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_37)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[15U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[15U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[15U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_518)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_469) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[15U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[15U]))))))));
    __VdfgRegularize_h6e95ff9d_0_470 = ((IData)(__VdfgRegularize_h6e95ff9d_0_69) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_474)));
    __VdfgRegularize_h6e95ff9d_0_516 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_518)));
    __VdfgRegularize_h6e95ff9d_0_36 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_470)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[16U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_468) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[16U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[16U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_332 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_516)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[16U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_468) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_332) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[16U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[16U])))))));
    __VdfgRegularize_h6e95ff9d_0_68 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[17U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_470)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_465) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_36)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[17U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[17U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_334 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[17U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_516)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_465) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_334) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[17U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[17U]))))))));
    __VdfgRegularize_h6e95ff9d_0_466 = ((IData)(__VdfgRegularize_h6e95ff9d_0_68) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_470)));
    __VdfgRegularize_h6e95ff9d_0_514 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_516)));
    __VdfgRegularize_h6e95ff9d_0_35 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_466)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[18U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_464) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[18U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[18U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_336 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_514)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[18U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_464) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_336) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[18U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[18U])))))));
    __VdfgRegularize_h6e95ff9d_0_67 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[19U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_466)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_461) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_35)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[19U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[19U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[19U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_514)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_461) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[19U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[19U]))))))));
    __VdfgRegularize_h6e95ff9d_0_462 = ((IData)(__VdfgRegularize_h6e95ff9d_0_67) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_466)));
    __VdfgRegularize_h6e95ff9d_0_512 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_514)));
    __VdfgRegularize_h6e95ff9d_0_34 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_462)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[20U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[20U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[20U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_340 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_512)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[20U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_340) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[20U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[20U])))))));
    __VdfgRegularize_h6e95ff9d_0_66 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[21U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_462)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_457) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_34)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[21U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[21U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_342 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[21U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_512)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_457) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_342) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[21U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[21U]))))))));
    __VdfgRegularize_h6e95ff9d_0_458 = ((IData)(__VdfgRegularize_h6e95ff9d_0_66) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_462)));
    __VdfgRegularize_h6e95ff9d_0_510 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_512)));
    __VdfgRegularize_h6e95ff9d_0_33 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_458)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[22U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_456) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[22U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[22U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_510)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[22U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_456) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[22U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[22U])))))));
    __VdfgRegularize_h6e95ff9d_0_65 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[23U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_458)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_453) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_33)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[23U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[23U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[23U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_510)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_453) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[23U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[23U]))))))));
    __VdfgRegularize_h6e95ff9d_0_454 = ((IData)(__VdfgRegularize_h6e95ff9d_0_65) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_458)));
    __VdfgRegularize_h6e95ff9d_0_508 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_510)));
    __VdfgRegularize_h6e95ff9d_0_32 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_454)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[24U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_452) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[24U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[24U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_348 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_508)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[24U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_452) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_348) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[24U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[24U])))))));
    __VdfgRegularize_h6e95ff9d_0_64 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[25U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_454)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_449) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_32)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[25U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[25U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[25U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_508)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_449) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[25U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[25U]))))))));
    __VdfgRegularize_h6e95ff9d_0_450 = ((IData)(__VdfgRegularize_h6e95ff9d_0_64) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_454)));
    __VdfgRegularize_h6e95ff9d_0_506 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_508)));
    __VdfgRegularize_h6e95ff9d_0_31 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_450)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[26U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_448) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[26U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[26U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_506)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[26U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_448) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[26U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[26U])))))));
    __VdfgRegularize_h6e95ff9d_0_63 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[27U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_450)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_445) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_31)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[27U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[27U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_219))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[27U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_506)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_445) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_219) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[27U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[27U]))))))));
    __VdfgRegularize_h6e95ff9d_0_446 = ((IData)(__VdfgRegularize_h6e95ff9d_0_63) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_31) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_450)));
    __VdfgRegularize_h6e95ff9d_0_504 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_506)));
    __VdfgRegularize_h6e95ff9d_0_30 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_446)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[28U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_444) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[28U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[28U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_356 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_504)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[28U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_444) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_356) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[28U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[28U])))))));
    __VdfgRegularize_h6e95ff9d_0_62 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[29U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_446)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_30)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[29U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[29U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[29U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_504)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[29U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[29U]))))))));
    __VdfgRegularize_h6e95ff9d_0_442 = ((IData)(__VdfgRegularize_h6e95ff9d_0_62) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_446)));
    __VdfgRegularize_h6e95ff9d_0_502 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_504)));
    __VdfgRegularize_h6e95ff9d_0_29 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_442)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[30U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[30U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[30U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_360 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_502)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[30U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_360) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[30U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[30U])))))));
    __VdfgRegularize_h6e95ff9d_0_61 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[31U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_442)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_29)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[31U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[31U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[31U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_502)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[31U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[31U]))))))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]
            : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]
                : ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]
                        : ((IData)(__VdfgRegularize_h6e95ff9d_0_63)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]
                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]
                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_64)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]
                                        : ((IData)(__VdfgRegularize_h6e95ff9d_0_65)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]
                                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]
                                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_66)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_34)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_35)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_38)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]
                                                             : 
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_39)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_72)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]
                                                                : 
                                                               ((IData)(__VdfgRegularize_h6e95ff9d_0_40)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]
                                                                 : 
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]
                                                                        : 
                                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U] 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)))))))))))))))))))))))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_found_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
              | (IData)(__VdfgRegularize_h6e95ff9d_0_502)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]
                                                                        : 
                                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U] 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)))))))))))))))))))))))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_badvaddr = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_61)
             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[31U]
                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[31U])
             : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[30U]
                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[30U])
                 : ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[29U]
                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[29U])
                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[28U]
                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[28U])
                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_63)
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[27U]
                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[27U])
                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[26U]
                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[26U])
                                 : ((IData)(__VdfgRegularize_h6e95ff9d_0_64)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[25U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[25U])
                                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[24U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[24U])
                                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_65)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[23U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[23U])
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[22U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[22U])
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_66)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[21U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[21U])
                                                  : 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_34)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[20U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[20U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[19U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[19U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_35)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[18U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[18U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[17U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[17U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[16U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[16U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[15U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[15U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[14U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[14U])
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[13U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[13U])
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_38)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[12U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[12U])
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[11U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[11U])
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_39)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[10U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[10U])
                                                             : 
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_72)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[9U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[9U])
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_40)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[8U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[8U])
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[7U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[7U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[6U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[6U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[5U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[5U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[4U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[4U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[3U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[3U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[2U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[2U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[1U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[1U])
                                                                      : 
                                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[0U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[0U]) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77))))))))))))))))))))))))))))))))))) 
           << 0x0000000cU);
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_req_valid) {
        if ((IData)((8U == (0x00000018U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat 
                = (3U & ((0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q))
                          ? (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q 
                             >> 5U) : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q 
                                       >> 7U)));
        } else if ((IData)((0x00000010U == (0x00000018U 
                                            & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q)))) {
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__27__Vfuncout;
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__Vfuncout;
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                    = ((0xe0000000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q 
                                       << 4U)) | (0x1fffffffU 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q));
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat 
                    = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q 
                             >> 4U));
            } else if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                    = ((0xe0000000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q 
                                       << 4U)) | (0x1fffffffU 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q));
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat 
                    = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q 
                             >> 4U));
            } else {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb = 1U;
                if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT____Vcellinp__trans__tlb_resp_valid) {
                    if (((0x0cU <= (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps)) 
                         & (0x1fU >= (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps)))) {
                        core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask 
                            = VL_SHIFTR_III(32,32,6, 0xffffffffU, 
                                            (0x0000003fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps))));
                    }
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat 
                        = ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[31U]
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[31U])
                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[30U]
                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[30U])
                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[29U]
                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[29U])
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[28U]
                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[28U])
                                        : ((IData)(__VdfgRegularize_h6e95ff9d_0_63)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[27U]
                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[27U])
                                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[26U])
                                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_64)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[25U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[24U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_65)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[23U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[22U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_66)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[21U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_34)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[20U])
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[19U])
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_35)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[18U])
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[17U])
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[16U])
                                                             : 
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[15U])
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[14U])
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[13U])
                                                                : 
                                                               ((IData)(__VdfgRegularize_h6e95ff9d_0_38)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[12U])
                                                                 : 
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[11U])
                                                                  : 
                                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_39)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[10U])
                                                                   : 
                                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_72)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[9U])
                                                                    : 
                                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_40)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[8U])
                                                                     : 
                                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)))))))))))))))))))))))))))))))))));
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base 
                            & (~ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask)) 
                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                              & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask));
                    if (((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                         | ((IData)(__VdfgRegularize_h6e95ff9d_0_61) 
                            | (IData)(__VdfgRegularize_h6e95ff9d_0_442)))) {
                        if (((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[31U]
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[31U])
                              : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[30U]
                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[30U])
                                  : ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[29U]
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[29U])
                                      : ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[28U]
                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[28U])
                                          : ((IData)(__VdfgRegularize_h6e95ff9d_0_63)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[27U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[27U])
                                              : ((IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[26U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[26U])
                                                  : 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_64)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[25U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[25U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[24U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[24U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_65)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[23U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[23U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[22U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[22U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_66)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[21U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[21U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_34)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[20U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[20U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[19U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[19U])
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_35)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[18U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[18U])
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[17U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[17U])
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[16U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[16U])
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[15U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[15U])
                                                             : 
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[14U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[14U])
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[13U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[13U])
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_38)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[12U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[12U])
                                                                : 
                                                               ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[11U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[11U])
                                                                 : 
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_39)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[10U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[10U])
                                                                  : 
                                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_72)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[9U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[9U])
                                                                   : 
                                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_40)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[8U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[8U])
                                                                    : 
                                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[7U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[7U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[6U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[6U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[5U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[5U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[4U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[4U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[3U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[3U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[2U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[2U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[1U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[1U])
                                                                           : 
                                                                          (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[0U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[0U]) 
                                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)))))))))))))))))))))))))))))))))) {
                            if (((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q) 
                                 > ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[31U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[31U])
                                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[30U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[30U])
                                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[29U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[29U])
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[28U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[28U])
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_63)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[27U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[27U])
                                                  : 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[26U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_64)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[25U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[24U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_65)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[23U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[22U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_66)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[21U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_34)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[20U])
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[19U])
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_35)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[18U])
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[17U])
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[16U])
                                                             : 
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[15U])
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[14U])
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[13U])
                                                                : 
                                                               ((IData)(__VdfgRegularize_h6e95ff9d_0_38)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[12U])
                                                                 : 
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[11U])
                                                                  : 
                                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_39)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[10U])
                                                                   : 
                                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_72)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[9U])
                                                                    : 
                                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_40)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[8U])
                                                                     : 
                                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77))))))))))))))))))))))))))))))))))))) {
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 1U;
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = 7U;
                            } else if (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q)) 
                                        & (~ ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[31U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[31U])
                                               : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[30U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[30U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[29U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[29U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[28U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[28U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_63)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[27U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[27U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[26U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[26U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_64)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[25U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[25U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_32)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[24U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[24U])
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_65)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[23U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[23U])
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[22U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[22U])
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_66)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[21U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[21U])
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_34)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[20U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[20U])
                                                             : 
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[19U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[19U])
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[18U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[18U])
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[17U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[17U])
                                                                : 
                                                               ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[16U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[16U])
                                                                 : 
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[15U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[15U])
                                                                  : 
                                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[14U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[14U])
                                                                   : 
                                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[13U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[13U])
                                                                    : 
                                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_38)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[12U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[12U])
                                                                     : 
                                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[11U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[11U])
                                                                      : 
                                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_39)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[10U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[10U])
                                                                       : 
                                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_72)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[9U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[9U])
                                                                        : 
                                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_40)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[8U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[8U])
                                                                         : 
                                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[7U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[7U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[6U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[6U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[5U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[5U])
                                                                            : 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                                             ? 
                                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[4U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[4U])
                                                                             : 
                                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                                                              ? 
                                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[3U]
                                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[3U])
                                                                              : 
                                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                                               ? 
                                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[2U]
                                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[2U])
                                                                               : 
                                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                                                ? 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[1U]
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[1U])
                                                                                : 
                                                                               (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[0U]
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[0U]) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)))))))))))))))))))))))))))))))))))) {
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 1U;
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = 4U;
                            }
                        } else {
                            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 1U;
                            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code 
                                = (0x0000003fU & (0x00042043U 
                                                  >> 
                                                  ((IData)(6U) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q))));
                        }
                    } else {
                        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 1U;
                        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = 0x3fU;
                    }
                }
            }
        } else {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat 
                = (3U & ((0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q))
                          ? (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q 
                             >> 5U) : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q 
                                       >> 7U)));
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_resp_valid 
            = (1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb)) 
                     | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT____Vcellinp__trans__tlb_resp_valid)));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_resp_valid = 0U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_cacheable 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_resp_valid) 
           & (1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat)));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_badvaddr 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q;
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[31U]
                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[31U])
             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[30U]
                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[30U])
                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[29U]
                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[29U])
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[28U]
                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[28U])
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[27U]
                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[27U])
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[26U]
                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[26U])
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[25U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[25U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[24U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[24U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[23U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[23U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[22U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[22U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[21U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[21U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[20U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[20U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[19U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[19U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[18U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[18U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[17U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[17U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[16U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[16U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[15U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[15U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[14U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[14U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[13U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[13U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[12U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[12U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[11U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[11U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[10U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[10U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[9U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[9U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[8U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[8U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[7U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[7U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[6U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[6U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[5U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[5U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[4U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[4U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[3U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[3U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_154)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[2U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[2U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[1U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[1U])
                                                                      : 
                                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[0U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[0U]) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100))))))))))))))))))))))))))))))))))) 
           << 0x0000000cU);
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_req_valid) {
        if ((IData)((8U == (0x00000018U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q)))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat 
                = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q 
                         >> 5U));
        } else if ((IData)((0x00000010U == (0x00000018U 
                                            & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q)))) {
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__29__Vfuncout;
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__Vfuncout;
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat 
                    = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q 
                             >> 4U));
            } else if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat 
                    = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q 
                             >> 4U));
            } else {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb = 1U;
                if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT____Vcellinp__trans__tlb_resp_valid) {
                    if (((0x0cU <= (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w)) 
                         & (0x1fU >= (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w)))) {
                        core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask 
                            = VL_SHIFTR_III(32,32,6, 0xffffffffU, 
                                            (0x0000003fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w))));
                    }
                    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat 
                        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[31U]
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[31U])
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[30U]
                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[30U])
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[29U]
                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[29U])
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[28U]
                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[28U])
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[27U]
                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[27U])
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[26U])
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[25U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[24U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[23U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[22U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[21U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[19U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[18U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[17U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[16U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[15U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[14U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[13U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[12U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[11U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[10U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[9U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[8U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_154)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)))))))))))))))))))))))))))))))))));
                    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_found_w) {
                        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[31U]
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[31U])
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[30U]
                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[30U])
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[29U]
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[29U])
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[28U]
                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[28U])
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[27U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[27U])
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[26U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[26U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[25U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[25U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[24U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[24U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[23U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[23U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[22U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[22U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[21U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[21U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[20U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[20U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[19U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[19U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[18U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[18U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[17U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[17U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[16U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[16U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[15U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[15U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[14U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[14U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[13U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[13U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[12U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[12U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[11U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[11U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[10U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[10U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[9U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[9U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[8U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[8U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[7U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[7U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[6U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[6U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[5U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[5U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[4U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[4U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[3U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[3U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_154)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[2U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[2U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[1U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[1U])
                                                                           : 
                                                                          (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[0U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[0U]) 
                                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)))))))))))))))))))))))))))))))))) {
                            if (((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q) 
                                 > ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[31U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[31U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[30U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[30U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[29U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[29U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[28U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[28U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[27U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[27U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[26U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[25U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[24U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[23U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[22U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[21U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[19U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[18U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[17U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[16U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[15U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[14U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[13U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[12U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[11U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[10U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[9U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[8U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_154)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100))))))))))))))))))))))))))))))))))))) {
                                core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid = 1U;
                            }
                        } else {
                            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid = 1U;
                        }
                    } else {
                        core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid = 1U;
                    }
                }
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat 
                = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q 
                         >> 5U));
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_resp_valid 
            = (1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb)) 
                     | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT____Vcellinp__trans__tlb_resp_valid)));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_resp_valid = 0U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_req_valid 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid)) 
              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_req_valid_w 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w));
}

void Vcore_top_contract_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcore_top_contract_test_top___024root___eval_phase__act(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__act\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore_top_contract_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcore_top_contract_test_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcore_top_contract_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcore_top_contract_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__0(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__1(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__2(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__3(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__4(Vcore_top_contract_test_top___024root* vlSelf);

bool Vcore_top_contract_test_top___024root___eval_phase__nba(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__nba\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcore_top_contract_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__1(vlSelf);
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__2(vlSelf);
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__3(vlSelf);
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__4(vlSelf);
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__5(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcore_top_contract_test_top___024root___nba_sequent__TOP__6(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcore_top_contract_test_top___024root___nba_comb__TOP__0(vlSelf);
            }
        }
        Vcore_top_contract_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}
