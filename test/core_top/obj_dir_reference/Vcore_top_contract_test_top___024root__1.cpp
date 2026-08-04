// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlWide<27>/*863:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h5168ec3f_0;

void Vcore_top_contract_test_top___024root___ico_comb__TOP__1(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__1\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<27>/*837:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw;
    VL_ZERO_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw);
    VlWide<27>/*837:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops;
    VL_ZERO_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops);
    VlWide<27>/*837:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop;
    VL_ZERO_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop);
    VlWide<27>/*837:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop;
    VL_ZERO_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop);
    VlWide<27>/*837:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop;
    VL_ZERO_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop);
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire = 0;
    SData/*15:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_532;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_532);
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_733;
    __VdfgRegularize_h6e95ff9d_0_733 = 0;
    VlWide<14>/*447:0*/ __Vtemp_43;
    VlWide<14>/*447:0*/ __Vtemp_45;
    VlWide<14>/*447:0*/ __Vtemp_47;
    VlWide<14>/*447:0*/ __Vtemp_49;
    VlWide<14>/*447:0*/ __Vtemp_51;
    VlWide<14>/*447:0*/ __Vtemp_53;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot 
        = (0x0000000fU & (IData)(vlSelfRef.dmem_resp_idx));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_match 
        = ((((((((IData)(vlSelfRef.dmem_resp_valid) 
                 & (IData)(vlSelfRef.dmem_resp_is_store)) 
                & (0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count))) 
               & ((IData)(vlSelfRef.dmem_resp_idx) 
                  == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_head_tag))) 
              & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                 [(((IData)(0x0000020fU) + (0x00003fffU 
                                            & ((IData)(0x00000210U) 
                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                   >> 5U)] >> (0x0000001fU & ((IData)(0x0000020fU) 
                                              + (0x00003fffU 
                                                 & ((IData)(0x00000210U) 
                                                    * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))) 
             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                [(((IData)(0x000001a6U) + (0x00003fffU 
                                           & ((IData)(0x00000210U) 
                                              * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                  >> 5U)] >> (0x0000001fU & ((IData)(0x000001a6U) 
                                             + (0x00003fffU 
                                                & ((IData)(0x00000210U) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))) 
            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
               [(((IData)(0x000001a5U) + (0x00003fffU 
                                          & ((IData)(0x00000210U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                 >> 5U)] >> (0x0000001fU & ((IData)(0x000001a5U) 
                                            + (0x00003fffU 
                                               & ((IData)(0x00000210U) 
                                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))) 
           & ((0x0000003fU & (((0U == (0x0000001fU 
                                       & ((IData)(0x00000094U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x00000210U) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))
                                ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                        [(((IData)(0x00000099U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(0x00000094U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))))))) 
                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x00000094U) 
                                    + (0x00003fffU 
                                       & ((IData)(0x00000210U) 
                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x00000094U) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))))))) 
              == (IData)(vlSelfRef.dmem_resp_idx)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count_next 
        = (0x0000001fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count) 
                          + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_push_count)));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_match) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count_next 
            = (0x0000001fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count_next) 
                              - (IData)(1U)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match 
        = ((IData)(vlSelfRef.dmem_resp_valid) & ((~ (IData)(vlSelfRef.dmem_resp_is_store)) 
                                                 & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                     [
                                                     (((IData)(0x000001edU) 
                                                       + 
                                                       (0x00001fffU 
                                                        & ((IData)(0x000001eeU) 
                                                           * 
                                                           (0x0000000fU 
                                                            & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(0x000001edU) 
                                                         + 
                                                         (0x00001fffU 
                                                          & ((IData)(0x000001eeU) 
                                                             * 
                                                             (0x0000000fU 
                                                              & (IData)(vlSelfRef.dmem_resp_idx))))))) 
                                                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                        [
                                                        (((IData)(0x000001a5U) 
                                                          + 
                                                          (0x00001fffU 
                                                           & ((IData)(0x000001eeU) 
                                                              * 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x000001a5U) 
                                                            + 
                                                            (0x00001fffU 
                                                             & ((IData)(0x000001eeU) 
                                                                * 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.dmem_resp_idx))))))) 
                                                       & ((~ 
                                                           (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                            [
                                                            (((IData)(0x000001a4U) 
                                                              + 
                                                              (0x00001fffU 
                                                               & ((IData)(0x000001eeU) 
                                                                  * 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                             >> 5U)] 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((IData)(0x000001a4U) 
                                                                + 
                                                                (0x00001fffU 
                                                                 & ((IData)(0x000001eeU) 
                                                                    * 
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.dmem_resp_idx)))))))) 
                                                          & ((~ 
                                                              (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed) 
                                                                >> 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.dmem_resp_idx))) 
                                                               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                                                             & ((IData)(vlSelfRef.dmem_resp_idx) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & (((0U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0000009aU) 
                                                                          + 
                                                                          (0x00001fffU 
                                                                           & ((IData)(0x000001eeU) 
                                                                              * 
                                                                              (0x0000000fU 
                                                                               & (IData)(vlSelfRef.dmem_resp_idx)))))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                                      [
                                                                      (((IData)(0x0000009fU) 
                                                                        + 
                                                                        (0x00001fffU 
                                                                         & ((IData)(0x000001eeU) 
                                                                            * 
                                                                            (0x0000000fU 
                                                                             & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x00000020U) 
                                                                       - 
                                                                       (0x0000001fU 
                                                                        & ((IData)(0x0000009aU) 
                                                                           + 
                                                                           (0x00001fffU 
                                                                            & ((IData)(0x000001eeU) 
                                                                               * 
                                                                               (0x0000000fU 
                                                                                & (IData)(vlSelfRef.dmem_resp_idx))))))))) 
                                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                                       [
                                                                       (((IData)(0x0000009aU) 
                                                                         + 
                                                                         (0x00001fffU 
                                                                          & ((IData)(0x000001eeU) 
                                                                             * 
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & ((IData)(0x0000009aU) 
                                                                           + 
                                                                           (0x00001fffU 
                                                                            & ((IData)(0x000001eeU) 
                                                                               * 
                                                                               (0x0000000fU 
                                                                                & (IData)(vlSelfRef.dmem_resp_idx))))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush) 
               | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_killed) 
                  | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_live));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162 = (0x00001fffU 
                                                  & ((IData)(0x000001eeU) 
                                                     * 
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)
                                                          ? (IData)(vlSelfRef.dmem_resp_idx)
                                                          : (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242 = (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000044U) 
                                                           + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                       [
                                                       (((IData)(0x00000045U) 
                                                         + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000044U) 
                                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162))))) 
                                                     | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                        [
                                                        (((IData)(0x00000044U) 
                                                          + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000044U) 
                                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_403 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                     [
                                                     (((IData)(0x00000043U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(0x00000043U) 
                                                         + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162))));
    __VExpandSel_WordIdx_1 = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162 
                              >> 5U);
    __VExpandSel_LoShift_1 = (0x0000001fU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162);
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[0U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[1U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[2U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[3U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(4U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(5U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(4U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[5U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(6U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(5U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[6U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(7U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(6U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[7U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(8U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(7U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[8U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(9U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(8U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[9U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(9U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[10U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[11U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[12U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000dU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[13U] 
        = (7U & (((((0x000000e9U <= __VExpandSel_WordIdx_1)
                     ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                    [((IData)(0x0000000eU) + __VExpandSel_WordIdx_1)]) 
                   << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                 | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                    [((IData)(0x0000000dU) + __VExpandSel_WordIdx_1)] 
                    >> __VExpandSel_LoShift_1)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_en 
        = ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
             << 4U) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                       << 3U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x18000000U 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[0U])) 
                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_preg 
        = (((QData)((IData)(((0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                             >> 0x0000000dU)) 
                             | (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                               >> 0x0000000cU))))) 
            << 0x00000012U) | (QData)((IData)(((0x0003f000U 
                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U]) 
                                               | ((0x00000fc0U 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                      >> 6U)) 
                                                  | (0x0000003fU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 0x0000000cU)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
        = ((((0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                             >> 0x0000000dU)) | (0x0000003fU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                    >> 0x0000000cU))) 
            << 0x00000012U) | ((0x0003f000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U]) 
                               | ((0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                  >> 6U)) 
                                  | (0x0000003fU & 
                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                      >> 0x0000000cU)))));
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
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_378) 
                                                                   & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_379) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_739) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))))))))) 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 
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
                                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_378) 
                                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_379) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_739) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))))))))) 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 
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
                                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_378) 
                                                                     & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_379) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_739) 
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
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352))))))))) 
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
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U))))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                                                                >> 6U)))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 
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
        = ((0xffff8000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U]) 
           | (0x00007fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
        = ((0x00007fffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U]) 
           | ((IData)((0x0000003fffffffffULL & ((2U 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                 ? 
                                                (((QData)((IData)(
                                                                  ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241))) 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_738) 
                                                                      << 0x0000001aU) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_737) 
                                                                        << 0x00000014U)) 
                                                                    | ((0x000ffc00U 
                                                                        & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U] 
                                                                            << 0x00000011U) 
                                                                           | (0x0001fc00U 
                                                                              & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)))) 
                                                                       | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))))))) 
                                                                           << 9U) 
                                                                          | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x0c000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))))))) 
                                                                              << 8U) 
                                                                             | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU))])))))))))))
                                                 : 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                  << 0x00000031U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                     << 0x00000011U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                       >> 0x0000000fU)))))) 
              << 0x0000000fU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U] 
        = ((0xffe00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U]) 
           | (((IData)((0x0000003fffffffffULL & ((2U 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241))) 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_738) 
                                                                       << 0x0000001aU) 
                                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_737) 
                                                                         << 0x00000014U)) 
                                                                     | ((0x000ffc00U 
                                                                         & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U] 
                                                                             << 0x00000011U) 
                                                                            | (0x0001fc00U 
                                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)))) 
                                                                        | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))))))) 
                                                                            << 9U) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x0c000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))))))) 
                                                                               << 8U) 
                                                                              | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU))])))))))))))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                   << 0x00000031U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                      << 0x00000011U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                        >> 0x0000000fU)))))) 
               >> 0x00000011U) | ((IData)(((0x0000003fffffffffULL 
                                            & ((2U 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241))) 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_738) 
                                                                        << 0x0000001aU) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_737) 
                                                                          << 0x00000014U)) 
                                                                      | ((0x000ffc00U 
                                                                          & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U] 
                                                                              << 0x00000011U) 
                                                                             | (0x0001fc00U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)))) 
                                                                         | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741))))))))) 
                                                                             << 9U) 
                                                                            | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x0c000000U 
                                                                                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[13U])) 
                                                                                & ((((((~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                                                >> 0x00000013U)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid))) 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                                                                                & ((0x0000003fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U)))))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__)))) 
                                                                                & (~ 
                                                                                (((0x0000003fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                                >> 0x0000000cU)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741) 
                                                                                >> 6U))))))))) 
                                                                                << 8U) 
                                                                               | ((0x000000c0U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)) 
                                                                                | (0x0000003fU 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744))) 
                                                                                & ((0x0000001fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744)) 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                                                >> 0x0000000aU))])))))))))))
                                                : (
                                                   ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                    << 0x00000031U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U])) 
                                                       << 0x00000011U) 
                                                      | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[16U])) 
                                                         >> 0x0000000fU))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000fU)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U] 
        = ((0x001fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[17U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[17U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[18U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[18U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[19U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[19U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[20U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[21U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[21U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[22U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[22U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[23U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[23U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[24U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[24U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[25U] 
        = ((0x001fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U]) 
           | (0xffe00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[25U]));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[26U] 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[26U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_580 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop[4U])) 
                                                     & ((0x0000003fU 
                                                         & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop[4U]) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_584 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 6U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                            >> 6U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_588 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_591 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                       >> 0x0000000cU))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                          >> 0x0000000cU)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_594 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_597 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                       >> 9U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                          >> 9U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_600 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_603 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                          >> 6U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                            >> 6U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_574 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_577 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
             << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                  << 2U))) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)));
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
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[26U] 
        = core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[26U];
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
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
        = (0xfffffffeU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U]);
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
            = ((0xfffffe07U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U]) 
               | (0x000001f8U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w) 
                                  + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset) 
                                 << 3U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
            = ((0xfffffffeU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U]) 
               | (1U & (~ (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw[16U] 
                           >> 0x0000000eU))));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset);
    }
    __VdfgRegularize_h6e95ff9d_0_532[0U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                             << 0x00000018U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                               >> 8U));
    __VdfgRegularize_h6e95ff9d_0_532[1U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                             << 0x00000018U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U] 
                                               >> 8U));
    __VdfgRegularize_h6e95ff9d_0_532[2U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                             << 0x00000018U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U] 
                                               >> 8U));
    __VdfgRegularize_h6e95ff9d_0_532[3U] = ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                             << 0x00000018U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U] 
                                               >> 8U));
    __VdfgRegularize_h6e95ff9d_0_532[4U] = (0x3fffffffU 
                                            & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[26U] 
                                                << 0x00000018U) 
                                               | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U] 
                                                  >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_733 = (0x0000003fU 
                                        & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                                           & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                               << 0x0000001eU) 
                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                                 >> 2U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed 
        = (((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                    & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                        << 0x0000001eU) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                           >> 2U)))) 
            << 1U) | (0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                 << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                           >> 0x0000001fU)))));
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
                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_736)
                                 : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                     << 6U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[4U] 
                                               >> 0x0000001aU))) 
                               << 6U)) | (0x0000003fU 
                                          & ((2U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[2U])
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_735)
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
        = ((0xff800000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (0x007fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
        = ((0xe07fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (0x1f800000U & (((0x00000010U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U])
                               ? ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid))
                                   ? ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                                      >> 6U) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_735) 
                                                >> 6U))
                               : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                   << 9U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                             >> 0x00000017U))) 
                             << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
        = ((0x1fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U]) 
           | (((0x00000020U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U])
                ? ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid))
                    ? ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                       >> 6U) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_736) 
                                 >> 6U)) : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                             << 3U) 
                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                               >> 0x0000001dU))) 
              << 0x0000001dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
        = ((0xfffffff8U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U]) 
           | (7U & (((0x00000020U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U])
                      ? ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid))
                          ? ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                             >> 6U) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_736) 
                                       >> 6U)) : ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                   << 3U) 
                                                  | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                     >> 0x0000001dU))) 
                    >> 3U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
        = ((7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
        = ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U]) 
           | (0xfffffff8U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
        = (0x0000003fU & ((7U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[26U]) 
                          | (0x00000038U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[26U])));
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
        = ((0x80000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U]) 
           | ((0x03ffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U]) 
              | (0x7c000000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U] 
        = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[7U]) 
           | (((0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                               << 1U)) | (0x0000003fU 
                                          & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                                 << 1U) 
                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                                   >> 0x0000001fU))))) 
              << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[8U] 
        = ((((0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                             << 1U)) | (0x0000003fU 
                                        & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                                           & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                               << 1U) 
                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[7U] 
                                                 >> 0x0000001fU))))) 
            >> 1U) | ((((0x0000003eU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                        << 1U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                                   >> 0x0000001fU)) 
                       | (0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                         << 1U))) << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[9U] 
        = (((((0x0000003eU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                              << 1U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[8U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                                        << 1U)) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[10U] 
        = (((((0x0000003eU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                              << 1U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[9U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                                        << 1U)) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[11U] 
        = (((((0x0000003eU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                              << 1U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[10U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                        << 1U)) 
                                                    | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[12U] 
        = (((((0x0000003eU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                              << 1U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[11U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                               << 1U))) >> 1U) | ((
                                                   (0x0000003eU 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                                       << 1U)) 
                                                   | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                      >> 0x0000001fU)) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U] 
        = ((0xfffffff8U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U]) 
           | (7U & (((0x0000003eU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                     << 1U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[12U] 
                                                >> 0x0000001fU)) 
                    >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U] 
        = (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[14U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[15U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[16U] 
        = (0x00008000U | (0xffff0000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                         << 0x0000000dU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[17U] 
        = ((7U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                  >> 0x00000013U)) | ((((0x00001c00U 
                                         & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                            << 0x0000000aU)) 
                                        | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                           >> 0x00000016U)) 
                                       | (0xffffe000U 
                                          & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                             << 0x0000000aU))) 
                                      << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[18U] 
        = (((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                              << 0x0000000aU)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                                  >> 0x00000016U)) 
             | (0xffffe000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                               << 0x0000000aU))) >> 0x0000001dU) 
           | ((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                << 0x0000000aU)) | 
                (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                 >> 0x00000016U)) | (0xffffe000U & 
                                     (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                      << 0x0000000aU))) 
              << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[19U] 
        = (((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                              << 0x0000000aU)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                                  >> 0x00000016U)) 
             | (0xffffe000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                               << 0x0000000aU))) >> 0x0000001dU) 
           | ((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                << 0x0000000aU)) | 
                (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                 >> 0x00000016U)) | (0xffffe000U & 
                                     (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                      << 0x0000000aU))) 
              << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[20U] 
        = (((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                              << 0x0000000aU)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                                  >> 0x00000016U)) 
             | (0xffffe000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                               << 0x0000000aU))) >> 0x0000001dU) 
           | ((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                << 0x0000000aU)) | 
                (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                 >> 0x00000016U)) | (0xffffe000U & 
                                     (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                      << 0x0000000aU))) 
              << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U] 
        = ((0xfffffc00U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U]) 
           | (((((0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                 << 0x0000000aU)) | 
                 (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                  >> 0x00000016U)) | (0xffffe000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                       << 0x0000000aU))) 
               >> 0x0000001dU) | (((0x0000007eU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx) 
                                                   >> 5U)) 
                                   | (1U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                            >> 0x00000016U))) 
                                  << 3U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U] 
        = ((0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[21U]) 
           | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
               << 0x0000000dU) | (0x00001c00U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                 >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[22U] 
        = ((0x000003ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                << 0x0000000dU) 
                                               | (0x00001c00U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[23U] 
        = ((0x000003ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                           >> 0x00000013U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                << 0x0000000dU) 
                                               | (0x00001c00U 
                                                  & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                     >> 0x00000013U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[24U] 
        = ((0x000003ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                           >> 0x00000013U)) | ((__VdfgRegularize_h6e95ff9d_0_532[0U] 
                                                << 0x00000015U) 
                                               | (((IData)(__VdfgRegularize_h6e95ff9d_0_733) 
                                                   << 0x0000000fU) 
                                                  | (0x00007c00U 
                                                     & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                                         << 0x0000000dU) 
                                                        | (0x00001c00U 
                                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                              >> 0x00000013U)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[25U] 
        = ((0x000003ffU & (__VdfgRegularize_h6e95ff9d_0_532[0U] 
                           >> 0x0000000bU)) | ((0x001ffc00U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[0U] 
                                                   >> 0x0000000bU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[1U] 
                                                  << 0x00000015U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[26U] 
        = ((0x000003ffU & (__VdfgRegularize_h6e95ff9d_0_532[1U] 
                           >> 0x0000000bU)) | ((0x001ffc00U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[1U] 
                                                   >> 0x0000000bU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[2U] 
                                                  << 0x00000015U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[27U] 
        = ((0x000003ffU & (__VdfgRegularize_h6e95ff9d_0_532[2U] 
                           >> 0x0000000bU)) | ((0x001ffc00U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[2U] 
                                                   >> 0x0000000bU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[3U] 
                                                  << 0x00000015U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[28U] 
        = ((0x000003ffU & (__VdfgRegularize_h6e95ff9d_0_532[3U] 
                           >> 0x0000000bU)) | ((0x001ffc00U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[3U] 
                                                   >> 0x0000000bU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[4U] 
                                                  << 0x00000015U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U] 
        = ((0xfff80000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U]) 
           | ((0x000003ffU & (__VdfgRegularize_h6e95ff9d_0_532[4U] 
                              >> 0x0000000bU)) | (0x001ffc00U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_532[4U] 
                                                     >> 0x0000000bU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U] 
        = (0x0007ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[29U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[30U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[31U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[32U] = 0x80000000U;
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid = 0U;
    VL_ASSIGN_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h5168ec3f_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = 0U;
    VL_ASSIGN_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h5168ec3f_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0U;
    if ((1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))))) {
        if ((1U != (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
            if ((4U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid 
                    = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot))));
                if ((0x0345U >= (0x000003ffU & ((IData)(0x000001a3U) 
                                                * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)))) {
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
                    __Vtemp_43[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                    __Vtemp_43[13U] = (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U]);
                    VL_ASSIGNSEL_WW(838, 419, (0x000003ffU 
                                               & ((IData)(0x000001a3U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_43);
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
                    if ((0x0345U >= (0x000003ffU & 
                                     ((IData)(0x000001a3U) 
                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)))) {
                        __Vtemp_47[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                        __Vtemp_47[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                        __Vtemp_47[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                        __Vtemp_47[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                        __Vtemp_47[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                        __Vtemp_47[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                        __Vtemp_47[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                        __Vtemp_47[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                        __Vtemp_47[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                        __Vtemp_47[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                        __Vtemp_47[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                        __Vtemp_47[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                        __Vtemp_47[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                        __Vtemp_47[13U] = (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U]);
                        VL_ASSIGNSEL_WW(838, 419, (0x000003ffU 
                                                   & ((IData)(0x000001a3U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_47);
                    }
                    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot 
                        = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot);
                }
            }
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid = 0U;
        VL_ASSIGN_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h5168ec3f_0);
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0U;
        if ((1U == (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid 
                = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                   | (3U & ((IData)(1U) << (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot))));
            if ((0x0345U >= (0x000003ffU & ((IData)(0x000001a3U) 
                                            * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)))) {
                __Vtemp_51[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_51[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_51[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_51[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_51[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_51[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_51[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_51[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_51[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_51[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_51[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_51[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_51[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                __Vtemp_51[13U] = (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U]);
                VL_ASSIGNSEL_WW(838, 419, (0x000003ffU 
                                           & ((IData)(0x000001a3U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_51);
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot 
                = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot);
        }
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid = 0U;
        VL_ASSIGN_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, Vcore_top_contract_test_top__ConstPool__CONST_h5168ec3f_0);
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
                  >> 1U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q) 
                               >> 1U))))) {
        if ((1U != (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                   >> 4U)))) {
            if ((4U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                       >> 4U)))) {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid 
                    = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot))));
                if ((0x0345U >= (0x000003ffU & ((IData)(0x000001a3U) 
                                                * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)))) {
                    __Vtemp_45[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                         >> 3U));
                    __Vtemp_45[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                         >> 3U));
                    __Vtemp_45[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                         >> 3U));
                    __Vtemp_45[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                         >> 3U));
                    __Vtemp_45[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                         >> 3U));
                    __Vtemp_45[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                         >> 3U));
                    __Vtemp_45[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                         >> 3U));
                    __Vtemp_45[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                         >> 3U));
                    __Vtemp_45[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                         >> 3U));
                    __Vtemp_45[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                         >> 3U));
                    __Vtemp_45[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                        << 0x0000001dU) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                          >> 3U));
                    __Vtemp_45[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                        << 0x0000001dU) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                          >> 3U));
                    __Vtemp_45[12U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
                                        << 0x0000001dU) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                          >> 3U));
                    __Vtemp_45[13U] = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
                                             >> 3U));
                    VL_ASSIGNSEL_WW(838, 419, (0x000003ffU 
                                               & ((IData)(0x000001a3U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_45);
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
                    if ((0x0345U >= (0x000003ffU & 
                                     ((IData)(0x000001a3U) 
                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)))) {
                        __Vtemp_49[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                             >> 3U));
                        __Vtemp_49[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                             >> 3U));
                        __Vtemp_49[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                             >> 3U));
                        __Vtemp_49[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                             >> 3U));
                        __Vtemp_49[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                             >> 3U));
                        __Vtemp_49[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                             >> 3U));
                        __Vtemp_49[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                             >> 3U));
                        __Vtemp_49[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                             >> 3U));
                        __Vtemp_49[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                             >> 3U));
                        __Vtemp_49[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                             >> 3U));
                        __Vtemp_49[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                              >> 3U));
                        __Vtemp_49[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                              >> 3U));
                        __Vtemp_49[12U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                              >> 3U));
                        __Vtemp_49[13U] = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
                                                 >> 3U));
                        VL_ASSIGNSEL_WW(838, 419, (0x000003ffU 
                                                   & ((IData)(0x000001a3U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_49);
                    }
                    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot 
                        = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot);
                }
            }
        }
        if ((1U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                   >> 4U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid 
                = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                   | (3U & ((IData)(1U) << (1U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot))));
            if ((0x0345U >= (0x000003ffU & ((IData)(0x000001a3U) 
                                            * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)))) {
                __Vtemp_53[0U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U] 
                                     >> 3U));
                __Vtemp_53[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U] 
                                     >> 3U));
                __Vtemp_53[2U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U] 
                                     >> 3U));
                __Vtemp_53[3U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U] 
                                     >> 3U));
                __Vtemp_53[4U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U] 
                                     >> 3U));
                __Vtemp_53[5U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U] 
                                     >> 3U));
                __Vtemp_53[6U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U] 
                                     >> 3U));
                __Vtemp_53[7U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U] 
                                     >> 3U));
                __Vtemp_53[8U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U] 
                                     >> 3U));
                __Vtemp_53[9U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U] 
                                     >> 3U));
                __Vtemp_53[10U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                    << 0x0000001dU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U] 
                                      >> 3U));
                __Vtemp_53[11U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                    << 0x0000001dU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U] 
                                      >> 3U));
                __Vtemp_53[12U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
                                    << 0x0000001dU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U] 
                                      >> 3U));
                __Vtemp_53[13U] = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[26U] 
                                         >> 3U));
                VL_ASSIGNSEL_WW(838, 419, (0x000003ffU 
                                           & ((IData)(0x000001a3U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_53);
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot 
                = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot);
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[13U] 
        = ((0xfffffff8U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[13U]) 
           | (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries[13U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[13U] 
        = (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[13U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[14U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[15U] 
        = (0x00002000U | (0xffffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                         << 0x0000000bU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[16U] 
        = ((7U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                  >> 0x00000015U)) | ((((0x00000700U 
                                         & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                            << 8U)) 
                                        | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                           >> 0x00000018U)) 
                                       | (0xfffff800U 
                                          & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                             << 8U))) 
                                      << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[17U] 
        = (((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                              << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[13U] 
                                         >> 0x00000018U)) 
             | (0xfffff800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                               << 8U))) >> 0x0000001dU) 
           | ((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                           >> 0x00000018U)) 
               | (0xfffff800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                 << 8U))) << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[18U] 
        = (((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                              << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[14U] 
                                         >> 0x00000018U)) 
             | (0xfffff800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                               << 8U))) >> 0x0000001dU) 
           | ((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                           >> 0x00000018U)) 
               | (0xfffff800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                 << 8U))) << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[19U] 
        = (((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                              << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[15U] 
                                         >> 0x00000018U)) 
             | (0xfffff800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                               << 8U))) >> 0x0000001dU) 
           | ((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                           >> 0x00000018U)) 
               | (((0xfc000000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                   << 0x00000014U)) 
                   | (0x03ffffffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                     >> 3U))) << 0x0000000bU)) 
              << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U] 
        = ((0xffffc000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U]) 
           | (((((0x00000700U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                 << 8U)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[16U] 
                                            >> 0x00000018U)) 
                | (((0xfc000000U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                    << 0x00000014U)) 
                    | (0x03ffffffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                      >> 3U))) << 0x0000000bU)) 
               >> 0x0000001dU) | (0x00003ff8U & (((0xfc000000U 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx) 
                                                      << 0x00000014U)) 
                                                  | (0x03ffffffU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[17U] 
                                                        >> 3U))) 
                                                 >> 0x00000012U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U] 
        = ((0x00003fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[20U]) 
           | (0xffffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                             << 0x0000000bU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[21U] 
        = (((0x00003800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                            << 0x0000000bU)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[18U] 
                                                >> 0x00000015U)) 
           | (0xffffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                             << 0x0000000bU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[22U] 
        = (((0x00003800U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                            << 0x0000000bU)) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[19U] 
                                                >> 0x00000015U)) 
           | (0xffffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                             << 0x0000000bU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[23U] 
        = (((0x00002000U & ((IData)(__VdfgRegularize_h6e95ff9d_0_733) 
                            << 0x0000000dU)) | (0x00001fffU 
                                                & ((0x00003800U 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[21U] 
                                                       << 0x0000000bU)) 
                                                   | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops[20U] 
                                                      >> 0x00000015U)))) 
           | ((__VdfgRegularize_h6e95ff9d_0_532[0U] 
               << 0x00000013U) | (0xffffc000U & ((IData)(__VdfgRegularize_h6e95ff9d_0_733) 
                                                 << 0x0000000dU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[24U] 
        = (((0x00003fffU & (__VdfgRegularize_h6e95ff9d_0_532[0U] 
                            >> 0x0000000dU)) | ((IData)(__VdfgRegularize_h6e95ff9d_0_733) 
                                                >> 0x00000013U)) 
           | ((0x0007c000U & (__VdfgRegularize_h6e95ff9d_0_532[0U] 
                              >> 0x0000000dU)) | (__VdfgRegularize_h6e95ff9d_0_532[1U] 
                                                  << 0x00000013U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[25U] 
        = ((0x00003fffU & (__VdfgRegularize_h6e95ff9d_0_532[1U] 
                           >> 0x0000000dU)) | ((0x0007c000U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[1U] 
                                                   >> 0x0000000dU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[2U] 
                                                  << 0x00000013U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[26U] 
        = ((0x00003fffU & (__VdfgRegularize_h6e95ff9d_0_532[2U] 
                           >> 0x0000000dU)) | ((0x0007c000U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[2U] 
                                                   >> 0x0000000dU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[3U] 
                                                  << 0x00000013U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[27U] 
        = ((0x00003fffU & (__VdfgRegularize_h6e95ff9d_0_532[3U] 
                           >> 0x0000000dU)) | ((0x0007c000U 
                                                & (__VdfgRegularize_h6e95ff9d_0_532[3U] 
                                                   >> 0x0000000dU)) 
                                               | (__VdfgRegularize_h6e95ff9d_0_532[4U] 
                                                  << 0x00000013U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = ((0xfffe0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]) 
           | ((0x00003fffU & (__VdfgRegularize_h6e95ff9d_0_532[4U] 
                              >> 0x0000000dU)) | (0x0007c000U 
                                                  & (__VdfgRegularize_h6e95ff9d_0_532[4U] 
                                                     >> 0x0000000dU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U] 
        = (0x0001ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[28U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[29U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries[30U] = 0x08000000U;
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
        = ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                 << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                           >> 0x0000001fU))) << 0x0000001fU) 
           | (0x7fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U] 
        = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U]) 
           | (0x0000001fU & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                                  << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                                            >> 0x0000001fU))) 
                             >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U] 
        = ((0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[8U]) 
           | ((((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U] 
                 << 0x0000001bU) | (0x07ffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                                                   >> 5U))) 
               | (0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                                 >> 5U))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[9U] 
        = (((((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U] 
               << 0x0000001bU) | (0x07ffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                                                 >> 5U))) 
             | (0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                               >> 5U))) >> 0x0000001bU) 
           | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U] 
                               >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U] 
                                           << 0x0000001bU) 
                                          | (0x07ffc000U 
                                             & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U] 
                                                >> 5U)))) 
              << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[10U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[9U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[11U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[10U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[12U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[11U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[13U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[12U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[14U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[13U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[15U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[14U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[16U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[15U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[17U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[16U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[18U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[17U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[19U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[18U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[20U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[19U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                                >> 5U)) 
                                | (0x1fffc000U & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                                   << 0x0000001bU) 
                                                  | (0x07ffc000U 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                                        >> 5U))))) 
                               << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U]) 
           | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                               >> 5U)) | (0x1fffc000U 
                                          & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                              << 0x0000001bU) 
                                             | (0x07ffc000U 
                                                & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[20U] 
                                                   >> 5U))))) 
              >> 0x0000001bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U] 
        = ((0xffc00003U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U]) 
           | (((0x0001ffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                               >> 2U)) | (0x0000003fU 
                                          & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                                 << 0x0000001eU) 
                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                                   >> 2U))))) 
              << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U] 
        = ((0x003fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[21U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[22U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[22U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[23U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[23U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[24U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[24U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[25U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[25U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated[26U] 
        = (0x0000003fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[26U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                           & ((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                                      & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                          << 0x0000001eU) 
                                         | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[21U] 
                                            >> 2U)))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[8U] 
                                                  << 1U) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop[7U] 
                                                    >> 0x0000001fU))))));
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
        = ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                 << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                           >> 0x0000001fU))) << 0x0000001fU) 
           | (0x7fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U] 
        = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U]) 
           | (0x0000001fU & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                                  << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                                            >> 0x0000001fU))) 
                             >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U] 
        = ((0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[8U]) 
           | ((((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U] 
                 << 0x0000001bU) | (0x07ffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                                                   >> 5U))) 
               | (0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                                 >> 5U))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[9U] 
        = (((((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U] 
               << 0x0000001bU) | (0x07ffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                                                 >> 5U))) 
             | (0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                               >> 5U))) >> 0x0000001bU) 
           | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U] 
                               >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U] 
                                           << 0x0000001bU) 
                                          | (0x07ffc000U 
                                             & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U] 
                                                >> 5U)))) 
              << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[10U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[9U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[11U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[10U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[12U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[11U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[13U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[12U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[14U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[13U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[15U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[14U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[16U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[15U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[17U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[16U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[18U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[17U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[19U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[18U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[20U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[19U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                                >> 5U)) 
                                | (0x1fffc000U & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                                   << 0x0000001bU) 
                                                  | (0x07ffc000U 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                                        >> 5U))))) 
                               << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U]) 
           | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                               >> 5U)) | (0x1fffc000U 
                                          & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                              << 0x0000001bU) 
                                             | (0x07ffc000U 
                                                & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[20U] 
                                                   >> 5U))))) 
              >> 0x0000001bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U] 
        = ((0xffc00003U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U]) 
           | (((0x0001ffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                               >> 2U)) | (0x0000003fU 
                                          & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                                 << 0x0000001eU) 
                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                                   >> 2U))))) 
              << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U] 
        = ((0x003fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[21U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[22U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[22U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[23U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[23U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[24U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[24U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[25U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[25U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated[26U] 
        = (0x0000003fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[26U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                           & ((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                                      & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                          << 0x0000001eU) 
                                         | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[21U] 
                                            >> 2U)))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[8U] 
                                                  << 1U) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop[7U] 
                                                    >> 0x0000001fU))))));
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
        = ((((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                 << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                           >> 0x0000001fU))) << 0x0000001fU) 
           | (0x7fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U] 
        = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U]) 
           | (0x0000001fU & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                                  << 1U) | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                                            >> 0x0000001fU))) 
                             >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U] 
        = ((0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[8U]) 
           | ((((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U] 
                 << 0x0000001bU) | (0x07ffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                                                   >> 5U))) 
               | (0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                                 >> 5U))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[9U] 
        = (((((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U] 
               << 0x0000001bU) | (0x07ffc000U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                                                 >> 5U))) 
             | (0x000007ffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                               >> 5U))) >> 0x0000001bU) 
           | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U] 
                               >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U] 
                                           << 0x0000001bU) 
                                          | (0x07ffc000U 
                                             & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U] 
                                                >> 5U)))) 
              << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[10U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[9U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[11U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[10U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[12U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[11U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[13U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[12U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[14U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[13U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[15U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[14U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[16U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[15U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[17U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[16U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[18U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[17U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[19U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[18U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U] 
                                                >> 5U)) 
                                | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                    << 0x0000001bU) 
                                   | (0x07ffc000U & 
                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U] 
                                       >> 5U)))) << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[20U] 
        = ((((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U] 
                             >> 5U)) | ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                         << 0x0000001bU) 
                                        | (0x07ffc000U 
                                           & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[19U] 
                                              >> 5U)))) 
            >> 0x0000001bU) | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                                >> 5U)) 
                                | (0x1fffc000U & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                                   << 0x0000001bU) 
                                                  | (0x07ffc000U 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                                        >> 5U))))) 
                               << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U]) 
           | (((0x00003fffU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                               >> 5U)) | (0x1fffc000U 
                                          & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                              << 0x0000001bU) 
                                             | (0x07ffc000U 
                                                & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[20U] 
                                                   >> 5U))))) 
              >> 0x0000001bU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U] 
        = ((0xffc00003U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U]) 
           | (((0x0001ffc0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                               >> 2U)) | (0x0000003fU 
                                          & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
                                             & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                                 << 0x0000001eU) 
                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                                   >> 2U))))) 
              << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U] 
        = ((0x003fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[21U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[22U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[22U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[22U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[23U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[23U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[23U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[24U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[24U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[24U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[25U] 
        = ((0x003fffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[25U]) 
           | (0xffc00000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[25U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated[26U] 
        = (0x0000003fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[26U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed 
        = ((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                           & ((0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                                      & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                          << 0x0000001eU) 
                                         | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[21U] 
                                            >> 2U)))) 
                              << 1U))) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                                          & (0U != 
                                             ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                                              & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[8U] 
                                                  << 1U) 
                                                 | (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop[7U] 
                                                    >> 0x0000001fU))))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[4U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[5U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[6U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_q[7U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor 
        = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_complete))) 
           & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_killed)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire 
        = ((2U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire)) 
           | (1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                     & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready)) 
                    & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed)))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire 
        = ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire)) 
           | (2U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid) 
                     & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready)) 
                    & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed) 
                           >> 1U)) << 1U))));
    if ((1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((3U != (3U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((5U != (5U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((9U != (9U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0011U != (0x0011U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0021U != (0x0021U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0041U != (0x0041U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0081U != (0x0081U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0101U != (0x0101U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0201U != (0x0201U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0401U != (0x0401U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0801U != (0x0801U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x1001U != (0x1001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x2001U != (0x2001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x4001U != (0x4001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x8001U != (0x8001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((3U != (3U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 1U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((6U != (6U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x000aU != (0x000aU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0012U != (0x0012U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0022U != (0x0022U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0042U != (0x0042U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0082U != (0x0082U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0102U != (0x0102U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0202U != (0x0202U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0402U != (0x0402U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x0802U != (0x0802U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x1002U != (0x1002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x2002U != (0x2002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x4002U != (0x4002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((0x8002U != (0x8002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
    }
    if ((IData)((5U != (5U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((6U != (6U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 2U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x000cU != (0x000cU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0014U != (0x0014U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0024U != (0x0024U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0044U != (0x0044U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0084U != (0x0084U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0104U != (0x0104U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0204U != (0x0204U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0404U != (0x0404U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0804U != (0x0804U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x1004U != (0x1004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x2004U != (0x2004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x4004U != (0x4004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x8004U != (0x8004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((9U != (9U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x000aU != (0x000aU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x000cU != (0x000cU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 3U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0018U != (0x0018U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0028U != (0x0028U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0048U != (0x0048U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0088U != (0x0088U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0108U != (0x0108U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0208U != (0x0208U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0408U != (0x0408U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0808U != (0x0808U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x1008U != (0x1008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x2008U != (0x2008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x4008U != (0x4008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x8008U != (0x8008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[1U]);
    }
    if ((IData)((0x0011U != (0x0011U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0012U != (0x0012U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0014U != (0x0014U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0018U != (0x0018U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 4U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0030U != (0x0030U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0050U != (0x0050U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0090U != (0x0090U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0110U != (0x0110U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0210U != (0x0210U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0410U != (0x0410U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0810U != (0x0810U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x1010U != (0x1010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x2010U != (0x2010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x4010U != (0x4010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x8010U != (0x8010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0021U != (0x0021U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0022U != (0x0022U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0024U != (0x0024U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0028U != (0x0028U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0030U != (0x0030U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 5U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0060U != (0x0060U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x00a0U != (0x00a0U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0120U != (0x0120U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0220U != (0x0220U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0420U != (0x0420U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0820U != (0x0820U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x1020U != (0x1020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x2020U != (0x2020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x4020U != (0x4020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x8020U != (0x8020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[2U]);
    }
    if ((IData)((0x0041U != (0x0041U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0042U != (0x0042U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0044U != (0x0044U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0048U != (0x0048U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0050U != (0x0050U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0060U != (0x0060U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 6U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x00c0U != (0x00c0U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0140U != (0x0140U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0240U != (0x0240U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0440U != (0x0440U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0840U != (0x0840U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x1040U != (0x1040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x2040U != (0x2040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x4040U != (0x4040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x8040U != (0x8040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0081U != (0x0081U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0082U != (0x0082U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0084U != (0x0084U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0088U != (0x0088U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0090U != (0x0090U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x00a0U != (0x00a0U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x00c0U != (0x00c0U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 7U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0180U != (0x0180U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0280U != (0x0280U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0480U != (0x0480U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0880U != (0x0880U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x1080U != (0x1080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x2080U != (0x2080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x4080U != (0x4080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x8080U != (0x8080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[3U]);
    }
    if ((IData)((0x0101U != (0x0101U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0102U != (0x0102U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0104U != (0x0104U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0108U != (0x0108U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0110U != (0x0110U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0120U != (0x0120U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0140U != (0x0140U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0180U != (0x0180U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 8U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0300U != (0x0300U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0500U != (0x0500U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0900U != (0x0900U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x1100U != (0x1100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x2100U != (0x2100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x4100U != (0x4100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x8100U != (0x8100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0201U != (0x0201U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0202U != (0x0202U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0204U != (0x0204U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0208U != (0x0208U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0210U != (0x0210U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0220U != (0x0220U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0240U != (0x0240U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0280U != (0x0280U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0300U != (0x0300U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 9U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0600U != (0x0600U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0a00U != (0x0a00U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x1200U != (0x1200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x2200U != (0x2200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x4200U != (0x4200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x8200U != (0x8200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[4U]);
    }
    if ((IData)((0x0401U != (0x0401U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0402U != (0x0402U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0404U != (0x0404U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0408U != (0x0408U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0410U != (0x0410U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0420U != (0x0420U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0440U != (0x0440U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0480U != (0x0480U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0500U != (0x0500U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0600U != (0x0600U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 0x0000000aU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0c00U != (0x0c00U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x1400U != (0x1400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x2400U != (0x2400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x4400U != (0x4400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x8400U != (0x8400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0801U != (0x0801U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0802U != (0x0802U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0804U != (0x0804U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0808U != (0x0808U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0810U != (0x0810U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0820U != (0x0820U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0840U != (0x0840U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0880U != (0x0880U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0900U != (0x0900U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0a00U != (0x0a00U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x0c00U != (0x0c00U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 0x0000000bU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x1800U != (0x1800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x2800U != (0x2800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x4800U != (0x4800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x8800U != (0x8800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[5U]);
    }
    if ((IData)((0x1001U != (0x1001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1002U != (0x1002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1004U != (0x1004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1008U != (0x1008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1010U != (0x1010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1020U != (0x1020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1040U != (0x1040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1080U != (0x1080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1100U != (0x1100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1200U != (0x1200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1400U != (0x1400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x1800U != (0x1800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 0x0000000cU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x3000U != (0x3000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x5000U != (0x5000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x9000U != (0x9000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2001U != (0x2001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2002U != (0x2002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2004U != (0x2004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2008U != (0x2008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2010U != (0x2010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2020U != (0x2020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2040U != (0x2040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2080U != (0x2080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2100U != (0x2100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2200U != (0x2200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2400U != (0x2400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x2800U != (0x2800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x3000U != (0x3000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 0x0000000dU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x6000U != (0x6000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0xa000U != (0xa000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[6U]);
    }
    if ((IData)((0x4001U != (0x4001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4002U != (0x4002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffffdU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4004U != (0x4004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffffbU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4008U != (0x4008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffff7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4010U != (0x4010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffffefU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4020U != (0x4020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffffdfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4040U != (0x4040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffffbfU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4080U != (0x4080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffff7fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4100U != (0x4100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffeffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4200U != (0x4200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffdffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4400U != (0x4400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffffbffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x4800U != (0x4800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffff7ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x5000U != (0x5000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffefffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x6000U != (0x6000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffdfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 0x0000000eU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffffbfffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0xc000U != (0xc000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffff7fffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8001U != (0x8001U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffeffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8002U != (0x8002U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffdffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8004U != (0x8004U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfffbffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8008U != (0x8008U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfff7ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8010U != (0x8010U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffefffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8020U != (0x8020U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffdfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8040U != (0x8040U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xffbfffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8080U != (0x8080U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xff7fffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8100U != (0x8100U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfeffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8200U != (0x8200U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfdffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8400U != (0x8400U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xfbffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x8800U != (0x8800U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xf7ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0x9000U != (0x9000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xefffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0xa000U != (0xa000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xdfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((IData)((0xc000U != (0xc000U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0xbfffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                  >> 0x0000000fU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U] 
            = (0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[7U]);
    }
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 1U))] 
            = (((~ ((IData)(1U) << (0x00000010U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                   << 4U)))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                        >> 1U))]) | ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor)) 
                                     << (0x00000010U 
                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                            << 4U))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = ((~ ((IData)(1U) << (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(1U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(1U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 1U)) 
                                     << (0x0000001fU 
                                         & ((IData)(1U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x10U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x10U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(2U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(2U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 2U)) 
                                     << (0x0000001fU 
                                         & ((IData)(2U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x20U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x20U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x20U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(3U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(3U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 3U)) 
                                     << (0x0000001fU 
                                         & ((IData)(3U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x30U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x30U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x30U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(4U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(4U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 4U)) 
                                     << (0x0000001fU 
                                         & ((IData)(4U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x40U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x40U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x40U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(5U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(5U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 5U)) 
                                     << (0x0000001fU 
                                         & ((IData)(5U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x50U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x50U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x50U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(6U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(6U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 6U)) 
                                     << (0x0000001fU 
                                         & ((IData)(6U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x60U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x60U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x60U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(7U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(7U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 7U)) 
                                     << (0x0000001fU 
                                         & ((IData)(7U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x70U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x70U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x70U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(8U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(8U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 8U)) 
                                     << (0x0000001fU 
                                         & ((IData)(8U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x80U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x80U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x80U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(9U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(9U) + (0x000000f0U 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                           << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 9U)) 
                                     << (0x0000001fU 
                                         & ((IData)(9U) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x90U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x90U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x90U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0aU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0aU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0aU) + (0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0aU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0aU) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xa0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xa0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xa0U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0bU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0bU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0bU) + (0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0bU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0bU) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xb0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xb0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xb0U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0cU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0cU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0cU) + (0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0cU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0cU) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xc0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xc0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xc0U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0dU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0dU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0dU) + (0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0dU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0dU) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xd0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xd0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xd0U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0eU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0eU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0eU) + (0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0eU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0eU) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xe0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xe0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xe0U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0fU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0fU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                       << 4U)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0fU) + (0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0fU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0fU) 
                                            + (0x000000f0U 
                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  << 4U))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xf0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xf0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xf0U) + (0x0000000fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U)) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((0x000000f0U 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      << 4U)) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((0x000000f0U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                        << 4U)) + (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                       >> 5U))]);
    }
    if ((2U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x00000010U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                        >> 5U))]) | ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor)) 
                                     << (0x00000010U 
                                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U] 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                  >> 4U)))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[0U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(1U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(1U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 1U)) 
                                     << (0x0000001fU 
                                         & ((IData)(1U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x10U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x10U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(2U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(2U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 2U)) 
                                     << (0x0000001fU 
                                         & ((IData)(2U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x20U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x20U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x20U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(3U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(3U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 3U)) 
                                     << (0x0000001fU 
                                         & ((IData)(3U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x30U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x30U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x30U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(4U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(4U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 4U)) 
                                     << (0x0000001fU 
                                         & ((IData)(4U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x40U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x40U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x40U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(5U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(5U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 5U)) 
                                     << (0x0000001fU 
                                         & ((IData)(5U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x50U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x50U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x50U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(6U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(6U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 6U)) 
                                     << (0x0000001fU 
                                         & ((IData)(6U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x60U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x60U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x60U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(7U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(7U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 7U)) 
                                     << (0x0000001fU 
                                         & ((IData)(7U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x70U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x70U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x70U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(8U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(8U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 8U)) 
                                     << (0x0000001fU 
                                         & ((IData)(8U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x80U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x80U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x80U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(9U) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(9U) + (0x000000f0U 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 9U)) 
                                     << (0x0000001fU 
                                         & ((IData)(9U) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x90U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x90U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0x90U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0aU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0aU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0aU) + (0x000000f0U 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0aU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0aU) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xa0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xa0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xa0U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0bU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0bU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0bU) + (0x000000f0U 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0bU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0bU) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xb0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xb0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xb0U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0cU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0cU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0cU) + (0x000000f0U 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0cU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0cU) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xc0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xc0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xc0U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0dU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0dU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0dU) + (0x000000f0U 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0dU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0dU) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xd0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xd0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xd0U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0eU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0eU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0eU) + (0x000000f0U 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0eU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0eU) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xe0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xe0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xe0U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0x0fU) 
                                                                                + 
                                                                                (0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0fU) 
                                                   + 
                                                   (0x000000f0U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)))))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                [(7U & (((IData)(0x0fU) + (0x000000f0U 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                        >> 5U))]) | ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__survivor) 
                                            >> 0x0fU)) 
                                     << (0x0000001fU 
                                         & ((IData)(0x0fU) 
                                            + (0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((IData)(0xf0U) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0xf0U) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((IData)(0xf0U) + (0x0000000fU 
                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                             >> 4U))) 
                       >> 5U))]);
        if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__alloc_fire))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                                                                                >> 5U))] 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                   [(7U & (((0x000000f0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)) 
                            + (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))) 
                           >> 5U))] | ((IData)(1U) 
                                       << (0x0000001fU 
                                           & ((0x000000f0U 
                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)) 
                                              + (0x0000000fU 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((0x000000f0U 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                << 4U)) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x0000001fU 
                                       & ((0x000000f0U 
                                           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              << 4U)) 
                                          + (0x0000000fU 
                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                >> 4U)))))) 
                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
                   [(7U & (((0x000000f0U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                            << 4U)) 
                            + (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                              >> 4U))) 
                           >> 5U))]);
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n[(7U 
                                                                                & (((0x000000f0U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                                                >> 4U))) 
                                                                                >> 5U))] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((0x000000f0U 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)) 
                                                  + 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                                      >> 4U)))))) 
               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__older_n
               [(7U & (((0x000000f0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot)) 
                        + (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot) 
                                          >> 4U))) 
                       >> 5U))]);
    }
}

void Vcore_top_contract_test_top___024root___ico_comb__TOP__3(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__3\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__live_mem_packet_valid 
        = ((IData)(vlSelfRef.imem_resp_ready) & ((~ 
                                                  ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_stale_q) 
                                                   | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid))) 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__imem_resp_fire)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_xcpt_code 
        = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_code_q 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__live_mem_packet_valid))))));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__live_mem_packet_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid 
            = (((VL_GTS_III(32, 4U, ((IData)(3U) + 
                                     (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                            >> 2U)))) 
                 << 3U) | (VL_GTS_III(32, 4U, ((IData)(2U) 
                                               + (3U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                     >> 2U)))) 
                           << 2U)) | ((VL_GTS_III(32, 4U, 
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                       >> 2U)))) 
                                       << 1U) | VL_GTS_III(32, 4U, 
                                                           (3U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                               >> 2U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U] 
            = (VL_GTS_III(32, 4U, ((IData)(1U) + (3U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                     >> 2U))))
                ? ((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205[1U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U] 
            = (IData)((((QData)((IData)((VL_GTS_III(32, 4U, 
                                                    ((IData)(3U) 
                                                     + 
                                                     (3U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                         >> 2U))))
                                          ? ((IData)(0x0000000cU) 
                                             + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                                          : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205[3U]))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (VL_GTS_III(32, 4U, 
                                                                      ((IData)(2U) 
                                                                       + 
                                                                       (3U 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                                           >> 2U))))
                                                            ? 
                                                           ((IData)(8U) 
                                                            + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205[2U])))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U] 
            = (IData)(((((QData)((IData)((VL_GTS_III(32, 4U, 
                                                     ((IData)(3U) 
                                                      + 
                                                      (3U 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                          >> 2U))))
                                           ? ((IData)(0x0000000cU) 
                                              + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                                           : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205[3U]))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (VL_GTS_III(32, 4U, 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (3U 
                                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                                            >> 2U))))
                                                             ? 
                                                            ((IData)(8U) 
                                                             + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                                                             : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205[2U])))) 
                       >> 0x00000020U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_valid_q) 
               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_566)) 
                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__frontend_epoch_q) 
                     == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_epoch_q))));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_valid_q;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid = 0U;
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_live_result_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds[4U];
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) {
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_valid_q) {
            __Vtemp_2[3U] = (((IData)((0x0000000fffffffffULL 
                                       & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                            [
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                             [
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][0U]))) 
                                          & (- (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q)))))) 
                              >> 0x00000018U) | ((IData)(
                                                         ((0x0000000fffffffffULL 
                                                           & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                                                [
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][1U])) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                                                [
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][0U]))) 
                                                              & (- (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q))))) 
                                                          >> 0x00000020U)) 
                                                 << 8U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[0U] 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q][0U];
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[1U] 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q][1U];
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[2U] 
                = (((IData)((0x0000000fffffffffULL 
                             & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                  [
                                                  (1U 
                                                   & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][1U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                                    [
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][0U]))) 
                                & (- (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q)))))) 
                    << 8U) | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                   [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q][2U]);
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[3U] 
                = (((IData)((0x0000000fffffffffULL 
                             & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                  [
                                                  (1U 
                                                   & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][2U])) 
                                  << 0x0000003cU) | 
                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                   [
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][2U])) 
                                   << 0x0000001cU) 
                                  | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                     [
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][1U])) 
                                     >> 4U))) & (- (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q)))))) 
                    << 0x0000000cU) | __Vtemp_2[3U]);
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[4U] 
                = (((IData)((0x0000000fffffffffULL 
                             & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                  [
                                                  (1U 
                                                   & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][2U])) 
                                  << 0x0000003cU) | 
                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                   [
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][2U])) 
                                   << 0x0000001cU) 
                                  | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                     [
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][1U])) 
                                     >> 4U))) & (- (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q)))))) 
                    >> 0x00000014U) | ((IData)(((0x0000000fffffffffULL 
                                                 & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                                      [
                                                                      (1U 
                                                                       & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][2U])) 
                                                      << 0x0000003cU) 
                                                     | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                                         [
                                                                         (1U 
                                                                          & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][2U])) 
                                                         << 0x0000001cU) 
                                                        | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f2_preds
                                                                           [
                                                                           (1U 
                                                                            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_first_bank_q)))][1U])) 
                                                           >> 4U))) 
                                                    & (- (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_second_valid_q))))) 
                                                >> 0x00000020U)) 
                                       << 0x0000000cU));
        } else {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[0U] = 0U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[1U] = 0U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[2U] = 0U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[3U] = 0U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[4U] = 0U;
        }
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds_q[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds_q[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds_q[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds_q[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f3_preds_q[4U];
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_566));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[0U] 
        = (IData)((((QData)((IData)(((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U]))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U])))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[1U] 
        = (IData)(((((QData)((IData)(((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U]))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((IData)(4U) 
                                                        + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U])))) 
                   >> 0x00000020U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[2U] 
        = (IData)((((QData)((IData)(((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U]))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U])))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[3U] 
        = (IData)(((((QData)((IData)(((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U]))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((IData)(4U) 
                                                        + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U])))) 
                   >> 0x00000020U));
}
