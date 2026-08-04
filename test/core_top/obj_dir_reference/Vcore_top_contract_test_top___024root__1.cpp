// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlWide<26>/*831:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0;

void Vcore_top_contract_test_top___024root___ico_comb__TOP__1(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__1\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop);
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_516;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_516);
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_713;
    __VdfgRegularize_h6e95ff9d_0_713 = 0;
    VlWide<13>/*415:0*/ __Vtemp_40;
    VlWide<13>/*415:0*/ __Vtemp_41;
    VlWide<13>/*415:0*/ __Vtemp_42;
    VlWide<13>/*415:0*/ __Vtemp_43;
    VlWide<13>/*415:0*/ __Vtemp_44;
    VlWide<13>/*415:0*/ __Vtemp_45;
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
                 [(((IData)(0x0000020cU) + (0x00003fffU 
                                            & ((IData)(0x0000020dU) 
                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                   >> 5U)] >> (0x0000001fU & ((IData)(0x0000020cU) 
                                              + (0x00003fffU 
                                                 & ((IData)(0x0000020dU) 
                                                    * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))) 
             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                [(((IData)(0x000001a3U) + (0x00003fffU 
                                           & ((IData)(0x0000020dU) 
                                              * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                  >> 5U)] >> (0x0000001fU & ((IData)(0x000001a3U) 
                                             + (0x00003fffU 
                                                & ((IData)(0x0000020dU) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))) 
            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
               [(((IData)(0x000001a2U) + (0x00003fffU 
                                          & ((IData)(0x0000020dU) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                 >> 5U)] >> (0x0000001fU & ((IData)(0x000001a2U) 
                                            + (0x00003fffU 
                                               & ((IData)(0x0000020dU) 
                                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))) 
           & ((0x0000003fU & (((0U == (0x0000001fU 
                                       & ((IData)(0x00000094U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x0000020dU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot))))))
                                ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                        [(((IData)(0x00000099U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x0000020dU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(0x00000094U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))))))) 
                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x00000094U) 
                                    + (0x00003fffU 
                                       & ((IData)(0x0000020dU) 
                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot)))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x00000094U) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
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
                                                     (((IData)(0x000001eaU) 
                                                       + 
                                                       (0x00001fffU 
                                                        & ((IData)(0x000001ebU) 
                                                           * 
                                                           (0x0000000fU 
                                                            & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(0x000001eaU) 
                                                         + 
                                                         (0x00001fffU 
                                                          & ((IData)(0x000001ebU) 
                                                             * 
                                                             (0x0000000fU 
                                                              & (IData)(vlSelfRef.dmem_resp_idx))))))) 
                                                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                        [
                                                        (((IData)(0x000001a2U) 
                                                          + 
                                                          (0x00001fffU 
                                                           & ((IData)(0x000001ebU) 
                                                              * 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x000001a2U) 
                                                            + 
                                                            (0x00001fffU 
                                                             & ((IData)(0x000001ebU) 
                                                                * 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.dmem_resp_idx))))))) 
                                                       & ((~ 
                                                           (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                            [
                                                            (((IData)(0x000001a1U) 
                                                              + 
                                                              (0x00001fffU 
                                                               & ((IData)(0x000001ebU) 
                                                                  * 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                             >> 5U)] 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((IData)(0x000001a1U) 
                                                                + 
                                                                (0x00001fffU 
                                                                 & ((IData)(0x000001ebU) 
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
                                                                           & ((IData)(0x000001ebU) 
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
                                                                         & ((IData)(0x000001ebU) 
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
                                                                            & ((IData)(0x000001ebU) 
                                                                               * 
                                                                               (0x0000000fU 
                                                                                & (IData)(vlSelfRef.dmem_resp_idx))))))))) 
                                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                                       [
                                                                       (((IData)(0x0000009aU) 
                                                                         + 
                                                                         (0x00001fffU 
                                                                          & ((IData)(0x000001ebU) 
                                                                             * 
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.dmem_resp_idx))))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & ((IData)(0x0000009aU) 
                                                                           + 
                                                                           (0x00001fffU 
                                                                            & ((IData)(0x000001ebU) 
                                                                               * 
                                                                               (0x0000000fU 
                                                                                & (IData)(vlSelfRef.dmem_resp_idx))))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush) 
               | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_killed) 
                  | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_live));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149 = (0x00001fffU 
                                                  & ((IData)(0x000001ebU) 
                                                     * 
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)
                                                          ? (IData)(vlSelfRef.dmem_resp_idx)
                                                          : (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229 = (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000044U) 
                                                           + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                       [
                                                       (((IData)(0x00000045U) 
                                                         + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000044U) 
                                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))))) 
                                                     | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                        [
                                                        (((IData)(0x00000044U) 
                                                          + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000044U) 
                                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                     [
                                                     (((IData)(0x00000043U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(0x00000043U) 
                                                         + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))));
    __VExpandSel_WordIdx_1 = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149 
                              >> 5U);
    __VExpandSel_LoShift_1 = (0x0000001fU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149);
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[1U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[2U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[3U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(4U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(5U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(4U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[5U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(6U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(5U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[6U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(7U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(6U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[7U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(8U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(7U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[8U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(9U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(8U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[9U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(9U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[10U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[11U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[12U] 
        = (((((0x000000e9U <= __VExpandSel_WordIdx_1)
               ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000dU) + __VExpandSel_WordIdx_1)]) 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_en 
        = ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
             << 4U) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                       << 3U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__))));
    __VdfgRegularize_h6e95ff9d_0_8 = (IData)(((0U == 
                                               (0x18000000U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U])) 
                                              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_preg 
        = (((QData)((IData)(((0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                             >> 0x0000000dU)) 
                             | (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
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
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_558 = ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop[4U])) 
                                                     & ((0x0000003fU 
                                                         & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop[4U]) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_562 = ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
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
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_566 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_569 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_572 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_575 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_578 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_581 = ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
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
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_555 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_8)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
             << 4U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  << 2U))) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
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
                __Vtemp_40[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_40[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_40[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_40[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_40[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_40[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_40[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_40[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_40[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_40[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_40[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_40[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_40[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_40);
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
                    __Vtemp_42[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                    __Vtemp_42[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                    __Vtemp_42[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                    __Vtemp_42[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                    __Vtemp_42[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                    __Vtemp_42[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                    __Vtemp_42[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                    __Vtemp_42[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                    __Vtemp_42[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                    __Vtemp_42[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                    __Vtemp_42[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                    __Vtemp_42[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                    __Vtemp_42[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                    VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                               & ((IData)(0x000001a0U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_42);
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
                        __Vtemp_44[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                        __Vtemp_44[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                        __Vtemp_44[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                        __Vtemp_44[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                        __Vtemp_44[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                        __Vtemp_44[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                        __Vtemp_44[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                        __Vtemp_44[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                        __Vtemp_44[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                        __Vtemp_44[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                        __Vtemp_44[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                        __Vtemp_44[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                        __Vtemp_44[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                        VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_44);
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
                __Vtemp_41[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                __Vtemp_41[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                __Vtemp_41[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                __Vtemp_41[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                __Vtemp_41[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                __Vtemp_41[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                __Vtemp_41[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                __Vtemp_41[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                __Vtemp_41[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                __Vtemp_41[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                __Vtemp_41[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                __Vtemp_41[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                __Vtemp_41[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_41);
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
                    __Vtemp_43[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                    __Vtemp_43[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                    __Vtemp_43[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                    __Vtemp_43[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                    __Vtemp_43[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                    __Vtemp_43[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                    __Vtemp_43[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                    __Vtemp_43[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                    __Vtemp_43[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                    __Vtemp_43[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                    __Vtemp_43[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                    __Vtemp_43[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                    __Vtemp_43[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                    VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                               & ((IData)(0x000001a0U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_43);
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
                        __Vtemp_45[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                        __Vtemp_45[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                        __Vtemp_45[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                        __Vtemp_45[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                        __Vtemp_45[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                        __Vtemp_45[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                        __Vtemp_45[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                        __Vtemp_45[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                        __Vtemp_45[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                        __Vtemp_45[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                        __Vtemp_45[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                        __Vtemp_45[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                        __Vtemp_45[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                        VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                                   & ((IData)(0x000001a0U) 
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
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U] 
            = (VL_GTS_III(32, 4U, ((IData)(1U) + (3U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                     >> 2U))))
                ? ((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[1U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U] 
            = (IData)((((QData)((IData)((VL_GTS_III(32, 4U, 
                                                    ((IData)(3U) 
                                                     + 
                                                     (3U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                         >> 2U))))
                                          ? ((IData)(0x0000000cU) 
                                             + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                                          : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[3U]))) 
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
                                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[2U])))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U] 
            = (IData)(((((QData)((IData)((VL_GTS_III(32, 4U, 
                                                     ((IData)(3U) 
                                                      + 
                                                      (3U 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                          >> 2U))))
                                           ? ((IData)(0x0000000cU) 
                                              + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q)
                                           : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[3U]))) 
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
                                                             : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[2U])))) 
                       >> 0x00000020U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f2_valid_q) 
               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_544)) 
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
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_544));
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

void Vcore_top_contract_test_top___024root___ico_comb__TOP__5(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__5\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_152;
    __VdfgRegularize_h6e95ff9d_0_152 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_152 = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)
                                          ? vlSelfRef.dmem_resp_data
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_data) 
                                        >> (0x00000018U 
                                            & ((((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(0x000001c9U) 
                                                      + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                  [
                                                  (((IData)(0x000001caU) 
                                                    + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x000001c9U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))))) 
                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                   [
                                                   (((IData)(0x000001c9U) 
                                                     + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(0x000001c9U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)))) 
                                               << 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((0U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229))
                                                 ? 
                                                ((((- (IData)(
                                                              (1U 
                                                               & (__VdfgRegularize_h6e95ff9d_0_152 
                                                                  >> 7U)))) 
                                                   & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387)))) 
                                                  << 8U) 
                                                 | (0x000000ffU 
                                                    & __VdfgRegularize_h6e95ff9d_0_152))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229))
                                                  ? 
                                                 ((((- (IData)(
                                                               (1U 
                                                                & (__VdfgRegularize_h6e95ff9d_0_152 
                                                                   >> 0x0000000fU)))) 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & __VdfgRegularize_h6e95ff9d_0_152))
                                                  : 
                                                 ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229)))) 
                                                  & __VdfgRegularize_h6e95ff9d_0_152)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))) 
                   >> 0x00000020U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[4U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
            << 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] 
                               >> 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[0U] 
        = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result 
           << 7U);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[1U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[2U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[3U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[4U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[5U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[6U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[7U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[8U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[9U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[10U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[11U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[12U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[13U] 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
            >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[14U] 
        = ((0xffffff00U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[14U]) 
           | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__res_valid) 
               << 7U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                         >> 0x00000019U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[14U] 
        = ((0x000000ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[14U]) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
              << 0x0000000fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[15U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[16U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[17U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[18U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[19U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[20U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[21U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[22U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[23U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[24U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[25U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[26U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[27U] 
        = ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                           >> 0x00000011U)) | ((0x00007f00U 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                                                  << 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[28U] 
        = ((0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[28U]) 
           | ((0x000000ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                              >> 0x00000011U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__res_valid) 
                                                   << 0x0000000fU) 
                                                  | (0x00007f00U 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                                                        >> 0x00000011U)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[28U] 
        = ((0x0000ffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[28U]) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
              << 0x00000017U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[29U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[30U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[31U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[32U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[33U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[34U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[35U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[36U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[37U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[38U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[39U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[40U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[41U] 
        = ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                           >> 9U)) | ((0x007f0000U 
                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                          >> 9U)) | 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                                       << 0x00000017U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[42U] 
        = ((0xff000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[42U]) 
           | ((0x0000ffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                              >> 9U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__res_valid) 
                                          << 0x00000017U) 
                                         | (0x007f0000U 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[12U] 
                                               >> 9U)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[42U] 
        = ((0x00ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[42U]) 
           | ((IData)(((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                       << 7U)) << 0x00000018U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[43U] 
        = (((IData)(((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                     << 7U)) >> 8U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U] 
                                        << 0x0000001fU) 
                                       | ((IData)((
                                                   ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                    << 7U) 
                                                   >> 0x00000020U)) 
                                          << 0x00000018U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[44U] 
        = (((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U] 
                            >> 1U)) | ((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                 << 7U) 
                                                >> 0x00000020U)) 
                                       >> 8U)) | ((0x7f000000U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U] 
                                                      >> 1U)) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[1U] 
                                                     << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[45U] 
        = ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[1U] 
                           >> 1U)) | ((0x7f000000U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[1U] 
                                          >> 1U)) | 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[2U] 
                                       << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[46U] 
        = ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[2U] 
                           >> 1U)) | ((0x7f000000U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[2U] 
                                          >> 1U)) | 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[3U] 
                                       << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[47U] 
        = ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[3U] 
                           >> 1U)) | ((0x7f000000U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[3U] 
                                          >> 1U)) | 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                       << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[48U] 
        = ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                           >> 1U)) | ((0x7f000000U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
                                          >> 1U)) | 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[5U] 
                                       << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[49U] 
        = ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[5U] 
                           >> 1U)) | ((0x7f000000U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[5U] 
                                          >> 1U)) | 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[6U] 
                                       << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[50U] 
        = ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[6U] 
                           >> 1U)) | ((0x7f000000U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[6U] 
                                          >> 1U)) | 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[7U] 
                                       << 0x0000001fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[51U] 
        = ((0xe0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[51U]) 
           | ((0x00ffffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[7U] 
                              >> 1U)) | (0x1f000000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[7U] 
                                            >> 1U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[51U] 
        = ((0x1fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[51U]) 
           | (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
               & (((0U == (0x0000001fU & ((IData)(0x000000feU) 
                                          + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)))
                    ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                            [(((IData)(0x00000101U) 
                               + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & ((IData)(0x000000feU) 
                                                + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))))) 
                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [(((IData)(0x000000feU) + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                       >> 5U)] >> (0x0000001fU & ((IData)(0x000000feU) 
                                                  + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))))) 
              << 0x0000001dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[52U] 
        = ((0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[52U]) 
           | (1U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & (((0U == (0x0000001fU & ((IData)(0x000000feU) 
                                                + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)))
                          ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                  [(((IData)(0x00000101U) 
                                     + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x000000feU) 
                                                      + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))))) 
                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                           [(((IData)(0x000000feU) 
                              + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x000000feU) 
                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149))))) 
                    >> 3U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[52U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[52U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[9U] 
               << 0x0000001fU) | (0x7ffffffeU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[8U] 
                                                 >> 1U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[53U] 
        = ((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[9U] 
                  >> 1U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[10U] 
                              << 0x0000001fU) | (0x7ffffffeU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[9U] 
                                                    >> 1U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[54U] 
        = ((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[10U] 
                  >> 1U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[11U] 
                              << 0x0000001fU) | (0x7ffffffeU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[10U] 
                                                    >> 1U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[55U] 
        = ((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[11U] 
                  >> 1U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[12U] 
                              << 0x0000001fU) | (0x7ffffffeU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[11U] 
                                                    >> 1U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[56U] 
        = ((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[12U] 
                  >> 1U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                              << 0x0000001fU) | (0x7ffffffeU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[12U] 
                                                    >> 1U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[57U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[58U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[59U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[60U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[3U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[3U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[61U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[4U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[4U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[62U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[63U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[6U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[6U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[64U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[65U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[66U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[67U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[68U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[69U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[70U] 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U]) 
           | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U]));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[71U] 
        = ((0xffffff00U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[71U]) 
           | ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U]) 
              | (0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[71U] 
        = (0x000000ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[71U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[72U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[73U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[74U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[75U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[76U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[77U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[78U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[79U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[80U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[81U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[82U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[83U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[84U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[85U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_src2 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_788)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_554)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_553)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552)
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                        : (((0U != (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                            & (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                   >> 0x00000013U))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))
                            ? ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
                                << 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] 
                                                   >> 7U))
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_553)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_554)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_788)
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
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_789)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_557)
                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_556)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_555)
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                        : (((0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                   >> 6U))) 
                            & (((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                >> 6U)) 
                                == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
                                                   >> 0x00000013U))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))
                            ? ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
                                << 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] 
                                                   >> 7U))
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_555)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_556)
                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_557)
                                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_789)
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
}

void Vcore_top_contract_test_top___024root___ico_comb__TOP__6(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__6\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____VlemCall_0__align_bundle;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane = 0;
    IData/*31:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__align_bundle__140__pc;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__align_bundle__140__pc = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_139;
    __VdfgRegularize_h6e95ff9d_0_139 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_144;
    __VdfgRegularize_h6e95ff9d_0_144 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_145;
    __VdfgRegularize_h6e95ff9d_0_145 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_146;
    __VdfgRegularize_h6e95ff9d_0_146 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_147;
    __VdfgRegularize_h6e95ff9d_0_147 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_207;
    __VdfgRegularize_h6e95ff9d_0_207 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_290;
    __VdfgRegularize_h6e95ff9d_0_290 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_500;
    __VdfgRegularize_h6e95ff9d_0_500 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_501;
    __VdfgRegularize_h6e95ff9d_0_501 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_502;
    __VdfgRegularize_h6e95ff9d_0_502 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_503;
    __VdfgRegularize_h6e95ff9d_0_503 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_547;
    __VdfgRegularize_h6e95ff9d_0_547 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__live_mem_packet_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
            = (VL_GTS_III(32, 4U, ((IData)(1U) + (3U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                     >> 2U))))
                ? vlSelfRef.imem_resp_insts[(3U & ((IData)(1U) 
                                                   + 
                                                   (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                    >> 2U)))]
                : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[1U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
            = (IData)((((QData)((IData)((VL_GTS_III(32, 4U, 
                                                    ((IData)(3U) 
                                                     + 
                                                     (3U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                         >> 2U))))
                                          ? vlSelfRef.imem_resp_insts
                                         [(3U & ((IData)(3U) 
                                                 + 
                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                  >> 2U)))]
                                          : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[3U]))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (VL_GTS_III(32, 4U, 
                                                                      ((IData)(2U) 
                                                                       + 
                                                                       (3U 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                                           >> 2U))))
                                                            ? vlSelfRef.imem_resp_insts
                                                           [
                                                           (3U 
                                                            & ((IData)(2U) 
                                                               + 
                                                               (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                                >> 2U)))]
                                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[2U])))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
            = (IData)(((((QData)((IData)((VL_GTS_III(32, 4U, 
                                                     ((IData)(3U) 
                                                      + 
                                                      (3U 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                          >> 2U))))
                                           ? vlSelfRef.imem_resp_insts
                                          [(3U & ((IData)(3U) 
                                                  + 
                                                  (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                   >> 2U)))]
                                           : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[3U]))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (VL_GTS_III(32, 4U, 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (3U 
                                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                                            >> 2U))))
                                                             ? vlSelfRef.imem_resp_insts
                                                            [
                                                            (3U 
                                                             & ((IData)(2U) 
                                                                + 
                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                                 >> 2U)))]
                                                             : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[2U])))) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[3U];
    }
    __VdfgRegularize_h6e95ff9d_0_500 = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U] 
                                        + (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                                           >> 0x00000019U)))) 
                                            << 0x00000012U) 
                                           | (0x0003fffcU 
                                              & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                                 >> 8U))));
    __VdfgRegularize_h6e95ff9d_0_501 = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U] 
                                        + (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                                           >> 0x00000019U)))) 
                                            << 0x00000012U) 
                                           | (0x0003fffcU 
                                              & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                                 >> 8U))));
    __VdfgRegularize_h6e95ff9d_0_502 = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U] 
                                        + (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                                           >> 0x00000019U)))) 
                                            << 0x00000012U) 
                                           | (0x0003fffcU 
                                              & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                                 >> 8U))));
    __VdfgRegularize_h6e95ff9d_0_503 = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U] 
                                        + (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                           >> 0x00000019U)))) 
                                            << 0x00000012U) 
                                           | (0x0003fffcU 
                                              & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                 >> 8U))));
    __VdfgRegularize_h6e95ff9d_0_144 = (IData)((0x40000000U 
                                                == 
                                                (0xc0000000U 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])));
    __VdfgRegularize_h6e95ff9d_0_145 = (IData)((0x40000000U 
                                                == 
                                                (0xc0000000U 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])));
    __VdfgRegularize_h6e95ff9d_0_146 = (IData)((0x40000000U 
                                                == 
                                                (0xc0000000U 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])));
    __VdfgRegularize_h6e95ff9d_0_147 = (IData)((0x40000000U 
                                                == 
                                                (0xc0000000U 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type 
        = ((((((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
                ? (1U & (- (IData)((1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                             >> 0x0000001cU))))))
                : ((0x10000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
                    ? ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
                        ? 1U : 2U) : (3U & (- (IData)(
                                                      (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                                           >> 0x0000001aU)))))))) 
              & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_147)))) 
             << 9U) | ((((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
                          ? (1U & (- (IData)((1U & 
                                              (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                                  >> 0x0000001cU))))))
                          : ((0x10000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
                              ? ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
                                  ? 1U : 2U) : (3U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                                                  >> 0x0000001aU)))))))) 
                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_146)))) 
                       << 6U)) | (((((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
                                      ? (1U & (- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                                              >> 0x0000001cU))))))
                                      : ((0x10000000U 
                                          & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
                                          ? ((0x08000000U 
                                              & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
                                              ? 1U : 2U)
                                          : (3U & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                                                  >> 0x0000001aU)))))))) 
                                    & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_145)))) 
                                   << 3U) | (((0x20000000U 
                                               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
                                               ? (1U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                                    >> 0x0000001cU))))))
                                               : ((0x10000000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
                                                   ? 
                                                  ((0x08000000U 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                                     >> 0x0000001aU)))))))) 
                                             & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_144))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target_valid 
        = ((((((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
                ? (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                      >> 0x0000001cU)) : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                          >> 0x0000001cU)) 
              & (IData)(__VdfgRegularize_h6e95ff9d_0_147)) 
             << 3U) | ((((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
                          ? (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                >> 0x0000001cU)) : 
                         (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                          >> 0x0000001cU)) & (IData)(__VdfgRegularize_h6e95ff9d_0_146)) 
                       << 2U)) | (((((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
                                      ? (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                            >> 0x0000001cU))
                                      : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                         >> 0x0000001cU)) 
                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_145)) 
                                   << 1U) | (((0x20000000U 
                                               & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
                                               ? (~ 
                                                  (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                   >> 0x0000001cU))
                                               : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                  >> 0x0000001cU)) 
                                             & (IData)(__VdfgRegularize_h6e95ff9d_0_144))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_call 
        = (((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                  >> 0x0000001dU)) & (((0x10000000U 
                                        & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
                                        ? (IData)((0x04000000U 
                                                   == 
                                                   (0x0c000000U 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])))
                                        : (IData)((0x0c000001U 
                                                   == 
                                                   (0x0c00001fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])))) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_147))) 
             << 3U) | (((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                            >> 0x0000001dU)) & (((0x10000000U 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
                                                  ? (IData)(
                                                            (0x04000000U 
                                                             == 
                                                             (0x0c000000U 
                                                              & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])))
                                                  : (IData)(
                                                            (0x0c000001U 
                                                             == 
                                                             (0x0c00001fU 
                                                              & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_146))) 
                       << 2U)) | ((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                        >> 0x0000001dU)) 
                                    & (((0x10000000U 
                                         & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
                                         ? (IData)(
                                                   (0x04000000U 
                                                    == 
                                                    (0x0c000000U 
                                                     & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])))
                                         : (IData)(
                                                   (0x0c000001U 
                                                    == 
                                                    (0x0c00001fU 
                                                     & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])))) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_145))) 
                                   << 1U) | ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                 >> 0x0000001dU)) 
                                             & (((0x10000000U 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
                                                  ? (IData)(
                                                            (0x04000000U 
                                                             == 
                                                             (0x0c000000U 
                                                              & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])))
                                                  : (IData)(
                                                            (0x0c000001U 
                                                             == 
                                                             (0x0c00001fU 
                                                              & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_144)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret 
        = ((((IData)(((0x0c000020U == (0x3c0003ffU 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])) 
                      & (IData)(__VdfgRegularize_h6e95ff9d_0_147))) 
             << 3U) | ((IData)(((0x0c000020U == (0x3c0003ffU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])) 
                                & (IData)(__VdfgRegularize_h6e95ff9d_0_146))) 
                       << 2U)) | (((IData)(((0x0c000020U 
                                             == (0x3c0003ffU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_145))) 
                                   << 1U) | (IData)(
                                                    ((0x0c000020U 
                                                      == 
                                                      (0x3c0003ffU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_144)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[0U] 
        = (((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
             ? (__VdfgRegularize_h6e95ff9d_0_503 & 
                (- (IData)((1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                     >> 0x0000001cU))))))
             : (((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])
                  ? __VdfgRegularize_h6e95ff9d_0_503
                  : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U] 
                     + ((((0x00003c00U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                                         >> 9U)))) 
                                          << 0x0000000aU)) 
                          | (0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U])) 
                         << 0x00000012U) | (0x0003fffcU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                               >> 8U))))) 
                & (- (IData)((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U] 
                                    >> 0x0000001cU)))))) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_144))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[1U] 
        = (((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
             ? (__VdfgRegularize_h6e95ff9d_0_502 & 
                (- (IData)((1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                     >> 0x0000001cU))))))
             : (((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])
                  ? __VdfgRegularize_h6e95ff9d_0_502
                  : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U] 
                     + ((((0x00003c00U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                                         >> 9U)))) 
                                          << 0x0000000aU)) 
                          | (0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U])) 
                         << 0x00000012U) | (0x0003fffcU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                               >> 8U))))) 
                & (- (IData)((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U] 
                                    >> 0x0000001cU)))))) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_145))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[2U] 
        = (((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
             ? (__VdfgRegularize_h6e95ff9d_0_501 & 
                (- (IData)((1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                     >> 0x0000001cU))))))
             : (((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])
                  ? __VdfgRegularize_h6e95ff9d_0_501
                  : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U] 
                     + ((((0x00003c00U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                                         >> 9U)))) 
                                          << 0x0000000aU)) 
                          | (0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U])) 
                         << 0x00000012U) | (0x0003fffcU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                               >> 8U))))) 
                & (- (IData)((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U] 
                                    >> 0x0000001cU)))))) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_146))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[3U] 
        = (((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
             ? (__VdfgRegularize_h6e95ff9d_0_500 & 
                (- (IData)((1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                     >> 0x0000001cU))))))
             : (((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])
                  ? __VdfgRegularize_h6e95ff9d_0_500
                  : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U] 
                     + ((((0x00003c00U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                                         >> 9U)))) 
                                          << 0x0000000aU)) 
                          | (0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U])) 
                         << 0x00000012U) | (0x0003fffcU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                               >> 8U))))) 
                & (- (IData)((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U] 
                                    >> 0x0000001cU)))))) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_147))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[0U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[1U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[2U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[3U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_npc_plus4_d = 1U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 1U;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__align_bundle__140__pc 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____VlemCall_0__align_bundle 
        = (0xfffffff0U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__align_bundle__140__pc);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d 
        = ((IData)(0x00000010U) + core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____VlemCall_0__align_bundle);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_return_addr_d = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane 
        = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                 >> 2U));
    if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[0U] 
            = ((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U]);
        if ((1U == (7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d 
                = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[0U];
            if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                 & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000022U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000022U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
            }
        } else if ((2U == (7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type)))) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                = (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target_valid));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[0U];
        } else if ((3U == (7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type)))) {
            if ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 1U;
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack
                    [(0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U])];
            } else if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                        & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000020U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000020U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = (((0U == (0x0000001fU & ((IData)(0x00000024U) 
                                               * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                 [(((IData)(0x0000001fU) 
                                    + (0x000000ffU 
                                       & ((IData)(0x00000024U) 
                                          * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                          [(7U & (((IData)(0x00000024U) 
                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane) 
                                  >> 5U))] >> (0x0000001fU 
                                               & ((IData)(0x00000024U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))));
                if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) 
                     & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take)))) {
                    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
                }
            } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
            }
        }
        if (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d 
                = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[0U] 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d = 0U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d 
                = (7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d 
                = (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_call));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d 
                = (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_npc_plus4_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_return_addr_d 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[0U];
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
        }
    }
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane 
        = ((IData)(1U) + (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                >> 2U)));
    if ((1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid) 
                >> 1U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[1U] 
            = ((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U]);
        if ((1U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                          >> 3U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d 
                = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[1U];
            if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                 & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000022U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000022U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
            }
        } else if ((2U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                                 >> 3U)))) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target_valid) 
                         >> 1U));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[1U];
        } else if ((3U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                                 >> 3U)))) {
            if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 1U;
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack
                    [(0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U])];
            } else if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                        & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000020U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000020U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = (((0U == (0x0000001fU & ((IData)(0x00000024U) 
                                               * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                 [(((IData)(0x0000001fU) 
                                    + (0x000000ffU 
                                       & ((IData)(0x00000024U) 
                                          * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                          [(7U & (((IData)(0x00000024U) 
                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane) 
                                  >> 5U))] >> (0x0000001fU 
                                               & ((IData)(0x00000024U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))));
                if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) 
                     & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take)))) {
                    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
                }
            } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
            }
        }
        if (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d 
                = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[1U] 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d 
                = (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                         >> 3U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_call) 
                         >> 1U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret) 
                         >> 1U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_npc_plus4_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_return_addr_d 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[1U];
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
        }
    }
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane 
        = ((IData)(2U) + (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                >> 2U)));
    if ((1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid) 
                >> 2U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d 
            = (4U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[2U] 
            = ((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U]);
        if ((1U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                          >> 6U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d 
                = (4U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[2U];
            if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                 & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000022U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000022U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
            }
        } else if ((2U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                                 >> 6U)))) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target_valid) 
                         >> 2U));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[2U];
        } else if ((3U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                                 >> 6U)))) {
            if ((4U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 1U;
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack
                    [(0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U])];
            } else if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                        & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000020U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000020U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = (((0U == (0x0000001fU & ((IData)(0x00000024U) 
                                               * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                 [(((IData)(0x0000001fU) 
                                    + (0x000000ffU 
                                       & ((IData)(0x00000024U) 
                                          * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                          [(7U & (((IData)(0x00000024U) 
                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane) 
                                  >> 5U))] >> (0x0000001fU 
                                               & ((IData)(0x00000024U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))));
                if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) 
                     & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take)))) {
                    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
                }
            } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
            }
        }
        if (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d 
                = (4U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[2U] 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d = 2U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d 
                = (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                         >> 6U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_call) 
                         >> 2U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret) 
                         >> 2U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_npc_plus4_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_return_addr_d 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[2U];
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
        }
    }
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane 
        = ((IData)(3U) + (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                >> 2U)));
    if ((IData)((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid) 
                  >> 3U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d 
            = (8U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[3U] 
            = ((IData)(4U) + vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U]);
        if ((1U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                          >> 9U)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d 
                = (8U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[3U];
            if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                 & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000022U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000022U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
            }
        } else if ((2U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                                 >> 9U)))) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target_valid) 
                         >> 3U));
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_direct_target[3U];
        } else if ((3U == (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                                 >> 9U)))) {
            if ((8U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take = 1U;
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_inst__DOT__stack
                    [(0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U])];
            } else if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid) 
                        & VL_GTS_III(32, 4U, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take 
                    = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                              [(((IData)(0x00000020U) 
                                 + (0x000000ffU & ((IData)(0x00000024U) 
                                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x00000020U) 
                                               + (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                [(((IData)(0x00000023U) 
                                   + (0x000000ffU & 
                                      ((IData)(0x00000024U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000023U) 
                                                 + 
                                                 (0x000000ffU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))))));
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target 
                    = (((0U == (0x0000001fU & ((IData)(0x00000024U) 
                                               * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane)))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                                 [(((IData)(0x0000001fU) 
                                    + (0x000000ffU 
                                       & ((IData)(0x00000024U) 
                                          * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000024U) 
                                                     * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_preds
                          [(7U & (((IData)(0x00000024U) 
                                   * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane) 
                                  >> 5U))] >> (0x0000001fU 
                                               & ((IData)(0x00000024U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__predictor_lane))));
                if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) 
                     & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take)))) {
                    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
                }
            } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid) {
                core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d = 0U;
            }
        }
        if (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_take) {
            core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__selected = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d 
                = (8U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[3U] 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d = 3U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d 
                = (7U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_cfi_type) 
                         >> 9U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_call) 
                         >> 3U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d 
                = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_is_ret) 
                         >> 3U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_npc_plus4_d = 1U;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_return_addr_d 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__predecode_return_addr[3U];
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d 
                = core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__unnamedblk6__DOT__lane_target;
        }
    }
    __VdfgRegularize_h6e95ff9d_0_290 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d) 
                                        & VL_GTS_III(32, 2U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_487 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d) 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_call_d));
    __VdfgRegularize_h6e95ff9d_0_139 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d) 
                                        & (1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_542 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d) 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_valid_q) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__live_mem_packet_valid)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_available 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90) 
           & (((4U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q)) 
               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__live_mem_packet_valid)) 
              & ((0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_valid)) 
                 & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_requested_q)) 
                     | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_packet_result_valid)) 
                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_live_result_valid) 
                       | ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_early_result_valid)) 
                          | (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_early_safe_d)))))));
    __VdfgRegularize_h6e95ff9d_0_207 = (1U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d) 
                                                            & ((~ 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)) 
                                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_139))) 
                                                               & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d)) 
                                                                  | VL_LTES_III(32, 0U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)))))))));
    __VdfgRegularize_h6e95ff9d_0_547 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_207) 
                                              | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U] 
                                                  >> 7U) 
                                                 | (((IData)(__VdfgRegularize_h6e95ff9d_0_207) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d) 
                                                        >> 1U) 
                                                       & ((~ 
                                                           ((1U 
                                                             == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)) 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_139))) 
                                                          & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d)) 
                                                             | VL_LTES_III(32, 1U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[0U] 
        = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[0U]) 
           | (0x0000001fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_487)
                              ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ras_write_idx)
                              : (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d) 
                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_is_ret_d))
                                  ? ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U] 
                                      - (IData)(1U)) 
                                     | (- (IData)((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U])))))
                                  : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U]))));
    if (((7U == (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                       >> 3U))) | (IData)(__VdfgRegularize_h6e95ff9d_0_290))) {
        __Vtemp_2[0U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233) 
                          << 3U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_547) 
                                     << 1U) | ((1U 
                                                == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_type_d)) 
                                               & (IData)(__VdfgRegularize_h6e95ff9d_0_290))));
        __Vtemp_2[1U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233) 
                          >> 0x0000001dU) | ((IData)(
                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 
                                                      >> 0x00000020U)) 
                                             << 3U));
        __Vtemp_2[2U] = ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 
                                  >> 0x00000020U)) 
                         >> 0x0000001dU);
    } else {
        __Vtemp_2[0U] = (((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_547)
                                    ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 
                                       << 1U) : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233)) 
                          << 3U) | ((2U & ((0x3ffffffeU 
                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_207) 
                                               >> 2U)) 
                                           | (((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d) 
                                                 >> 3U) 
                                                & ((~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)) 
                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_139))) 
                                                   & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d)) 
                                                      | VL_LTES_III(32, 3U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d))))) 
                                               | ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_br_mask_d) 
                                                    >> 2U) 
                                                   & ((~ 
                                                       ((2U 
                                                         == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d)) 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_139))) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_valid_d)) 
                                                         | VL_LTES_III(32, 2U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_cfi_idx_d))))) 
                                                  | ((IData)(__VdfgRegularize_h6e95ff9d_0_207) 
                                                     >> 2U))) 
                                              << 1U))) 
                                    | ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_290)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_139))));
        __Vtemp_2[1U] = (((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_547)
                                    ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 
                                       << 1U) : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233)) 
                          >> 0x0000001dU) | ((IData)(
                                                     (((IData)(__VdfgRegularize_h6e95ff9d_0_547)
                                                        ? 
                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 
                                                        << 1U)
                                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233) 
                                                      >> 0x00000020U)) 
                                             << 3U));
        __Vtemp_2[2U] = ((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_547)
                                    ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 
                                       << 1U) : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233) 
                                  >> 0x00000020U)) 
                         >> 0x0000001dU);
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[0U] 
        = ((0x0000001fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[0U]) 
           | (__Vtemp_2[0U] << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[1U] 
        = ((__Vtemp_2[0U] >> 0x0000001bU) | (__Vtemp_2[1U] 
                                             << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[2U] 
        = (0x000000ffU & ((__Vtemp_2[1U] >> 0x0000001bU) 
                          | (__Vtemp_2[2U] << 5U)));
}

void Vcore_top_contract_test_top___024root___ico_comb__TOP__7(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__7\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid;
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid = 0;
    SData/*15:0*/ core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx;
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx = 0;
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken;
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken = 0;
    VlWide<4>/*127:0*/ core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc;
    VL_ZERO_W(128, core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc);
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid;
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready;
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid = 0;
    VlWide<4>/*127:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist;
    VL_ZERO_W(128, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist);
    VlWide<3>/*71:0*/ core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist;
    VL_ZERO_W(72, core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist);
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx;
    core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_194;
    __VdfgRegularize_h6e95ff9d_0_194 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_548;
    __VdfgRegularize_h6e95ff9d_0_548 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_194 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_available) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid 
        = ((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_194))) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_542));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_194))));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_194))));
    if (__VdfgRegularize_h6e95ff9d_0_194) {
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[0U];
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[1U];
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[2U];
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_npc_d[3U];
    } else {
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[0U] = 0U;
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[1U] = 0U;
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[2U] = 0U;
        core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[3U] = 0U;
    }
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx 
        = ((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_194))) 
           & ((((0x000000f0U & (((8U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d))
                                  ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205) 
                                     >> 0x0000000cU)) 
                                << 4U)) | (0x0000000fU 
                                           & ((4U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d))
                                               ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)
                                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205) 
                                                  >> 8U)))) 
               << 8U) | ((0x000000f0U & (((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d))
                                           ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)
                                           : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205) 
                                              >> 4U)) 
                                         << 4U)) | 
                         (0x0000000fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts[0U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts[1U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts[2U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts[3U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs[0U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs[1U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs[2U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs[3U] = 0U;
    core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc[0U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc[1U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc[2U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc[3U] = 0U;
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid))) {
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[0U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[0U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid)) 
               | (0x0fU & ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid)) 
                           << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        if ((0x17U >= (0x0000001fU & ((IData)(6U) * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code 
                = (((~ ((IData)(0x0000003fU) << (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code) 
                   | (0x00ffffffU & ((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_xcpt_code) 
                                     << (0x0000001fU 
                                         & ((IData)(6U) 
                                            * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))));
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                            << 2U)))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx)) 
               | (0x0000ffffU & ((0x0000000fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx)) 
                                 << (0x0000000fU & 
                                     (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                      << 2U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken)) 
               | (0x0fU & ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken)) 
                           << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc, core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[0U]);
        core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx);
    }
    if ((2U & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid))) {
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[1U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[1U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid)) 
               | (0x0fU & ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid) 
                                  >> 1U)) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        if ((0x17U >= (0x0000001fU & ((IData)(6U) * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code 
                = (((~ ((IData)(0x0000003fU) << (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code) 
                   | (0x00ffffffU & ((0x0000003fU & 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_xcpt_code 
                                       >> 6U)) << (0x0000001fU 
                                                   & ((IData)(6U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))));
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                            << 2U)))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx)) 
               | (0x0000ffffU & ((0x0000000fU & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx) 
                                                 >> 4U)) 
                                 << (0x0000000fU & 
                                     (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                      << 2U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken)) 
               | (0x0fU & ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken) 
                                  >> 1U)) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc, core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[1U]);
        core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx);
    }
    if ((4U & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid))) {
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[2U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[2U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid)) 
               | (0x0fU & ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid) 
                                  >> 2U)) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        if ((0x17U >= (0x0000001fU & ((IData)(6U) * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code 
                = (((~ ((IData)(0x0000003fU) << (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code) 
                   | (0x00ffffffU & ((0x0000003fU & 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_xcpt_code 
                                       >> 0x0cU)) << 
                                     (0x0000001fU & 
                                      ((IData)(6U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))));
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                            << 2U)))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx)) 
               | (0x0000ffffU & ((0x0000000fU & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx) 
                                                 >> 8U)) 
                                 << (0x0000000fU & 
                                     (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                      << 2U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken)) 
               | (0x0fU & ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken) 
                                  >> 2U)) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc, core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[2U]);
        core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx);
    }
    if ((8U & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid))) {
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_insts[3U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_pc[3U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_valid)) 
               | (0x0fU & ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid) 
                                  >> 3U)) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        if ((0x17U >= (0x0000001fU & ((IData)(6U) * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code 
                = (((~ ((IData)(0x0000003fU) << (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_xcpt_code) 
                   | (0x00ffffffU & ((0x0000003fU & 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_src_xcpt_code 
                                       >> 0x12U)) << 
                                     (0x0000001fU & 
                                      ((IData)(6U) 
                                       * core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx)))));
        }
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                            << 2U)))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_ftq_idx)) 
               | (0x0000ffffU & ((0x0000000fU & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx) 
                                                 >> 0x0cU)) 
                                 << (0x0000000fU & 
                                     (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                      << 2U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken 
            = (((~ ((IData)(1U) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))) 
                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_taken)) 
               | (0x0fU & ((1U & ((IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken) 
                                  >> 3U)) << (3U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_predicted_npc, core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_npc[3U]);
        core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx);
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_count 
        = (7U & core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx);
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready 
        = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_count) 
            <= (0x0000001fU & ((IData)(8U) - (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__count_q)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_fire 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_194) 
           & ((0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d)) 
              & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_available) 
           & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_valid) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready));
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch 
        = ((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_542))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_fire));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ghist_restore_valid) {
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ghist_restore[0U];
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ghist_restore[1U];
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_ghist_restore[2U];
    } else if (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch) {
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[0U];
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[1U];
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_d[2U];
    } else {
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[0U];
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[1U];
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ghist_inst__DOT__history_q[2U];
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch)
            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_next_pc_d
            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q);
    vlSelfRef.imem_req_addr = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__xlate_resp_ready)
                                ? (0xfffffff0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc)
                                : (0xfffffff0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_paddr_q));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc = 0ULL;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
        = (((~ (0x00000000ffffffffULL << (0x00000020U 
                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                             << 2U)))) 
            & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc) 
           | ((QData)((IData)((0xfffffff8U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc))) 
              << (0x00000020U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                 << 2U))));
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist[0U] = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist[1U] = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist[2U] = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist[3U] = 0U;
    VL_ASSIGNSEL_WQ(128, 64, (0x00000040U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                             << 3U)), core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist, 
                    (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U])) 
                      << 0x00000038U) | (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U])) 
                                          << 0x00000018U) 
                                         | ((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U])) 
                                            >> 8U))));
    __VdfgRegularize_h6e95ff9d_0_548 = (1U & (~ ((0U 
                                                  != 
                                                  (3U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc)) 
                                                 | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid))));
    if ((7U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                      >> 3U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
            = (((~ (0x00000000ffffffffULL << (0x00000020U 
                                              & ((~ 
                                                  (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                                   >> 3U)) 
                                                 << 5U)))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc) 
               | ((QData)((IData)(((IData)(8U) + (0xfffffff8U 
                                                  & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc)))) 
                  << (0x00000020U & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                         >> 3U)) << 5U))));
        VL_ASSIGNSEL_WQ(128, 64, (0x00000040U & ((~ 
                                                  (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                                   >> 3U)) 
                                                 << 6U)), core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist, 
                        ((0x00000020U & core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U])
                          ? (1ULL | (0xfffffffffffffffeULL 
                                     & (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U])) 
                                         << 0x00000039U) 
                                        | (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U])) 
                                            << 0x00000019U) 
                                           | (0x01fffffffffffffeULL 
                                              & ((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U])) 
                                                 >> 7U))))))
                          : ((0x00000040U & core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U])
                              ? (0xfffffffffffffffeULL 
                                 & (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U])) 
                                     << 0x00000039U) 
                                    | (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U])) 
                                        << 0x00000019U) 
                                       | (0x01fffffffffffffeULL 
                                          & ((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U])) 
                                             >> 7U)))))
                              : (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[2U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[1U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_request_ghist[0U])) 
                                     >> 8U))))));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s0_index 
        = (0x000003ffU & (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist[2U] 
                          ^ (IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                     >> 0x00000024U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s0_index 
        = (0x000003ffU & (core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_ghist[0U] 
                          ^ (IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                     >> 4U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__xlate_req_valid 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_548) 
           & ((0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q)) 
              | (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f0_valid 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_548) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____Vcellout__gen_composer__BRA__1__KET____DOT__composer_inst__ready) 
              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____Vcellout__gen_composer__BRA__0__KET____DOT__composer_inst__ready) 
                 & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_requested_q)) 
                     & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q))) 
                    | (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_launch)))));
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid = 0U;
    core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid 
        = (((~ ((IData)(1U) << (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                      >> 3U)))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid)) 
           | (3U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f0_valid) 
                    << (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                              >> 3U)))));
    if ((7U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                      >> 3U)))) {
        core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid 
            = (((~ ((IData)(1U) << (1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                             >> 3U))))) 
                & (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid)) 
               | (3U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bpd_f0_valid) 
                        << (1U & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__next_request_pc 
                                     >> 3U))))));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__predictor_f0_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____Vcellout__gen_composer__BRA__1__KET____DOT__composer_inst__ready) 
           & ((IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid) 
              >> 1U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__predictor_f0_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT____Vcellout__gen_composer__BRA__0__KET____DOT__composer_inst__ready) 
           & (IData)(core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_valid));
}

void Vcore_top_contract_test_top___024root___eval_triggers_vec__ico(Vcore_top_contract_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcore_top_contract_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vcore_top_contract_test_top___024root___ico_comb__TOP__0(Vcore_top_contract_test_top___024root* vlSelf);

bool Vcore_top_contract_test_top___024root___eval_phase__ico(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__ico\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcore_top_contract_test_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore_top_contract_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcore_top_contract_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((0x0000000000000010ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[0U] 
                        = (VL_GTS_III(32, 4U, (3U & 
                                               (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                                >> 2U)))
                            ? vlSelfRef.imem_resp_insts
                           [(3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q 
                                   >> 2U))] : 0U);
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[1U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[2U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193[3U] = 0U;
                }
            }
            if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__imem_resp_fire 
                        = ((IData)(vlSelfRef.imem_resp_valid) 
                           & (IData)(vlSelfRef.imem_resp_ready));
                }
            }
            if ((0x0000000000000c00ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vcore_top_contract_test_top___024root___ico_comb__TOP__0(vlSelf);
            }
            if ((0x0000000000000ec0ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vcore_top_contract_test_top___024root___ico_comb__TOP__1(vlSelf);
            }
            if ((0x0000000000000c02ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__2
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_req_ready 
                        = ((IData)(vlSelfRef.rst_n) 
                           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                              & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_ctrl_inst__DOT__state_q))));
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready 
                        = ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                                >> 0x0000000fU) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__branch_redirect_valid) 
                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_busy_q) 
                                                      | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entry_valid_q) 
                                                         >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)))))) 
                           & (IData)(vlSelfRef.rst_n));
                }
            }
            if ((0x0000000000000c08ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vcore_top_contract_test_top___024root___ico_comb__TOP__3(vlSelf);
            }
            if ((0x0000000000000c20ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__4
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__store_req_fire 
                        = ((IData)(vlSelfRef.dmem_req_ready) 
                           & ((IData)(vlSelfRef.dmem_req_is_store) 
                              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid)));
                    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__dmem_req_fire 
                        = ((IData)(vlSelfRef.dmem_req_ready) 
                           & ((~ (IData)(vlSelfRef.dmem_req_is_store)) 
                              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid)));
                }
            }
            if ((0x0000000000000fc0ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vcore_top_contract_test_top___024root___ico_comb__TOP__5(vlSelf);
            }
            if ((0x0000000000000c18ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vcore_top_contract_test_top___024root___ico_comb__TOP__6(vlSelf);
            }
            if ((0x0000000000000c1aULL & vlSelfRef.__VicoTriggered[0U])) {
                Vcore_top_contract_test_top___024root___ico_comb__TOP__7(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

bool Vcore_top_contract_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcore_top_contract_test_top___024root___nba_sequent__TOP__0(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___nba_sequent__TOP__0\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*24:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 0;
    CData/*3:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 0;
    CData/*1:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    IData/*24:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 = 0;
    CData/*0:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 = 0;
    IData/*31:0*/ __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8;
    __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 = 0;
    CData/*4:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 0;
    CData/*3:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 0;
    CData/*1:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0;
    // Body
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 = 0U;
    vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 = 0U;
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__doing_reset) {
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__reset_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 1U;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__reset_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 1U;
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_write) {
        __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_new_counters;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 1U;
        __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_new_providers;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 1U;
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__doing_reset) {
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__reset_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0 = 1U;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__reset_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0 = 1U;
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_write) {
        __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_new_counters;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1 = 1U;
        __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_new_providers;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__update_index;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1 = 1U;
    }
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
         & (0U != (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr)))) {
        if ((0x2fU >= (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr))) {
            vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[0U];
            vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 
                = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr);
            vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 1U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 6U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 6U)))) {
            vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[1U];
            vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 6U));
            vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 2U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 0x0cU))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 0x0cU)))) {
            vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[2U];
            vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 0x0cU));
            vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 3U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 0x12U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 0x12U)))) {
            vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[3U];
            vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 0x12U));
            vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 4U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 0x18U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 0x18U)))) {
            vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[4U];
            vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 0x18U));
            vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 1U;
        }
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset) {
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_idx;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 1U;
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_write) {
        __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_new_ctr;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 
            = (0x000007ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_update[8U] 
                              >> 5U));
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 1U;
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset) {
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__rst_idx;
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0 = 1U;
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_write) {
        __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__upd_new_ctr;
        __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 
            = (0x000007ffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_update[8U] 
                              >> 5U));
        __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1 = 1U;
    }
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_valid_w) 
         & VL_GTS_III(32, 0x00000020U, (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w)))) {
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 
            = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q 
                     >> 1U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d0__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 
            = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q 
                     >> 1U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_d1__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 
            = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q 
                     >> 4U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat1__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 
            = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q 
                     >> 2U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv1__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 
            = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q);
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v0__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 
            = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q 
                     >> 4U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_mat0__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 
            = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q 
                     >> 2U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_plv0__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 
            = (0x000fffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q 
                              >> 8U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn0__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 
            = (0x000fffffU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q 
                              >> 8U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ppn1__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 
            = (1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q);
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_v1__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 
            = (0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_asid_q);
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_asid__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 
            = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbehi_q 
               >> 0x0000000dU);
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_vppn__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 
            = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo0_q 
                      & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbelo1_q) 
                     >> 6U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_g__v0 = 1U;
        vlSelfRef.__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 
            = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbidx_q 
                              >> 0x00000018U));
        vlSelfRef.__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w;
        vlSelfRef.__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inst__DOT__entry_ps__v0 = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_pc 
        = (IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                   >> 0x00000020U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_pc 
        = (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_tag 
        = (((QData)((IData)((((IData)(4U) + (IData)(
                                                    (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                                     >> 0x00000020U))) 
                             >> 7U))) << 0x00000019U) 
           | (QData)((IData)((0x01ffffffU & (IData)(
                                                    (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                                     >> 0x00000027U))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_tag 
        = (((QData)((IData)((((IData)(4U) + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc)) 
                             >> 7U))) << 0x00000019U) 
           | (QData)((IData)((0x01ffffffU & (IData)(
                                                    (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                                     >> 7U))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit_way 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit_way;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit_way 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit_way;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_hit 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[3U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_entry[3U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[3U];
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_read_bypass_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_counters 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_read_bypass_counters;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_providers 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_read_bypass_providers;
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_counters 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_counter_data;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_providers 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_provider_data;
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_read_bypass_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_counters 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_read_bypass_counters;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_providers 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_read_bypass_providers;
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_counters 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_counter_data;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s2_providers 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_provider_data;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT____Vcellinp__i_btb__f2_preds_in[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT____Vcellinp__i_btb__f2_preds_in[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT____Vcellinp__i_btb__f2_preds_in[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in[0U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT____Vcellinp__i_btb__f2_preds_in[0U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in[1U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT____Vcellinp__i_btb__f2_preds_in[1U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__f3_preds_in[2U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT____Vcellinp__i_btb__f2_preds_in[2U];
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[0U] 
        = (IData)(((- (QData)((IData)(((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit) 
                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid))))) 
                   & (((QData)((IData)((2U | (1U & 
                                              (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                               [(((IData)(2U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                 >> 5U)] 
                                               >> (0x0000001fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x000007ffU 
                                                       & ((IData)(0x00000041U) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))))) 
                       << 0x00000022U) | (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                               [
                                                               (((IData)(1U) 
                                                                 + 
                                                                 (0x000007ffU 
                                                                  & ((IData)(0x00000041U) 
                                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (0x000007ffU 
                                                                    & ((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))) 
                                           << 0x00000021U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x00000041U) 
                                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((0U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (((IData)(0x00000022U) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & ((IData)(0x00000041U) 
                                                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x00000020U) 
                                                                   - 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))) 
                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(3U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U] 
        = ((0xfffffff0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U]) 
           | (IData)((((- (QData)((IData)(((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit) 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid))))) 
                       & (((QData)((IData)((2U | (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                     [
                                                     (((IData)(2U) 
                                                       + 
                                                       (0x000007ffU 
                                                        & ((IData)(0x00000041U) 
                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x000007ffU 
                                                          & ((IData)(0x00000041U) 
                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))))) 
                           << 0x00000022U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(1U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))) 
                                               << 0x00000021U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (0x0000003fU 
                                                                       & (((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)) 
                                                                          >> 5U))] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (((0U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(3U) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & ((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (((IData)(0x00000022U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x00000020U) 
                                                                       - 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))) 
                                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                       [
                                                                       (((IData)(3U) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & ((IData)(0x00000041U) 
                                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U] 
        = ((0x0000000fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U]) 
           | ((IData)(((- (QData)((IData)(((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid) 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                       & (((QData)((IData)((2U | (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                     [
                                                     (((IData)(2U) 
                                                       + 
                                                       (0x000007ffU 
                                                        & ((IData)(0x00000041U) 
                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x000007ffU 
                                                          & ((IData)(0x00000041U) 
                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                           << 0x00000022U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(1U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                               << 0x00000021U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (0x0000003fU 
                                                                       & (((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                          >> 5U))] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (((0U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(3U) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & ((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (((IData)(0x00000022U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x00000020U) 
                                                                       - 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                       [
                                                                       (((IData)(3U) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & ((IData)(0x00000041U) 
                                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))))))) 
              << 4U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[2U] 
        = (0x000000ffU & (((IData)(((- (QData)((IData)(
                                                       ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid) 
                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                    & (((QData)((IData)(
                                                        (2U 
                                                         | (1U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                               [
                                                               (((IData)(2U) 
                                                                 + 
                                                                 (0x000007ffU 
                                                                  & ((IData)(0x00000041U) 
                                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (0x000007ffU 
                                                                    & ((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                               [
                                                               (((IData)(1U) 
                                                                 + 
                                                                 (0x000007ffU 
                                                                  & ((IData)(0x00000041U) 
                                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (0x000007ffU 
                                                                    & ((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                           << 0x00000021U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x00000041U) 
                                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((0U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (((IData)(0x00000022U) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & ((IData)(0x00000041U) 
                                                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x00000020U) 
                                                                   - 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(3U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))))))) 
                           >> 0x0000001cU) | ((IData)(
                                                      (((- (QData)((IData)(
                                                                           ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid) 
                                                                            & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                                        & (((QData)((IData)(
                                                                            (2U 
                                                                             | (1U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                                            << 0x00000022U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                                               << 0x00000021U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(0x00000022U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))))))) 
                                                       >> 0x00000020U)) 
                                              << 4U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[0U] 
        = (IData)(((- (QData)((IData)(((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit) 
                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid))))) 
                   & (((QData)((IData)((2U | (1U & 
                                              (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                               [(((IData)(2U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                 >> 5U)] 
                                               >> (0x0000001fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x000007ffU 
                                                       & ((IData)(0x00000041U) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))))) 
                       << 0x00000022U) | (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                               [
                                                               (((IData)(1U) 
                                                                 + 
                                                                 (0x000007ffU 
                                                                  & ((IData)(0x00000041U) 
                                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (0x000007ffU 
                                                                    & ((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))) 
                                           << 0x00000021U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x00000041U) 
                                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((0U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (((IData)(0x00000022U) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & ((IData)(0x00000041U) 
                                                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x00000020U) 
                                                                   - 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))) 
                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(3U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U] 
        = ((0xfffffff0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U]) 
           | (IData)((((- (QData)((IData)(((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit) 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid))))) 
                       & (((QData)((IData)((2U | (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                     [
                                                     (((IData)(2U) 
                                                       + 
                                                       (0x000007ffU 
                                                        & ((IData)(0x00000041U) 
                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x000007ffU 
                                                          & ((IData)(0x00000041U) 
                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))))) 
                           << 0x00000022U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(1U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))) 
                                               << 0x00000021U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (0x0000003fU 
                                                                       & (((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)) 
                                                                          >> 5U))] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (((0U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(3U) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & ((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (((IData)(0x00000022U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x00000020U) 
                                                                       - 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))) 
                                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                       [
                                                                       (((IData)(3U) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & ((IData)(0x00000041U) 
                                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U] 
        = ((0x0000000fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[1U]) 
           | ((IData)(((- (QData)((IData)(((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid) 
                                           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                       & (((QData)((IData)((2U | (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                     [
                                                     (((IData)(2U) 
                                                       + 
                                                       (0x000007ffU 
                                                        & ((IData)(0x00000041U) 
                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x000007ffU 
                                                          & ((IData)(0x00000041U) 
                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                           << 0x00000022U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(1U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                               << 0x00000021U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (0x0000003fU 
                                                                       & (((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                          >> 5U))] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (((0U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(3U) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & ((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                      [
                                                                      (((IData)(0x00000022U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x00000020U) 
                                                                       - 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                       [
                                                                       (((IData)(3U) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & ((IData)(0x00000041U) 
                                                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))))))) 
              << 4U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_preds_in[2U] 
        = (0x000000ffU & (((IData)(((- (QData)((IData)(
                                                       ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid) 
                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                    & (((QData)((IData)(
                                                        (2U 
                                                         | (1U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                               [
                                                               (((IData)(2U) 
                                                                 + 
                                                                 (0x000007ffU 
                                                                  & ((IData)(0x00000041U) 
                                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (0x000007ffU 
                                                                    & ((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                               [
                                                               (((IData)(1U) 
                                                                 + 
                                                                 (0x000007ffU 
                                                                  & ((IData)(0x00000041U) 
                                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (0x000007ffU 
                                                                    & ((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                           << 0x00000021U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (((IData)(0x00000041U) 
                                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x00000041U) 
                                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((0U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & ((IData)(0x00000041U) 
                                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                  [
                                                                  (((IData)(0x00000022U) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & ((IData)(0x00000041U) 
                                                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x00000020U) 
                                                                   - 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                   [
                                                                   (((IData)(3U) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & ((IData)(0x00000041U) 
                                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x0000001fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))))))) 
                           >> 0x0000001cU) | ((IData)(
                                                      (((- (QData)((IData)(
                                                                           ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__f1_valid) 
                                                                            & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                                        & (((QData)((IData)(
                                                                            (2U 
                                                                             | (1U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                                            << 0x00000022U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                                               << 0x00000021U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(0x00000022U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                                                                                [
                                                                                (((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))))))) 
                                                       >> 0x00000020U)) 
                                              << 4U)));
    if (vlSelfRef.rst_n) {
        if (VL_UNLIKELY((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                               >> 1U)) & (0U != (0x0000003fU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr))) 
                          & ((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr) 
                             == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 6U))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 0 and 1 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                               >> 2U)) & (0U != (0x0000003fU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr))) 
                          & ((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr) 
                             == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 0x0cU))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 0 and 2 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                               >> 3U)) & (0U != (0x0000003fU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr))) 
                          & ((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr) 
                             == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 0x12U))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 0 and 3 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
                               >> 4U)) & (0U != (0x0000003fU 
                                                 & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr))) 
                          & ((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr) 
                             == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 0x18U))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 0 and 4 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY(((IData)(((6U == (6U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en))) 
                                  & ((0U != (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 6U))) 
                                     & ((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                            >> 6U)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                               >> 0x0cU))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 1 and 2 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                 >> 6U)));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY(((IData)(((0x0aU == (0x0aU 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en))) 
                                  & ((0U != (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 6U))) 
                                     & ((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                            >> 6U)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                               >> 0x12U))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 1 and 3 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                 >> 6U)));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY(((IData)(((0x12U == (0x12U 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en))) 
                                  & ((0U != (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 6U))) 
                                     & ((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                            >> 6U)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                               >> 0x18U))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 1 and 4 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                 >> 6U)));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY(((IData)(((0x0cU == (0x0cU 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en))) 
                                  & ((0U != (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 0x0cU))) 
                                     & ((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                            >> 0x0cU)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                               >> 0x12U))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 2 and 3 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                 >> 0x0cU)));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY(((IData)(((0x14U == (0x14U 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en))) 
                                  & ((0U != (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 0x0cU))) 
                                     & ((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                            >> 0x0cU)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                               >> 0x18U))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 2 and 4 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                 >> 0x0cU)));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (VL_UNLIKELY(((IData)(((0x18U == (0x18U 
                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en))) 
                                  & ((0U != (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                >> 0x12U))) 
                                     & ((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                            >> 0x12U)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                               >> 0x18U))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: loom_core.sv:1382: Assertion failed in %m: Regfile write port conflict: ports 3 and 4 both write p%0d\n",4, 'M',vlSymsp->name(),"core_top_contract_test_top.dut.core.unnamedblk18.unnamedblk19", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',6,(0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                                 >> 0x12U)));
            VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/exu/loom_core.sv", 1382, "", false);
        }
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__do_allocate) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                   >> 7U);
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 
                = ((IData)(0x00000023U) + (0x0000007fU 
                                           & ((IData)(0x0000003cU) 
                                              * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                              [(0x0000001fU 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                   >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 1U;
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 
                = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][4U] 
                    << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][3U] 
                              >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 
                = ((IData)(3U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                      >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                         >> 0x0000001aU));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                = ((IData)(2U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                      >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                         >> 0x00000019U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                = ((IData)(1U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                      >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                         >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                = (0x0000007fU & ((IData)(0x0000003cU) 
                                  * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                  [(0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                   >> 2U))]));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
        } else if ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_495) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 
                = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][4U] 
                    << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][3U] 
                              >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 
                = ((IData)(3U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way))));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 1U;
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                         >> 0x0000001aU));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                = ((IData)(2U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way))));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                         >> 0x00000019U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                = ((IData)(1U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way))));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                         >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                = (0x0000007fU & ((IData)(0x0000003cU) 
                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way)));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
        }
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__do_allocate) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 
                = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                   >> 7U);
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 
                = ((IData)(0x00000023U) + (0x0000007fU 
                                           & ((IData)(0x0000003cU) 
                                              * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                              [(0x0000001fU 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                   >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0 = 1U;
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 
                = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][4U] 
                    << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][3U] 
                              >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 
                = ((IData)(3U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                      >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                         >> 0x0000001aU));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                = ((IData)(2U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                      >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                         >> 0x00000019U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                = ((IData)(1U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                      >> 2U))])));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                         >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                = (0x0000007fU & ((IData)(0x0000003cU) 
                                  * vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__repl_ptr
                                  [(0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                                   >> 2U))]));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
        } else if ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_262)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 
                = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][4U] 
                    << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][3U] 
                              >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 
                = ((IData)(3U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way))));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5 = 1U;
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                         >> 0x0000001aU));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                = ((IData)(2U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way))));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                         >> 0x00000019U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                = ((IData)(1U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way))));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                         >> 0x00000018U));
            __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                = (0x0000007fU & ((IData)(0x0000003cU) 
                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__upd_hit_way)));
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                = (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                                  >> 2U));
        }
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__do_allocate) {
            VL_ASSIGNSEL_WI(1040, 30, ((IData)(0x00000023U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, 
                            (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                             >> 2U));
            VL_ASSIGNSEL_WI(1040, 32, ((IData)(3U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, 
                            ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][4U] 
                              << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][3U] 
                                        >> 0x00000018U)));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(2U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                                         >> 0x0000001aU)) 
                                  << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(1U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                                         >> 0x00000019U)) 
                                  << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x00000041U) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(0x0000003fU & (((IData)(0x00000041U) 
                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)) 
                                     >> 5U))]) | ((1U 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                                                      >> 0x00000018U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))));
        } else if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204))) {
            VL_ASSIGNSEL_WI(1040, 32, ((IData)(3U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, 
                            ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][4U] 
                              << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][3U] 
                                        >> 0x00000018U)));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(2U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                                         >> 0x0000001aU)) 
                                  << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(1U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                                         >> 0x00000019U)) 
                                  << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x00000041U) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(0x0000003fU & (((IData)(0x00000041U) 
                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)) 
                                     >> 5U))]) | ((1U 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[1U][7U] 
                                                      >> 0x00000018U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))));
        }
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__do_allocate) {
            VL_ASSIGNSEL_WI(1040, 30, ((IData)(0x00000023U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, 
                            (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_lane_pc 
                             >> 2U));
            VL_ASSIGNSEL_WI(1040, 32, ((IData)(3U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, 
                            ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][4U] 
                              << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][3U] 
                                        >> 0x00000018U)));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(2U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                                         >> 0x0000001aU)) 
                                  << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(1U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                                         >> 0x00000019U)) 
                                  << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x00000041U) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(0x0000003fU & (((IData)(0x00000041U) 
                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)) 
                                     >> 5U))]) | ((1U 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                                                      >> 0x00000018U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__alloc_idx)))));
        } else if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201))) {
            VL_ASSIGNSEL_WI(1040, 32, ((IData)(3U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries, 
                            ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][4U] 
                              << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][3U] 
                                        >> 0x00000018U)));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(2U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                                         >> 0x0000001aU)) 
                                  << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx))))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(((IData)(1U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                                         >> 0x00000019U)) 
                                  << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries[(0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x00000041U) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx))))) 
                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__entries
                    [(0x0000003fU & (((IData)(0x00000041U) 
                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)) 
                                     >> 5U))]) | ((1U 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_update[0U][7U] 
                                                      >> 0x00000018U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_ubtb__DOT__update_hit_idx)))));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_ctrs 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_read_bypass_valid)
            ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_read_bypass_data)
            : (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_ram_rdata));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s2_ctrs 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_read_bypass_valid)
            ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_read_bypass_data)
            : (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_ram_rdata));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit_way 
        = ((((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239)) 
             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)) 
            << 1U) | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237)) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit_way 
        = ((((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)) 
             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)) 
            << 1U) | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258)) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)) 
            << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237) 
                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_hit 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)) 
            << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258) 
                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[0U] 
        = (IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237)
                                             ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                 [
                                                                 (0x0000001fU 
                                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][0U])))
                                             : ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][3U])) 
                                                  << 0x00000024U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                     [
                                                                     (0x0000001fU 
                                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][2U])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                       [
                                                                       (0x0000001fU 
                                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                       >> 0x0000001cU))) 
                                                & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U]) 
           | (IData)(((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237)
                                                 ? 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][0U])))
                                                 : 
                                                ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][3U])) 
                                                   << 0x00000024U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                      [
                                                                      (0x0000001fU 
                                                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                        [
                                                                        (0x0000001fU 
                                                                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                        >> 0x0000001cU))) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238)))))) 
                      >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U] 
        = ((0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U]) 
           | ((IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239)
                                                 ? 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                      >> 5U))][1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                       >> 5U))][0U])))
                                                 : 
                                                ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                       >> 5U))][3U])) 
                                                   << 0x00000024U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                      [
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                          >> 5U))][2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                        [
                                                                        (0x0000001fU 
                                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                            >> 5U))][1U])) 
                                                        >> 0x0000001cU))) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240))))))) 
              << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[2U] 
        = (((IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239)
                                               ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                       >> 5U))][1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                        >> 5U))][0U])))
                                               : ((
                                                   ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                        >> 5U))][3U])) 
                                                    << 0x00000024U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                       [
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                           >> 5U))][2U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                         [
                                                                         (0x0000001fU 
                                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                             >> 5U))][1U])) 
                                                         >> 0x0000001cU))) 
                                                  & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240))))))) 
            >> 4U) | ((IData)(((0x0fffffffffffffffULL 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239)
                                    ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                            >> 5U))][1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                         [
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                             >> 5U))][0U])))
                                    : ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                         [
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                             >> 5U))][3U])) 
                                         << 0x00000024U) 
                                        | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                            [
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                >> 5U))][2U])) 
                                            << 4U) 
                                           | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                              [
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                  >> 5U))][1U])) 
                                              >> 0x0000001cU))) 
                                       & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)))))) 
                               >> 0x00000020U)) << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[3U] 
        = (0x00ffffffU & ((IData)(((0x0fffffffffffffffULL 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239)
                                        ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                            [
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                >> 5U))][1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                             [
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                 >> 5U))][0U])))
                                        : ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                             [
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                 >> 5U))][3U])) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                [
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                    >> 5U))][2U])) 
                                                << 4U) 
                                               | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                      >> 5U))][1U])) 
                                                  >> 0x0000001cU))) 
                                           & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)))))) 
                                   >> 0x00000020U)) 
                          >> 4U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[0U] 
        = (IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258)
                                             ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                 [
                                                                 (0x0000001fU 
                                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][0U])))
                                             : ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][3U])) 
                                                  << 0x00000024U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                     [
                                                                     (0x0000001fU 
                                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][2U])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                       [
                                                                       (0x0000001fU 
                                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                       >> 0x0000001cU))) 
                                                & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U] 
        = ((0xf0000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U]) 
           | (IData)(((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258)
                                                 ? 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][0U])))
                                                 : 
                                                ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][3U])) 
                                                   << 0x00000024U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                      [
                                                                      (0x0000001fU 
                                                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                        [
                                                                        (0x0000001fU 
                                                                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set))][1U])) 
                                                        >> 0x0000001cU))) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259)))))) 
                      >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U] 
        = ((0x0fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[1U]) 
           | ((IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)
                                                 ? 
                                                (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                      >> 5U))][1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                       >> 5U))][0U])))
                                                 : 
                                                ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                       >> 5U))][3U])) 
                                                   << 0x00000024U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                      [
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                          >> 5U))][2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                        [
                                                                        (0x0000001fU 
                                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                            >> 5U))][1U])) 
                                                        >> 0x0000001cU))) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))))))) 
              << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[2U] 
        = (((IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)
                                               ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                       >> 5U))][1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                        >> 5U))][0U])))
                                               : ((
                                                   ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                        >> 5U))][3U])) 
                                                    << 0x00000024U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                       [
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                           >> 5U))][2U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                         [
                                                                         (0x0000001fU 
                                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                             >> 5U))][1U])) 
                                                         >> 0x0000001cU))) 
                                                  & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))))))) 
            >> 4U) | ((IData)(((0x0fffffffffffffffULL 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)
                                    ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                            >> 5U))][1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                         [
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                             >> 5U))][0U])))
                                    : ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                         [
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                             >> 5U))][3U])) 
                                         << 0x00000024U) 
                                        | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                            [
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                >> 5U))][2U])) 
                                            << 4U) 
                                           | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                              [
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                  >> 5U))][1U])) 
                                              >> 0x0000001cU))) 
                                       & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                               >> 0x00000020U)) << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s2_entry[3U] 
        = (0x00ffffffU & ((IData)(((0x0fffffffffffffffULL 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)
                                        ? (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                            [
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                >> 5U))][1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                             [
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                 >> 5U))][0U])))
                                        : ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                             [
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                 >> 5U))][3U])) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                [
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                    >> 5U))][2U])) 
                                                << 4U) 
                                               | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set) 
                                                                      >> 5U))][1U])) 
                                                  >> 0x0000001cU))) 
                                           & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))))) 
                                   >> 0x00000020U)) 
                          >> 4U));
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__predictor_f0_valid) 
         & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__doing_reset)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_counter_data 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram
            [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s0_index];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_provider_data 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram
            [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__s0_index];
    }
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__predictor_f0_valid) 
         & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__doing_reset)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_counter_data 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram
            [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s0_index];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s1_provider_data 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram
            [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__s0_index];
    }
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__predictor_f0_valid) 
         & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_ram_rdata 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram
            [(0x000007ffU & (IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                     >> 0x00000024U)))];
    }
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__predictor_f0_valid) 
         & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__doing_reset)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__s1_ram_rdata 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram
            [(0x000007ffU & (IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                     >> 4U)))];
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0) {
        VL_ASSIGNSEL_WI(120, 25, __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                        [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0], __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0);
        VL_ASSIGNSEL_WI(120, 32, __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                        [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1], __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4)));
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5) {
        VL_ASSIGNSEL_WI(120, 32, __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                        [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5], __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8)));
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0) {
        VL_ASSIGNSEL_WI(120, 25, __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                        [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0], __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v0);
        VL_ASSIGNSEL_WI(120, 32, __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                        [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1], __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v1);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v2)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v3)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v4)));
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5) {
        VL_ASSIGNSEL_WI(120, 32, __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                        [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5], __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v5);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v6)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v7)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8][(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8))) 
                & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries
                [__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8]
                [(__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8 
                  >> 5U)]) | ((IData)(__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8) 
                              << (0x0000001fU & __VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__entries__v8)));
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0] = 0x0aU;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v0] = 0x0aU;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__counter_ram__v1;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0] = 0U;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v0] = 0U;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_gshare__DOT__provider_ram__v1;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0] = 0x0aU;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v0] = 0x0aU;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_bim__DOT__ram__v1;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__1__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set 
        = ((0x000003e0U & (((IData)(4U) + (IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                                   >> 0x00000020U))) 
                           << 3U)) | (0x0000001fU & (IData)(
                                                            (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                                             >> 0x00000022U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__gen_composer__BRA__0__KET____DOT__composer_inst__DOT__i_btb__DOT__s1_set 
        = ((0x000003e0U & (((IData)(4U) + (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc)) 
                           << 3U)) | (0x0000001fU & (IData)(
                                                            (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__bank_f0_pc 
                                                             >> 2U))));
}
