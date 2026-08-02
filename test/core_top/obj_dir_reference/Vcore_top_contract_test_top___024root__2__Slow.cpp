// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vcore_top_contract_test_top__ConstPool__TABLE_hea82845a_0;
extern const VlWide<26>/*831:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0;

VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__2(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___stl_sequent__TOP__2\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset = 0;
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0;
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask = 0;
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_58;
    __VdfgRegularize_h6e95ff9d_0_58 = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_492;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_492);
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_509;
    __VdfgRegularize_h6e95ff9d_0_509 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_510;
    __VdfgRegularize_h6e95ff9d_0_510 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_675;
    __VdfgRegularize_h6e95ff9d_0_675 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_729;
    __VdfgRegularize_h6e95ff9d_0_729 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_736;
    __VdfgRegularize_h6e95ff9d_0_736 = 0;
    CData/*31:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<13>/*415:0*/ __Vtemp_116;
    VlWide<13>/*415:0*/ __Vtemp_117;
    VlWide<13>/*415:0*/ __Vtemp_118;
    VlWide<13>/*415:0*/ __Vtemp_119;
    VlWide<13>/*415:0*/ __Vtemp_120;
    VlWide<13>/*415:0*/ __Vtemp_121;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_616)) 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[30U] 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_554) 
                                                          & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_286) 
                                                              == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_458) 
                                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[30U] 
                                                                | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                   == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[30U])))))));
    __VdfgRegularize_h6e95ff9d_0_510 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_329));
    __VdfgRegularize_h6e95ff9d_0_58 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_valid_q) 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[31U] 
                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_556)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552) 
                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)) 
                                                   & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[31U] 
                                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_asid_q) 
                                                          == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[31U])) 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460 
                                                         == 
                                                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q1_vaddr_q 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_285))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_valid_q) 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_e[31U] 
                                                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_616)) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)) 
                                                             & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_vaddr_q 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_285) 
                                                                 == vlSelfRef.__VdfgRegularize_h6e95ff9d_0_460) 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g[31U] 
                                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__q0_asid_q) 
                                                                      == vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid[31U]))))))));
    if (__VdfgRegularize_h6e95ff9d_0_510) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block 
            = (1U & ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95)
                      : ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_355)) 
                         | ((1U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                   >> 4U)))
                             ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_477)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95))
                             : ((4U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                           >> 4U)))
                                 ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_476)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95))
                                 : ((2U != (0x0000000fU 
                                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                               >> 4U))) 
                                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_475)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95))))))));
        __VdfgRegularize_h6e95ff9d_0_509 = (1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_355)
                                                      ? 
                                                     ((1U 
                                                       == 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                           >> 4U)))
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_477) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
                                                          >> 1U))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                            >> 4U)))
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_476) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
                                                           >> 1U))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                             >> 4U)))
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_475) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
                                                            >> 1U))
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
                                                         >> 1U))))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
                                                      >> 1U))));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95));
        __VdfgRegularize_h6e95ff9d_0_509 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
                                                  >> 1U));
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_ps 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]
                                                                        : 
                                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U] 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)))))))))))))))))))))))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_found_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_616)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_ps_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[31U]
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[30U]
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[29U]
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[28U]
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[27U]
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[26U]
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[25U]
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[24U]
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[23U]
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[22U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[21U]
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[20U]
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[19U]
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[18U]
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[17U]
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[16U]
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[15U]
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[14U]
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[13U]
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[12U]
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[11U]
                                                              : 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                                                               ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[10U]
                                                               : 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
                                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[9U]
                                                                : 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)
                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[8U]
                                                                 : 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[7U]
                                                                  : 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[6U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[5U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[4U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
                                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[3U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[1U]
                                                                        : 
                                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps[0U] 
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)))))))))))))))))))))))))))))))))));
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
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345))) 
                               << 4U) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_lane_eligible) 
                                          << 2U) | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids)))])))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rob_inst__enq_partial_stall 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511) 
              | (IData)(__VdfgRegularize_h6e95ff9d_0_509)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_509) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511)));
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
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_58)
             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[31U]
                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[31U])
             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)
                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[30U]
                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[30U])
                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59)
                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[29U]
                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[29U])
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[28U]
                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[28U])
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60)
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[27U]
                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[27U])
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[26U]
                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[26U])
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[25U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[25U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[24U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[24U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[23U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[23U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[22U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[22U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[21U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[21U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[20U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[20U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
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
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
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
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
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
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
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
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
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
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[1U]
                                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[1U])
                                                                      : 
                                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[0U]
                                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[0U]) 
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74))))))))))))))))))))))))))))))))))) 
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
                        = ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[31U]
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[31U])
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[30U]
                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[30U])
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[29U]
                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[29U])
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[28U]
                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[28U])
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[27U]
                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[27U])
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[26U])
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[25U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[24U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[23U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[22U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[21U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
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
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
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
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
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
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
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
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
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
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)))))))))))))))))))))))))))))))))));
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_paddr 
                        = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__ppn_base 
                            & (~ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask)) 
                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_vaddr_q 
                              & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__unnamedblk1__DOT__offset_mask));
                    if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                         | ((IData)(__VdfgRegularize_h6e95ff9d_0_58) 
                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_556)))) {
                        if (((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[31U]
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[31U])
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[30U]
                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[30U])
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[29U]
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[29U])
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[28U]
                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[28U])
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[27U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[27U])
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[26U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[26U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[25U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[25U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[24U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[24U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[23U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[23U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[22U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[22U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[21U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[21U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[20U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[20U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
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
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
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
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
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
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
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
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
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
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
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
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
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
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
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
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
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
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                                           ? 
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[1U]
                                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[1U])
                                                                           : 
                                                                          (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[0U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[0U]) 
                                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)))))))))))))))))))))))))))))))))) {
                            if (((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__csr_crmd_q) 
                                 > ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[31U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[31U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[30U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[30U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[29U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[29U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[28U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[28U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[27U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[27U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[26U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[25U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[25U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[24U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[24U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[23U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[23U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[22U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[22U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[21U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[21U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[20U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[20U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
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
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
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
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
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
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
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
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
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
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                                            ? 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[1U]
                                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[1U])
                                                                            : 
                                                                           (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[0U]
                                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[0U]) 
                                                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74))))))))))))))))))))))))))))))))))))) {
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_valid = 1U;
                                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_xcpt_code = 7U;
                            } else if (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__req_access_q)) 
                                        & (~ ((IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[31U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[31U])
                                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[30U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[30U])
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[29U]
                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[29U])
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[28U]
                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[28U])
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                       ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[27U]
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[27U])
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[26U]
                                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[26U])
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61)
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[25U]
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[25U])
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[24U]
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[24U])
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                           ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[23U]
                                                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[23U])
                                                          : 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[22U]
                                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[22U])
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                                            ? 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[21U]
                                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[21U])
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[20U]
                                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[20U])
                                                             : 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
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
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)
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
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70)
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
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)
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
                                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72)
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
                                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                                                ? 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[1U]
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[1U])
                                                                                : 
                                                                               (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1[0U]
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0[0U]) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74)))))))))))))))))))))))))))))))))))) {
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
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[31U]
                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[31U])
             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[30U]
                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[30U])
                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[29U]
                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[29U])
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[28U]
                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[28U])
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[27U]
                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[27U])
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[26U]
                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[26U])
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[25U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[25U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[24U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[24U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[23U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[23U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1[22U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0[22U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
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
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
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
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
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
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
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
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
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
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
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
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
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
                        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[31U]
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[31U])
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[30U]
                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[30U])
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[29U]
                                        : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[29U])
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[28U]
                                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[28U])
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[27U]
                                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[27U])
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1[26U]
                                                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0[26U])
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
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
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
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
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
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
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
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
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
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
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
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
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
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
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
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
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
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
                        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[31U]
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[31U])
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                                      ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[30U]
                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[30U])
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                                          ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[29U]
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[29U])
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                                              ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[28U]
                                              : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[28U])
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[27U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[27U])
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                                   ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1[26U]
                                                   : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0[26U])
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
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
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
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
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
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
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
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
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
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
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
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
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
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
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
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
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
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
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
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
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
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
                                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
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
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
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
                                 > ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189)
                                         ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[31U]
                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[31U])
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188)
                                             ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[30U]
                                             : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[30U])
                                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)
                                                 ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[29U]
                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[29U])
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                 ? 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186)
                                                  ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1[28U]
                                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0[28U])
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77)
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
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)
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
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)
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
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)
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
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)
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
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
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
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
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
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84)
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
                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85)
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86)
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
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
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
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
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)
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
                                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)
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
    __VdfgRegularize_h6e95ff9d_0_729 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_req_valid 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__state)) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q)) 
           & ((3U == (3U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_finished_q) 
                            | ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_valid)) 
                               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed))))) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)));
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
    __VdfgRegularize_h6e95ff9d_0_736 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_729) 
                                               & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U] 
                                                     >> 0x0000001bU))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733 = (((IData)(__VdfgRegularize_h6e95ff9d_0_729) 
                                                   & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_req_valid_w 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w));
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
                           >> 0x0000001bU) & ((IData)(__VdfgRegularize_h6e95ff9d_0_729) 
                                              >> 1U)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_736) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_736)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146 = (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                         & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_730)) 
                                                            >> 1U)))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                      >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734 = (0x0000003fU 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_679 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                >> 5U)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                           >> 5U)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                          >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_680 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330))])));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147 
            = (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                              >> 6U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728 
            = (0x00000fffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_679) 
                               << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_680)));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147 
            = (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734) 
                              >> 6U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728 
            = (0x00000fffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                      >> 0x00000012U)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)));
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
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_681) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))))))))) 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 
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
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_681) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))))))))) 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 
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
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_681) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331))))))))) 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_331 
                                                                                >> 6U)))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 
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
                                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_680) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_679) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))))))) 
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
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
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
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_680) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_679) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))))))) 
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
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
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
                                                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_680) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_679) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728))))))))) 
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
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))) 
                                                                                | (((0x2fU 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_728) 
                                                                                >> 6U))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_733) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_731)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_734)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_330) 
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
    __VdfgRegularize_h6e95ff9d_0_492[0U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_492[1U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_492[2U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_492[3U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                             << 0x0000001eU) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                               >> 2U));
    __VdfgRegularize_h6e95ff9d_0_492[4U] = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                            >> 2U);
    __VdfgRegularize_h6e95ff9d_0_675 = (0x0000000fU 
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
                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_678)
                                 : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                     << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                               >> 0x0000001aU))) 
                               << 6U)) | (0x0000003fU 
                                          & ((2U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U])
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_677)
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
                                        >> 6U) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_678) 
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
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_677) 
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
                           >> 0x00000013U)) | ((__VdfgRegularize_h6e95ff9d_0_492[0U] 
                                                << 0x0000000fU) 
                                               | (((IData)(__VdfgRegularize_h6e95ff9d_0_675) 
                                                   << 0x0000000bU) 
                                                  | (0x00000780U 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                        >> 0x00000013U)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[25U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_492[0U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[0U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[1U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[26U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_492[1U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[1U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[2U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[27U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_492[2U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[2U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[3U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[28U] 
        = ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_492[3U] 
                           >> 0x00000011U)) | ((0x00007f80U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[3U] 
                                                   >> 0x00000011U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[4U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U] 
        = ((0xffffe000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U]) 
           | ((0x0000007fU & (__VdfgRegularize_h6e95ff9d_0_492[4U] 
                              >> 0x00000011U)) | (0x00007f80U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_492[4U] 
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
                __Vtemp_116[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_116[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_116[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_116[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_116[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_116[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_116[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_116[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_116[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_116[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_116[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_116[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_116[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_116);
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
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_118);
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
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_120);
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
                __Vtemp_117[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                __Vtemp_117[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                __Vtemp_117[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                __Vtemp_117[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                __Vtemp_117[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                __Vtemp_117[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                __Vtemp_117[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                __Vtemp_117[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                __Vtemp_117[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                __Vtemp_117[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                __Vtemp_117[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                __Vtemp_117[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                __Vtemp_117[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_117);
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
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_119);
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
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_121);
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
        = (((0x00000600U & ((IData)(__VdfgRegularize_h6e95ff9d_0_675) 
                            << 9U)) | (0x000001ffU 
                                       & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                          >> 0x00000015U))) 
           | ((__VdfgRegularize_h6e95ff9d_0_492[0U] 
               << 0x0000000dU) | (0xfffff800U & ((IData)(__VdfgRegularize_h6e95ff9d_0_675) 
                                                 << 9U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[24U] 
        = (((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_492[0U] 
                            >> 0x00000013U)) | ((IData)(__VdfgRegularize_h6e95ff9d_0_675) 
                                                >> 0x00000017U)) 
           | ((0x00001800U & (__VdfgRegularize_h6e95ff9d_0_492[0U] 
                              >> 0x00000013U)) | (__VdfgRegularize_h6e95ff9d_0_492[1U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[25U] 
        = ((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_492[1U] 
                           >> 0x00000013U)) | ((0x00001800U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[1U] 
                                                   >> 0x00000013U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[2U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[26U] 
        = ((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_492[2U] 
                           >> 0x00000013U)) | ((0x00001800U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[2U] 
                                                   >> 0x00000013U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[3U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[27U] 
        = ((0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_492[3U] 
                           >> 0x00000013U)) | ((0x00001800U 
                                                & (__VdfgRegularize_h6e95ff9d_0_492[3U] 
                                                   >> 0x00000013U)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_492[4U] 
                                                  << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = ((0xfffff800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]) 
           | (0x000007ffU & (__VdfgRegularize_h6e95ff9d_0_492[4U] 
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
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7246291008641417971ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1586843854505200251ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8572988376765721785ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_redirect_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5008947115754344866ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_commit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4486713398211545398ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_commit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15812115177652962842ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_exec_query_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13050582551297197502ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_exec_query_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9199614797683787797ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_exec_query_pc, __VscopeHash, 5607783702795616712ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_exec_query_resp_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8296901647781436543ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_exec_query_next_pc, __VscopeHash, 9921959652368674972ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ftq_exec_query_cfi_match = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13713567474639092962ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__arch_valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18135901330014148548ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__uops, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__fp_flags = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__debug_insts = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__debug_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15692314158446377743ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4419301876737043670ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3600439102156859411ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12331918938310761417ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 829786263933877639ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm, __VscopeHash, 6877344295040508778ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops, __VscopeHash, 8549535545622266609ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4870465123916949517ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__next_decode_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17192591130643301011ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_pcs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4400458675984337098ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_ftq_idx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2489840376727850933ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_predicted_taken = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16472911349866449893ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_predicted_npc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10890749199334353872ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_lane_eligible = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 928671877126107334ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unique_dispatch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10744214551817664008ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_insts = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11393829908365491167ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fe_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2604397103625875703ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_finished_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 862898786102837704ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3461984874343898093ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_xcpt_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1127952590508968375ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_xcpt_code = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10242991045801825294ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 230177316574804092ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1754504598222605782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6855664172045629973ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1027793631038509218ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15515717777489443293ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15422386784730499310ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7730867471137643342ull);
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
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops, __VscopeHash, 4603605814139308203ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iss_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4895143352307656256ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iss_valid__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3533557954142846819ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17725435277459101649ull);
    VL_ZERO_RESET_W(1248, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop);
    VL_ZERO_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop);
    VL_ZERO_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8350128268744822169ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 4929091318504920177ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data, __VscopeHash, 148534381932496232ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10331254913056886610ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18135193927075115785ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16078486679126578891ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5610048627726506957ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7389923427213069017ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4791551107220928852ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16817471612857530236ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13662176047072474491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2678781577411094944ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_owner_cacop_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15991859839019977549ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1779488170568540357ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_uop_q, __VscopeHash, 13973399749135612287ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10369461815982005568ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_xcpt_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8939355087295112250ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_xcpt_code_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2971709641717001807ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_badvaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3941901400845089521ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_issue_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2095081810589199439ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854121406663485830ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 800462057177211969ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4076511867064695641ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10949784144296829190ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17447782672257561340ull);
    VL_SCOPED_RAND_RESET_W(456, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt, __VscopeHash, 17294982327587053337ull);
    VL_SCOPED_RAND_RESET_W(456, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q, __VscopeHash, 16854437886675893044ull);
    VL_SCOPED_RAND_RESET_W(456, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_lxcpt_w, __VscopeHash, 11566972972252250661ull);
    VL_ZERO_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145123784549687944ull);
    VL_SCOPED_RAND_RESET_W(456, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res, __VscopeHash, 5120906008159659467ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q, __VscopeHash, 12659047047012762840ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10369808734988390975ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8611600169860673327ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5138269493548462808ull);
    VL_SCOPED_RAND_RESET_W(2736, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps, __VscopeHash, 7870204114334927270ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w, __VscopeHash, 8487389894758906454ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w, __VscopeHash, 8326058480021817821ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_next_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1659084673176525078ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_taken_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15669322318858315093ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14319518739591042403ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15595215341414762004ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13131169985372977215ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_resume_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13086386942274789750ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rob_inst__enq_partial_stall = 0;
    VL_SCOPED_RAND_RESET_W(497, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w, __VscopeHash, 17140793154739265952ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2854107074123893089ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14549794945029092157ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_brinfo_valid_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16797571669231905954ull);
    VL_SCOPED_RAND_RESET_W(1467, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_brinfo_q, __VscopeHash, 4753745887178987438ull);
    VL_SCOPED_RAND_RESET_W(489, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_d, __VscopeHash, 5401663306214382493ull);
    VL_SCOPED_RAND_RESET_W(489, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q, __VscopeHash, 7820731420258920249ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__res_valid = 0;
    VL_ZERO_RESET_W(456, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__xcpt);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__agen_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12747597651509187522ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop, __VscopeHash, 17365173913315775709ull);
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
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q, __VscopeHash, 5774068619822437864ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next, __VscopeHash, 679951275173041366ull);
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
    VL_SCOPED_RAND_RESET_W(8400, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries, __VscopeHash, 8405975240839243699ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__next_gen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5852198563296297628ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8910684938332055524ull);
    VL_SCOPED_RAND_RESET_W(1050, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries, __VscopeHash, 12385857772606772816ull);
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
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop, __VscopeHash, 9396590674241560547ull);
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
    VL_SCOPED_RAND_RESET_W(7856, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries, __VscopeHash, 636674277303937207ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__next_gen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16776869802132451060ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7252223506154947620ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__query_cursor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17898759262212962082ull);
    VL_SCOPED_RAND_RESET_W(982, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries, __VscopeHash, 4474615668555603075ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16163033158216252312ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1392364894316875947ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11059800532901533980ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14280864393208433536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553327864181357950ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 652631808533325279ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_uop, __VscopeHash, 2520312739985264216ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050049294689022917ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2712507582048528847ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop, __VscopeHash, 11517817689026208845ull);
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
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 11854760615056528567ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16584176829233671712ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 822410369955533529ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10008566679432551548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15163823595746336807ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 3720445219667101380ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5566915443055178638ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5398669180632420803ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6614166816063209701ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_ftq_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5192160758432744279ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_ftq_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5353002333989172182ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_ftq_cfi_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14192935798018940899ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__jirl_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17211117987565003871ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9707277210849613619ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2619866592824205606ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__resolved_pc_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13396883531867783257ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11837275390511475480ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742242573030037639ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041723977395607787ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 13372134163189682661ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4007400784621318964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6695478013611078603ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11283255009571658881ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11364708924613733812ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 16952450142074999296ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7583479013786928161ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17122364349467101258ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2702705767055644554ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_ftq_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4447792471893514882ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_ftq_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1632491349086848697ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_ftq_cfi_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13946914668387943273ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__jirl_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6933351313694336747ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 362616356973670170ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6724098343279508462ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__resolved_pc_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2514000960263482721ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1720839223601671084ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484606096764492209ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5242961461092016066ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 18324486023234953274ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17653465556050131810ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1435310319889455984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4674075303718058947ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4114816821464189170ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 12991773725656144765ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13732562297125011885ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13327094039760451793ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14889982121781629345ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_ftq_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4501862407739582008ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_ftq_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4544211623086167172ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_ftq_cfi_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17550361163004411460ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__jirl_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7884979683486675067ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5877106952825052730ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 600751774219945411ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__resolved_pc_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6093887532827964140ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__DOT__instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7754439345241386280ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__DOT__instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4683098027521392781ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7624401510536427262ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2101972983629259520ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17572441040255511787ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_uop, __VscopeHash, 2607681940361664415ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4346053630691122222ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7510705903975326659ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16177123155511417850ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082995495451191601ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop, __VscopeHash, 15863730113474928909ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12628358226839516549ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4406560963210425149ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10370176431729603899ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__eff_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503741373912235350ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_agen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8984149788053425564ull);
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
        VL_SCOPED_RAND_RESET_W(13312, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop[__Vi0], __VscopeHash, 13999879201120921992ull);
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
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__branch_recovery_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5509643807088330544ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15825826781444522473ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2939163423750714254ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5966500890448823884ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14374619381740541022ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop, __VscopeHash, 10833347356335573167ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3157685659191178782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9853320999892649673ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16676541976316957294ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__finished_committing_row = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16272637926468014075ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10599717471264606586ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__rob_idx_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6911393648589225359ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__xcpt_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3583117680454547536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__xcpt_code_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18367798088777558370ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__badvaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2358490605274126454ull);
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17025389862334918570ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 852764741487700953ull);
    VL_SCOPED_RAND_RESET_W(4992, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop, __VscopeHash, 16955459105290969812ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4762455091213898914ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8267802625329891313ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9780955978283587491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8976733595182221786ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated, __VscopeHash, 2405043580386518716ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18373736060116036149ull);
    VL_SCOPED_RAND_RESET_W(6656, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_uop, __VscopeHash, 125126960643065226ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4080026178585933850ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 529211962787420767ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11876875151851420143ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2767480488598873237ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated, __VscopeHash, 9019154580632305800ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12458225995475049279ull);
    VL_SCOPED_RAND_RESET_W(6656, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_uop, __VscopeHash, 1677684345798050147ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6058820023219643131ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11448386138112822196ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13919958115403047957ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15851333280260707247ull);
    VL_SCOPED_RAND_RESET_W(832, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated, __VscopeHash, 13717983146653294343ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161566405390956263ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13530342932146034544ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__alloc_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11513681609991406644ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2834312585520972971ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__xlate_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14540960490514473444ull);
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
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__branch_redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14114475457823040363ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8948250728313905923ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5753393005321287988ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3027868443356442282ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3542201825981979575ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9500567479101744319ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12048406758289133776ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d, __VscopeHash, 13711229383981074988ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1267730971788645782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8328757791928885968ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9047373283943901049ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10041896233378375489ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16595860558313429405ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 989651318009543169ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_npc_plus4_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7102407968098634958ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11103745941239461526ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_return_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7934193221943388353ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4252215070907579746ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_call = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2772504779899593266ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10248747777933200811ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13297387764540326086ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target, __VscopeHash, 7793607609175684843ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr, __VscopeHash, 8495853143328289651ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9711993010496442874ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f1_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7626891721103901417ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13154703252567556225ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6441772308528923771ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f1_first_bank_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2227734534472929327ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8042062017490187336ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_first_bank_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8514344720647104928ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f1_second_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17588722405173257740ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15056551252216293192ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_second_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5248336023743449142ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f1_epoch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7360497904007101188ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_epoch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17537477145086260298ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_epoch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11651026352071029459ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__frontend_epoch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17965627025904560338ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_requested_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11896884603323344161ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_result_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15874521120757768542ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9624022649963010093ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f3_preds[__Vi0], __VscopeHash, 9680585485294930630ull);
    }
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds_q, __VscopeHash, 10438069341388471232ull);
    VL_SCOPED_RAND_RESET_W(240, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_meta_q, __VscopeHash, 7393266845805788398ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(293, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[__Vi0], __VscopeHash, 7781213649396883896ull);
    }
    VL_SCOPED_RAND_RESET_W(458, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_bpd_update, __VscopeHash, 17124236466167938456ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ghist_restore, __VscopeHash, 1317688779942302801ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ghist_restore_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1715041457589221910ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ras_repair_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8730526401660494786ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ras_repair_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7148862951636262598ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ras_repair_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1450788537876632885ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_write_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11185489128526628767ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__predictor_f0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14212213478378982717ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__predictor_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17912294587545801574ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__bim_f3_meta, __VscopeHash, 3473577738895376497ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 419012049313661126ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__Vi0], __VscopeHash, 9148664758223420083ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3807905268066660334ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12658510948353286559ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4590097132557418103ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_tag = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10986090728686637995ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12490908998277072717ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15563472849945279239ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8693447459387506582ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry, __VscopeHash, 17950900218478502396ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9601912887801032768ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17147370235455940281ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11144474330744718640ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry, __VscopeHash, 14297568640931705838ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in, __VscopeHash, 8739175305963182064ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7523197598866779396ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__invalidate_set = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12144938429816777595ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__do_allocate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2283919274647477313ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1653459075148143890ull);
        }
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4692448524932819004ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_rdata = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 915954798714396589ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13117166825252466583ull);
    VL_SCOPED_RAND_RESET_W(293, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_update, __VscopeHash, 6229474997891533943ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16958847322305179756ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in, __VscopeHash, 11630434504454927464ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_ctrs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16954198873516380918ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_new_ctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10283399693732735103ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13340881489796872025ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11197915383605073492ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7789876173980484345ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6671685395556313451ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10982350837386773323ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_hit_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14344150535211261683ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_enq_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7883025175040810742ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16802597996092405579ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_col = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7460584061650874553ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_set = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14663423537955589142ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15144317408586487353ull);
    VL_SCOPED_RAND_RESET_W(1040, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, __VscopeHash, 311573471463513581ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__repl_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11172321783522440464ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10922929995879484514ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15022967696924851788ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17078556062488276889ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11410019512483119771ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4637876976828036255ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4506178821199199640ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__do_allocate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16935156034103596786ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__found_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4572614438897281452ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2767332190500572660ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17765473497760758466ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5652132543016244805ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2295989878785253508ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3186212788853208988ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__predictor_f0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134030824599327651ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__predictor_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3993625160173874262ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__bim_f3_meta, __VscopeHash, 13012214055565060695ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6546182270583641297ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__Vi0], __VscopeHash, 1244442533342711721ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13323326881978360333ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18442631649954872437ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16951287704622954073ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_tag = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9249462918475745319ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17525419420627222643ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9575152940530589574ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14308271703902760293ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry, __VscopeHash, 2211919409274616144ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15563197389517376085ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3795451825815234756ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17035709643497997214ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry, __VscopeHash, 10796499792067526252ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in, __VscopeHash, 4398717424857156833ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7826793295100626216ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__invalidate_set = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5721224630952821395ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__do_allocate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11437783949900435913ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17419048679040231760ull);
        }
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13371033329277716092ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_rdata = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2619051106655462649ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4678942686965661209ull);
    VL_SCOPED_RAND_RESET_W(293, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_update, __VscopeHash, 5290128804338751472ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15123528349558452231ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in, __VscopeHash, 12081094662114938536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_ctrs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6771202741063647865ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_new_ctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1983105566645285020ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8253503749081963027ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8870673642819542301ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1058726146295736941ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8228310510158239434ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11852864183349664362ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_hit_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17672362751413827879ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_enq_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9331796096706976178ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2977819727169110097ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_col = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5665481561959989460ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_set = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3558418246440317341ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9468026762087370016ull);
    VL_SCOPED_RAND_RESET_W(1040, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, __VscopeHash, 16441998054502377289ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__repl_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 373611268332617030ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13934229734613959062ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3156927186558718871ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17284073364833508346ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6947743676150821221ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9352582664738305260ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2407650955273188834ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__do_allocate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8923105686513932697ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__found_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814315505701377724ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6381327701679892233ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16108062996507009538ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13786951433316986832ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 869865859852706538ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6626812097226341313ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(429, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q[__Vi0], __VscopeHash, 1587273496253916635ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entry_valid_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2434206746320900375ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2770835363023021547ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__commit_ptr_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10522922788174357009ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__commit_end_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6873677608100239875ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_ptr_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7323296948448566680ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_end_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12448662037489792833ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__commit_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10404786390186990989ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7645247038115257207ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_cfi_idx_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11327634578626017207ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_br_mask_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10120822071230969840ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_cfi_is_br_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12212996142958783844ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_cfi_is_b_bl_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12737380077918226851ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_cfi_is_jirl_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2104242034516132204ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_cfi_is_call_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17827257750598093034ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__resolved_cfi_is_ret_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7467749783063848573ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__bpd_update_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1633451374241936020ull);
    VL_SCOPED_RAND_RESET_W(458, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__bpd_update_q, __VscopeHash, 12791182764935898486ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12884545172805867136ull);
    }
    VL_SCOPED_RAND_RESET_W(72, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q, __VscopeHash, 5772392822732796049ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__inst_mem, __VscopeHash, 13212810271083274051ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__pc_mem, __VscopeHash, 12762185431776592098ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__ftq_idx_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3139965290176233178ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__predicted_taken_mem = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12351445625427936649ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 912207333591629327ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17376951032542300210ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__predicted_npc_mem, __VscopeHash, 8526855527605328908ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc, __VscopeHash, 15290470077621031569ull);
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
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__data = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__addr = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__size = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__byte_offset = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__28__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans__DOT__dmw_matches__29__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__30__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_plv0 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__dmw_plv3 = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__vaddr_vseg = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans__DOT__dmw_matches__31__plv = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_36 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_37 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_40 = 0;
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
    vlSelf->__VdfgRegularize_h6e95ff9d_0_59 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_60 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_61 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_62 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_63 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_64 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_65 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_66 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_67 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_68 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_69 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_71 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_72 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_73 = 0;
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
    VL_ZERO_RESET_W(227, vlSelf->__VdfgRegularize_h6e95ff9d_0_93);
    VL_ZERO_RESET_W(227, vlSelf->__VdfgRegularize_h6e95ff9d_0_94);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_95 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_97 = 0;
    VL_ZERO_RESET_W(319, vlSelf->__VdfgRegularize_h6e95ff9d_0_101);
    VL_ZERO_RESET_W(319, vlSelf->__VdfgRegularize_h6e95ff9d_0_102);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_103 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_104 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_105 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_106 = 0;
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
    vlSelf->__VdfgRegularize_h6e95ff9d_0_145 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_146 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_147 = 0;
    VL_ZERO_RESET_W(416, vlSelf->__VdfgRegularize_h6e95ff9d_0_157);
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
    vlSelf->__VdfgRegularize_h6e95ff9d_0_185 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_186 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_187 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_188 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_189 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_190 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_193 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_196 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_199 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_200 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_207 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_208 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_222 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_223 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_225 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_226 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_227 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_228 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_229 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_230 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_232 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_233 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_234 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_235 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_236 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_253 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_254 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_255 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_256 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_257 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_274 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_276 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_281 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_285 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_286 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_287 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_288 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_289 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_290 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_291 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_292 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_293 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_294 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_295 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_296 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_297 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_298 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_299 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_300 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_301 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_302 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_303 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_304 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_305 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_306 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_307 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_308 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_309 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_310 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_311 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_312 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_313 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_314 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_315 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_316 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_329 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_330 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_331 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_332 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_333 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_345 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_350 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_351 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_354 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_355 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_361 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_362 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_363 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_364 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_365 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_366 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_367 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_368 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_369 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_370 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_371 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_372 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_373 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_374 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_375 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_376 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_377 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_378 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_379 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_382 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_383 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_386 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_387 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_390 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_391 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_398 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_400 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_402 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_404 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_406 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_408 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_410 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_412 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_414 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_416 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_418 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_420 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_422 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_424 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_426 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_428 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_430 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_432 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_434 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_436 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_438 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_440 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_442 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_444 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_446 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_448 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_450 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_452 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_454 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_456 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_458 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_460 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_462 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_463 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_467 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_475 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_476 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_477 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_481 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_484 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_485 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_494 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_495 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_496 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_506 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_511 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_512 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_513 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_514 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_515 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_516 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_517 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_518 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_519 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_520 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_521 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_522 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_523 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_524 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_525 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_526 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_527 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_528 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_529 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_530 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_531 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_532 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_533 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_534 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_535 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_536 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_537 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_538 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_539 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_540 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_541 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_542 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_543 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_544 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_549 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_550 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_551 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_552 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_554 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_555 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_556 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_558 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_559 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_562 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_563 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_566 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_567 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_570 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_571 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_574 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_575 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_578 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_579 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_582 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_583 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_586 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_587 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_590 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_591 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_594 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_595 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_598 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_599 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_602 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_603 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_606 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_607 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_610 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_611 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_614 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_616 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_646 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_659 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_660 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_661 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_662 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_663 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_664 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_665 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_666 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_667 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_668 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_669 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_670 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_671 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_672 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_673 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_674 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_677 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_678 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_679 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_680 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_681 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_682 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_711 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_723 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_728 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_730 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_731 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_733 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_734 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_739 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_741 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_742 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_743 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_744 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_745 = 0;
    VL_ZERO_RESET_W(166, vlSelf->__VdfgRegularize_h6e95ff9d_0_747);
    VL_ZERO_RESET_W(250, vlSelf->__VdfgRegularize_h6e95ff9d_0_748);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_749 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_750 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_751 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_752 = 0;
    VL_ZERO_RESET_W(297, vlSelf->__VdfgRegularize_h6e95ff9d_0_761);
    VL_ZERO_RESET_W(297, vlSelf->__VdfgRegularize_h6e95ff9d_0_762);
    VL_ZERO_RESET_W(297, vlSelf->__VdfgRegularize_h6e95ff9d_0_763);
    VL_ZERO_RESET_W(297, vlSelf->__VdfgRegularize_h6e95ff9d_0_764);
    VL_ZERO_RESET_W(297, vlSelf->__VdfgRegularize_h6e95ff9d_0_765);
    VL_ZERO_RESET_W(297, vlSelf->__VdfgRegularize_h6e95ff9d_0_766);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_771 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_797 = 0;
    VL_ZERO_RESET_W(456, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_vaddr_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state = 0;
    VL_ZERO_RESET_W(416, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_count_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_index_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__recovery_shift_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient_minus_one = 0;
    VL_ZERO_RESET_W(8400, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_tag = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_vaddr = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__next_gen = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__next_gen = 0;
    VL_ZERO_RESET_W(7856, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries);
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
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__state_q = 0;
    VL_ZERO_RESET_W(4992, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6656, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6656, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_uop);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__frontend_epoch_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_valid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_stale_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__redirect_pc_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_set = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_set = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entry_valid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__commit_ptr_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__commit_busy_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_ptr_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_end_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_busy_q = 0;
    VL_ZERO_RESET_W(72, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__head_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__tail_q = 0;
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
    VL_ZERO_RESET_W(416, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0);
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
    VL_ZERO_RESET_W(416, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1);
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
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v2 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v2 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entry_valid__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlyDim1__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_data__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__wrbypass_idx__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v3 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v4 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v4 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v5 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v5 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v5 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v6 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v7 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v7 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v7 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v8 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v8 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v9 = 0;
    VL_ZERO_RESET_W(429, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v10);
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entries_q__v10 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack__v2 = 0;
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
