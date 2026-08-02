// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

extern const VlWide<13>/*415:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcore_top_contract_test_top__ConstPool__TABLE_hea82845a_0;
extern const VlWide<26>/*831:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h571eb658_0;

void Vcore_top_contract_test_top___024root___nba_sequent__TOP__5(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___nba_sequent__TOP__5\n"); );
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
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable = 0;
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops_raw);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uops);
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire = 0;
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop);
    VlWide<26>/*831:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop;
    VL_ZERO_W(832, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop);
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unnamedblk14__DOT__rob_offset = 0;
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0;
    QData/*47:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__unnamedblk3__DOT__taken_mask = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid = 0;
    VlWide<13>/*415:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop;
    VL_ZERO_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop);
    VlWide<13>/*415:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop;
    VL_ZERO_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop);
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older;
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 0;
    CData/*4:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count = 0;
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0;
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk13__DOT__accept_cursor = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word = 0;
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_killed = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__unnamedblk11__DOT__accept_cursor = 0;
    SData/*11:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready = 0;
    SData/*11:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx;
    core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx = 0;
    QData/*47:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__priority_encoder__23__vec = 0;
    CData/*3:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__Vfuncout;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__addr;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__addr = 0;
    CData/*1:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__size;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__size = 0;
    CData/*5:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a = 0;
    CData/*5:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b = 0;
    CData/*5:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head = 0;
    CData/*5:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a = 0;
    CData/*5:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b = 0;
    CData/*3:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr = 0;
    CData/*1:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_144;
    __VdfgRegularize_h6e95ff9d_0_144 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_148;
    __VdfgRegularize_h6e95ff9d_0_148 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_191;
    __VdfgRegularize_h6e95ff9d_0_191 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_283;
    __VdfgRegularize_h6e95ff9d_0_283 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_356;
    __VdfgRegularize_h6e95ff9d_0_356 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_357;
    __VdfgRegularize_h6e95ff9d_0_357 = 0;
    VlWide<5>/*157:0*/ __VdfgRegularize_h6e95ff9d_0_492;
    VL_ZERO_W(158, __VdfgRegularize_h6e95ff9d_0_492);
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_509;
    __VdfgRegularize_h6e95ff9d_0_509 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_510;
    __VdfgRegularize_h6e95ff9d_0_510 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_658;
    __VdfgRegularize_h6e95ff9d_0_658 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_675;
    __VdfgRegularize_h6e95ff9d_0_675 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_676;
    __VdfgRegularize_h6e95ff9d_0_676 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_683;
    __VdfgRegularize_h6e95ff9d_0_683 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_684;
    __VdfgRegularize_h6e95ff9d_0_684 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_685;
    __VdfgRegularize_h6e95ff9d_0_685 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_686;
    __VdfgRegularize_h6e95ff9d_0_686 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_687;
    __VdfgRegularize_h6e95ff9d_0_687 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_688;
    __VdfgRegularize_h6e95ff9d_0_688 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_689;
    __VdfgRegularize_h6e95ff9d_0_689 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_690;
    __VdfgRegularize_h6e95ff9d_0_690 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_691;
    __VdfgRegularize_h6e95ff9d_0_691 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_692;
    __VdfgRegularize_h6e95ff9d_0_692 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_693;
    __VdfgRegularize_h6e95ff9d_0_693 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_694;
    __VdfgRegularize_h6e95ff9d_0_694 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_695;
    __VdfgRegularize_h6e95ff9d_0_695 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_696;
    __VdfgRegularize_h6e95ff9d_0_696 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_697;
    __VdfgRegularize_h6e95ff9d_0_697 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_698;
    __VdfgRegularize_h6e95ff9d_0_698 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_699;
    __VdfgRegularize_h6e95ff9d_0_699 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_700;
    __VdfgRegularize_h6e95ff9d_0_700 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_701;
    __VdfgRegularize_h6e95ff9d_0_701 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_702;
    __VdfgRegularize_h6e95ff9d_0_702 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_703;
    __VdfgRegularize_h6e95ff9d_0_703 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_704;
    __VdfgRegularize_h6e95ff9d_0_704 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_705;
    __VdfgRegularize_h6e95ff9d_0_705 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_706;
    __VdfgRegularize_h6e95ff9d_0_706 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_707;
    __VdfgRegularize_h6e95ff9d_0_707 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_708;
    __VdfgRegularize_h6e95ff9d_0_708 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_709;
    __VdfgRegularize_h6e95ff9d_0_709 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_710;
    __VdfgRegularize_h6e95ff9d_0_710 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_729;
    __VdfgRegularize_h6e95ff9d_0_729 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_736;
    __VdfgRegularize_h6e95ff9d_0_736 = 0;
    VlWide<13>/*415:0*/ __Vtemp_1;
    VlWide<15>/*479:0*/ __Vtemp_11;
    CData/*31:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<13>/*415:0*/ __Vtemp_146;
    VlWide<13>/*415:0*/ __Vtemp_147;
    VlWide<13>/*415:0*/ __Vtemp_148;
    VlWide<13>/*415:0*/ __Vtemp_149;
    VlWide<13>/*415:0*/ __Vtemp_150;
    VlWide<13>/*415:0*/ __Vtemp_151;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 8U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[136U] 
                                 >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000080U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfeffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 9U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[152U] 
                                 >> 0x0000000fU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000090U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfdffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0aU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[169U] 
                                 << 4U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000a0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfbffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0bU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[185U] 
                                 >> 9U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000b0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xf7ffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0cU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[202U] 
                                  << 0x0000000aU) | 
                                 (0x000003c0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[201U] 
                                                 >> 0x00000016U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000c0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xefffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0dU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[218U] 
                                 >> 3U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000d0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xdfffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0eU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[234U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000e0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xbfffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
            >> 0x0000000fU))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[251U] 
                                 << 3U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000f0U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0x7fffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)));
    __VdfgRegularize_h6e95ff9d_0_658 = (1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                               >> (0x0000000fU 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                      >> 0x00000014U))) 
                                              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_killed) 
               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_hold_live));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_killed) 
               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_hold_live));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_killed) 
               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_live));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_valid) 
               | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_valid) 
                  | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_valid 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_br_killed) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush));
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_issue_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__state)));
    __VdfgRegularize_h6e95ff9d_0_710 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000012U)) 
                                               & (2U 
                                                  > (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_711))) 
                                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_711)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready 
        = ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                >> 0x0000000fU) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__branch_redirect_valid) 
                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__repair_busy_q) 
                                      | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__entry_valid_q) 
                                         >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)))))) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_req_ready 
        = ((1U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__agen_match 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_361) 
           & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U] 
               >> 1U) & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__agen_valid) 
                         & ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x0000020bU) 
                                    + (0x00003fffU 
                                       & ((IData)(0x0000020dU) 
                                          * (0x0000000fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                >> 0x00000014U))))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x0000020bU) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x0000020dU) 
                                                      * 
                                                      (0x0000000fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                          >> 0x00000014U))))))) 
                                | (IData)(__VdfgRegularize_h6e95ff9d_0_658))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__dgen_match 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U] 
            >> 1U) & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_646) 
                      & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__xcpt[14U] 
                             >> 7U)) & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_361) 
                                        & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                            >> 0x00000012U) 
                                           & ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                                   [
                                                   (((IData)(0x000001c4U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x0000020dU) 
                                                         * 
                                                         (0x0000000fU 
                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                             >> 0x00000014U))))) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(0x000001c4U) 
                                                       + 
                                                       (0x00003fffU 
                                                        & ((IData)(0x0000020dU) 
                                                           * 
                                                           (0x0000000fU 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                               >> 0x00000014U))))))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_658))) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362)))))));
    __VdfgRegularize_h6e95ff9d_0_356 = (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid) 
                                         << 1U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid));
    __VdfgRegularize_h6e95ff9d_0_357 = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid) 
                                         << 1U) | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[2U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__addr 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__24__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_block = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_valid = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_data = 0U;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[13U] 
                  >> 3U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U] 
                            << 0x00000016U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[14U] 
                                               >> 0x0000000aU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[2U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U] 
            << 0x00000018U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[14U] 
                               >> 8U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[16U] 
              >> 0x0000000cU)) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed))) 
         & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000100U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[21U] 
                          >> 0x0000000dU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[29U] 
                  >> 0x00000010U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U] 
                            << 9U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[30U] 
                                      >> 0x00000017U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[18U] 
                 >> 0x00000011U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U] 
            << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[30U] 
                               >> 0x00000015U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[32U] 
              >> 0x00000019U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 1U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00200000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 1U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[37U] 
           >> 0x0000001aU);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[45U] 
                  >> 0x0000001dU) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U] 
                            << 0x0000001cU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[47U] 
                                               >> 4U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[34U] 
           >> 0x0000001eU);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U] 
            << 0x0000001eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[47U] 
                               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[49U] 
              >> 6U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                            >> 2U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((4U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 2U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[54U] 
                          >> 7U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[62U] 
                  >> 0x0000000aU) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U] 
                            << 0x0000000fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[63U] 
                                               >> 0x00000011U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[51U] 
                 >> 0x0000000bU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U] 
            << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[63U] 
                               >> 0x0000000fU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[65U] 
              >> 0x00000013U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 3U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00008000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 3U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[70U] 
                          >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[78U] 
                  >> 0x00000017U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[80U] 
                            << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[79U] 
                                      >> 0x0000001eU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[67U] 
                 >> 0x00000018U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[80U] 
            << 4U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[79U] 
                      >> 0x0000001cU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[82U]) 
          & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                >> 4U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x10000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[80U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 4U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[87U] 
                          >> 1U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[95U] 
                  >> 4U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U] 
                            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[96U] 
                                               >> 0x0000000bU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[84U] 
                 >> 5U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U] 
            << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[96U] 
                               >> 9U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[98U] 
              >> 0x0000000dU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 5U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000200U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 5U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[103U] 
                          >> 0x0000000eU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[111U] 
                  >> 0x00000011U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[113U] 
                            << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[112U] 
                                      >> 0x00000018U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[100U] 
                 >> 0x00000012U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[113U] 
            << 0x0000000aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[112U] 
                               >> 0x00000016U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[114U] 
              >> 0x0000001aU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 6U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00400000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[113U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 6U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[120U] 
                           << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[119U] 
                                     >> 0x0000001bU)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[127U] 
                  >> 0x0000001eU) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U] 
                            << 0x0000001bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[129U] 
                                               >> 5U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[117U] 
                  << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[116U] 
                            >> 0x0000001fU)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U] 
            << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[129U] 
                               >> 3U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[131U] 
              >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                            >> 7U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((8U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 7U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[136U] 
                          >> 8U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[144U] 
                  >> 0x0000000bU) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[146U] 
                            << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[145U] 
                                               >> 0x00000012U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[133U] 
                 >> 0x0000000cU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[146U] 
            << 0x00000010U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[145U] 
                               >> 0x00000010U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[147U] 
              >> 0x00000014U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 8U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00010000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[146U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 8U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[152U] 
                          >> 0x00000015U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[160U] 
                  >> 0x00000018U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[162U] 
                            << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[161U] 
                                      >> 0x0000001fU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[149U] 
                 >> 0x00000019U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[162U] 
            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[161U] 
                      >> 0x0000001dU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[164U] 
              >> 1U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                            >> 9U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x20000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[162U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 9U;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[169U] 
                          >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[177U] 
                  >> 5U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[179U] 
                            << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[178U] 
                                               >> 0x0000000cU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[166U] 
                 >> 6U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[179U] 
            << 0x00000016U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[178U] 
                               >> 0x0000000aU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[180U] 
              >> 0x0000000eU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0aU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000400U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[179U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0x0aU;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[185U] 
                          >> 0x0000000fU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[193U] 
                  >> 0x00000012U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[195U] 
                            << 7U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[194U] 
                                      >> 0x00000019U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[182U] 
                 >> 0x00000013U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[195U] 
            << 9U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[194U] 
                      >> 0x00000017U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[196U] 
              >> 0x0000001bU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0bU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00800000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[195U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0x0bU;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[202U] 
                           << 4U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[201U] 
                                     >> 0x0000001cU)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[209U] 
            >> 0x0000001fU) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[212U] 
                            << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[211U] 
                                               >> 6U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[199U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[212U] 
            << 0x0000001cU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[211U] 
                               >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[213U] 
              >> 8U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                            >> 0x0cU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000010U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[212U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0x0cU;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[218U] 
                          >> 9U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[226U] 
                  >> 0x0000000cU) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[228U] 
                            << 0x0000000dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[227U] 
                                               >> 0x00000013U))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[215U] 
                 >> 0x0000000dU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[228U] 
            << 0x0000000fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[227U] 
                               >> 0x00000011U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[229U] 
              >> 0x00000015U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0dU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00020000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[228U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0x0dU;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[234U] 
                          >> 0x00000016U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[242U] 
                  >> 0x00000019U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[244U]) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[231U] 
                 >> 0x0000001aU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[244U] 
            << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[243U] 
                      >> 0x0000001eU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[246U] 
              >> 2U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                            >> 0x0eU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x40000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[244U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0x0eU;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b 
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop[5U]);
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a 
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[251U] 
                          >> 3U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__a) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b 
        = (0x0000003fU & ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__b) 
                          - (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__head)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older 
        = ((IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_a) 
           < (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__rob_is_older__25__dist_b));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[259U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[261U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[260U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[248U] 
                 >> 7U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[261U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[260U] 
                               >> 0x0000000bU));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout 
        = (0x0000000fU & ((0U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                           ? ((IData)(1U) << (3U & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                           : ((1U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                               ? ((IData)(3U) << (3U 
                                                  & __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr))
                               : ((2U == (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size))
                                   ? 0x0fU : 0U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask 
        = __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__Vfuncout;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word) 
           & (0U != ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask))));
    if ((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
            & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[262U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0fU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[261U])) {
            if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap) {
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count)));
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot = 0x0fU;
                core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask 
                    = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
            }
        } else {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older = 1U;
        }
    }
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid) 
         & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)))) {
        if (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_unresolved_older) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_block = 1U;
        } else if ((1U < (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count))) {
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_block = 1U;
        } else if ((1U == (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_count))) {
            if (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                  [(((IData)(0x000001c4U) + (0x00003fffU 
                                             & ((IData)(0x0000020dU) 
                                                * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                    >> 5U)] >> (0x0000001fU & ((IData)(0x000001c4U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))) 
                 & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask)) 
                    == (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask)))) {
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__size 
                    = (3U & (((0U == (0x0000001fU & 
                                      ((IData)(0x00000044U) 
                                       + (0x00003fffU 
                                          & ((IData)(0x0000020dU) 
                                             * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))
                               ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                       [(((IData)(0x00000045U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x0000020dU) 
                                                * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                         >> 5U)] << 
                                       ((IData)(0x00000020U) 
                                        - (0x0000001fU 
                                           & ((IData)(0x00000044U) 
                                              + (0x00003fffU 
                                                 & ((IData)(0x0000020dU) 
                                                    * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))))) 
                             | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                [(((IData)(0x00000044U) 
                                   + (0x00003fffU & 
                                      ((IData)(0x0000020dU) 
                                       * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000044U) 
                                                 + 
                                                 (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))));
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_valid = 1U;
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__addr 
                    = (((0U == (0x0000001fU & ((IData)(0x000001c8U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x000001e7U) 
                                    + (0x00003fffU 
                                       & ((IData)(0x0000020dU) 
                                          * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x000001c8U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x0000020dU) 
                                                         * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                          [(((IData)(0x000001c8U) + 
                             (0x00003fffU & ((IData)(0x0000020dU) 
                                             * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                            >> 5U)] >> (0x0000001fU 
                                        & ((IData)(0x000001c8U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x0000020dU) 
                                                 * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))));
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__data 
                    = (((0U == (0x0000001fU & ((IData)(0x000001a4U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x0000020dU) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x000001c3U) 
                                    + (0x00003fffU 
                                       & ((IData)(0x0000020dU) 
                                          * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x000001a4U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x0000020dU) 
                                                         * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                          [(((IData)(0x000001a4U) + 
                             (0x00003fffU & ((IData)(0x0000020dU) 
                                             * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                            >> 5U)] >> (0x0000001fU 
                                        & ((IData)(0x000001a4U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x0000020dU) 
                                                 * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))));
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__byte_offset 
                    = (3U & vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__addr);
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__Vfuncout 
                    = ((0U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__size))
                        ? VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__data, 
                                        ((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__byte_offset) 
                                         << 3U)) : 
                       ((1U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__size))
                         ? VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__data, 
                                         ((IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__byte_offset) 
                                          << 3U)) : 
                        ((2U == (IData)(vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__size))
                          ? vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__data
                          : 0U)));
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_data 
                    = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__Vfuncout;
            } else {
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_block = 1U;
            }
        }
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_owner_cacop_q)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_step 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill)) 
           & (1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__resp_fire 
        = ((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill)) 
              & (3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire 
        = ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush) 
               | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_killed) 
                  | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_live));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 = (0x00001fffU 
                                                  & ((IData)(0x000001ebU) 
                                                     * 
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)
                                                          ? (IData)(vlSelfRef.dmem_resp_idx)
                                                          : (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx)))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant 
        = (1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready) 
                    & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready) 
                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_issue_ready)))));
    __VdfgRegularize_h6e95ff9d_0_709 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000013U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_710))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_710)));
    __VdfgRegularize_h6e95ff9d_0_191 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_available) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_is_store 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_arb_locked)
            ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_locked_is_store)
            : ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_356)) 
               | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_prefer_store) 
                  & (3U == (IData)(__VdfgRegularize_h6e95ff9d_0_356)))));
    vlSelfRef.dmem_req_is_store = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__arb_locked)
                                    ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__locked_is_store)
                                    : ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_357)) 
                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__prefer_store) 
                                          & (3U == (IData)(__VdfgRegularize_h6e95ff9d_0_357)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot 
        = (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_tag_q));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match = 0U;
    VL_ASSIGN_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    if (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_access_q)) 
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
                    == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_tag_q))) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) {
            __VExpandSel_WordIdx_1 = (0x000001ffU & 
                                      (((IData)(0x0000020dU) 
                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)) 
                                       >> 5U));
            __VExpandSel_LoShift_1 = (0x0000001fU & 
                                      ((IData)(0x0000020dU) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)));
            __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
            if (__VExpandSel_Aligned_1) {
                __VExpandSel_HiShift_1 = 0U;
                __VExpandSel_HiMask_1 = 0U;
            } else {
                __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                          - __VExpandSel_LoShift_1);
                __VExpandSel_HiMask_1 = 0xffffffffU;
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[0U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[1U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[2U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[3U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[4U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[5U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[6U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(8U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(9U) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(8U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[9U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(9U) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[10U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[11U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[12U] 
                = (((((0x000000faU <= __VExpandSel_WordIdx_1)
                       ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000dU) + __VExpandSel_WordIdx_1)]) 
                     << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
                      >> __VExpandSel_LoShift_1));
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
        = (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_tag_q));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match = 0U;
    VL_ASSIGN_W(416, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    if (((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_access_q)) 
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
                    == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_tag_q))) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed) 
                      >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match) {
            __VExpandSel_WordIdx_2 = (0x000000ffU & 
                                      (((IData)(0x000001ebU) 
                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)) 
                                       >> 5U));
            __VExpandSel_LoShift_2 = (0x0000001fU & 
                                      ((IData)(0x000001ebU) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)));
            __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
            if (__VExpandSel_Aligned_2) {
                __VExpandSel_HiShift_2 = 0U;
                __VExpandSel_HiMask_2 = 0U;
            } else {
                __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                          - __VExpandSel_LoShift_2);
                __VExpandSel_HiMask_2 = 0xffffffffU;
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[0U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [__VExpandSel_WordIdx_2] >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[1U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[2U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[3U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[4U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[5U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[6U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(8U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(9U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(8U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[9U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000aU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(9U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[10U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000bU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000aU) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[11U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000cU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000bU) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[12U] 
                = (((((0x000000e9U <= __VExpandSel_WordIdx_2)
                       ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000dU) + __VExpandSel_WordIdx_2)]) 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000cU) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__req_fire 
        = ((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_done 
        = (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
            & (2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_cnt))) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__resp_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 = (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000044U) 
                                                           + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                       [
                                                       (((IData)(0x00000045U) 
                                                         + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000044U) 
                                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))) 
                                                     | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                        [
                                                        (((IData)(0x00000044U) 
                                                          + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000044U) 
                                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_379 = (1U 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                     [
                                                     (((IData)(0x00000043U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((IData)(0x00000043U) 
                                                         + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))));
    __VdfgRegularize_h6e95ff9d_0_148 = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match)
                                          ? vlSelfRef.dmem_resp_data
                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_data) 
                                        >> (0x00000018U 
                                            & ((((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(0x000001c9U) 
                                                      + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                  [
                                                  (((IData)(0x000001caU) 
                                                    + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x000001c9U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))) 
                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                   [
                                                   (((IData)(0x000001c9U) 
                                                     + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(0x000001c9U) 
                                                       + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)))) 
                                               << 3U)));
    __VExpandSel_WordIdx_3 = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 
                              >> 5U);
    __VExpandSel_LoShift_3 = (0x0000001fU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145);
    __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
    if (__VExpandSel_Aligned_3) {
        __VExpandSel_HiShift_3 = 0U;
        __VExpandSel_HiMask_3 = 0U;
    } else {
        __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_3);
        __VExpandSel_HiMask_3 = 0xffffffffU;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(1U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [__VExpandSel_WordIdx_3] >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[1U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(2U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(1U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[2U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(3U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(2U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[3U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(4U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(3U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[4U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(5U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(4U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[5U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(6U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(5U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[6U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(7U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(6U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[7U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(8U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(7U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[8U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(9U) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(8U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[9U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000aU) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(9U) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[10U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000bU) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000aU) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[11U] 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
             [((IData)(0x0000000cU) + __VExpandSel_WordIdx_3)] 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000bU) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[12U] 
        = (((((0x000000e9U <= __VExpandSel_WordIdx_3)
               ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000dU) + __VExpandSel_WordIdx_3)]) 
             << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
              [((IData)(0x0000000cU) + __VExpandSel_WordIdx_3)] 
              >> __VExpandSel_LoShift_3));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid = 0U;
    VL_ASSIGN_W(416, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffeU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | (0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U] 
                                      << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U] 
                                                >> 0x0000001eU)) 
                                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                        << 0x00000017U) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                          >> 9U))))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed))) 
              & (0U == (0x00380000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[3U]))));
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[4U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[5U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[6U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[9U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[10U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[11U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[12U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ffeU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant))));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffdU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[20U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 1U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 1U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[16U])))) 
              << 1U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 1U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[13U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[14U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[15U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[16U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[17U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[18U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[19U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[20U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[22U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[23U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[24U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[25U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[20U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[20U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ffdU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (2U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 1U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffbU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[33U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 2U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 2U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[29U])))) 
              << 2U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 2U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[26U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[27U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[28U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[29U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[30U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[31U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[32U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[33U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[35U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[36U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[37U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[38U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[33U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[33U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ffbU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (4U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 2U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ff7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[46U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 3U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 3U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 3U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[42U])))) 
              << 3U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 3U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[39U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[40U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[41U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[42U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[43U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[44U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[45U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[46U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[48U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[49U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[50U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[51U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[46U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[46U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ff7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (8U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 3U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fefU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[59U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 4U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 4U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 4U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[55U])))) 
              << 4U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 4U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[52U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[53U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[54U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[55U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[56U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[57U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[58U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[59U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[61U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[62U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[63U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[64U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[59U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[59U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0fefU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000010U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 4U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fdfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[72U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 5U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 5U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 5U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[68U])))) 
              << 5U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 5U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[65U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[66U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[67U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[68U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[69U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[70U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[71U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[72U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[74U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[75U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[76U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[77U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[72U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[72U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0fdfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000020U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 5U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fbfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[85U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 6U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 6U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 6U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[81U])))) 
              << 6U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 6U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[78U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[79U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[80U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[81U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[82U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[83U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[84U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[85U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[87U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[88U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[89U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[90U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[85U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[85U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0fbfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000040U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 6U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0f7fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[98U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 7U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0f7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 7U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 7U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[94U])))) 
              << 7U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 7U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[91U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[92U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[93U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[94U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[95U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[96U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[97U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[98U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[100U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[101U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[102U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[103U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[98U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[98U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0f7fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000080U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 7U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0effU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[111U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 8U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0effU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 8U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 8U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[107U])))) 
              << 8U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 8U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[104U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[105U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[106U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[107U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[108U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[109U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[110U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[111U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[113U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[114U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[115U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[116U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[111U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[111U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0effU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000100U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 8U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0dffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[124U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 9U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0dffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 9U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 9U))) & (0U 
                                                  == 
                                                  (0x00380000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[120U])))) 
              << 9U));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 9U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[117U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[118U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[119U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[120U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[121U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[122U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[123U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[124U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[126U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[127U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[128U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[129U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[124U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[124U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0dffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000200U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 9U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0bffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[137U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 0x0000000aU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0bffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 0x0000000aU) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 0x0000000aU))) 
                       & (0U == (0x00380000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[133U])))) 
              << 0x0000000aU));
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 0x0aU) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[130U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[131U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[132U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[133U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[134U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[135U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[136U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[137U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[139U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[140U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[141U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[142U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[137U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[137U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0bffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000400U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 0x0000000aU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x07ffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[151U] 
                                       << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[150U] 
                                                 >> 0x0000001eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000017U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 9U))))) 
              << 0x0000000bU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x07ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 0x0000000bU) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 0x0000000bU))) 
                       & (0U == (0x00380000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[146U])))) 
              << 0x0000000bU));
    if ((IData)((((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                  >> 0x0000000bU) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[143U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[144U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[145U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[146U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[147U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[148U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[149U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[150U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[151U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[152U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[153U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[154U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[155U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[151U] 
                     << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[150U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (3U & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[151U] 
                           << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[150U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x07ffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000800U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 0x0000000bU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
        = (0x00000fffU & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
                          | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot = 0U;
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (1U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (2U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 3U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (3U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 4U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (4U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0fefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 5U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (5U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0fdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 6U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (6U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0fbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 7U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (7U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0f7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 8U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (8U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0effU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 9U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (9U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0dffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                  >> 0x0aU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x0000000aU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0bffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready)) 
         & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
            >> 0x0000000bU))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x0000000bU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x07ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 1U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000010U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 2U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000020U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 3U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000030U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0ff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 4U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000040U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0fefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 5U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000050U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0fdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 6U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000060U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0fbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 7U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000070U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0f7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 8U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000080U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0effU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 9U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x00000090U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0dffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                   >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                              >> 0x0aU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x000000a0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x0bffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    if ((IData)(((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                     >> 1U)) & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available) 
                                >> 0x0000000bU)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot 
            = (0x000000b0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
            = (0x07ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available));
    }
    __VdfgRegularize_h6e95ff9d_0_708 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000014U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_709))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_709)));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_191))));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_predicted_taken 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_predicted_taken_d) 
           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_191))));
    if (__VdfgRegularize_h6e95ff9d_0_191) {
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
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_xcpt_valid 
        = ((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_191))) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d) 
              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_valid_q)));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ftq_idx 
        = ((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_191))) 
           & ((((0x000000f0U & (((8U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d))
                                  ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200) 
                                     >> 0x0000000cU)) 
                                << 4U)) | (0x0000000fU 
                                           & ((4U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d))
                                               ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)
                                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200) 
                                                  >> 8U)))) 
               << 8U) | ((0x000000f0U & (((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d))
                                           ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_inst__DOT__enq_ptr_q)
                                           : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200) 
                                              >> 4U)) 
                                         << 4U)) | 
                         (0x0000000fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_req_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_is_store) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_req_ready) 
              & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_req_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_req_ready) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_is_store)) 
              & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_is_store)
            ? (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid)
            : (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid));
    if (vlSelfRef.dmem_req_is_store) {
        vlSelfRef.dmem_req_valid = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid;
        vlSelfRef.dmem_req_addr = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_addr;
        vlSelfRef.dmem_req_size = (3U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                          << 0x0000001cU) 
                                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                            >> 4U)));
        vlSelfRef.dmem_req_idx = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_idx;
    } else {
        vlSelfRef.dmem_req_valid = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid;
        vlSelfRef.dmem_req_addr = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_addr;
        vlSelfRef.dmem_req_size = (3U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_uop[2U] 
                                          << 0x0000001cU) 
                                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_uop[2U] 
                                            >> 4U)));
        vlSelfRef.dmem_req_idx = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_idx;
    }
    vlSelfRef.dmem_req_mask = (0x0000000fU & (((0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                    >> 4U)))
                                                ? ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_addr))
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                        >> 4U)))
                                                    ? 
                                                   ((IData)(3U) 
                                                    << 
                                                    (3U 
                                                     & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_addr))
                                                    : 
                                                   (- (IData)(
                                                              (2U 
                                                               == 
                                                               (3U 
                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                                   >> 4U))))))) 
                                              & (- (IData)((IData)(vlSelfRef.dmem_req_is_store)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__store_req_fire 
        = ((IData)(vlSelfRef.dmem_req_ready) & ((IData)(vlSelfRef.dmem_req_is_store) 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__dmem_req_fire 
        = ((IData)(vlSelfRef.dmem_req_ready) & ((~ (IData)(vlSelfRef.dmem_req_is_store)) 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid)));
    vlSelfRef.dmem_req_data = (((0U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                              >> 4U)))
                                 ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_752
                                 : ((1U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                  >> 4U)))
                                     ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_752
                                     : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_data 
                                        & (- (IData)(
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                          >> 4U)))))))) 
                               & (- (IData)((IData)(vlSelfRef.dmem_req_is_store))));
    __VdfgRegularize_h6e95ff9d_0_676 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) 
                                        | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_clear 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__req_fire) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__resp_fire) 
              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_br_killed)) 
              & ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
                 | (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
                     & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_done)) 
                    | (((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_done)) 
                       | ((4U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
                          | ((5U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
                             | ((8U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
                                | (6U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((0U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228))
                                                 ? 
                                                ((((- (IData)(
                                                              (1U 
                                                               & (__VdfgRegularize_h6e95ff9d_0_148 
                                                                  >> 7U)))) 
                                                   & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_379)))) 
                                                  << 8U) 
                                                 | (0x000000ffU 
                                                    & __VdfgRegularize_h6e95ff9d_0_148))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228))
                                                  ? 
                                                 ((((- (IData)(
                                                               (1U 
                                                                & (__VdfgRegularize_h6e95ff9d_0_148 
                                                                   >> 0x0000000fU)))) 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_379)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & __VdfgRegularize_h6e95ff9d_0_148))
                                                  : 
                                                 ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228)))) 
                                                  & __VdfgRegularize_h6e95ff9d_0_148)));
    __VdfgRegularize_h6e95ff9d_0_8 = (IData)(((0U == 
                                               (0x18000000U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157[0U])) 
                                              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__issue_fire 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready) 
           & ((~ (0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask) 
                         & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                             << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                                       >> 0x0000001eU))))) 
              & ((~ ((0U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                                   >> 0x00000016U))) 
                     | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                        >> 0x0000000fU))) & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__req_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid) 
           & ((0U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                            >> 0x00000016U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_513 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_750 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                     & ((0x0000003fU 
                                                         & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 0x0000000cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_517 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 6U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 6U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_751 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 6U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                            >> 6U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 0x0000000cU)))));
    __VdfgRegularize_h6e95ff9d_0_283 = ((2U == (0x0000000fU 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
    __VdfgRegularize_h6e95ff9d_0_707 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000015U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_708))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_708)));
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
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[0U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[0U]);
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
                   | (0x00ffffffU & ((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_code_q) 
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
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[1U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[1U]);
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
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_code_q 
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
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[2U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[2U]);
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
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_code_q 
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
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q[3U]);
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__unnamedblk1__DOT__packed_idx 
                                                 << 5U)), vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q[3U]);
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
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_xcpt_code_q 
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_valid 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q)) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready 
        = (1U & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_valid_q) 
                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q[14U] 
                        >> 7U) & (IData)(__VdfgRegularize_h6e95ff9d_0_676)))));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match) {
        __Vtemp_1[0U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[0U];
        __Vtemp_1[1U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[1U];
        __Vtemp_1[2U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[2U];
        __Vtemp_1[3U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[3U];
        __Vtemp_1[4U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[4U];
        __Vtemp_1[5U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[5U];
        __Vtemp_1[6U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[6U];
        __Vtemp_1[7U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U];
        __Vtemp_1[8U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U];
        __Vtemp_1[9U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[9U];
        __Vtemp_1[10U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[10U];
        __Vtemp_1[11U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[11U];
        __Vtemp_1[12U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[12U];
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) {
        __Vtemp_1[0U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[0U];
        __Vtemp_1[1U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[1U];
        __Vtemp_1[2U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[2U];
        __Vtemp_1[3U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[3U];
        __Vtemp_1[4U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[4U];
        __Vtemp_1[5U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[5U];
        __Vtemp_1[6U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[6U];
        __Vtemp_1[7U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U];
        __Vtemp_1[8U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U];
        __Vtemp_1[9U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[9U];
        __Vtemp_1[10U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[10U];
        __Vtemp_1[11U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[11U];
        __Vtemp_1[12U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[12U];
    } else {
        VL_ASSIGN_W(416, __Vtemp_1, Vcore_top_contract_test_top__ConstPool__CONST_h75d095d1_0);
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_code_q)) 
                    << 0x00000021U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_badvaddr_q))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[1U] 
        = ((__Vtemp_1[0U] << 7U) | (IData)(((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_code_q)) 
                                              << 0x00000021U) 
                                             | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_badvaddr_q))) 
                                            >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[2U] 
        = ((__Vtemp_1[0U] >> 0x00000019U) | (__Vtemp_1[1U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[3U] 
        = ((__Vtemp_1[1U] >> 0x00000019U) | (__Vtemp_1[2U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[4U] 
        = ((__Vtemp_1[2U] >> 0x00000019U) | (__Vtemp_1[3U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[5U] 
        = ((__Vtemp_1[3U] >> 0x00000019U) | (__Vtemp_1[4U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[6U] 
        = ((__Vtemp_1[4U] >> 0x00000019U) | (__Vtemp_1[5U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[7U] 
        = ((__Vtemp_1[5U] >> 0x00000019U) | (__Vtemp_1[6U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[8U] 
        = ((__Vtemp_1[6U] >> 0x00000019U) | (__Vtemp_1[7U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[9U] 
        = ((__Vtemp_1[7U] >> 0x00000019U) | (__Vtemp_1[8U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[10U] 
        = ((__Vtemp_1[8U] >> 0x00000019U) | (__Vtemp_1[9U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[11U] 
        = ((__Vtemp_1[9U] >> 0x00000019U) | (__Vtemp_1[10U] 
                                             << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[12U] 
        = ((__Vtemp_1[10U] >> 0x00000019U) | (__Vtemp_1[11U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[13U] 
        = ((__Vtemp_1[11U] >> 0x00000019U) | (__Vtemp_1[12U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U] 
        = ((0x00000080U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U]) 
           | (0x000000ffU & (__Vtemp_1[12U] >> 0x00000019U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U] 
        = ((0x0000007fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U]) 
           | (0x000000ffU & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid) 
                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__resp_xcpt_valid_q) 
                                 & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_676)))) 
                             << 7U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_333)));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_333) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[0U] 
               << 7U);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[0U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[1U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[3U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[1U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[2U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[4U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[2U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[3U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[3U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[4U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[6U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[4U] 
                >> 0x00000019U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[0U] 
                                    << 0x0000000dU) 
                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[5U] 
                                      << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U] 
            = (((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[0U] 
                                >> 0x00000013U)) | 
                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747[5U] 
                 >> 0x00000019U)) | ((0x00001f80U & 
                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[0U] 
                                       >> 0x00000013U)) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[1U] 
                                        << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U] 
            = ((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[1U] 
                               >> 0x00000013U)) | (
                                                   (0x00001f80U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[1U] 
                                                       >> 0x00000013U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[2U] 
                                                      << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U] 
            = ((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[2U] 
                               >> 0x00000013U)) | (
                                                   (0x00001f80U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[2U] 
                                                       >> 0x00000013U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[3U] 
                                                      << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U] 
            = ((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[3U] 
                               >> 0x00000013U)) | (
                                                   (0x00001f80U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[3U] 
                                                       >> 0x00000013U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[4U] 
                                                      << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U] 
            = ((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[4U] 
                               >> 0x00000013U)) | (
                                                   (0x00001f80U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[4U] 
                                                       >> 0x00000013U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[5U] 
                                                      << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U] 
            = ((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[5U] 
                               >> 0x00000013U)) | (
                                                   (0x00001f80U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[5U] 
                                                       >> 0x00000013U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[6U] 
                                                      << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U] 
            = ((0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[6U] 
                               >> 0x00000013U)) | (
                                                   (0x00001f80U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[6U] 
                                                       >> 0x00000013U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[7U] 
                                                      << 0x0000000dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U] 
            = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_333) 
                << 7U) | (0x0000007fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_748[7U] 
                                         >> 0x00000013U)));
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
            = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[0U] 
               << 7U);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[0U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[1U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[1U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[2U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[2U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[3U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[3U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[4U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[6U] 
            = ((((0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[5U]) 
                 | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rob_idx_q)) 
                << 7U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[4U] 
                          >> 0x00000019U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U] 
            = ((((0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[5U]) 
                 | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rob_idx_q)) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U] 
            = ((((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U]) 
                 | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U])) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U] 
            = ((((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U]) 
                 | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U])) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U] 
            = ((((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U]) 
                 | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U])) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U] 
            = ((((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U]) 
                 | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U])) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U] 
            = ((((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U]) 
                 | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U])) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U] 
            = ((((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U]) 
                 | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U])) 
                >> 0x00000019U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U]) 
                                    | (0xffffffc0U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U])) 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U] 
            = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q) 
                << 7U) | (((0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U]) 
                           | (0xffffffc0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U])) 
                          >> 0x00000019U));
    } else {
        __Vtemp_11[0U] = (IData)((((QData)((IData)(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))
                                                     ? 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))))) 
                                                     & (((0U 
                                                          == 
                                                          (0x0000000fU 
                                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                              >> 0x00000011U)))
                                                          ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_counter_value_w)
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x0000000fU 
                                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                               >> 0x00000011U)))
                                                           ? (IData)(
                                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_counter_value_w 
                                                                      >> 0x00000020U))
                                                           : 
                                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tid_q 
                                                           & (- (IData)(
                                                                        (2U 
                                                                         == 
                                                                         (0x0000000fU 
                                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                             >> 0x00000011U)))))))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state) 
                                                                          >> 1U)))))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__select_remainder_q)
                                                        ? 
                                                       ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__remainder_negate_q)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__remainder_result_q))
                                                         : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__remainder_result_q)
                                                        : 
                                                       (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__quotient_negate_q)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_result_q))
                                                          : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_result_q) 
                                                        | (- (IData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__divisor_zero_q)))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000000fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                            >> 0x00000011U)))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x0000000fU 
                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                             >> 0x00000011U)))
                                                         ? (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350 
                                                                    >> 0x00000020U))
                                                         : 
                                                        ((IData)(
                                                                 (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src2)) 
                                                                   * (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src1))) 
                                                                  >> 0x00000020U)) 
                                                         & (- (IData)(
                                                                      (2U 
                                                                       == 
                                                                       (0x0000000fU 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                           >> 0x00000011U)))))))))
                                                      : 
                                                     (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__resp_data_q 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))))))))) 
                                   << 7U) & (- (QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state) 
                                                                    >> 3U))))))));
        __Vtemp_11[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                           << 7U) | (IData)(((((QData)((IData)(
                                                               ((4U 
                                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))
                                                                 ? 
                                                                ((- (IData)(
                                                                            (1U 
                                                                             & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))))) 
                                                                 & (((0U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                          >> 0x00000011U)))
                                                                      ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_counter_value_w)
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x0000000fU 
                                                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                           >> 0x00000011U)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_counter_value_w 
                                                                                >> 0x00000020U))
                                                                       : 
                                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tid_q 
                                                                       & (- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x0000000fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                                >> 0x00000011U)))))))) 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state) 
                                                                                >> 1U)))))))
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))
                                                                   ? 
                                                                  ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__select_remainder_q)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__remainder_negate_q)
                                                                     ? 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__remainder_result_q))
                                                                     : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__remainder_result_q)
                                                                    : 
                                                                   (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__quotient_negate_q)
                                                                      ? 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_result_q))
                                                                      : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_result_q) 
                                                                    | (- (IData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__divisor_zero_q)))))
                                                                   : 
                                                                  ((0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                        >> 0x00000011U)))
                                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350)
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x0000000fU 
                                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                         >> 0x00000011U)))
                                                                     ? (IData)(
                                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350 
                                                                                >> 0x00000020U))
                                                                     : 
                                                                    ((IData)(
                                                                             (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src2)) 
                                                                               * (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src1))) 
                                                                              >> 0x00000020U)) 
                                                                     & (- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x0000000fU 
                                                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                                >> 0x00000011U)))))))))
                                                                  : 
                                                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__resp_data_q 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state))))))))) 
                                               << 7U) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state) 
                                                                        >> 3U))))))) 
                                             >> 0x00000020U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[1U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[1U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[2U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[2U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[3U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[3U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[4U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[5U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[5U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[6U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[6U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[7U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[7U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[8U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[8U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[9U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[9U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[10U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[10U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[11U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[11U] 
                >> 0x00000019U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[12U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U] 
            = (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid) 
                << 7U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[12U] 
                          >> 0x00000019U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_518 = ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_522 = ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_529 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_532 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_535 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_538 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_541 = ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_512 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_515 = ((0U 
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_valid 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            >> 0x00000015U) & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__issue_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w 
        = (IData)(((0x00400000U == (0x01c00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U])) 
                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__req_fire)));
    __VdfgRegularize_h6e95ff9d_0_706 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000016U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_707))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_707)));
    core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready 
        = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_count) 
            <= (0x0000001fU & ((IData)(8U) - (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__count_q)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_resp_accept 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready) 
           & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_en 
        = ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid) 
             << 4U) | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid) 
                       << 3U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__))));
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
                                          + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)))
                    ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                            [(((IData)(0x00000101U) 
                               + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & ((IData)(0x000000feU) 
                                                + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))) 
                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [(((IData)(0x000000feU) + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                       >> 5U)] >> (0x0000001fU & ((IData)(0x000000feU) 
                                                  + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))) 
              << 0x0000001dU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[52U] 
        = ((0xfffffffeU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps[52U]) 
           | (1U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask)) 
                     & (((0U == (0x0000001fU & ((IData)(0x000000feU) 
                                                + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)))
                          ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                  [(((IData)(0x00000101U) 
                                     + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x000000feU) 
                                                      + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))) 
                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                           [(((IData)(0x000000feU) 
                              + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x000000feU) 
                                            + vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x0000000cU 
                                                          & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U])) 
                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid)));
    __VdfgRegularize_h6e95ff9d_0_705 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000017U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_706))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_706)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_fire 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_191) 
           & ((0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_valid_d)) 
              & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_valid 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_available) 
           & (IData)(core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
             << 4U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  << 2U))) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    __VdfgRegularize_h6e95ff9d_0_704 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000018U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_705))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_705)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__packet_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_valid) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__ftq_enq_ready));
    __VdfgRegularize_h6e95ff9d_0_703 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000019U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_704))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_704)));
    __VdfgRegularize_h6e95ff9d_0_702 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000001aU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_703))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_703)));
    __VdfgRegularize_h6e95ff9d_0_701 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000001bU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_702))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_702)));
    __VdfgRegularize_h6e95ff9d_0_700 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000001cU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_701))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_701)));
    __VdfgRegularize_h6e95ff9d_0_699 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000001dU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_700))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_700)));
    __VdfgRegularize_h6e95ff9d_0_698 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000001eU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_699))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_699)));
    __VdfgRegularize_h6e95ff9d_0_697 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000001fU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_698))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_698)));
    __VdfgRegularize_h6e95ff9d_0_696 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000020U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_697))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_697)));
    __VdfgRegularize_h6e95ff9d_0_695 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000021U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_696))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_696)));
    __VdfgRegularize_h6e95ff9d_0_694 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000022U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_695))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_695)));
    __VdfgRegularize_h6e95ff9d_0_693 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000023U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_694))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_694)));
    __VdfgRegularize_h6e95ff9d_0_692 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000024U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_693))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_693)));
    __VdfgRegularize_h6e95ff9d_0_691 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000025U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_692))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_692)));
    __VdfgRegularize_h6e95ff9d_0_690 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000026U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_691))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_691)));
    __VdfgRegularize_h6e95ff9d_0_689 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000027U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_690))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_690)));
    __VdfgRegularize_h6e95ff9d_0_688 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000028U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_689))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_689)));
    __VdfgRegularize_h6e95ff9d_0_687 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x00000029U)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_688))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_688)));
    __VdfgRegularize_h6e95ff9d_0_686 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002aU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_687))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_687)));
    __VdfgRegularize_h6e95ff9d_0_685 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002bU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_686))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_686)));
    __VdfgRegularize_h6e95ff9d_0_684 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002cU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_685))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_685)));
    __VdfgRegularize_h6e95ff9d_0_683 = (3U & (((IData)(
                                                       (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                        >> 0x0000002dU)) 
                                               & (2U 
                                                  > (IData)(__VdfgRegularize_h6e95ff9d_0_684))) 
                                              + (IData)(__VdfgRegularize_h6e95ff9d_0_684)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_682 = (3U 
                                                  & (((IData)(
                                                              (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                               >> 0x0000002eU)) 
                                                      & (2U 
                                                         > (IData)(__VdfgRegularize_h6e95ff9d_0_683))) 
                                                     + (IData)(__VdfgRegularize_h6e95ff9d_0_683)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable 
        = ((0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state)) 
           & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                  >> 0x0000000fU)) & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q)) 
                                      & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                             >> 8U)) 
                                         & ((~ ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_462) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_463)) 
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
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227)) 
                                                                      + 
                                                                      (1U 
                                                                       & (- (IData)(
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226))))))) 
                                                                  > 
                                                                  (3U 
                                                                   & (((IData)(
                                                                               (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                                                >> 0x0000002fU)) 
                                                                       & (2U 
                                                                          > (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_682))) 
                                                                      + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_682))))))))) 
                                               & ((~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask))) 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unique_dispatch_ready))))))));
    __VdfgRegularize_h6e95ff9d_0_144 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207) 
                                        & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_476 = (1U 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready) 
                                                     >> 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_144) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_477 = (1U 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready) 
                                                     >> 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_144) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q)) 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103) 
                                                            & ((1U 
                                                                == 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_475 = (1U 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                                                     >> 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_144) 
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
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_283))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_144)
                                                     ? 
                                                    ((1U 
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
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_283) 
                                                            & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable)))))))
                                                     : 
                                                    (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511 = ((
                                                   (1U 
                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                                                    ? 1U
                                                    : 
                                                   (((1U 
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
                                                       & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_283)))))) 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103))))) 
                                                  & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_144))));
    __VdfgRegularize_h6e95ff9d_0_510 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_329));
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
    __Vtemp_40 = (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
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
           | (__Vtemp_40 >> 2U));
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
    __Vtemp_41 = (0x0000000fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
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
           | (__Vtemp_41 >> 2U));
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
                __Vtemp_146[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                __Vtemp_146[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                __Vtemp_146[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                __Vtemp_146[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                __Vtemp_146[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                __Vtemp_146[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                __Vtemp_146[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                __Vtemp_146[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                __Vtemp_146[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                __Vtemp_146[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                __Vtemp_146[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                __Vtemp_146[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                __Vtemp_146[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_146);
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
                    __Vtemp_148[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                    __Vtemp_148[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                    __Vtemp_148[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                    __Vtemp_148[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                    __Vtemp_148[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                    __Vtemp_148[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                    __Vtemp_148[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                    __Vtemp_148[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                    __Vtemp_148[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                    __Vtemp_148[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                    __Vtemp_148[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                    __Vtemp_148[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                    __Vtemp_148[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                    VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                               & ((IData)(0x000001a0U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_148);
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
                        __Vtemp_150[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[0U];
                        __Vtemp_150[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[1U];
                        __Vtemp_150[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[2U];
                        __Vtemp_150[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[3U];
                        __Vtemp_150[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[4U];
                        __Vtemp_150[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[5U];
                        __Vtemp_150[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[6U];
                        __Vtemp_150[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[7U];
                        __Vtemp_150[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[8U];
                        __Vtemp_150[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[9U];
                        __Vtemp_150[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[10U];
                        __Vtemp_150[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[11U];
                        __Vtemp_150[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[12U];
                        VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_150);
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
                __Vtemp_147[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                __Vtemp_147[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                __Vtemp_147[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                __Vtemp_147[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                __Vtemp_147[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                __Vtemp_147[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                __Vtemp_147[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                __Vtemp_147[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                __Vtemp_147[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                __Vtemp_147[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                __Vtemp_147[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                __Vtemp_147[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                __Vtemp_147[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                           & ((IData)(0x000001a0U) 
                                              * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__mem_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_mem_dis_uop, __Vtemp_147);
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
                    __Vtemp_149[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                    __Vtemp_149[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                    __Vtemp_149[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                    __Vtemp_149[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                    __Vtemp_149[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                    __Vtemp_149[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                    __Vtemp_149[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                    __Vtemp_149[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                    __Vtemp_149[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                    __Vtemp_149[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                    __Vtemp_149[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                    __Vtemp_149[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                    __Vtemp_149[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                    VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                               & ((IData)(0x000001a0U) 
                                                  * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__alu_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_alu_dis_uop, __Vtemp_149);
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
                        __Vtemp_151[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[13U];
                        __Vtemp_151[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[14U];
                        __Vtemp_151[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[15U];
                        __Vtemp_151[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[16U];
                        __Vtemp_151[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[17U];
                        __Vtemp_151[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[18U];
                        __Vtemp_151[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[19U];
                        __Vtemp_151[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[20U];
                        __Vtemp_151[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[21U];
                        __Vtemp_151[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[22U];
                        __Vtemp_151[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[23U];
                        __Vtemp_151[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[24U];
                        __Vtemp_151[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops[25U];
                        VL_ASSIGNSEL_WW(832, 416, (0x000003ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__unq_slot)), core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__dispatch_inst__iq_unq_dis_uop, __Vtemp_151);
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
