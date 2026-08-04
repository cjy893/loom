// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vcore_top_contract_test_top__ConstPool__TABLE_hea82845a_0;
extern const VlWide<13>/*415:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0;
extern const VlWide<26>/*831:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0;

VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__2(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___stl_sequent__TOP__2\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable = 0;
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops);
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire = 0;
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop);
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready = 0;
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset = 0;
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0;
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask = 0;
    VlWide<13>/*415:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop;
    VL_ZERO_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop);
    VlWide<13>/*415:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop;
    VL_ZERO_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop);
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor = 0;
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
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0;
    QData/*47:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_57;
    __VdfgRegularize_h6e95ff9d_0_57 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_58;
    __VdfgRegularize_h6e95ff9d_0_58 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_59;
    __VdfgRegularize_h6e95ff9d_0_59 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_60;
    __VdfgRegularize_h6e95ff9d_0_60 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    __VdfgRegularize_h6e95ff9d_0_61 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_62;
    __VdfgRegularize_h6e95ff9d_0_62 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_95;
    __VdfgRegularize_h6e95ff9d_0_95 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_148;
    __VdfgRegularize_h6e95ff9d_0_148 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_483;
    __VdfgRegularize_h6e95ff9d_0_483 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_484;
    __VdfgRegularize_h6e95ff9d_0_484 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_485;
    __VdfgRegularize_h6e95ff9d_0_485 = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_516;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_516);
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_549;
    __VdfgRegularize_h6e95ff9d_0_549 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_550;
    __VdfgRegularize_h6e95ff9d_0_550 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_551;
    __VdfgRegularize_h6e95ff9d_0_551 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_596;
    __VdfgRegularize_h6e95ff9d_0_596 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_600;
    __VdfgRegularize_h6e95ff9d_0_600 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_604;
    __VdfgRegularize_h6e95ff9d_0_604 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_608;
    __VdfgRegularize_h6e95ff9d_0_608 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_612;
    __VdfgRegularize_h6e95ff9d_0_612 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_616;
    __VdfgRegularize_h6e95ff9d_0_616 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_656;
    __VdfgRegularize_h6e95ff9d_0_656 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_658;
    __VdfgRegularize_h6e95ff9d_0_658 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_660;
    __VdfgRegularize_h6e95ff9d_0_660 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_662;
    __VdfgRegularize_h6e95ff9d_0_662 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_664;
    __VdfgRegularize_h6e95ff9d_0_664 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_713;
    __VdfgRegularize_h6e95ff9d_0_713 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_714;
    __VdfgRegularize_h6e95ff9d_0_714 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_721;
    __VdfgRegularize_h6e95ff9d_0_721 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_722;
    __VdfgRegularize_h6e95ff9d_0_722 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_723;
    __VdfgRegularize_h6e95ff9d_0_723 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_724;
    __VdfgRegularize_h6e95ff9d_0_724 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_725;
    __VdfgRegularize_h6e95ff9d_0_725 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_726;
    __VdfgRegularize_h6e95ff9d_0_726 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_727;
    __VdfgRegularize_h6e95ff9d_0_727 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_728;
    __VdfgRegularize_h6e95ff9d_0_728 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_729;
    __VdfgRegularize_h6e95ff9d_0_729 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_730;
    __VdfgRegularize_h6e95ff9d_0_730 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_731;
    __VdfgRegularize_h6e95ff9d_0_731 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_732;
    __VdfgRegularize_h6e95ff9d_0_732 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_767;
    __VdfgRegularize_h6e95ff9d_0_767 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_774;
    __VdfgRegularize_h6e95ff9d_0_774 = 0;
    CData/*31:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<13>/*415:0*/ __Vtemp_13;
    VlWide<13>/*415:0*/ __Vtemp_118;
    VlWide<13>/*415:0*/ __Vtemp_119;
    VlWide<13>/*415:0*/ __Vtemp_120;
    VlWide<13>/*415:0*/ __Vtemp_121;
    VlWide<13>/*415:0*/ __Vtemp_122;
    VlWide<13>/*415:0*/ __Vtemp_123;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    IData/*31:0*/ __VExpandSel_WordIdx_4;
    IData/*31:0*/ __VExpandSel_LoShift_4;
    CData/*0:0*/ __VExpandSel_Aligned_4;
    IData/*31:0*/ __VExpandSel_HiShift_4;
    IData/*31:0*/ __VExpandSel_HiMask_4;
    // Body
    __VdfgRegularize_h6e95ff9d_0_616 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_620)));
    __VdfgRegularize_h6e95ff9d_0_732 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000022U)) 
                                               & (2U 
                                                  > (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733))) 
                                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_666)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[20U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_614) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[20U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[20U])))))));
    __VdfgRegularize_h6e95ff9d_0_30 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_616)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[20U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_614) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[20U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[20U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304)))))));
    __VdfgRegularize_h6e95ff9d_0_731 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000023U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_732))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_732)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[21U] 
                                                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_666)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_611) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_303) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_448) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[21U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[21U]))))))));
    __VdfgRegularize_h6e95ff9d_0_62 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[21U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_616)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_611) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_30)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[21U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[21U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_448 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_303))))))));
    __VdfgRegularize_h6e95ff9d_0_730 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000024U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_731))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_731)));
    __VdfgRegularize_h6e95ff9d_0_664 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_666)));
    __VdfgRegularize_h6e95ff9d_0_612 = ((IData)(__VdfgRegularize_h6e95ff9d_0_62) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_616)));
    __VdfgRegularize_h6e95ff9d_0_729 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000025U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_730))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_730)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_664)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[22U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_610) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_450) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[22U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[22U])))))));
    __VdfgRegularize_h6e95ff9d_0_29 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_612)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[22U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_610) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[22U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[22U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_450 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302)))))));
    __VdfgRegularize_h6e95ff9d_0_728 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000026U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_729))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_729)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[23U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_664)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_607) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_452) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[23U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[23U]))))))));
    __VdfgRegularize_h6e95ff9d_0_61 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[23U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_612)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_607) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_29)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[23U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[23U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_452 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301))))))));
    __VdfgRegularize_h6e95ff9d_0_727 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000027U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_728))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_728)));
    __VdfgRegularize_h6e95ff9d_0_662 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_664)));
    __VdfgRegularize_h6e95ff9d_0_608 = ((IData)(__VdfgRegularize_h6e95ff9d_0_61) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_612)));
    __VdfgRegularize_h6e95ff9d_0_726 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000028U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_727))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_727)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_662)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[24U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_606) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_454) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[24U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[24U])))))));
    __VdfgRegularize_h6e95ff9d_0_28 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_608)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[24U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_606) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[24U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[24U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_454 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300)))))));
    __VdfgRegularize_h6e95ff9d_0_725 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000029U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_726))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_726)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[25U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_662)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_603) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_456) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[25U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[25U]))))))));
    __VdfgRegularize_h6e95ff9d_0_60 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[25U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_608)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_603) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_28)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[25U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[25U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_456 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299))))))));
    __VdfgRegularize_h6e95ff9d_0_724 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002aU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_725))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_725)));
    __VdfgRegularize_h6e95ff9d_0_660 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_662)));
    __VdfgRegularize_h6e95ff9d_0_604 = ((IData)(__VdfgRegularize_h6e95ff9d_0_60) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_28) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_608)));
    __VdfgRegularize_h6e95ff9d_0_723 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002bU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_724))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_724)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_660)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[26U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_602) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_298) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_458) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[26U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[26U])))))));
    __VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_604)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[26U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_602) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[26U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[26U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_458 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_298)))))));
    __VdfgRegularize_h6e95ff9d_0_722 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002cU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_723))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_723)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[27U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_660)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_297) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[27U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[27U]))))))));
    __VdfgRegularize_h6e95ff9d_0_59 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[27U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_604)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_599) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_27)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[27U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[27U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_297))))))));
    __VdfgRegularize_h6e95ff9d_0_721 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002dU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_722))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_722)));
    __VdfgRegularize_h6e95ff9d_0_658 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_660)));
    __VdfgRegularize_h6e95ff9d_0_600 = ((IData)(__VdfgRegularize_h6e95ff9d_0_59) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_27) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_604)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_720 = (3U 
                                                  & (((IData)(
                                                              (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                               >> 0x0000002eU)) 
                                                      & (2U 
                                                         > (IData)(__VdfgRegularize_h6e95ff9d_0_721))) 
                                                     + (IData)(__VdfgRegularize_h6e95ff9d_0_721)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_658)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[28U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_598) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_296) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_462) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[28U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[28U])))))));
    __VdfgRegularize_h6e95ff9d_0_26 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_600)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[28U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_598) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[28U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[28U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_462 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_296)))))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable 
        = ((0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state)) 
           & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                  >> 0x0000000fU)) & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q)) 
                                      & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                             >> 8U)) 
                                         & ((~ ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_470) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_471)) 
                                                 & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head) 
                                                    == 
                                                    (0x0000001fU 
                                                     & (((IData)(1U) 
                                                         + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail)) 
                                                        & (- (IData)(
                                                                     (0x1fU 
                                                                      != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail)))))))) 
                                                | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_taken_w))) 
                                            & ((~ (0U 
                                                   != 
                                                   (3U 
                                                    & (- (IData)(
                                                                 ((3U 
                                                                   & ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                                                        >> 1U) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228)) 
                                                                      + 
                                                                      (1U 
                                                                       & (- (IData)(
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                                  > 
                                                                  (3U 
                                                                   & (((IData)(
                                                                               (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                                                >> 0x0000002fU)) 
                                                                       & (2U 
                                                                          > (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_720))) 
                                                                      + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_720))))))))) 
                                               & ((~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask))) 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unique_dispatch_ready))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[29U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_658)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_595) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_464) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[29U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[29U]))))))));
    __VdfgRegularize_h6e95ff9d_0_58 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[29U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_600)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_595) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_26)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[29U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[29U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_464 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295))))))));
    __VdfgRegularize_h6e95ff9d_0_148 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_214) 
                                        & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable));
    __VdfgRegularize_h6e95ff9d_0_656 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_658)));
    __VdfgRegularize_h6e95ff9d_0_596 = ((IData)(__VdfgRegularize_h6e95ff9d_0_58) 
                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_600)));
    __VdfgRegularize_h6e95ff9d_0_484 = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready) 
                                              >> ((IData)(__VdfgRegularize_h6e95ff9d_0_148) 
                                                  & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q)) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103) 
                                                        & ((4U 
                                                            == 
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                           & ((1U 
                                                               != 
                                                               (0x0000000fU 
                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready))))))));
    __VdfgRegularize_h6e95ff9d_0_485 = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready) 
                                              >> ((IData)(__VdfgRegularize_h6e95ff9d_0_148) 
                                                  & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q)) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103) 
                                                        & ((1U 
                                                            == 
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready)))))));
    __VdfgRegularize_h6e95ff9d_0_483 = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                                              >> ((IData)(__VdfgRegularize_h6e95ff9d_0_148) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q) 
                                                          | ((1U 
                                                              == 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                             | (4U 
                                                                == 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))))) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291))))));
    __VdfgRegularize_h6e95ff9d_0_95 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_148)
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                                                  ? 
                                                 (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103) 
                                                   & ((1U 
                                                       == 
                                                       (0x0000000fU 
                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))
                                                       ? 
                                                      ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready) 
                                                       & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))
                                                        ? 
                                                       ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready) 
                                                        & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291) 
                                                        & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable)))))))
                                              : (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))));
    __VdfgRegularize_h6e95ff9d_0_551 = (((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                                          ? 1U : ((
                                                   (1U 
                                                    == 
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready)))))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))
                                                     ? 
                                                    (1U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready)))))
                                                     : 
                                                    (1U 
                                                     & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)))))) 
                                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103))))) 
                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_148))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_656)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[30U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_294) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_466) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[30U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[30U])))))));
    __VdfgRegularize_h6e95ff9d_0_25 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_596)) 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[30U] 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594) 
                                                & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[30U] 
                                                    | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                       == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[30U])) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_466 
                                                      == 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_294)))))));
    __VdfgRegularize_h6e95ff9d_0_550 = ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_95)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_337));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[31U] 
                                                    & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_656)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_592) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_293) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_468) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[31U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[31U]))))))));
    __VdfgRegularize_h6e95ff9d_0_57 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[31U] 
                                          & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_596)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_592) 
                                                & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_25)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[31U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[31U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_468 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_293))))))));
    if (__VdfgRegularize_h6e95ff9d_0_550) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block 
            = (1U & ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_95)
                      : ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363)) 
                         | ((1U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                   >> 4U)))
                             ? ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_485)) 
                                | (IData)(__VdfgRegularize_h6e95ff9d_0_95))
                             : ((4U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                           >> 4U)))
                                 ? ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_484)) 
                                    | (IData)(__VdfgRegularize_h6e95ff9d_0_95))
                                 : ((2U != (0x0000000fU 
                                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                               >> 4U))) 
                                    | ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_483)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_95))))))));
        __VdfgRegularize_h6e95ff9d_0_549 = (1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363)
                                                      ? 
                                                     ((1U 
                                                       == 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                           >> 4U)))
                                                       ? 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_485) 
                                                       | ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
                                                          >> 1U))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                            >> 4U)))
                                                        ? 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_484) 
                                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
                                                           >> 1U))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                             >> 4U)))
                                                         ? 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_483) 
                                                         | ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
                                                            >> 1U))
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
                                                         >> 1U))))
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
                                                      >> 1U))));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block 
            = (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_95));
        __VdfgRegularize_h6e95ff9d_0_549 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
                                                  >> 1U));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_found_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
              | (IData)(__VdfgRegularize_h6e95ff9d_0_656)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]
                                                                        : 
                                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U] 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)))))))))))))))))))))))))))))))))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_57)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]
            : ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]
                : ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_26)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]
                        : ((IData)(__VdfgRegularize_h6e95ff9d_0_59)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]
                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]
                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]
                                        : ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]
                                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]
                                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]
                                                                        : 
                                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U] 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)))))))))))))))))))))))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_lane_eligible) 
              & (- (IData)(((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block)) 
                            & Vcore_top_contract_test_top__ConstPool__TABLE_hea82845a_0
                            [((((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids) 
                                                & (((0x0fU 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143)) 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101[7U] 
                                                       >> 0x0000001bU)) 
                                                   << 1U))) 
                                | ((0x0fU == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_353))) 
                               << 4U) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_lane_eligible) 
                                          << 2U) | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids)))])))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rob_inst__enq_partial_stall 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_551) 
              | (IData)(__VdfgRegularize_h6e95ff9d_0_549)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_549) 
            << 1U) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_551)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_xcpt_valid = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[31U]
                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[31U])
             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[30U]
                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[30U])
                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[29U]
                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[29U])
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[28U]
                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[28U])
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[27U]
                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[27U])
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[26U]
                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[26U])
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[25U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[25U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[24U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[24U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[23U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[23U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[22U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[22U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[21U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[21U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[20U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[20U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[19U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[19U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[18U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[18U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[17U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[17U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[16U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[16U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[15U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[15U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[14U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[14U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[13U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[13U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[12U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[12U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[11U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[11U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[10U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[10U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[9U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[9U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[8U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[8U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[7U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[7U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[6U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[6U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[5U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[5U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[4U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[4U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[3U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[3U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[2U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[2U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[1U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[1U])
                                                                      : 
                                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[0U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[0U]) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97))))))))))))))))))))))))))))))))))) 
           << 0x0000000cU);
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_req_valid) {
        if ((IData)((8U == (0x00000018U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q)))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_mat 
                = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q 
                         >> 5U));
        } else if ((IData)((0x00000010U == (0x00000018U 
                                            & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q)))) {
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw0_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__Vfuncout;
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_dmw1_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__Vfuncout;
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
                        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[31U]
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[31U])
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[30U]
                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[30U])
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[29U]
                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[29U])
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[28U]
                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[28U])
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[27U]
                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[27U])
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[26U])
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[25U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[24U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[23U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[22U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[21U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[19U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[18U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[17U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[16U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[15U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[14U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[13U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[12U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[11U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[10U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[9U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[8U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)))))))))))))))))))))))))))))))))));
                    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_found_w) {
                        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[31U]
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[31U])
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[30U]
                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[30U])
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[29U]
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[29U])
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[28U]
                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[28U])
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[27U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[27U])
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[26U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[26U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[25U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[25U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[24U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[24U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[23U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[23U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[22U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[22U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[21U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[21U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[20U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[20U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[19U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[19U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[18U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[18U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[17U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[17U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[16U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[16U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[15U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[15U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[14U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[14U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[13U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[13U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[12U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[12U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[11U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[11U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[10U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[10U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[9U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[9U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[8U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[8U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[7U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[7U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[6U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[6U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[5U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[5U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[4U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[4U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[3U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[3U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[2U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[2U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[1U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[1U])
                                                                           : 
                                                                          (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[0U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[0U]) 
                                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)))))))))))))))))))))))))))))))))) {
                            if (((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__csr_crmd_q) 
                                 > ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[31U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[31U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[30U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[30U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[29U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[29U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[28U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[28U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[27U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[27U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[26U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[25U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[24U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[23U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[22U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[21U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[19U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[18U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[17U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[16U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[15U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[14U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[13U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[12U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[11U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[10U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[9U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[8U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97))))))))))))))))))))))))))))))))))))) {
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
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_57)
             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[31U]
                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[31U])
             : ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[30U]
                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[30U])
                 : ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[29U]
                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[29U])
                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_26)
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[28U]
                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[28U])
                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_59)
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[27U]
                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[27U])
                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[26U]
                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[26U])
                                 : ((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[25U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[25U])
                                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[24U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[24U])
                                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[23U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[23U])
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[22U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[22U])
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[21U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[21U])
                                                  : 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[20U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[20U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[19U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[19U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[18U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[18U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[17U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[17U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[16U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[16U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[15U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[15U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[14U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[14U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[13U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[13U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[12U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[12U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[11U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[11U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[10U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[10U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[9U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[9U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[8U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[8U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[7U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[7U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[6U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[6U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[5U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[5U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[4U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[4U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[3U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[3U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[2U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[2U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[1U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[1U])
                                                                      : 
                                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[0U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[0U]) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73))))))))))))))))))))))))))))))))))) 
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
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw0_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw0_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__Vfuncout;
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__plv 
                = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__vaddr_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q 
                         >> 3U));
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv0 
                = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_vseg 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_dmw1_q 
                   >> 0x1dU);
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_vseg) 
                    == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__vaddr_vseg)) 
                   & (((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__plv)) 
                       & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv0)) 
                      | ((3U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__plv)) 
                         & (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv3))));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__dmw1_hit 
                = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__Vfuncout;
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
                        = ((IData)(__VdfgRegularize_h6e95ff9d_0_57)
                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[31U]
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[31U])
                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[30U]
                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[30U])
                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[29U]
                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[29U])
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_26)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[28U]
                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[28U])
                                        : ((IData)(__VdfgRegularize_h6e95ff9d_0_59)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[27U]
                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[27U])
                                            : ((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[26U])
                                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[25U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[24U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[23U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[22U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[21U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[19U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[18U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[17U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[16U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[15U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[14U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[13U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[12U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[11U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[10U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[9U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[8U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)))))))))))))))))))))))))))))))))));
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base 
                            & (~ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask)) 
                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                              & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask));
                    if (((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                         | ((IData)(__VdfgRegularize_h6e95ff9d_0_57) 
                            | (IData)(__VdfgRegularize_h6e95ff9d_0_596)))) {
                        if (((IData)(__VdfgRegularize_h6e95ff9d_0_57)
                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[31U]
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[31U])
                              : ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[30U]
                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[30U])
                                  : ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[29U]
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[29U])
                                      : ((IData)(__VdfgRegularize_h6e95ff9d_0_26)
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[28U]
                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[28U])
                                          : ((IData)(__VdfgRegularize_h6e95ff9d_0_59)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[27U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[27U])
                                              : ((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[26U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[26U])
                                                  : 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[25U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[25U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[24U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[24U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[23U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[23U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[22U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[22U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[21U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[21U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[20U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[20U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[19U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[19U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[18U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[18U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[17U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[17U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[16U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[16U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[15U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[15U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[14U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[14U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[13U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[13U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[12U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[12U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[11U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[11U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[10U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[10U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[9U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[9U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[8U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[8U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[7U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[7U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[6U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[6U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[5U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[5U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[4U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[4U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[3U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[3U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[2U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[2U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[1U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[1U])
                                                                           : 
                                                                          (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[0U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[0U]) 
                                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)))))))))))))))))))))))))))))))))) {
                            if (((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q) 
                                 > ((IData)(__VdfgRegularize_h6e95ff9d_0_57)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[31U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[31U])
                                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[30U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[30U])
                                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[29U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[29U])
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_26)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[28U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[28U])
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_59)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[27U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[27U])
                                                  : 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[26U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[25U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[24U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[23U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[22U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[21U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[19U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[19U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[18U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[18U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[17U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[17U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[16U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[16U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[15U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[15U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[14U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[14U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[13U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[13U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[12U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[12U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[11U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[11U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[10U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[10U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[9U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[9U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[8U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[8U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[7U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[7U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[6U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[6U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[5U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[5U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[4U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[4U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[3U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[3U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[2U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[2U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73))))))))))))))))))))))))))))))))))))) {
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 1U;
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = 7U;
                            } else if (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q)) 
                                        & (~ ((IData)(__VdfgRegularize_h6e95ff9d_0_57)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[31U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[31U])
                                               : ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[30U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[30U])
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[29U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[29U])
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_26)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[28U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[28U])
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_59)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[27U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[27U])
                                                      : 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[26U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[26U])
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[25U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[25U])
                                                        : 
                                                       ((IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[24U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[24U])
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[23U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[23U])
                                                          : 
                                                         ((IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[22U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[22U])
                                                           : 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_62)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[21U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[21U])
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[20U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[20U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                              ? 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[19U]
                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[19U])
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                               ? 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[18U]
                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[18U])
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[17U]
                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[17U])
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[16U]
                                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[16U])
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[15U]
                                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[15U])
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[14U]
                                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[14U])
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[13U]
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[13U])
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[12U]
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[12U])
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[11U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[11U])
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[10U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[10U])
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                                        ? 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[9U]
                                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[9U])
                                                                        : 
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                                         ? 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[8U]
                                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[8U])
                                                                         : 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                          ? 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[7U]
                                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[7U])
                                                                          : 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[6U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[6U])
                                                                           : 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[5U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[5U])
                                                                            : 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                             ? 
                                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[4U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[4U])
                                                                             : 
                                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                              ? 
                                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[3U]
                                                                               : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[3U])
                                                                              : 
                                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                               ? 
                                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[2U]
                                                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[2U])
                                                                               : 
                                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                                ? 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[1U]
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[1U])
                                                                                : 
                                                                               (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[0U]
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[0U]) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)))))))))))))))))))))))))))))))))))) {
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed = 0U;
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed) 
               | (3U & ((IData)(1U) << (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fe_idx)))));
    }
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed) 
               | (3U & ((IData)(1U) << (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fe_idx) 
                                              >> 1U)))));
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire 
        = (((IData)((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire) 
                      >> 1U) & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101[7U] 
                                >> 0x0000001bU))) << 1U) 
           | (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire) 
                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[7U] 
                       >> 0x0000001bU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid));
    __VdfgRegularize_h6e95ff9d_0_767 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__state)) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_req_valid 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__check_resp_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_resp_valid) 
           & (1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q)) 
           & ((3U == (3U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_finished_q) 
                            | ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_valid)) 
                               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed))))) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask 
        = ((0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask)) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask));
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask 
            = (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask) 
                              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__alloc_mask)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask 
        = ((0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask)) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask) 
              << 4U));
    if ((2U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask 
            = (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask) 
                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__alloc_mask) 
                                 >> 4U)));
    }
    __VdfgRegularize_h6e95ff9d_0_774 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_767) 
                                               & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U] 
                                                     >> 0x0000001bU))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771 = (((IData)(__VdfgRegularize_h6e95ff9d_0_767) 
                                                   & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_req_valid_w 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__check_resp_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_paddr 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_mat 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_mat;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_cacheable 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_cacheable;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_code 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_badvaddr 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_badvaddr;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_valid 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_tag_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_access 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q;
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_paddr 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_paddr_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_mat 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_mat_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_cacheable 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_cacheable_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_code 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_code_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_badvaddr 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_badvaddr_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_valid 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_valid_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_tag_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_access 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_access_q;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_valid 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & ((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)) 
              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__check_resp_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__deq_count 
        = (3U & ((VL_LTES_III(32, 2U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__count_q))
                   ? 2U : (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__count_q)) 
                 & (- (IData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U]) 
           | (0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U] 
        = ((0xcfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U]) 
           | (0x30000000U & (((- (IData)((1U & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q) 
                                                   >> 3U))))) 
                              | ((4U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q))
                                  ? (1U & (- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q) 
                                                          >> 1U))))))
                                  : 2U)) << 0x0000001cU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U]) 
           | (((0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                               << 2U)) | (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask))) 
              << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[8U] 
        = ((((0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                             << 2U)) | (0x0000000fU 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask))) 
            >> 2U) | ((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                        << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                                                   >> 0x0000001eU)) 
                       | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                         << 2U))) << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[9U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[10U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[11U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[12U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[13U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[14U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[15U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[16U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[17U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[18U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[19U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                                       >> 0x0000001eU)) 
                                                   | (0x3ffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U]) 
           | ((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                           >> 0x0000001eU)) 
               | (0x3ffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                 << 2U))) >> 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U] 
        = ((0xcfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U]) 
           | (0x30000000U & ((((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143))
                                ? (1U & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143) 
                                                        >> 1U))))))
                                : 2U) | (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143) 
                                                        >> 3U)))))) 
                             << 0x0000001cU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U]) 
           | (((0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[21U] 
                               << 2U)) | (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask) 
                                             >> 4U))) 
              << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[21U] 
        = ((((0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[21U] 
                             << 2U)) | (0x0000000fU 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask) 
                                           >> 4U))) 
            >> 2U) | ((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                                        << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[21U] 
                                                   >> 0x0000001eU)) 
                       | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                                         << 2U))) << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[22U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[21U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[23U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[24U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                                        << 2U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[25U] 
        = (((((0x0000000cU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                              << 2U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                               << 2U))) >> 2U) | (0xc0000000U 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__br_snapshot_en 
        = ((2U & (((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                    ? ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                       & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U] 
                           >> 0x0000001bU) & ((IData)(__VdfgRegularize_h6e95ff9d_0_767) 
                                              >> 1U)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_774) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_774)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_owner_cacop_q)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[8U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[9U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[9U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[10U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[10U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[11U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[11U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[12U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[13U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[14U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[14U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[15U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[15U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[16U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[17U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[18U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[19U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[22U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[23U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[24U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[25U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U];
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire)));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[4U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[5U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[6U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[8U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[9U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[10U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[11U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[12U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[13U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[13U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[14U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[14U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[15U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[15U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[16U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[16U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[17U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[17U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[18U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[18U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[19U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[19U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[21U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[22U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[22U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[23U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[23U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[24U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[24U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[25U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[25U];
    }
    if ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
                                 << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
                                           >> 0x0000001eU)) 
                               & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                   << 0x00000017U) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                     >> 9U)))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next 
            = (2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next));
    }
    __Vtemp_10 = (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
                                             >> 0x0000001eU)) 
                                 & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                        << 0x00000013U) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                          >> 0x0000000dU)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U]) 
           | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
                 << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
                           >> 0x0000001eU)) & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x00000013U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 0x0000000dU)))) 
              << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U]) 
           | (__Vtemp_10 >> 2U));
    if ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                                 << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U] 
                                           >> 0x0000001eU)) 
                               & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                   << 0x00000017U) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                     >> 9U)))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next 
            = (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next));
    }
    __Vtemp_11 = (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                                   << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U] 
                                             >> 0x0000001eU)) 
                                 & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                        << 0x00000013U) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                          >> 0x0000000dU)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U]) 
           | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                 << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[20U] 
                           >> 0x0000001eU)) & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x00000013U) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 0x0000000dU)))) 
              << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U]) 
           | (__Vtemp_11 >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150 = (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                         & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_768)) 
                                                            >> 1U)))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                      >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot 
        = (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match = 0U;
    VL_ASSIGN_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    if (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_access)) 
         & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match 
            = (((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                   [(((IData)(0x0000020cU) + (0x00003fffU 
                                              & ((IData)(0x0000020dU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                     >> 5U)] >> (0x0000001fU & ((IData)(0x0000020cU) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [(((IData)(0x0000020aU) + (0x00003fffU 
                                                & ((IData)(0x0000020dU) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                       >> 5U)] >> (0x0000001fU & ((IData)(0x0000020aU) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))) 
                 & ((0x0000003fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x00000094U) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))
                                      ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                              [(((IData)(0x00000099U) 
                                                 + 
                                                 (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                                >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000094U) 
                                                      + 
                                                      (0x00003fffU 
                                                       & ((IData)(0x0000020dU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                       [(((IData)(0x00000094U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x0000020dU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                         >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x00000094U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x0000020dU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                    == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag))) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) {
            __VExpandSel_WordIdx_3 = (0x000001ffU & 
                                      (((IData)(0x0000020dU) 
                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)) 
                                       >> 5U));
            __VExpandSel_LoShift_3 = (0x0000001fU & 
                                      ((IData)(0x0000020dU) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)));
            __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
            if (__VExpandSel_Aligned_3) {
                __VExpandSel_HiShift_3 = 0U;
                __VExpandSel_HiMask_3 = 0U;
            } else {
                __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                          - __VExpandSel_LoShift_3);
                __VExpandSel_HiMask_3 = 0xffffffffU;
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[0U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [__VExpandSel_WordIdx_3] >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[1U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[2U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[3U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[4U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[5U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(6U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[6U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(7U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(6U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(8U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(7U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(9U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(8U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[9U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000aU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(9U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[10U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000bU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000aU) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[11U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000cU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000bU) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[12U] 
                = (((((0x000000faU <= __VExpandSel_WordIdx_3)
                       ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000dU) + __VExpandSel_WordIdx_3)]) 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000cU) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U] 
                = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U]) 
                   | (((((0U == (0x0000001fU & ((IData)(0x000000feU) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))
                          ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                  [(((IData)(0x00000101U) 
                                     + (0x00003fffU 
                                        & ((IData)(0x0000020dU) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x000000feU) 
                                                      + 
                                                      (0x00003fffU 
                                                       & ((IData)(0x0000020dU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                           [(((IData)(0x000000feU) 
                              + (0x00003fffU & ((IData)(0x0000020dU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x000000feU) 
                                            + (0x00003fffU 
                                               & ((IData)(0x0000020dU) 
                                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))) 
                       & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                              << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                 >> 0x0000000dU)))) 
                      << 0x0000001eU));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U] 
                = ((0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U]) 
                   | (3U & (((((0U == (0x0000001fU 
                                       & ((IData)(0x000000feU) 
                                          + (0x00003fffU 
                                             & ((IData)(0x0000020dU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))
                                ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                        [(((IData)(0x00000101U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x0000020dU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(0x000000feU) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x000000feU) 
                                    + (0x00003fffU 
                                       & ((IData)(0x0000020dU) 
                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x000000feU) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))) 
                             & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                    << 0x00000013U) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                      >> 0x0000000dU)))) 
                            >> 2U)));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot 
        = (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match = 0U;
    VL_ASSIGN_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    if (((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_access)) 
         & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match 
            = (((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                   [(((IData)(0x000001eaU) + (0x00001fffU 
                                              & ((IData)(0x000001ebU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                     >> 5U)] >> (0x0000001fU & ((IData)(0x000001eaU) 
                                                + (0x00001fffU 
                                                   & ((IData)(0x000001ebU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [(((IData)(0x000001c5U) + (0x00001fffU 
                                                & ((IData)(0x000001ebU) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                       >> 5U)] >> (0x0000001fU & ((IData)(0x000001c5U) 
                                                  + 
                                                  (0x00001fffU 
                                                   & ((IData)(0x000001ebU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))) 
                 & ((0x0000003fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x0000009aU) 
                                                + (0x00001fffU 
                                                   & ((IData)(0x000001ebU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))
                                      ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                              [(((IData)(0x0000009fU) 
                                                 + 
                                                 (0x00001fffU 
                                                  & ((IData)(0x000001ebU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                                >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0000009aU) 
                                                      + 
                                                      (0x00001fffU 
                                                       & ((IData)(0x000001ebU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                       [(((IData)(0x0000009aU) 
                                          + (0x00001fffU 
                                             & ((IData)(0x000001ebU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                         >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x0000009aU) 
                                           + (0x00001fffU 
                                              & ((IData)(0x000001ebU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                    == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag))) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed) 
                      >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match) {
            __VExpandSel_WordIdx_4 = (0x000000ffU & 
                                      (((IData)(0x000001ebU) 
                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)) 
                                       >> 5U));
            __VExpandSel_LoShift_4 = (0x0000001fU & 
                                      ((IData)(0x000001ebU) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)));
            __VExpandSel_Aligned_4 = (0U == __VExpandSel_LoShift_4);
            if (__VExpandSel_Aligned_4) {
                __VExpandSel_HiShift_4 = 0U;
                __VExpandSel_HiMask_4 = 0U;
            } else {
                __VExpandSel_HiShift_4 = ((IData)(0x00000020U) 
                                          - __VExpandSel_LoShift_4);
                __VExpandSel_HiMask_4 = 0xffffffffU;
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[0U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [__VExpandSel_WordIdx_4] >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[1U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[2U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[3U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(4U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[4U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(5U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(4U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[5U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(6U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(5U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[6U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(7U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(6U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(8U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(7U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(9U) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(8U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[9U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000aU) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(9U) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[10U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000bU) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000aU) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[11U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000cU) + __VExpandSel_WordIdx_4)] 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000bU) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[12U] 
                = (((((0x000000e9U <= __VExpandSel_WordIdx_4)
                       ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000dU) + __VExpandSel_WordIdx_4)]) 
                     << __VExpandSel_HiShift_4) & __VExpandSel_HiMask_4) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000cU) + __VExpandSel_WordIdx_4)] 
                      >> __VExpandSel_LoShift_4));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U] 
                = ((0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U]) 
                   | (((((0U == (0x0000001fU & ((IData)(0x000000feU) 
                                                + (0x00001fffU 
                                                   & ((IData)(0x000001ebU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))
                          ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                  [(((IData)(0x00000101U) 
                                     + (0x00001fffU 
                                        & ((IData)(0x000001ebU) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x000000feU) 
                                                      + 
                                                      (0x00001fffU 
                                                       & ((IData)(0x000001ebU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                           [(((IData)(0x000000feU) 
                              + (0x00001fffU & ((IData)(0x000001ebU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x000000feU) 
                                            + (0x00001fffU 
                                               & ((IData)(0x000001ebU) 
                                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))) 
                       & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                              << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                 >> 0x0000000dU)))) 
                      << 0x0000001eU));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U] 
                = ((0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U]) 
                   | (3U & (((((0U == (0x0000001fU 
                                       & ((IData)(0x000000feU) 
                                          + (0x00001fffU 
                                             & ((IData)(0x000001ebU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))
                                ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                        [(((IData)(0x00000101U) 
                                           + (0x00001fffU 
                                              & ((IData)(0x000001ebU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(0x000000feU) 
                                               + (0x00001fffU 
                                                  & ((IData)(0x000001ebU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                 [(((IData)(0x000000feU) 
                                    + (0x00001fffU 
                                       & ((IData)(0x000001ebU) 
                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x000000feU) 
                                                  + 
                                                  (0x00001fffU 
                                                   & ((IData)(0x000001ebU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))) 
                             & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                    << 0x00000013U) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                      >> 0x0000000dU)))) 
                            >> 2U)));
        }
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask = 0ULL;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec;
    {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 1U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 2U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 3U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 4U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 5U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 6U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 7U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 8U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 9U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x10U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x11U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x12U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x13U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x14U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x15U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x16U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x17U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x18U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x19U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x20U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x21U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x22U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x23U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x24U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x25U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x26U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x27U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x28U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x29U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel0;
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel0: ;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder));
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)))))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)))));
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
        = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
           & (~ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask));
    {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 1U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 2U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 3U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 4U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 5U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 6U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 7U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 8U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 9U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x0fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x10U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x11U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x12U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x13U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x14U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x15U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x16U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x17U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x18U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x19U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x1fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x20U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x21U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x22U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x23U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x24U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x25U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x26U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x27U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x28U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x29U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2aU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2bU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2cU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2dU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2eU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec 
                           >> 0x2fU)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel1;
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel1: ;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder) 
              << 6U));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                 >> 6U)))))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                      >> 6U)))));
        }
    }
    __VdfgRegularize_h6e95ff9d_0_714 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) 
                                        | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match));
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
    if ((0x00000100U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U])) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q
            [(3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[10U] 
                    >> 5U))];
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
             & (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all)) 
            | core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask) 
           | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next 
        = (0x0000fffffffffffeULL & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772 = (0x0000003fU 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))))));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match) {
        __Vtemp_13[0U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[0U];
        __Vtemp_13[1U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[1U];
        __Vtemp_13[2U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[2U];
        __Vtemp_13[3U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[3U];
        __Vtemp_13[4U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[4U];
        __Vtemp_13[5U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[5U];
        __Vtemp_13[6U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[6U];
        __Vtemp_13[7U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U];
        __Vtemp_13[8U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U];
        __Vtemp_13[9U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[9U];
        __Vtemp_13[10U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[10U];
        __Vtemp_13[11U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[11U];
        __Vtemp_13[12U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[12U];
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) {
        __Vtemp_13[0U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[0U];
        __Vtemp_13[1U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[1U];
        __Vtemp_13[2U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[2U];
        __Vtemp_13[3U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[3U];
        __Vtemp_13[4U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[4U];
        __Vtemp_13[5U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[5U];
        __Vtemp_13[6U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[6U];
        __Vtemp_13[7U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U];
        __Vtemp_13[8U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U];
        __Vtemp_13[9U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[9U];
        __Vtemp_13[10U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[10U];
        __Vtemp_13[11U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[11U];
        __Vtemp_13[12U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[12U];
    } else {
        VL_ASSIGN_W(416, __Vtemp_13, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_code)) 
                    << 0x00000021U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_badvaddr))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[1U] 
        = ((__Vtemp_13[0U] << 7U) | (IData)(((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_code)) 
                                               << 0x00000021U) 
                                              | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_badvaddr))) 
                                             >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[2U] 
        = ((__Vtemp_13[0U] >> 0x00000019U) | (__Vtemp_13[1U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[3U] 
        = ((__Vtemp_13[1U] >> 0x00000019U) | (__Vtemp_13[2U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[4U] 
        = ((__Vtemp_13[2U] >> 0x00000019U) | (__Vtemp_13[3U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[5U] 
        = ((__Vtemp_13[3U] >> 0x00000019U) | (__Vtemp_13[4U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[6U] 
        = ((__Vtemp_13[4U] >> 0x00000019U) | (__Vtemp_13[5U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[7U] 
        = ((__Vtemp_13[5U] >> 0x00000019U) | (__Vtemp_13[6U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[8U] 
        = ((__Vtemp_13[6U] >> 0x00000019U) | (__Vtemp_13[7U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[9U] 
        = ((__Vtemp_13[7U] >> 0x00000019U) | (__Vtemp_13[8U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[10U] 
        = ((__Vtemp_13[8U] >> 0x00000019U) | (__Vtemp_13[9U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[11U] 
        = ((__Vtemp_13[9U] >> 0x00000019U) | (__Vtemp_13[10U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[12U] 
        = ((__Vtemp_13[10U] >> 0x00000019U) | (__Vtemp_13[11U] 
                                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[13U] 
        = ((__Vtemp_13[11U] >> 0x00000019U) | (__Vtemp_13[12U] 
                                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U] 
        = ((0x00000080U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U]) 
           | (0x000000ffU & (__Vtemp_13[12U] >> 0x00000019U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U] 
        = ((0x0000007fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U]) 
           | (0x000000ffU & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid) 
                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_valid) 
                                 & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_714)))) 
                             << 7U)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready 
        = (1U & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_valid) 
                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q[14U] 
                        >> 7U) & (IData)(__VdfgRegularize_h6e95ff9d_0_714)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_717 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                >> 5U)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                           >> 5U)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                          >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_718 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338))])));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151 
            = (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                              >> 6U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766 
            = (0x00000fffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_717) 
                               << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_718)));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151 
            = (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772) 
                              >> 6U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766 
            = (0x00000fffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                      >> 0x00000012U)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_resp_accept 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready) 
           & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_ready 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_owner_cacop_q)
            ? (2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q))
            : (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)));
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
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[1U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[2U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U] 
        = ((0xfffff000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U]) 
           | (0x00000fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U] 
        = ((0x00000fffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U]) 
           | ((IData)((0x0000003fffffffffULL & ((1U 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_719) 
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
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))))))))) 
                                                                           << 9U) 
                                                                          | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 
                                                                                >> 0x0000000aU))])))))))))
                                                 : 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                  << 0x00000034U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U])) 
                                                     << 0x00000014U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U])) 
                                                       >> 0x0000000cU)))))) 
              << 0x0000000cU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U] 
        = ((0xfffc0000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U]) 
           | (((IData)((0x0000003fffffffffULL & ((1U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x0000003fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_719) 
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
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))))))))) 
                                                                            << 9U) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 
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
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_719) 
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
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339))))))))) 
                                                                             << 9U) 
                                                                            | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[0U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_339 
                                                                                >> 6U)))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 
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
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U] 
        = ((0x0003ffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[4U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[5U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[5U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[5U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[6U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[6U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[6U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[7U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[8U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[8U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[8U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[9U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[9U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[9U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[10U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[10U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[10U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[11U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[11U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[11U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[12U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[12U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[12U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[13U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[14U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[14U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[14U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[15U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[15U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[15U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
        = ((0xfffff000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U]) 
           | (0x00000fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
        = ((0x00000fffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U]) 
           | ((IData)((0x0000003fffffffffULL & ((2U 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (0x0000003fU 
                                                                   & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                       >> 6U) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_718) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_717) 
                                                                        << 0x00000014U)) 
                                                                    | ((0x000ffc00U 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                           >> 0x0000000cU)) 
                                                                       | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))))))) 
                                                                           << 9U) 
                                                                          | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU))])))))))))))
                                                 : 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                  << 0x00000034U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                     << 0x00000014U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                       >> 0x0000000cU)))))) 
              << 0x0000000cU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U] 
        = ((0xfffc0000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U]) 
           | (((IData)((0x0000003fffffffffULL & ((2U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x0000003fU 
                                                                    & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                        >> 6U) 
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_718) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_717) 
                                                                         << 0x00000014U)) 
                                                                     | ((0x000ffc00U 
                                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                            >> 0x0000000cU)) 
                                                                        | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))))))) 
                                                                            << 9U) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU))])))))))))))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                   << 0x00000034U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                      << 0x00000014U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                        >> 0x0000000cU)))))) 
               >> 0x00000014U) | ((IData)(((0x0000003fffffffffULL 
                                            & ((2U 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0x0000003fU 
                                                                     & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                                         >> 6U) 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_718) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_717) 
                                                                          << 0x00000014U)) 
                                                                      | ((0x000ffc00U 
                                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                             >> 0x0000000cU)) 
                                                                         | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766))))))))) 
                                                                             << 9U) 
                                                                            | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766) 
                                                                                >> 6U))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_771) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_769)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_772)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_338) 
                                                                                >> 0x0000000aU))])))))))))))
                                                : (
                                                   ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                    << 0x00000034U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                       << 0x00000014U) 
                                                      | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                         >> 0x0000000cU))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000cU)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U] 
        = ((0x0003ffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[18U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[19U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[20U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[21U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[22U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[23U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[24U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[25U] 
        = ((0x0003ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U]) 
           | (0xfffc0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[0U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[0U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[1U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[1U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[2U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[3U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[4U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[5U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[5U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[6U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[6U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[7U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[8U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[9U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[10U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[11U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[12U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[13U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[14U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[15U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[18U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[19U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[20U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[21U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[22U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[23U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[24U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[25U];
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
               | (0x20000000U & ((~ (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[3U] 
                                     >> 0x0000000bU)) 
                                 << 0x0000001dU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset);
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
        = (0xdfffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U]);
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
            = ((0xffffffc0U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U]) 
               | (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w) 
                                 + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
            = ((0xdfffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U]) 
               | (0x20000000U & ((~ (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
                                     >> 0x0000000bU)) 
                                 << 0x0000001dU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset);
    }
    __VdfgRegularize_h6e95ff9d_0_516[0U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_516[1U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_516[2U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_516[3U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_516[4U] = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                            >> 2U);
    __VdfgRegularize_h6e95ff9d_0_713 = (0x0000000fU 
                                        & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                                           & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                               << 2U) 
                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                 >> 0x0000001eU))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed 
        = (((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                    & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                        << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                  >> 0x0000001eU)))) 
            << 1U) | (0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                 << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                           >> 0x0000001eU)))));
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
                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_716)
                                 : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                     << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                               >> 0x0000001aU))) 
                               << 6U)) | (0x0000003fU 
                                          & ((2U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U])
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_715)
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
        = ((0xfff00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (0x000fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
        = ((0x000fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (((0x00000fc0U & (((4U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U])
                                 ? ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid))
                                     ? ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                        >> 6U) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_716) 
                                                  >> 6U))
                                 : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                     << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                               >> 0x0000001aU))) 
                               << 6U)) | (0x0000003fU 
                                          & ((2U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U])
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid))
                                                  ? 
                                                 ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_715) 
                                                  >> 6U))
                                              : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                  << 0x0000000cU) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                    >> 0x00000014U))))) 
              << 0x00000014U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U];
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
        = ((0xc0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U]) 
           | ((0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U]) 
              | (0x3c000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U] 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U]) 
           | (((0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                               << 2U)) | (0x0000000fU 
                                          & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                                 << 2U) 
                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                                   >> 0x0000001eU))))) 
              << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[8U] 
        = ((((0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                             << 2U)) | (0x0000000fU 
                                        & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                                           & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                               << 2U) 
                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                                 >> 0x0000001eU))))) 
            >> 2U) | ((((0x0000000cU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                        << 2U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                                   >> 0x0000001eU)) 
                       | (0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                         << 2U))) << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[9U] 
        = (((((0x0000000cU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                              << 2U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                                        << 2U)) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[10U] 
        = (((((0x0000000cU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                              << 2U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                                        << 2U)) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[11U] 
        = (((((0x0000000cU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                              << 2U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                               << 2U))) >> 2U) | ((
                                                   ((0x0000000cU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                        << 2U)) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                                       >> 0x0000001eU)) 
                                                   | (0xfffffff0U 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                         << 2U))) 
                                                  << 0x0000001eU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[12U] 
        = (((((0x0000000cU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                              << 2U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                         >> 0x0000001eU)) 
             | (0xfffffff0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                               << 2U))) >> 2U) | (0xc0000000U 
                                                  & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[14U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[15U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[16U] 
        = (0x00001000U | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                          << 0x0000000dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[17U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
            >> 0x00000013U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                               << 0x0000000dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[18U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
            >> 0x00000013U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                               << 0x0000000dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[19U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
            >> 0x00000013U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                               << 0x0000000dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[20U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
            >> 0x00000013U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                               << 0x0000000dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U] 
        = ((0xffffff80U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U]) 
           | ((0x0000007eU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                              >> 5U)) | (1U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                               >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U] 
        = ((0x0000007fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U]) 
           | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
               << 0x0000000dU) | (0x00001f80U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                 >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[22U] 
        = ((0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                << 0x0000000dU) 
                                               | (0x00001f80U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[23U] 
        = ((0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                << 0x0000000dU) 
                                               | (0x00001f80U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[24U] 
        = ((0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                           >> 0x00000013U)) | ((__VdfgRegularize_h6e95ff9d_0_516[0U] 
                                                << 0x0000000fU) 
                                               | (((IData)(__VdfgRegularize_h6e95ff9d_0_713) 
                                                   << 0x0000000bU) 
                                                  | (0x00000780U 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                        >> 0x00000013U)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[25U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_516[0U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[0U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[1U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[26U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_516[1U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[1U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[2U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[27U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_516[2U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[2U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[3U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[28U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_516[3U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[3U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[4U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U] 
        = ((0xffffe000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U]) 
           | ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_516[4U] 
                              >> 0x00000011U)) | (0x00007f80U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_516[4U] 
                                                     >> 0x00000011U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U] 
        = (0x00001fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[30U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[31U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[32U] = 0x02000000U;
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
    VL_ASSIGN_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid = 0U;
    VL_ASSIGN_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0U;
    if ((1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))))) {
        if ((1U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid 
                = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                   | (3U & ((IData)(1U) << (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot))));
            if ((0x033fU >= (0x000003ffU & ((IData)(0x000001a0U) 
                                            * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)))) {
                __Vtemp_118[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_118[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_118[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_118[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_118[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_118[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_118[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_118[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_118[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_118[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_118[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_118[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_118[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_118);
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot 
                = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot);
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = 0U;
        VL_ASSIGN_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0);
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0U;
        if ((1U != (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
            if ((4U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid 
                    = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot))));
                if ((0x033fU >= (0x000003ffU & ((IData)(0x000001a0U) 
                                                * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)))) {
                    __Vtemp_120[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                    __Vtemp_120[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                    __Vtemp_120[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                    __Vtemp_120[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                    __Vtemp_120[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                    __Vtemp_120[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                    __Vtemp_120[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                    __Vtemp_120[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                    __Vtemp_120[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                    __Vtemp_120[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                    __Vtemp_120[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                    __Vtemp_120[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                    __Vtemp_120[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                    VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                               & ((IData)(0x000001a0U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_120);
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
                    if ((0x033fU >= (0x000003ffU & 
                                     ((IData)(0x000001a0U) 
                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)))) {
                        __Vtemp_122[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                        __Vtemp_122[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                        __Vtemp_122[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                        __Vtemp_122[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                        __Vtemp_122[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                        __Vtemp_122[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                        __Vtemp_122[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                        __Vtemp_122[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                        __Vtemp_122[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                        __Vtemp_122[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                        __Vtemp_122[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                        __Vtemp_122[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                        __Vtemp_122[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                        VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_122);
                    }
                    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot 
                        = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot);
                }
            }
        }
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = 0U;
        VL_ASSIGN_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0);
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
            if ((0x033fU >= (0x000003ffU & ((IData)(0x000001a0U) 
                                            * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)))) {
                __Vtemp_119[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                __Vtemp_119[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                __Vtemp_119[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                __Vtemp_119[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                __Vtemp_119[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                __Vtemp_119[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                __Vtemp_119[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                __Vtemp_119[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                __Vtemp_119[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                __Vtemp_119[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                __Vtemp_119[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                __Vtemp_119[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                __Vtemp_119[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_119);
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
                if ((0x033fU >= (0x000003ffU & ((IData)(0x000001a0U) 
                                                * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)))) {
                    __Vtemp_121[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                    __Vtemp_121[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                    __Vtemp_121[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                    __Vtemp_121[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                    __Vtemp_121[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                    __Vtemp_121[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                    __Vtemp_121[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                    __Vtemp_121[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                    __Vtemp_121[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                    __Vtemp_121[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                    __Vtemp_121[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                    __Vtemp_121[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                    __Vtemp_121[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                    VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                               & ((IData)(0x000001a0U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_121);
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
                    if ((0x033fU >= (0x000003ffU & 
                                     ((IData)(0x000001a0U) 
                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)))) {
                        __Vtemp_123[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                        __Vtemp_123[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                        __Vtemp_123[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                        __Vtemp_123[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                        __Vtemp_123[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                        __Vtemp_123[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                        __Vtemp_123[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                        __Vtemp_123[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                        __Vtemp_123[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                        __Vtemp_123[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                        __Vtemp_123[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                        __Vtemp_123[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                        __Vtemp_123[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                        VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_123);
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
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[12U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[13U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[14U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[15U] 
        = (0x00000400U | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                          << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[16U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
            >> 0x00000015U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                               << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[17U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
            >> 0x00000015U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                               << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[18U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
            >> 0x00000015U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                               << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[19U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
            >> 0x00000015U) | (((0xfc000000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                                << 0x00000014U)) 
                                | (0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U])) 
                               << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U] 
        = ((0xfffff800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U]) 
           | (((0xfc000000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                               << 0x00000014U)) | (0x03ffffffU 
                                                   & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U])) 
              >> 0x00000015U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U] 
        = ((0x000007ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U]) 
           | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
              << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[21U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
            >> 0x00000015U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                               << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[22U] 
        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
            >> 0x00000015U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                               << 0x0000000bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[23U] 
        = (((0x00000600U & ((IData)(__VdfgRegularize_h6e95ff9d_0_713) 
                            << 9U)) | (0x000001ffU 
                                       & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                          >> 0x00000015U))) 
           | ((__VdfgRegularize_h6e95ff9d_0_516[0U] 
               << 0x0000000dU) | (0xfffff800U & ((IData)(__VdfgRegularize_h6e95ff9d_0_713) 
                                                 << 9U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[24U] 
        = (((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_516[0U] 
                            >> 0x00000013U)) | ((IData)(__VdfgRegularize_h6e95ff9d_0_713) 
                                                >> 0x00000017U)) 
           | ((0x00001800U & (__VdfgRegularize_h6e95ff9d_0_516[0U] 
                              >> 0x00000013U)) | (__VdfgRegularize_h6e95ff9d_0_516[1U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[25U] 
        = ((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_516[1U] 
                           >> 0x00000013U)) | ((0x00001800U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[1U] 
                                                   >> 0x00000013U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[2U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[26U] 
        = ((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_516[2U] 
                           >> 0x00000013U)) | ((0x00001800U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[2U] 
                                                   >> 0x00000013U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[3U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[27U] 
        = ((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_516[3U] 
                           >> 0x00000013U)) | ((0x00001800U 
                                                & (__VdfgRegularize_h6e95ff9d_0_516[3U] 
                                                   >> 0x00000013U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_516[4U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = ((0xfffff800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]) 
           | (0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_516[4U] 
                             >> 0x00000013U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = (0x000007ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[29U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[30U] = 0x00200000U;
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
        = ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                 << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                           >> 0x0000001eU))) << 0x0000001eU) 
           | (0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U]) 
           | (3U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                         << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                                   >> 0x0000001eU))) 
                    >> 2U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[9U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[10U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[11U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[12U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[13U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[14U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[15U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[16U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[17U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[18U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[19U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U]) 
           | ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                    << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                              >> 0x0000001eU))) << 0x0000001eU) 
              | (0x3ffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U]) 
           | (3U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                         << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                   >> 0x0000001eU))) 
                    >> 2U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[22U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[22U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[23U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[23U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[24U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[24U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[25U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[25U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                           & ((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                                      & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                          << 2U) | 
                                         (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                          >> 0x0000001eU)))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                                                  << 2U) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                                                    >> 0x0000001eU))))));
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
        = ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                 << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                           >> 0x0000001eU))) << 0x0000001eU) 
           | (0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U]) 
           | (3U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                         << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                                   >> 0x0000001eU))) 
                    >> 2U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[9U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[10U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[11U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[12U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[13U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[14U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[15U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[16U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[17U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[18U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[19U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U]) 
           | ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                    << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                              >> 0x0000001eU))) << 0x0000001eU) 
              | (0x3ffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U]) 
           | (3U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                         << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                   >> 0x0000001eU))) 
                    >> 2U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[22U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[22U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[23U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[23U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[24U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[24U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[25U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[25U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                           & ((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                                      & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                          << 2U) | 
                                         (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                          >> 0x0000001eU)))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                                                  << 2U) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                                                    >> 0x0000001eU))))));
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
        = ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                 << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                           >> 0x0000001eU))) << 0x0000001eU) 
           | (0x3fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U]) 
           | (3U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                         << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                                   >> 0x0000001eU))) 
                    >> 2U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[9U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[10U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[11U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[12U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[13U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[14U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[15U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[16U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[17U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[18U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[19U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U]) 
           | ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                    << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                              >> 0x0000001eU))) << 0x0000001eU) 
              | (0x3ffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U]) 
           | (3U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                         << 2U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                   >> 0x0000001eU))) 
                    >> 2U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[22U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[22U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[23U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[23U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[24U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[24U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[25U] 
        = ((3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[25U]) 
           | (0xfffffffcU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                           & ((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                                      & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                          << 2U) | 
                                         (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                          >> 0x0000001eU)))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                                                  << 2U) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                                                    >> 0x0000001eU))))));
}
