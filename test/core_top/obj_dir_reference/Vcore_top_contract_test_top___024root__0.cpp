// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

void Vcore_top_contract_test_top___024root___eval_triggers_vec__ico(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_triggers_vec__ico\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.ipi_irq) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ipi_irq__0)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.hw_irq) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hw_irq__0)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.dmem_resp_idx) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_idx__0)) 
                                                           << 1U) 
                                                          | (vlSelfRef.dmem_resp_data 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_data__0))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.dmem_resp_is_store) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_is_store__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.dmem_resp_valid) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_valid__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.dmem_req_ready) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dmem_req_ready__0)) 
                                                              << 1U) 
                                                             | (0U 
                                                                != 
                                                                ((((vlSelfRef.imem_resp_insts[0U] 
                                                                    ^ vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[0U]) 
                                                                   | (vlSelfRef.imem_resp_insts[1U] 
                                                                      ^ vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[1U])) 
                                                                  | (vlSelfRef.imem_resp_insts[2U] 
                                                                     ^ vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[2U])) 
                                                                 | (vlSelfRef.imem_resp_insts[3U] 
                                                                    ^ vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[3U]))))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.imem_resp_valid) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_valid__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.imem_req_ready) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__imem_req_ready__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.rst_n) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__imem_req_ready__0 
        = vlSelfRef.imem_req_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_valid__0 
        = vlSelfRef.imem_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[0U] 
        = vlSelfRef.imem_resp_insts[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[1U] 
        = vlSelfRef.imem_resp_insts[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[2U] 
        = vlSelfRef.imem_resp_insts[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__imem_resp_insts__0[3U] 
        = vlSelfRef.imem_resp_insts[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__dmem_req_ready__0 
        = vlSelfRef.dmem_req_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_valid__0 
        = vlSelfRef.dmem_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_is_store__0 
        = vlSelfRef.dmem_resp_is_store;
    vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_data__0 
        = vlSelfRef.dmem_resp_data;
    vlSelfRef.__Vtrigprevexpr___TOP__dmem_resp_idx__0 
        = vlSelfRef.dmem_resp_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__hw_irq__0 = vlSelfRef.hw_irq;
    vlSelfRef.__Vtrigprevexpr___TOP__ipi_irq__0 = vlSelfRef.ipi_irq;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vcore_top_contract_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlWide<14>/*447:0*/ Vcore_top_contract_test_top__ConstPool__CONST_h2f12751c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcore_top_contract_test_top__ConstPool__TABLE_hea82845a_0;

void Vcore_top_contract_test_top___024root___ico_comb__TOP__0(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ico_comb__TOP__0\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w = 0;
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_rob_idx_w;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_rob_idx_w = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w = 0;
    CData/*5:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_rob_idx_w;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_rob_idx_w = 0;
    CData/*1:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire = 0;
    VlWide<27>/*837:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops;
    VL_ZERO_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops);
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready = 0;
    QData/*55:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0;
    VlWide<4>/*111:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick;
    VL_ZERO_W(112, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick);
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid = 0;
    VlWide<14>/*418:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop;
    VL_ZERO_W(419, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop);
    VlWide<14>/*418:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop;
    VL_ZERO_W(419, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop);
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
    SData/*15:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor = 0;
    IData/*31:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word = 0;
    CData/*3:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_mask = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__mask_overlap = 0;
    SData/*15:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_bank;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_bank = 0;
    VlWide<14>/*418:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop;
    VL_ZERO_W(419, core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop);
    SData/*11:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready = 0;
    SData/*11:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available = 0;
    CData/*0:0*/ core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 0;
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
    CData/*1:0*/ __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__vec;
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__vec = 0;
    QData/*55:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_161;
    __VdfgRegularize_h6e95ff9d_0_161 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_169;
    __VdfgRegularize_h6e95ff9d_0_169 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_304;
    __VdfgRegularize_h6e95ff9d_0_304 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_363;
    __VdfgRegularize_h6e95ff9d_0_363 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_381;
    __VdfgRegularize_h6e95ff9d_0_381 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_382;
    __VdfgRegularize_h6e95ff9d_0_382 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_571;
    __VdfgRegularize_h6e95ff9d_0_571 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_572;
    __VdfgRegularize_h6e95ff9d_0_572 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_608;
    __VdfgRegularize_h6e95ff9d_0_608 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_609;
    __VdfgRegularize_h6e95ff9d_0_609 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_610;
    __VdfgRegularize_h6e95ff9d_0_610 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_716;
    __VdfgRegularize_h6e95ff9d_0_716 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_734;
    __VdfgRegularize_h6e95ff9d_0_734 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_742;
    __VdfgRegularize_h6e95ff9d_0_742 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_749;
    __VdfgRegularize_h6e95ff9d_0_749 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_790;
    __VdfgRegularize_h6e95ff9d_0_790 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_791;
    __VdfgRegularize_h6e95ff9d_0_791 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_794;
    __VdfgRegularize_h6e95ff9d_0_794 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_795;
    __VdfgRegularize_h6e95ff9d_0_795 = 0;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<14>/*447:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<14>/*447:0*/ __Vtemp_27;
    VlWide<15>/*479:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_47;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_613 = ((
                                                   ((IData)(vlSelfRef.ipi_irq) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__timer_irq_q) 
                                                      << 0x0000000bU)) 
                                                  | (((IData)(vlSelfRef.hw_irq) 
                                                      << 2U) 
                                                     | (3U 
                                                        & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__estat_q)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_taken_w 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__crmd_q 
            >> 2U) & ((0U != (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__ecfg_q 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_613))) 
                      & ((~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d1) 
                             | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d2) 
                                | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_lxcpt_w[14U] 
                                    >> 0x0000000aU) 
                                   | ((0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q)) 
                                      | (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception
                                           [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612] 
                                           >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_611)) 
                                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                            >> 8U))))))) 
                         & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state)))));
    __VdfgRegularize_h6e95ff9d_0_610 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d1) 
                                        | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d2) 
                                           | (((0U 
                                                != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state)) 
                                               & (1U 
                                                  != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state))) 
                                              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_taken_w))));
    __VdfgRegularize_h6e95ff9d_0_609 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_534) 
                                        & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception)) 
                                           & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_610))));
    __VdfgRegularize_h6e95ff9d_0_608 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152) 
                                         & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_534)) 
                                            | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception))) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_610));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw 
        = (1U & (((~ ((IData)(__VdfgRegularize_h6e95ff9d_0_609) 
                      | (IData)(__VdfgRegularize_h6e95ff9d_0_608))) 
                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception) 
                     >> 1U)) | ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_610)) 
                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit 
        = ((((~ (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception) 
                  >> 1U) | (IData)(__VdfgRegularize_h6e95ff9d_0_608))) 
             & ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy[1U] 
                     >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)) 
                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                       >> 8U))) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203))) 
            << 1U) | (IData)(__VdfgRegularize_h6e95ff9d_0_609));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_taken_w) {
        __Vtemp_2[3U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_611)
                           ? (((0U == (0x0000001fU 
                                       & ((IData)(0x00000162U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x000001a3U) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))))))
                                ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop
                                        [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612]
                                        [(((IData)(0x00000181U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x000001a3U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(0x00000162U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x000001a3U) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))))))) 
                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop
                                 [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612]
                                 [(((IData)(0x00000162U) 
                                    + (0x00003fffU 
                                       & ((IData)(0x000001a3U) 
                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x00000162U) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x000001a3U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))))))
                           : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_next_pc_w) 
                         << 0x0000000fU);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[0U] = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[2U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[3U] 
            = __Vtemp_2[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[4U] 
            = (0x00008000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_611)
                                ? (((0U == (0x0000001fU 
                                            & ((IData)(0x00000162U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x000001a3U) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))))))
                                     ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop
                                             [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612]
                                             [(((IData)(0x00000181U) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x000001a3U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))) 
                                               >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000162U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x000001a3U) 
                                                         * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))))))) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop
                                      [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_612]
                                      [(((IData)(0x00000162U) 
                                         + (0x00003fffU 
                                            & ((IData)(0x000001a3U) 
                                               * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))) 
                                        >> 5U)] >> 
                                      (0x0000001fU 
                                       & ((IData)(0x00000162U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x000001a3U) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head)))))))
                                : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_next_pc_w) 
                              >> 0x00000011U));
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[0U] 
            = (1U | ((IData)((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause
                                               [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                               [(0x07ffffffU 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))])) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr
                                                                 [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                                                 [
                                                                 (0x07ffffffU 
                                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))])))) 
                     << 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause
                                          [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                          [(0x07ffffffU 
                                            & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))])) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr
                                                            [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                                            [
                                                            (0x07ffffffU 
                                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))])))) 
                >> 0x0000001dU) | ((IData)(((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause
                                                              [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                                              [
                                                              (0x07ffffffU 
                                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr
                                                               [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                                               [
                                                               (0x07ffffffU 
                                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))]))) 
                                            >> 0x00000020U)) 
                                   << 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[2U] 
            = (((IData)((((QData)((IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[13U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                              >> 3U)))) 
                          << 6U) | (QData)((IData)(
                                                   (0x0000003eU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[7U] 
                                                       << 1U)))))) 
                << 9U) | ((0x000001f8U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[6U] 
                                          >> 0x00000017U)) 
                          | ((IData)(((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause
                                                        [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                                        [
                                                        (0x07ffffffU 
                                                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr
                                                         [vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank]
                                                         [
                                                         (0x07ffffffU 
                                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))]))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001dU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[3U] 
            = (((IData)((((QData)((IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[13U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                              >> 3U)))) 
                          << 6U) | (QData)((IData)(
                                                   (0x0000003eU 
                                                    & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[7U] 
                                                       << 1U)))))) 
                >> 0x00000017U) | (((IData)((0x0000000100000000ULL 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                                                 << 0x0000001eU) 
                                                                | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[11U] 
                                                                   >> 2U)))))) 
                                    << 0x0000000fU) 
                                   | ((IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[13U] 
                                                                   << 0x0000001dU) 
                                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                                                     >> 3U)))) 
                                                 << 6U) 
                                                | (QData)((IData)(
                                                                  (0x0000003eU 
                                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[7U] 
                                                                      << 1U))))) 
                                               >> 0x00000020U)) 
                                      << 9U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[4U] 
            = (((0x000001ffU & ((IData)((0x0000000100000000ULL 
                                         | (QData)((IData)(
                                                           ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                                             << 0x0000001eU) 
                                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[11U] 
                                                               >> 2U)))))) 
                                >> 0x00000011U)) | 
                ((IData)(((((QData)((IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[13U] 
                                              << 0x0000001dU) 
                                             | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                                >> 3U)))) 
                            << 6U) | (QData)((IData)(
                                                     (0x0000003eU 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[7U] 
                                                         << 1U))))) 
                          >> 0x00000020U)) >> 0x00000017U)) 
               | ((0x00007e00U & ((IData)((0x0000000100000000ULL 
                                           | (QData)((IData)(
                                                             ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                                               << 0x0000001eU) 
                                                              | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[11U] 
                                                                 >> 2U)))))) 
                                  >> 0x00000011U)) 
                  | ((IData)(((0x0000000100000000ULL 
                               | (QData)((IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[11U] 
                                                     >> 2U))))) 
                              >> 0x00000020U)) << 0x0000000fU)));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[0U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[2U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[3U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[4U] = 0U;
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__valids 
        = ((2U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
            .__PVT__valids) | (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__valids 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
            .__PVT__valids) | (2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__arch_valids 
        = ((2U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
            .__PVT__arch_valids) | (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit) 
                                          & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated[0U] 
                                                >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__arch_valids 
        = ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
            .__PVT__arch_valids) | ((IData)((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit) 
                                              >> 1U) 
                                             & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated[1U] 
                                                   >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head))))) 
                                    << 1U));
    vlSelfRef.exception_pc = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[4U] 
                               << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[3U] 
                                                  >> 0x0000000fU));
    vlSelfRef.exception_inst = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[3U] 
                                 << 0x00000011U) | 
                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[2U] 
                                 >> 0x0000000fU));
    vlSelfRef.exception_cause = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U] 
                                  >> 3U));
    vlSelfRef.exception_badvaddr = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U] 
                                     << 0x0000001dU) 
                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[0U] 
                                       >> 3U));
    vlSelfRef.exception_valid = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[4U] 
                                       >> 0x0000000fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_valid = 0U;
    if ((1U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
         .__PVT__valids)) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_valid = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_idx = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_idx 
            = (0x0000000fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                              .__PVT__uops[7U] >> 1U));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_idx = 0U;
    }
    if ((2U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
         .__PVT__valids)) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_valid = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__ftq_commit_idx 
            = (0x0000000fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                              .__PVT__uops[20U] >> 4U));
    }
    vlSelfRef.commit_valid = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
        .__PVT__arch_valids;
    vlSelfRef.commit_pc = 0ULL;
    vlSelfRef.commit_pc = (((QData)((IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                              .__PVT__uops[25U] 
                                              << 0x0000001bU) 
                                             | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                .__PVT__uops[24U] 
                                                >> 5U)))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                                .__PVT__uops[12U] 
                                                                << 0x0000001eU) 
                                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                                  .__PVT__uops[11U] 
                                                                  >> 2U)))));
    vlSelfRef.commit_inst = 0ULL;
    vlSelfRef.commit_inst = (((QData)((IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                .__PVT__uops[26U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                  .__PVT__uops[25U] 
                                                  >> 6U)))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                                  .__PVT__uops[13U] 
                                                                  << 0x0000001dU) 
                                                                 | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                                                    .__PVT__uops[12U] 
                                                                    >> 3U)))));
    vlSelfRef.commit_ldst = 0U;
    vlSelfRef.commit_ldst = ((0x000003e0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                             .__PVT__uops[14U] 
                                             >> 0x0000000dU)) 
                             | (0x0000001fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                               .__PVT__uops[1U] 
                                               >> 0x0000000fU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_ertn_valid_w 
        = (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                 .__PVT__valids & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                   .__PVT__uops[7U] 
                                   >> 0x0000000cU)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_ertn_valid_w 
        = (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_ertn_valid_w) 
                 | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                     .__PVT__valids >> 1U) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                              .__PVT__uops[20U] 
                                              >> 0x0000000fU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_w = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_pc_w = 0U;
    if ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
               .__PVT__valids & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                 .__PVT__uops[7U] >> 0x00000010U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_w = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_pc_w 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                .__PVT__uops[12U] << 0x0000001eU) | 
               (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                .__PVT__uops[11U] >> 2U));
    }
    if ((1U & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_w)) 
                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                   .__PVT__valids >> 1U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                             .__PVT__uops[20U] 
                                             >> 0x00000013U)))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_w = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__idle_commit_pc_w 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                .__PVT__uops[25U] << 0x0000001bU) | 
               (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                .__PVT__uops[24U] >> 5U));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__finished_committing_row 
        = (((0U != vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
             .__PVT__valids) & (0U == ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit) 
                                       ^ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head_vals)))) 
           & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail_lsb) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_492))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_rob_idx_w = 0U;
    if ((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
               .__PVT__valids & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                 .__PVT__uops[8U] >> 0x00000018U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w = 1U;
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_rob_idx_w 
            = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
               .__PVT__uops[5U]);
    }
    if ((1U & (((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w)) 
                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                   .__PVT__valids >> 1U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                             .__PVT__uops[21U] 
                                             >> 0x0000001bU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w = 1U;
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_rob_idx_w 
            = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                              .__PVT__uops[18U] >> 3U));
    }
    VL_ASSIGN_W(838, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                .__PVT__uops);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_rob_idx_w = 0U;
    if ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
         .__PVT__valids & (0U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                        .__PVT__uops[1U] 
                                        >> 0x00000016U))))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w = 1U;
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_rob_idx_w 
            = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
               .__PVT__uops[5U]);
    }
    if ((((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w)) 
          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
             .__PVT__valids >> 1U)) & (0U != (7U & 
                                              (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                               .__PVT__uops[14U] 
                                               >> 0x00000019U))))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w = 1U;
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_rob_idx_w 
            = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                              .__PVT__uops[18U] >> 3U));
    }
    VL_ASSIGN_W(838, core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                .__PVT__uops);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask 
        = ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
           | (1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                    .__PVT__valids & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                      .__PVT__uops[1U] 
                                      >> 0x0000001fU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask 
        = ((1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
           | (2U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                    .__PVT__valids & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                      .__PVT__uops[15U] 
                                      >> 1U))));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__vec 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask;
    {
        vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__Vfuncout = 0;
        if ((1U & (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__vec))) {
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__Vfuncout = 0U;
            goto __Vlabel0;
        }
        if ((2U & (IData)(__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__vec))) {
            vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__Vfuncout = 1U;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__Vfuncout = 0U;
        __Vlabel0: ;
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_bank 
        = vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__103__Vfuncout;
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw) {
        __Vtemp_6[0U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[0U];
        __Vtemp_6[1U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[1U];
        __Vtemp_6[2U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[2U];
        __Vtemp_6[3U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[3U];
        __Vtemp_6[4U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[4U];
        __Vtemp_6[5U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[5U];
        __Vtemp_6[6U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[6U];
        __Vtemp_6[7U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[7U];
        __Vtemp_6[8U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[8U];
        __Vtemp_6[9U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[9U];
        __Vtemp_6[10U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[10U];
        __Vtemp_6[11U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[11U];
        __Vtemp_6[12U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[12U];
        __Vtemp_6[13U] = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop[13U];
    } else if ((0x0345U >= (0x000003ffU & ((IData)(0x000001a3U) 
                                           * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_bank))))) {
        __VExpandSel_WordIdx_1 = (0x0000001fU & (((IData)(0x000001a3U) 
                                                  * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_bank)) 
                                                 >> 5U));
        __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x000001a3U) 
                                                 * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_bank)));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_6[0U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(1U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[__VExpandSel_WordIdx_1] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[1U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(2U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(1U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[2U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(3U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(2U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[3U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(4U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(3U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[4U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(5U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(4U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[5U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(6U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(5U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[6U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(7U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(6U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[7U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(8U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(7U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[8U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(9U) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(8U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[9U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                           .__PVT__uops[((IData)(0x0000000aU) 
                                         + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(9U) 
                                          + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_6[10U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(0x0000000bU) 
                                          + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                             .__PVT__uops[((IData)(0x0000000aU) 
                                           + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_6[11U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(0x0000000cU) 
                                          + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                             .__PVT__uops[((IData)(0x0000000bU) 
                                           + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_6[12U] = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                            .__PVT__uops[((IData)(0x0000000dU) 
                                          + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                             .__PVT__uops[((IData)(0x0000000cU) 
                                           + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_6[13U] = (((((0x0000000dU <= __VExpandSel_WordIdx_1)
                              ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                             .__PVT__uops[((IData)(0x0000000eU) 
                                           + __VExpandSel_WordIdx_1)]) 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                             .__PVT__uops[((IData)(0x0000000dU) 
                                           + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
    } else {
        VL_ASSIGN_W(419, __Vtemp_6, Vcore_top_contract_test_top__ConstPool__CONST_h2f12751c_0);
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[0U] 
        = __Vtemp_6[0U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[1U] 
        = __Vtemp_6[1U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[2U] 
        = __Vtemp_6[2U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[3U] 
        = __Vtemp_6[3U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[4U] 
        = __Vtemp_6[4U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[5U] 
        = __Vtemp_6[5U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[6U] 
        = __Vtemp_6[6U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
        = __Vtemp_6[7U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[8U] 
        = __Vtemp_6[8U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[9U] 
        = __Vtemp_6[9U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[10U] 
        = __Vtemp_6[10U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
        = __Vtemp_6[11U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
        = __Vtemp_6[12U];
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
        = (7U & __Vtemp_6[13U]);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__commit_match 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_q) 
           & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_valid_w) 
              & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_commit_rob_idx_w) 
                 == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_rob_idx_q))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_tail;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot 
        = ((0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot)) 
           | (0x0000000fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops[4U] 
                             >> 0x00000014U)));
    if (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops[2U] 
          >> 1U) & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                       .__PVT__valids & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                         [(((IData)(0x0000020fU) 
                                            + (0x00003fffU 
                                               & ((IData)(0x00000210U) 
                                                  * 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))) 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0000020fU) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * 
                                                      (0x0000000fU 
                                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot)))))))) 
                      & ((0x0000003fU & (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000094U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x00000210U) 
                                                         * 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot)))))))
                                           ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                                   [
                                                   (((IData)(0x00000099U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x00000210U) 
                                                         * 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000094U) 
                                                        + 
                                                        (0x00003fffU 
                                                         & ((IData)(0x00000210U) 
                                                            * 
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))))))) 
                                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                            [(((IData)(0x00000094U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * 
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000094U) 
                                                   + 
                                                   (0x00003fffU 
                                                    & ((IData)(0x00000210U) 
                                                       * 
                                                       (0x0000000fU 
                                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))))))) 
                         == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops[4U] 
                                            >> 0x00000014U)))) 
                     & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                           >> (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))) 
                    & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                          [(((IData)(0x000001a6U) + 
                             (0x00003fffU & ((IData)(0x00000210U) 
                                             * (0x0000000fU 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))) 
                            >> 5U)] >> (0x0000001fU 
                                        & ((IData)(0x000001a6U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
                                                 * 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot))))))))))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting) 
               | (0x0000ffffU & ((IData)(1U) << (0x0000000fU 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot 
            = ((0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot)) 
               | (0x0000000fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected 
            = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected) 
               | (0x0000ffffU & ((IData)(1U) << (0x0000000fU 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot)))));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor 
            = (0x0000000fU & ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot 
        = ((0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot)) 
           | (0x000000f0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops[17U] 
                             >> 0x00000013U)));
    if ((((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
               .__PVT__valids >> 1U) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops[15U] 
                                        >> 4U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                                   [
                                                   (((IData)(0x0000020fU) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x00000210U) 
                                                         * 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                             >> 4U))))) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(0x0000020fU) 
                                                       + 
                                                       (0x00003fffU 
                                                        & ((IData)(0x00000210U) 
                                                           * 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                               >> 4U)))))))) 
            & ((0x0000003fU & (((0U == (0x0000001fU 
                                        & ((IData)(0x00000094U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
                                                 * 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                     >> 4U)))))))
                                 ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                         [(((IData)(0x00000099U) 
                                            + (0x00003fffU 
                                               & ((IData)(0x00000210U) 
                                                  * 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                      >> 4U))))) 
                                           >> 5U)] 
                                         << ((IData)(0x00000020U) 
                                             - (0x0000001fU 
                                                & ((IData)(0x00000094U) 
                                                   + 
                                                   (0x00003fffU 
                                                    & ((IData)(0x00000210U) 
                                                       * 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                           >> 4U))))))))) 
                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                  [(((IData)(0x00000094U) 
                                     + (0x00003fffU 
                                        & ((IData)(0x00000210U) 
                                           * (0x0000000fU 
                                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                 >> 4U))))) 
                                    >> 5U)] >> (0x0000001fU 
                                                & ((IData)(0x00000094U) 
                                                   + 
                                                   (0x00003fffU 
                                                    & ((IData)(0x00000210U) 
                                                       * 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                           >> 4U))))))))) 
               == (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops[17U] 
                                  >> 0x00000017U)))) 
           & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                 >> (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                    >> 4U))))) & (~ 
                                                  (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                                   [
                                                   (((IData)(0x000001a6U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x00000210U) 
                                                         * 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                             >> 4U))))) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(0x000001a6U) 
                                                       + 
                                                       (0x00003fffU 
                                                        & ((IData)(0x00000210U) 
                                                           * 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                               >> 4U))))))))) 
         & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected) 
               >> (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                  >> 4U)))))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes 
            = ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting 
            = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting) 
               | (0x0000ffffU & ((IData)(1U) << (0x0000000fU 
                                                 & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                    >> 4U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot 
            = ((0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot)) 
               | (0x000000f0U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor 
                                 << 4U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected 
            = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__selected) 
               | (0x0000ffffU & ((IData)(1U) << (0x0000000fU 
                                                 & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot) 
                                                    >> 4U)))));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor 
            = (0x0000000fU & ((IData)(1U) + core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_push_count 
        = (3U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__pushes);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_tail_next 
        = (0x0000000fU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk1__DOT__tail_cursor);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__commit_match 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_valid_w) 
           & ((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__state)) 
              & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_commit_rob_idx_w) 
                 == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rob_idx_q))));
    __VdfgRegularize_h6e95ff9d_0_169 = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                         .__PVT__valids 
                                         >> 1U) & (
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[14U] 
                                                        >> 0x00000012U))) 
                                                   & (2U 
                                                      != 
                                                      (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[13U] 
                                                       >> 0x0000001eU))));
    __VdfgRegularize_h6e95ff9d_0_363 = (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_commit
                                        .__PVT__valids 
                                        & ((0U != (0x0000003fU 
                                                   & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[1U] 
                                                      >> 0x0000000fU))) 
                                           & (2U != 
                                              (3U & 
                                               (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[0U] 
                                                >> 0x0000001bU)))));
    if (vlSelfRef.exception_valid) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[0U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[1U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[2U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[2U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[3U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[3U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[4U];
    } else if ((0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask))) {
        __Vtemp_8[0U] = ((0x00001000U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U])
                          ? 3U : ((0U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
                                  << 1U));
        __Vtemp_8[1U] = 0U;
        __Vtemp_8[2U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[2U] 
            = (((IData)((((QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                            << 0x0000001dU) 
                                           | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                              >> 3U)))) 
                          << 6U) | (QData)((IData)(
                                                   (0x0000003eU 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                       << 1U)))))) 
                << 9U) | ((0x000001f8U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[6U] 
                                          >> 0x00000017U)) 
                          | __Vtemp_8[2U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[3U] 
            = (((IData)((((QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                            << 0x0000001dU) 
                                           | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                              >> 3U)))) 
                          << 6U) | (QData)((IData)(
                                                   (0x0000003eU 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                       << 1U)))))) 
                >> 0x00000017U) | (((IData)((0x0000000100000000ULL 
                                             | (QData)((IData)(
                                                               ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                                 << 0x0000001eU) 
                                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                                   >> 2U)))))) 
                                    << 0x0000000fU) 
                                   | ((IData)(((((QData)((IData)(
                                                                 ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                                                   << 0x0000001dU) 
                                                                  | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                                     >> 3U)))) 
                                                 << 6U) 
                                                | (QData)((IData)(
                                                                  (0x0000003eU 
                                                                   & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                                      << 1U))))) 
                                               >> 0x00000020U)) 
                                      << 9U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
            = (((0x000001ffU & ((IData)((0x0000000100000000ULL 
                                         | (QData)((IData)(
                                                           ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                             << 0x0000001eU) 
                                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                               >> 2U)))))) 
                                >> 0x00000011U)) | 
                ((IData)(((((QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                              << 0x0000001dU) 
                                             | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                >> 3U)))) 
                            << 6U) | (QData)((IData)(
                                                     (0x0000003eU 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                         << 1U))))) 
                          >> 0x00000020U)) >> 0x00000017U)) 
               | ((0x00007e00U & ((IData)((0x0000000100000000ULL 
                                           | (QData)((IData)(
                                                             ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                               << 0x0000001eU) 
                                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                                 >> 2U)))))) 
                                  >> 0x00000011U)) 
                  | ((IData)(((0x0000000100000000ULL 
                               | (QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                   << 0x0000001eU) 
                                                  | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                     >> 2U))))) 
                              >> 0x00000020U)) << 0x0000000fU)));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[0U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[1U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[2U] 
            = (((IData)((((QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                            << 0x0000001dU) 
                                           | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                              >> 3U)))) 
                          << 6U) | (QData)((IData)(
                                                   (0x0000003eU 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                       << 1U)))))) 
                << 9U) | (0x000001f8U & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[6U] 
                                         >> 0x00000017U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[3U] 
            = (((IData)((((QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                            << 0x0000001dU) 
                                           | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                              >> 3U)))) 
                          << 6U) | (QData)((IData)(
                                                   (0x0000003eU 
                                                    & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                       << 1U)))))) 
                >> 0x00000017U) | (((IData)((((QData)((IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
                                                               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                                 << 0x0000001eU) 
                                                                | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                                   >> 2U)))))) 
                                    << 0x0000000fU) 
                                   | ((IData)(((((QData)((IData)(
                                                                 ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                                                   << 0x0000001dU) 
                                                                  | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                                     >> 3U)))) 
                                                 << 6U) 
                                                | (QData)((IData)(
                                                                  (0x0000003eU 
                                                                   & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                                      << 1U))))) 
                                               >> 0x00000020U)) 
                                      << 9U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
            = (((0x000001ffU & ((IData)((((QData)((IData)(
                                                          ((0U 
                                                            != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
                                                           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                             << 0x0000001eU) 
                                                            | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                               >> 2U)))))) 
                                >> 0x00000011U)) | 
                ((IData)(((((QData)((IData)(((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[13U] 
                                              << 0x0000001dU) 
                                             | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                >> 3U)))) 
                            << 6U) | (QData)((IData)(
                                                     (0x0000003eU 
                                                      & (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[7U] 
                                                         << 1U))))) 
                          >> 0x00000020U)) >> 0x00000017U)) 
               | ((0x00007e00U & ((IData)((((QData)((IData)(
                                                            ((0U 
                                                              != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
                                                             | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw)))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                               << 0x0000001eU) 
                                                              | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                                 >> 2U)))))) 
                                  >> 0x00000011U)) 
                  | ((IData)(((((QData)((IData)(((0U 
                                                  != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask)) 
                                                 | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[12U] 
                                                                    << 0x0000001eU) 
                                                                   | (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_uop[11U] 
                                                                      >> 2U))))) 
                              >> 0x00000020U)) << 0x0000000fU)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_inv_valid_w 
        = ((5U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__commit_match));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67 = ((2U 
                                                  == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q)) 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__commit_match));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68 = ((1U 
                                                  == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q)) 
                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__commit_match));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_valid_w 
        = (((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q)) 
            | (4U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__commit_match));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_en 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_169) 
            << 1U) | (IData)(__VdfgRegularize_h6e95ff9d_0_363));
    __VdfgRegularize_h6e95ff9d_0_790 = (0x0000003fU 
                                        & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[4U] 
                                            >> 0x0000000cU) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_363)))));
    __VdfgRegularize_h6e95ff9d_0_791 = (0x0000001fU 
                                        & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[1U] 
                                            >> 0x0000000fU) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_363)))));
    __VdfgRegularize_h6e95ff9d_0_794 = (0x0000003fU 
                                        & ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[3U] 
                                            >> 0x0000000cU) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_363)))));
    __VdfgRegularize_h6e95ff9d_0_795 = ((0U != (0x0000003fU 
                                                & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[3U] 
                                                   >> 0x0000000cU))) 
                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_363))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_redirect_pc 
        = ((0x00008000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U])
            ? ((1U == (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[0U]))
                ? (((IData)(vlSelfRef.exception_valid) 
                    & (0x000001f8U == (0x000001f8U 
                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w[1U])))
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbrentry_q
                    : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__eentry_q)
                : ((3U == (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[0U]))
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__era_q
                    : ((IData)(4U) + ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                                       << 0x00000011U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[3U] 
                                         >> 0x0000000fU)))))
            : (((0U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                              >> 2U))) ? ((IData)(4U) 
                                          + ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[14U] 
                                              << 0x00000015U) 
                                             | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[13U] 
                                                >> 0x0000000bU)))
                 : ((1U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                  >> 2U))) ? (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[0U] 
                                              + ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[14U] 
                                                  << 0x00000015U) 
                                                 | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[13U] 
                                                    >> 0x0000000bU)))
                     : ((2U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                      >> 2U))) ? ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                                   << 0x0000001fU) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[1U] 
                                                     >> 1U))
                         : ((IData)(4U) + ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[14U] 
                                            << 0x00000015U) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[13U] 
                                              >> 0x0000000bU)))))) 
               & (- (IData)((1U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                   >> 8U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102 = (1U 
                                                  & ((~ 
                                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                                                       >> 0x0000000fU)) 
                                                     & (~ 
                                                        (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                                         >> 8U))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable 
        = ((0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state)) 
           & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                  >> 0x0000000fU)) & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q)) 
                                      & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                             >> 8U)) 
                                         & ((~ ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_486) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_487)) 
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
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241)) 
                                                                      + 
                                                                      (1U 
                                                                       & (- (IData)(
                                                                                ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240))))))) 
                                                                  > 
                                                                  ((0U 
                                                                    != vlSelfRef.__VdfgRegularize_h6e95ff9d_0_377)
                                                                    ? 2U
                                                                    : 
                                                                   (1U 
                                                                    & (- (IData)(
                                                                                (0U 
                                                                                != vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108))))))))))) 
                                               & ((~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q))) 
                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unique_dispatch_ready))))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush 
        = (IData)(((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                    >> 0x0000000fU) | (2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid 
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
                  >> 0x0000000fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U] 
                                     >> 8U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_csr_update_mask_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
            ? 1U : (0x0000001fU & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_e_w 
        = (((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbidx_q 
                >> 0x0000001fU)) | (4U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q))) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_valid_w));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_idx_w 
        = (0x0000001fU & (((4U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_cmd_q))
                            ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__fill_idx_q)
                            : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_tlbidx_q) 
                          & (- (IData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_wr_valid_w)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_169)
                             ? ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[17U] 
                                 << 0x00000011U) | 
                                (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[17U] 
                                 >> 0x0000000fU)) : 
                            ((IData)(__VdfgRegularize_h6e95ff9d_0_790) 
                             >> 6U)) << 6U)) | (0x0000003fU 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_790)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_lreg 
        = ((0x000003e0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_169)
                             ? ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[14U] 
                                 << 0x0000000eU) | 
                                (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[14U] 
                                 >> 0x00000012U)) : 
                            ((IData)(__VdfgRegularize_h6e95ff9d_0_791) 
                             >> 5U)) << 5U)) | (0x0000001fU 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_791)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_169)
                             ? ((core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 << 0x00000011U) | 
                                (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 >> 0x0000000fU)) : 
                            ((IData)(__VdfgRegularize_h6e95ff9d_0_794) 
                             >> 6U)) << 6U)) | (0x0000003fU 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_794)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en 
        = ((2U & (((IData)(__VdfgRegularize_h6e95ff9d_0_169)
                    ? (0U != (0x0000003fU & (core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rename__commit_uops[16U] 
                                             >> 0x0000000fU)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_795) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_795)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__state)) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__immu_inst__DOT__trans_use_tlb) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__xlate_resp_ready 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102));
    __VdfgRegularize_h6e95ff9d_0_161 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227) 
                                        & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dtlb_req_valid 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
              & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__trans_use_tlb)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__agen_match 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__agen_valid) 
           & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U] 
               >> 2U) & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                          [(((IData)(0x000001edU) + 
                             (0x00001fffU & ((IData)(0x000001eeU) 
                                             * (0x0000000fU 
                                                & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                   >> 0x0000001aU))))) 
                            >> 5U)] >> (0x0000001fU 
                                        & ((IData)(0x000001edU) 
                                           + (0x00001fffU 
                                              & ((IData)(0x000001eeU) 
                                                 * 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                     >> 0x0000001aU))))))) 
                         & ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                 [(((IData)(0x000001c6U) 
                                    + (0x00001fffU 
                                       & ((IData)(0x000001eeU) 
                                          * (0x0000000fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                >> 0x0000001aU))))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x000001c6U) 
                                                  + 
                                                  (0x00001fffU 
                                                   & ((IData)(0x000001eeU) 
                                                      * 
                                                      (0x0000000fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000001aU))))))) 
                                | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed) 
                                    >> (0x0000000fU 
                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                           >> 0x0000001aU))) 
                                   | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)))) 
                            & ((0x0000003fU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0000009aU) 
                                                     + 
                                                     (0x00001fffU 
                                                      & ((IData)(0x000001eeU) 
                                                         * 
                                                         (0x0000000fU 
                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                             >> 0x0000001aU)))))))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                 [(
                                                   ((IData)(0x0000009fU) 
                                                    + 
                                                    (0x00001fffU 
                                                     & ((IData)(0x000001eeU) 
                                                        * 
                                                        (0x0000000fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                            >> 0x0000001aU))))) 
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
                                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                              >> 0x0000001aU))))))))) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                  [
                                                  (((IData)(0x0000009aU) 
                                                    + 
                                                    (0x00001fffU 
                                                     & ((IData)(0x000001eeU) 
                                                        * 
                                                        (0x0000000fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                            >> 0x0000001aU))))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0000009aU) 
                                                      + 
                                                      (0x00001fffU 
                                                       & ((IData)(0x000001eeU) 
                                                          * 
                                                          (0x0000000fU 
                                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                              >> 0x0000001aU))))))))) 
                               == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                   >> 0x0000001aU))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (1U & ((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[16U] 
                         >> 0x0000000fU) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U] 
                                            >> 0x0000000bU)) 
                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[14U] 
                          >> 7U)) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed))) 
                     & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[13U] 
                           >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[29U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[30U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[32U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 1U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 1U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (4U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[49U] 
                          >> 0x0000000fU) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U] 
                                             >> 0x0000000bU)) 
                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[47U] 
                           >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                         >> 2U))) & 
                      (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[46U] 
                          >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                    << 2U)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[62U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[63U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[65U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 3U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xffefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (0x00000010U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[82U] 
                                   >> 0x0000000fU) 
                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[81U] 
                                     >> 0x0000000bU)) 
                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[80U] 
                                    >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                                  >> 4U))) 
                               & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[79U] 
                                     >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                             << 4U)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xffdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[95U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[96U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[98U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 5U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 5U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xffbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (0x00000040U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[115U] 
                                   >> 0x0000000fU) 
                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[114U] 
                                     >> 0x0000000bU)) 
                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[113U] 
                                    >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                                  >> 6U))) 
                               & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[112U] 
                                     >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                             << 6U)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xff7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[128U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[129U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[131U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 7U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 7U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfeffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (0x00000100U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[148U] 
                                   >> 0x0000000fU) 
                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[147U] 
                                     >> 0x0000000bU)) 
                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[146U] 
                                    >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                                  >> 8U))) 
                               & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[145U] 
                                     >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                             << 8U)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfdffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[161U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[162U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[163U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[164U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 9U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 9U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xfbffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (0x00000400U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[181U] 
                                   >> 0x0000000fU) 
                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[180U] 
                                     >> 0x0000000bU)) 
                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[179U] 
                                    >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                                  >> 0x0aU))) 
                               & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[178U] 
                                     >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                             << 0x0000000aU)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xf7ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[194U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[195U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[196U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[197U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 0x0000000bU))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 0x0000000bU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xefffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (0x00001000U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[214U] 
                                   >> 0x0000000fU) 
                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[213U] 
                                     >> 0x0000000bU)) 
                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[212U] 
                                    >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                                  >> 0x0cU))) 
                               & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[211U] 
                                     >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                             << 0x0000000cU)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xdfffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[227U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[228U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[229U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[230U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 0x0000000dU))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 0x0000000dU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0xbfffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (0x00004000U & (((((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[247U] 
                                   >> 0x0000000fU) 
                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[246U] 
                                     >> 0x0000000bU)) 
                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[245U] 
                                    >> 7U)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                                  >> 0x0eU))) 
                               & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[244U] 
                                     >> 3U))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
                             << 0x0000000eU)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
        = ((0x7fffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available)) 
           | (((((((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[260U] 
                       >> 0x00000013U)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[261U] 
                                           >> 0x00000017U)) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[262U] 
                     >> 0x0000001bU)) & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[263U] 
                                         >> 0x0000001fU)) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> 0x0000000fU))) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush))) 
              << 0x0000000fU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 0U;
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[5U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 1U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[21U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (1U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 2U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[38U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (2U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 3U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[54U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (3U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 4U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[71U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (4U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xffefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 5U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[87U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (5U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xffdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 6U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[104U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (6U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xffbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 7U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[120U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (7U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xff7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 8U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[137U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (8U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfeffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 9U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[153U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (9U | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfdffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0aU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[170U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0000000aU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfbffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0bU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[186U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0000000bU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xf7ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0cU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[203U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0000000cU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xefffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0dU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[219U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0000000dU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xdfffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0eU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[236U]));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0000000eU | (0xf0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xbfffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if (((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
         & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
            >> 0x0000000fU))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (1U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[252U] 
                                 >> 0x00000010U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0000000fU | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0x7fffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 0U;
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[5U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 1U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[21U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000010U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 2U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[38U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000020U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 3U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[54U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000030U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 4U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[71U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000040U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xffefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 5U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[87U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000050U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xffdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 6U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[104U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000060U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xffbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 7U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[120U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000070U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xff7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 8U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[137U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000080U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfeffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 9U)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[153U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x00000090U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfdffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0aU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[170U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000a0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xfbffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0bU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[186U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000b0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xf7ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0cU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[203U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000c0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xefffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0dU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[219U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000d0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xdfffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if ((1U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
               & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
                  >> 0x0eU)))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[236U] 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000e0U | (0x0fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0xbfffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    if (((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found)) 
         & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available) 
            >> 0x0000000fU))) {
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__unnamedblk22__DOT__unnamedblk23__DOT__found = 1U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid 
            = (2U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx 
            = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx)) 
               | (0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[252U] 
                                 >> 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot 
            = (0x000000f0U | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available 
            = (0x7fffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk20__DOT__available));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)));
    __VdfgRegularize_h6e95ff9d_0_716 = (1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
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
           & ((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__state)) 
              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_inst__DOT__check_resp_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_br_killed) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_issue_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
           & (0U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__state)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__branch_redirect_valid 
        = ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_flush_w[4U] 
               >> 0x0000000fU)) & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid));
    vlSelfRef.imem_req_valid = (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q)) 
                                 | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__xlate_resp_ready)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_498 = (1U 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready) 
                                                     >> 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_161) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q)) 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117) 
                                                            & ((4U 
                                                                == 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                               & ((1U 
                                                                   != 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                                  & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499 = (1U 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready) 
                                                     >> 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_161) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q)) 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117) 
                                                            & ((1U 
                                                                == 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                                               & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_req_ready 
        = ((1U != (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__agen_match 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385) 
           & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U] 
               >> 1U) & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__agen_valid) 
                         & ((~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x0000020eU) 
                                    + (0x00003fffU 
                                       & ((IData)(0x00000210U) 
                                          * (0x0000000fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                >> 0x00000014U))))) 
                                   >> 5U)] >> (0x0000001fU 
                                               & ((IData)(0x0000020eU) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * 
                                                      (0x0000000fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                          >> 0x00000014U))))))) 
                                | (IData)(__VdfgRegularize_h6e95ff9d_0_716))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_386)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__dgen_match 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U] 
            >> 1U) & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_708) 
                      & ((~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__xcpt[14U] 
                             >> 0x0000000aU)) & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385) 
                                                 & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                                     >> 0x00000015U) 
                                                    & ((~ 
                                                        ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                                          [
                                                          (((IData)(0x000001c7U) 
                                                            + 
                                                            (0x00003fffU 
                                                             & ((IData)(0x00000210U) 
                                                                * 
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                                    >> 0x00000014U))))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x000001c7U) 
                                                              + 
                                                              (0x00003fffU 
                                                               & ((IData)(0x00000210U) 
                                                                  * 
                                                                  (0x0000000fU 
                                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                                                      >> 0x00000014U))))))) 
                                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_716))) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_386)))))));
    __VdfgRegularize_h6e95ff9d_0_381 = (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_req_valid) 
                                         << 1U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_req_valid));
    __VdfgRegularize_h6e95ff9d_0_382 = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid) 
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
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[14U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[2U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[14U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[16U] 
              >> 0x0000000fU)) & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed))) 
         & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[15U])) {
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
                          >> 0x00000010U));
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
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[30U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[18U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[30U] 
                      >> 0x0000001bU));
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
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 1U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[31U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[38U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[46U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[47U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[35U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[47U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[49U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 2U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[48U])) {
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
                          >> 0x00000010U));
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
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[63U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[51U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[63U] 
                      >> 0x0000001bU));
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
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 3U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[64U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[71U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[79U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[81U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[80U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[68U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[81U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[80U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[82U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 4U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[81U])) {
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
                          >> 0x00000010U));
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
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[96U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[84U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[96U] 
                      >> 0x0000001bU));
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
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 5U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[97U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[104U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[112U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[114U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[113U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[101U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[114U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[113U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[115U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 6U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[114U])) {
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
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[120U] 
                          >> 0x00000010U));
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[128U] 
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[129U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[117U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[129U] 
                      >> 0x0000001bU));
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
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 7U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[130U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[137U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[145U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[147U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[146U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[134U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[147U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[146U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[148U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 8U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[147U])) {
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
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[153U] 
                          >> 0x00000010U));
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[161U] 
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[163U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[162U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[150U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[163U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[162U] 
                      >> 0x0000001bU));
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
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 9U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[163U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[170U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[178U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[180U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[179U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[167U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[180U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[179U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[181U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0aU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[180U])) {
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
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[186U] 
                          >> 0x00000010U));
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[194U] 
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[196U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[195U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[183U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[196U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[195U] 
                      >> 0x0000001bU));
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[197U] 
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0bU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[196U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[203U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[211U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[213U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[212U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[200U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[213U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[212U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[214U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0cU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[213U])) {
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
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[219U] 
                          >> 0x00000010U));
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[227U] 
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[229U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[228U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[216U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[229U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[228U] 
                      >> 0x0000001bU));
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[230U] 
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0dU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[229U])) {
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
        = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[236U]);
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[244U] 
                  >> 6U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[246U] 
                            << 0x00000013U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[245U] 
                                               >> 0x0000000dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[233U] 
                 >> 4U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[246U] 
            << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[245U] 
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[247U] 
              >> 0x0000000fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0eU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x00000800U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[246U])) {
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
        = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[252U] 
                          >> 0x00000010U));
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
        = (1U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[260U] 
                  >> 0x00000016U) | (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT____VlemCall_0__rob_is_older)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__same_word 
        = ((0x3fffffffU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[262U] 
                            << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[261U] 
                                      >> 0x0000001dU))) 
           == (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr 
               >> 2U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__size 
        = (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[249U] 
                 >> 0x00000014U));
    __Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__gen_byte_mask__26__addr 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[262U] 
            << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[261U] 
                      >> 0x0000001bU));
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
           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[263U] 
              >> 0x0000001fU)) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                                     >> 0x0fU))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__unnamedblk16__DOT__unnamedblk17__DOT__store_is_older))) {
        if ((0x08000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries[262U])) {
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
                  [(((IData)(0x000001c7U) + (0x00003fffU 
                                             & ((IData)(0x00000210U) 
                                                * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                    >> 5U)] >> (0x0000001fU & ((IData)(0x000001c7U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))) 
                 & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_store_mask) 
                     & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask)) 
                    == (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ld_query_mask)))) {
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__size 
                    = (3U & (((0U == (0x0000001fU & 
                                      ((IData)(0x00000044U) 
                                       + (0x00003fffU 
                                          & ((IData)(0x00000210U) 
                                             * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))
                               ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                       [(((IData)(0x00000045U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x00000210U) 
                                                * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                         >> 5U)] << 
                                       ((IData)(0x00000020U) 
                                        - (0x0000001fU 
                                           & ((IData)(0x00000044U) 
                                              + (0x00003fffU 
                                                 & ((IData)(0x00000210U) 
                                                    * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))))) 
                             | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                [(((IData)(0x00000044U) 
                                   + (0x00003fffU & 
                                      ((IData)(0x00000210U) 
                                       * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                  >> 5U)] >> (0x0000001fU 
                                              & ((IData)(0x00000044U) 
                                                 + 
                                                 (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))));
                vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_valid = 1U;
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__addr 
                    = (((0U == (0x0000001fU & ((IData)(0x000001cbU) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x000001eaU) 
                                    + (0x00003fffU 
                                       & ((IData)(0x00000210U) 
                                          * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x000001cbU) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x00000210U) 
                                                         * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                          [(((IData)(0x000001cbU) + 
                             (0x00003fffU & ((IData)(0x00000210U) 
                                             * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                            >> 5U)] >> (0x0000001fU 
                                        & ((IData)(0x000001cbU) 
                                           + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
                                                 * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))));
                vlSelfRef.__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__27__data 
                    = (((0U == (0x0000001fU & ((IData)(0x000001a7U) 
                                               + (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot))))))
                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                 [(((IData)(0x000001c6U) 
                                    + (0x00003fffU 
                                       & ((IData)(0x00000210U) 
                                          * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                                   >> 5U)] << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x000001a7U) 
                                                     + 
                                                     (0x00003fffU 
                                                      & ((IData)(0x00000210U) 
                                                         * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))))))) 
                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                          [(((IData)(0x000001a7U) + 
                             (0x00003fffU & ((IData)(0x00000210U) 
                                             * (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__query_overlap_slot)))) 
                            >> 5U)] >> (0x0000001fU 
                                        & ((IData)(0x000001a7U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
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
    core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant 
        = (1U & (~ ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready) 
                    & ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready) 
                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_issue_ready)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_is_store 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_arb_locked)
            ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_locked_is_store)
            : ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_381)) 
               | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_prefer_store) 
                  & (3U == (IData)(__VdfgRegularize_h6e95ff9d_0_381)))));
    vlSelfRef.dmem_req_is_store = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__arb_locked)
                                    ? (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__locked_is_store)
                                    : ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_382)) 
                                       | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__prefer_store) 
                                          & (3U == (IData)(__VdfgRegularize_h6e95ff9d_0_382)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot 
        = (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match = 0U;
    VL_ASSIGN_W(419, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop, Vcore_top_contract_test_top__ConstPool__CONST_h2f12751c_0);
    if (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_access)) 
         & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match 
            = (((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                   [(((IData)(0x0000020fU) + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                     >> 5U)] >> (0x0000001fU & ((IData)(0x0000020fU) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [(((IData)(0x0000020dU) + (0x00003fffU 
                                                & ((IData)(0x00000210U) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                       >> 5U)] >> (0x0000001fU & ((IData)(0x0000020dU) 
                                                  + 
                                                  (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))) 
                 & ((0x0000003fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x00000094U) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))
                                      ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                              [(((IData)(0x00000099U) 
                                                 + 
                                                 (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                                >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000094U) 
                                                      + 
                                                      (0x00003fffU 
                                                       & ((IData)(0x00000210U) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                       [(((IData)(0x00000094U) 
                                          + (0x00003fffU 
                                             & ((IData)(0x00000210U) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                         >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x00000094U) 
                                           + (0x00003fffU 
                                              & ((IData)(0x00000210U) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                    == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag))) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed) 
                      >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) {
            __VExpandSel_WordIdx_2 = (0x000001ffU & 
                                      (((IData)(0x00000210U) 
                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)) 
                                       >> 5U));
            __VExpandSel_LoShift_2 = (0x0000001fU & 
                                      ((IData)(0x00000210U) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)));
            __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
            if (__VExpandSel_Aligned_2) {
                __VExpandSel_HiShift_2 = 0U;
                __VExpandSel_HiMask_2 = 0U;
            } else {
                __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                          - __VExpandSel_LoShift_2);
                __VExpandSel_HiMask_2 = 0xffffffffU;
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[0U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [__VExpandSel_WordIdx_2] >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[1U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[2U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[3U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[4U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[5U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[6U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(8U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(9U) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(8U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[9U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000aU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(9U) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[10U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000bU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000aU) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[11U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000cU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000bU) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[12U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                     [((IData)(0x0000000dU) + __VExpandSel_WordIdx_2)] 
                     << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                      [((IData)(0x0000000cU) + __VExpandSel_WordIdx_2)] 
                      >> __VExpandSel_LoShift_2));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[13U] 
                = (7U & (((((0x000000faU <= __VExpandSel_WordIdx_2)
                             ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                            [((IData)(0x0000000eU) 
                              + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                            [((IData)(0x0000000dU) 
                              + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2)));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U] 
                = ((0x7fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U]) 
                   | (((((0U == (0x0000001fU & ((IData)(0x000000ffU) 
                                                + (0x00003fffU 
                                                   & ((IData)(0x00000210U) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))
                          ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                  [(((IData)(0x00000104U) 
                                     + (0x00003fffU 
                                        & ((IData)(0x00000210U) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x000000ffU) 
                                                      + 
                                                      (0x00003fffU 
                                                       & ((IData)(0x00000210U) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                           [(((IData)(0x000000ffU) 
                              + (0x00003fffU & ((IData)(0x00000210U) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x000000ffU) 
                                            + (0x00003fffU 
                                               & ((IData)(0x00000210U) 
                                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))) 
                       & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                              << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                 >> 0x00000012U)))) 
                      << 0x0000001fU));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U] 
                = ((0xffffffe0U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U]) 
                   | (0x0000001fU & (((((0U == (0x0000001fU 
                                                & ((IData)(0x000000ffU) 
                                                   + 
                                                   (0x00003fffU 
                                                    & ((IData)(0x00000210U) 
                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))
                                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                                 [(
                                                   ((IData)(0x00000104U) 
                                                    + 
                                                    (0x00003fffU 
                                                     & ((IData)(0x00000210U) 
                                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x000000ffU) 
                                                      + 
                                                      (0x00003fffU 
                                                       & ((IData)(0x00000210U) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))))))) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries
                                          [(((IData)(0x000000ffU) 
                                             + (0x00003fffU 
                                                & ((IData)(0x00000210U) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot)))) 
                                            >> 5U)] 
                                          >> (0x0000001fU 
                                              & ((IData)(0x000000ffU) 
                                                 + 
                                                 (0x00003fffU 
                                                  & ((IData)(0x00000210U) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__xlate_resp_slot))))))) 
                                      & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                               >> 0x00000012U)))) 
                                     >> 1U)));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot 
        = (0x0000000fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match = 0U;
    VL_ASSIGN_W(419, core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop, Vcore_top_contract_test_top__ConstPool__CONST_h2f12751c_0);
    if (((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_access)) 
         & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match 
            = (((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                   [(((IData)(0x000001edU) + (0x00001fffU 
                                              & ((IData)(0x000001eeU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                     >> 5U)] >> (0x0000001fU & ((IData)(0x000001edU) 
                                                + (0x00001fffU 
                                                   & ((IData)(0x000001eeU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))) 
                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [(((IData)(0x000001c8U) + (0x00001fffU 
                                                & ((IData)(0x000001eeU) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                       >> 5U)] >> (0x0000001fU & ((IData)(0x000001c8U) 
                                                  + 
                                                  (0x00001fffU 
                                                   & ((IData)(0x000001eeU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))) 
                 & ((0x0000003fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x0000009aU) 
                                                + (0x00001fffU 
                                                   & ((IData)(0x000001eeU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))
                                      ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                              [(((IData)(0x0000009fU) 
                                                 + 
                                                 (0x00001fffU 
                                                  & ((IData)(0x000001eeU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                                >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0000009aU) 
                                                      + 
                                                      (0x00001fffU 
                                                       & ((IData)(0x000001eeU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                       [(((IData)(0x0000009aU) 
                                          + (0x00001fffU 
                                             & ((IData)(0x000001eeU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                         >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x0000009aU) 
                                           + (0x00001fffU 
                                              & ((IData)(0x000001eeU) 
                                                 * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                    == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_tag))) 
                & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed) 
                      >> (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)));
        if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match) {
            __VExpandSel_WordIdx_3 = (0x000000ffU & 
                                      (((IData)(0x000001eeU) 
                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)) 
                                       >> 5U));
            __VExpandSel_LoShift_3 = (0x0000001fU & 
                                      ((IData)(0x000001eeU) 
                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)));
            __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
            if (__VExpandSel_Aligned_3) {
                __VExpandSel_HiShift_3 = 0U;
                __VExpandSel_HiMask_3 = 0U;
            } else {
                __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                          - __VExpandSel_LoShift_3);
                __VExpandSel_HiMask_3 = 0xffffffffU;
            }
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[0U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [__VExpandSel_WordIdx_3] >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[1U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[2U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[3U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[4U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[5U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(6U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[6U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(7U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(6U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(8U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(7U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(9U) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(8U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[9U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000aU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(9U) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[10U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000bU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000aU) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[11U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000cU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000bU) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[12U] 
                = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                     [((IData)(0x0000000dU) + __VExpandSel_WordIdx_3)] 
                     << __VExpandSel_HiShift_3) & __VExpandSel_HiMask_3) 
                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                      [((IData)(0x0000000cU) + __VExpandSel_WordIdx_3)] 
                      >> __VExpandSel_LoShift_3));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[13U] 
                = (7U & (((((0x000000e9U <= __VExpandSel_WordIdx_3)
                             ? 0U : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                            [((IData)(0x0000000eU) 
                              + __VExpandSel_WordIdx_3)]) 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                            [((IData)(0x0000000dU) 
                              + __VExpandSel_WordIdx_3)] 
                            >> __VExpandSel_LoShift_3)));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U] 
                = ((0x7fffffffU & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U]) 
                   | (((((0U == (0x0000001fU & ((IData)(0x000000ffU) 
                                                + (0x00001fffU 
                                                   & ((IData)(0x000001eeU) 
                                                      * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))
                          ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                  [(((IData)(0x00000104U) 
                                     + (0x00001fffU 
                                        & ((IData)(0x000001eeU) 
                                           * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x000000ffU) 
                                                      + 
                                                      (0x00001fffU 
                                                       & ((IData)(0x000001eeU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                           [(((IData)(0x000000ffU) 
                              + (0x00001fffU & ((IData)(0x000001eeU) 
                                                * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x000000ffU) 
                                            + (0x00001fffU 
                                               & ((IData)(0x000001eeU) 
                                                  * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))) 
                       & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                              << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                 >> 0x00000012U)))) 
                      << 0x0000001fU));
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U] 
                = ((0xffffffe0U & core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U]) 
                   | (0x0000001fU & (((((0U == (0x0000001fU 
                                                & ((IData)(0x000000ffU) 
                                                   + 
                                                   (0x00001fffU 
                                                    & ((IData)(0x000001eeU) 
                                                       * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))
                                         ? 0U : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                                 [(
                                                   ((IData)(0x00000104U) 
                                                    + 
                                                    (0x00001fffU 
                                                     & ((IData)(0x000001eeU) 
                                                        * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x000000ffU) 
                                                      + 
                                                      (0x00001fffU 
                                                       & ((IData)(0x000001eeU) 
                                                          * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))))))) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries
                                          [(((IData)(0x000000ffU) 
                                             + (0x00001fffU 
                                                & ((IData)(0x000001eeU) 
                                                   * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot)))) 
                                            >> 5U)] 
                                          >> (0x0000001fU 
                                              & ((IData)(0x000000ffU) 
                                                 + 
                                                 (0x00001fffU 
                                                  & ((IData)(0x000001eeU) 
                                                     * (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__xlate_resp_slot))))))) 
                                      & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                               >> 0x00000012U)))) 
                                     >> 1U)));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__req_fire 
        = ((3U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_done 
        = (((2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state)) 
            & (2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_cnt))) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__resp_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed = 0U;
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__issue_agen = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__issue_dgen = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid = 0U;
    VL_ASSIGN_W(419, vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop, Vcore_top_contract_test_top__ConstPool__CONST_h2f12751c_0);
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffeU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | (0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U] 
                                      << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U] 
                                                >> 0x0000001fU)) 
                                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                        << 0x00000014U) 
                                       | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                          >> 0x0000000cU))))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffeU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
               & (~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed))) 
              & (0U == (0x00380000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[3U]))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffdU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                         >> 2U)) & 
                                     ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         >> 0x0000000cU))))) 
              << 1U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffdU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 1U))) & (0U 
                                                  == 
                                                  (0x01c00000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[16U])))) 
              << 1U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffbU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                       << 0x0000001bU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                         >> 5U)) & 
                                     ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         >> 0x0000000cU))))) 
              << 2U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffbU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 2U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x0e000000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[29U])))) 
              << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ff7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                         >> 8U)) & 
                                     ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         >> 0x0000000cU))))) 
              << 3U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ff7U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 3U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 3U))) & (0U 
                                                  == 
                                                  (0x70000000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[42U])))) 
              << 3U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fefU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                       << 0x00000015U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                         >> 0x0000000bU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 4U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fefU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | (0x00000010U & (((((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                                  >> 4U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 4U))) 
                                & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[56U] 
                                      >> 1U))) & (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[56U])) 
                              & (~ (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[55U] 
                                    >> 0x0000001fU))) 
                             << 4U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fdfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                       << 0x00000012U) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                         >> 0x0000000eU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 5U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fdfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 5U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 5U))) & (0U 
                                                  == 
                                                  (0x0000001cU 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[69U])))) 
              << 5U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fbfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                       << 0x0000000fU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                         >> 0x00000011U)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 6U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fbfU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 6U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 6U))) & (0U 
                                                  == 
                                                  (0x000000e0U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[82U])))) 
              << 6U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0f7fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                         >> 0x00000014U)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 7U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0f7fU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 7U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 7U))) & (0U 
                                                  == 
                                                  (0x00000700U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[95U])))) 
              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0effU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                                       << 9U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                                                 >> 0x00000017U)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 8U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0effU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 8U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 8U))) & (0U 
                                                  == 
                                                  (0x00003800U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[108U])))) 
              << 8U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0dffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                                       << 6U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                                                 >> 0x0000001aU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 9U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0dffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 9U) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 9U))) & (0U 
                                                  == 
                                                  (0x0001c000U 
                                                   & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[121U])))) 
              << 9U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0bffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[139U] 
                                       << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                                                 >> 0x0000001dU)) 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 0x0000000aU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0bffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 0x0000000aU) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 0x0000000aU))) 
                       & (0U == (0x000e0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[134U])))) 
              << 0x0000000aU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed 
        = ((0x07ffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[152U] 
                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x00000014U) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x0000000cU))))) 
              << 0x0000000bU));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready 
        = ((0x07ffU & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid) 
                         >> 0x0000000bU) & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 0x0000000bU))) 
                       & (0U == (0x00700000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[147U])))) 
              << 0x0000000bU));
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
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[13U]);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U] 
                     << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U] 
                               >> 0x0000001fU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[8U] 
                                    << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[7U] 
                                              >> 0x0000001fU)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ffeU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0ffeU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant))));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 1U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[14U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[13U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[15U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[14U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[16U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[15U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[17U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[16U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[18U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[17U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[19U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[18U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[20U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[19U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[20U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[22U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[23U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[22U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[24U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[23U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[25U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[24U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[26U] 
                << 0x0000001dU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[25U] 
                                   >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[26U] 
                     >> 3U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                     << 0x0000001eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                        >> 2U)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                    << 0x0000001eU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[21U] 
                                      >> 2U)) & (~ 
                                                 ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x0000000eU) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ffdU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (2U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0ffdU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (2U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 1U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 2U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[27U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[26U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[28U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[27U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[29U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[28U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[30U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[29U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[31U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[30U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[32U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[31U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[33U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[32U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[33U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[35U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[36U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[35U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[37U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[36U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[38U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[37U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[39U] 
                << 0x0000001aU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[38U] 
                                   >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[39U] 
                     >> 6U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                     << 0x0000001bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                        >> 5U)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[34U] 
                                      >> 5U)) & (~ 
                                                 ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x0000000eU) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ffbU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (4U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 2U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0ffbU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (4U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 2U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 3U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[40U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[39U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[41U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[40U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[42U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[41U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[43U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[42U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[44U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[43U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[45U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[44U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[46U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[45U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[46U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[48U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[49U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[48U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[50U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[49U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[51U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[50U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[52U] 
                << 0x00000017U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[51U] 
                                   >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[52U] 
                     >> 9U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                     << 0x00000018U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                        >> 8U)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[47U] 
                                      >> 8U)) & (~ 
                                                 ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x0000000eU) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0ff7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (8U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 3U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0ff7U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (8U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                        << 3U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 4U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[53U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[52U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[54U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[53U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[55U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[54U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[56U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[55U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[57U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[56U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[58U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[57U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[59U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[58U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[59U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[61U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[62U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[61U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[63U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[62U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[64U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[63U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[65U] 
                << 0x00000014U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[64U] 
                                   >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[65U] 
                     >> 0x0000000cU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                     << 0x00000015U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                        >> 0x0000000bU)) 
                   & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                          << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                    << 0x00000015U) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[60U] 
                                      >> 0x0000000bU)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0fefU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000010U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 4U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0fefU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000010U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 4U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 5U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[66U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[65U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[67U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[66U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[68U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[67U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[69U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[68U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[70U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[69U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[71U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[70U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[72U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[71U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[72U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[74U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[75U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[74U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[76U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[75U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[77U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[76U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[78U] 
                << 0x00000011U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[77U] 
                                   >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[78U] 
                     >> 0x0000000fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                     << 0x00000012U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                        >> 0x0000000eU)) 
                   & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                          << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[73U] 
                                      >> 0x0000000eU)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0fdfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000020U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 5U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0fdfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000020U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 5U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 6U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[79U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[78U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[80U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[79U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[81U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[80U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[82U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[81U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[83U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[82U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[84U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[83U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[85U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[84U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[85U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[87U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[88U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[87U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[89U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[88U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[90U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[89U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[91U] 
                << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[90U] 
                                   >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[91U] 
                     >> 0x00000012U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                     << 0x0000000fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                        >> 0x00000011U)) 
                   & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                          << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                    << 0x0000000fU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[86U] 
                                      >> 0x00000011U)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0fbfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000040U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 6U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0fbfU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000040U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 6U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 7U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[92U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[91U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[93U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[92U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[94U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[93U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[95U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[94U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[96U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[95U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[97U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[96U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[98U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[97U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[98U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[100U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[101U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[100U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[102U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[101U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[103U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[102U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[104U] 
                << 0x0000000bU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[103U] 
                                   >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[104U] 
                     >> 0x00000015U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                     << 0x0000000cU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                        >> 0x00000014U)) 
                   & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                          << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[99U] 
                                      >> 0x00000014U)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0f7fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000080U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0f7fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000080U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 7U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 8U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[105U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[104U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[106U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[105U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[107U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[106U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[108U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[107U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[109U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[108U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[110U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[109U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[111U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[110U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[111U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[113U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[114U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[113U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[115U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[114U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[116U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[115U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[117U] 
                << 8U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[116U] 
                          >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[117U] 
                     >> 0x00000018U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                     << 9U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                               >> 0x00000017U)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                                    << 9U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[112U] 
                                              >> 0x00000017U)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0effU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000100U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 8U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0effU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000100U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 8U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 9U) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[118U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[117U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[119U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[118U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[120U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[119U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[121U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[120U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[122U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[121U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[123U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[122U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[124U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[123U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[124U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[126U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[127U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[126U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[128U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[127U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[129U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[128U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[130U] 
                << 5U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[129U] 
                          >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[130U] 
                     >> 0x0000001bU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                     << 6U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                               >> 0x0000001aU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                                    << 6U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[125U] 
                                              >> 0x0000001aU)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0dffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000200U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 9U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0dffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000200U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 9U)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((1U & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                >> 0x0aU) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[131U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[130U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[132U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[131U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[133U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[132U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[134U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[133U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[135U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[134U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[136U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[135U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[137U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[136U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[137U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[139U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[140U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[139U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[141U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[140U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[142U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[141U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[143U] 
                << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[142U] 
                          >> 0x0000001eU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[144U] 
                      << 2U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[143U] 
                                >> 0x0000001eU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[139U] 
                     << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                               >> 0x0000001dU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[139U] 
                                    << 3U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[138U] 
                                              >> 0x0000001dU)) 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x0bffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000400U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 0x0000000aU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x0bffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000400U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 0x0000000aU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    if ((IData)((((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_ready) 
                  >> 0x0000000bU) & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid 
            = (1U & (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[145U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[144U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[146U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[145U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[147U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[146U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[148U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[147U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[149U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[148U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[150U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[149U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[151U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[150U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[152U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[151U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[153U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[152U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[154U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[153U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[155U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[154U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[156U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[155U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[12U] 
            = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[157U] 
                << 0x0000001fU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[156U] 
                                   >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[13U] 
            = (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[157U] 
                     >> 1U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U]) 
               | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[152U] 
                   & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                          << 0x0000000eU) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U]) 
               | (0x0000001fU & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop[152U] 
                                  & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                           >> 0x00000012U)))) 
                                 >> 1U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant 
            = ((0x07ffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant)) 
               | (0x00000800U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 0x0000000bU)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete 
            = ((0x07ffU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
               | (0x00000800U & ((~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_iq__squash_grant)) 
                                 << 0x0000000bU)));
        core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__unnamedblk2__DOT__available 
        = (0x00000fffU & (((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_complete)) 
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
    vlSelfRef.dmem_req_data = (((0U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                              >> 4U)))
                                 ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_765
                                 : ((1U == (3U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                  >> 4U)))
                                     ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_765
                                     : (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_data 
                                        & (- (IData)(
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop[2U] 
                                                          >> 4U)))))))) 
                               & (- (IData)((IData)(vlSelfRef.dmem_req_is_store))));
    __VdfgRegularize_h6e95ff9d_0_734 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) 
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__issue_fire 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_ready) 
           & ((~ (0U != ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__mispredict_mask_q) 
                         & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                             << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                                       >> 0x0000001fU))))) 
              & ((~ ((0U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                                   >> 0x00000016U))) 
                     | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                        >> 0x0000000fU))) & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__req_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iss_valid) 
           & ((0U != (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                            >> 0x00000016U))) & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_req_ready)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_575 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_576 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U])) 
                                                  & (((0x0000003fU 
                                                       & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U]) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 0x0000000cU))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_763 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_578 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_579 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_764 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
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
    __VdfgRegularize_h6e95ff9d_0_304 = ((2U == (0x0000000fU 
                                                & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q))) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_req_valid 
        = ((1U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q)) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_selected_valid));
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_match) {
        __Vtemp_27[0U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[0U];
        __Vtemp_27[1U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[1U];
        __Vtemp_27[2U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[2U];
        __Vtemp_27[3U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[3U];
        __Vtemp_27[4U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[4U];
        __Vtemp_27[5U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[5U];
        __Vtemp_27[6U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[6U];
        __Vtemp_27[7U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[7U];
        __Vtemp_27[8U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[8U];
        __Vtemp_27[9U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[9U];
        __Vtemp_27[10U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[10U];
        __Vtemp_27[11U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[11U];
        __Vtemp_27[12U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[12U];
        __Vtemp_27[13U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_xlate_resp_uop[13U];
    } else if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_match) {
        __Vtemp_27[0U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[0U];
        __Vtemp_27[1U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[1U];
        __Vtemp_27[2U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[2U];
        __Vtemp_27[3U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[3U];
        __Vtemp_27[4U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[4U];
        __Vtemp_27[5U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[5U];
        __Vtemp_27[6U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[6U];
        __Vtemp_27[7U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[7U];
        __Vtemp_27[8U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[8U];
        __Vtemp_27[9U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[9U];
        __Vtemp_27[10U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[10U];
        __Vtemp_27[11U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[11U];
        __Vtemp_27[12U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[12U];
        __Vtemp_27[13U] = core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_xlate_resp_uop[13U];
    } else {
        VL_ASSIGN_W(419, __Vtemp_27, Vcore_top_contract_test_top__ConstPool__CONST_h2f12751c_0);
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_code)) 
                    << 0x00000021U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_badvaddr))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[1U] 
        = ((__Vtemp_27[0U] << 7U) | (IData)(((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_code)) 
                                               << 0x00000021U) 
                                              | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_badvaddr))) 
                                             >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[2U] 
        = ((__Vtemp_27[0U] >> 0x00000019U) | (__Vtemp_27[1U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[3U] 
        = ((__Vtemp_27[1U] >> 0x00000019U) | (__Vtemp_27[2U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[4U] 
        = ((__Vtemp_27[2U] >> 0x00000019U) | (__Vtemp_27[3U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[5U] 
        = ((__Vtemp_27[3U] >> 0x00000019U) | (__Vtemp_27[4U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[6U] 
        = ((__Vtemp_27[4U] >> 0x00000019U) | (__Vtemp_27[5U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[7U] 
        = ((__Vtemp_27[5U] >> 0x00000019U) | (__Vtemp_27[6U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[8U] 
        = ((__Vtemp_27[6U] >> 0x00000019U) | (__Vtemp_27[7U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[9U] 
        = ((__Vtemp_27[7U] >> 0x00000019U) | (__Vtemp_27[8U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[10U] 
        = ((__Vtemp_27[8U] >> 0x00000019U) | (__Vtemp_27[9U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[11U] 
        = ((__Vtemp_27[9U] >> 0x00000019U) | (__Vtemp_27[10U] 
                                              << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[12U] 
        = ((__Vtemp_27[10U] >> 0x00000019U) | (__Vtemp_27[11U] 
                                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[13U] 
        = ((__Vtemp_27[11U] >> 0x00000019U) | (__Vtemp_27[12U] 
                                               << 7U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U] 
        = ((0x00000400U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U]) 
           | (0x000007ffU & ((__Vtemp_27[12U] >> 0x00000019U) 
                             | (__Vtemp_27[13U] << 7U))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U] 
        = ((0x000003ffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt[14U]) 
           | (0x000007ffU & (((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid) 
                              & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_valid) 
                                 & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_734)))) 
                             << 0x0000000aU)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready 
        = (1U & (~ ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_xcpt_valid) 
                    & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_xlate_xcpt_q[14U] 
                        >> 0x0000000aU) & (IData)(__VdfgRegularize_h6e95ff9d_0_734)))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_native_res_valid) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354)));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[0U] = 0U;
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[0U] 
               << 7U);
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[0U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[1U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[3U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[1U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[2U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[4U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[2U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[3U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[5U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[3U] 
                >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[4U] 
                                   << 7U));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[6U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[0U] 
                << 0x0000000dU) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[4U] 
                                    >> 0x00000019U) 
                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_760[5U] 
                                      << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[0U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[1U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[1U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[2U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[2U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[3U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[3U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[4U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[4U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[5U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[5U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[6U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[6U] 
                >> 0x00000013U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[7U] 
                                   << 0x0000000dU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U] 
            = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_354) 
                << 0x0000000aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_761[7U] 
                                   >> 0x00000013U));
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
            = ((0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[5U] 
                               << 7U)) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__pending_rob_idx_q) 
                                           << 7U) | 
                                          (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[4U] 
                                           >> 0x00000019U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[7U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[5U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[8U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[6U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[9U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[7U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[10U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[8U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[11U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[9U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[12U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[10U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[13U] 
            = (((0x00001f80U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U] 
                                << 7U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[11U] 
                                           >> 0x00000019U)) 
               | (0xffffe000U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U] 
                                 << 7U)));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[14U] 
            = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__resp_valid_q) 
                << 0x0000000aU) | (0x000003ffU & ((0x00001f80U 
                                                   & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[13U] 
                                                      << 7U)) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_uop_q[12U] 
                                                     >> 0x00000019U))));
    } else {
        __Vtemp_37[0U] = (IData)((((QData)((IData)(
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
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_371)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x0000000fU 
                                                          & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                             >> 0x00000011U)))
                                                         ? (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_371 
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
        __Vtemp_37[1U] = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
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
                                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_371)
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x0000000fU 
                                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[0U] 
                                                                         >> 0x00000011U)))
                                                                     ? (IData)(
                                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_371 
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
            = __Vtemp_37[0U];
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[1U] 
            = __Vtemp_37[1U];
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
                << 0x0000000aU) | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[12U] 
                                    >> 0x00000019U) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[13U] 
                                      << 7U)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_valid 
        = ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            >> 0x00000018U) & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__issue_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w 
        = (IData)(((0x00400000U == (0x01c00000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[1U])) 
                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_ctrl_inst__DOT__req_fire)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497 = (1U 
                                                  & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready) 
                                                     >> 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_161) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117) 
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
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_304))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109 = (1U 
                                                  & ((IData)(__VdfgRegularize_h6e95ff9d_0_161)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                                                       ? 
                                                      (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))
                                                       : 
                                                      (~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117) 
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
                                                            ((IData)(__VdfgRegularize_h6e95ff9d_0_304) 
                                                             & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable)))))))
                                                      : 
                                                     (~ (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_enable))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573 = ((
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
                                                       & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_304)))))) 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117))))) 
                                                  & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_161))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__xlate_resp_accept 
        = ((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready) 
           & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_resp_ready 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dmmu_owner_cacop_q)
            ? (2U == (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__cacop_state_q))
            : (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_dmmu_resp_ready));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x0000000cU 
                                                           & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res[2U])) 
                                                         & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__q0_req_valid_w 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__tlb_search_req_valid_w) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__itlb_req_valid_w));
    __VdfgRegularize_h6e95ff9d_0_572 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_350));
    if (__VdfgRegularize_h6e95ff9d_0_572) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block 
            = (1U & ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q))
                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                      : ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_380)) 
                         | ((1U == (0x0000000fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                   >> 4U)))
                             ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109))
                             : ((4U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                           >> 4U)))
                                 ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_498)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109))
                                 : ((2U != (0x0000000fU 
                                            & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                               >> 4U))) 
                                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109))))))));
        __VdfgRegularize_h6e95ff9d_0_571 = (1U & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_380)
                                                      ? 
                                                     ((1U 
                                                       == 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                           >> 4U)))
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
                                                          >> 1U))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                            >> 4U)))
                                                        ? 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_498) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
                                                           >> 1U))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q) 
                                                             >> 4U)))
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
                                                            >> 1U))
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
                                                         >> 1U))))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
                                                      >> 1U))));
    } else {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109));
        __VdfgRegularize_h6e95ff9d_0_571 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
                                                  >> 1U));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids) 
           & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_lane_eligible) 
              & (- (IData)(((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block)) 
                            & Vcore_top_contract_test_top__ConstPool__TABLE_hea82845a_0
                            [((((0xfffffffeU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids) 
                                                & (((0x3fU 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)) 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[7U] 
                                                       >> 0x0000001bU)) 
                                                   << 1U))) 
                                | ((0x3fU == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_366))) 
                               << 4U) | (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_lane_eligible) 
                                          << 2U) | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_valids)))])))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rob_inst__enq_partial_stall 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573) 
              | (IData)(__VdfgRegularize_h6e95ff9d_0_571)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_571) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_573)));
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
                      >> 1U) & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[7U] 
                                >> 0x0000001bU))) << 1U) 
           | (1U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire) 
                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[7U] 
                       >> 0x0000001bU))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_fire 
        = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid));
    __VdfgRegularize_h6e95ff9d_0_742 = ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q) 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__core_idle_q)) 
           & ((3U == (3U & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_finished_q) 
                            | ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__buffer_deq_valid)) 
                               | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed))))) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask 
        = ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__resolve_mask_q)) 
           & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask 
        = ((0x0fc0U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask)) 
           | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask));
    if ((1U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask 
            = (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask) 
                              | (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__alloc_mask)));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask 
        = ((0x003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask)) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask) 
              << 6U));
    if ((2U & (IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_will_fire))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask 
            = (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask) 
                              | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__alloc_mask) 
                                 >> 6U)));
    }
    __VdfgRegularize_h6e95ff9d_0_749 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_742) 
                                               & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                  & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[7U] 
                                                     >> 0x0000001bU))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746 = (((IData)(__VdfgRegularize_h6e95ff9d_0_742) 
                                                   & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240))) 
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
        = ((0x8fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U]) 
           | (((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))
                ? ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))
                    ? ((8U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))
                        ? ((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))
                            ? (1U & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
                                                    >> 1U))))))
                            : 2U) : 3U) : 4U) : 5U) 
              << 0x0000001cU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U] 
        = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[7U]) 
           | (((0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                               << 1U)) | (0x0000003fU 
                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask))) 
              << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[8U] 
        = ((((0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                             << 1U)) | (0x0000003fU 
                                        & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask))) 
            >> 1U) | ((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                        << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                                                   >> 0x0000001fU)) 
                       | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                         << 1U))) << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[9U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[8U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[10U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[9U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[11U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[10U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[12U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[11U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[13U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[12U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[14U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[13U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[15U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[14U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[16U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[15U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[17U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[16U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[18U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[17U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[19U] 
        = (((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                              << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[18U] 
                                         >> 0x0000001fU)) 
             | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                               << 1U))) >> 1U) | ((
                                                   ((0x0000003eU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                                        << 1U)) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                                       >> 0x0000001fU)) 
                                                   | (0xffffffc0U 
                                                      & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                                         << 1U))) 
                                                  << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U] 
        = ((0x80000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U]) 
           | ((((0x0000003eU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                << 1U)) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[19U] 
                                           >> 0x0000001fU)) 
               | (0xffffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[20U] 
                                 << 1U))) >> 1U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U] 
        = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[20U]) 
           | (((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                ? ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                    ? ((8U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                        ? ((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                            ? (1U & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                    >> 1U))))))
                            : 2U) : 3U) : 4U) : 5U) 
              << 0x0000001fU));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[21U] 
        = ((0xfffffffcU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[21U]) 
           | (((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                ? ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                    ? ((8U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                        ? ((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66))
                            ? (1U & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                    >> 1U))))))
                            : 2U) : 3U) : 4U) : 5U) 
              >> 1U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[21U] 
        = ((3U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[21U]) 
           | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                 << 0x0000001eU) | (0x3fffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[21U] 
                                                   >> 2U))) 
               | (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask) 
                                 >> 6U))) << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[22U] 
        = (((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
               << 0x0000001eU) | (0x3fffffc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[21U] 
                                                 >> 2U))) 
             | (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask) 
                               >> 6U))) >> 0x0000001eU) 
           | (((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                               >> 2U)) | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                           << 0x0000001eU) 
                                          | (0x3fffffc0U 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                                                >> 2U)))) 
              << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[23U] 
        = ((((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                             >> 2U)) | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                         << 0x0000001eU) 
                                        | (0x3fffffc0U 
                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[22U] 
                                              >> 2U)))) 
            >> 0x0000001eU) | (((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                                >> 2U)) 
                                | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                    << 0x0000001eU) 
                                   | (0x3fffffc0U & 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                       >> 2U)))) << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[24U] 
        = ((((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                             >> 2U)) | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                         << 0x0000001eU) 
                                        | (0x3fffffc0U 
                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[23U] 
                                              >> 2U)))) 
            >> 0x0000001eU) | (((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                                >> 2U)) 
                                | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                    << 0x0000001eU) 
                                   | (0x3fffffc0U & 
                                      (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                       >> 2U)))) << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[25U] 
        = ((((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                             >> 2U)) | ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                         << 0x0000001eU) 
                                        | (0x3fffffc0U 
                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[24U] 
                                              >> 2U)))) 
            >> 0x0000001eU) | (((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                                >> 2U)) 
                                | (0xffffffc0U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[26U] 
                                                   << 0x0000001eU) 
                                                  | (0x3fffffc0U 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                                        >> 2U))))) 
                               << 2U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[26U] 
        = (0x0000003fU & ((((0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                            >> 2U)) 
                            | (0xffffffc0U & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[26U] 
                                               << 0x0000001eU) 
                                              | (0x3fffffc0U 
                                                 & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[25U] 
                                                    >> 2U))))) 
                           >> 0x0000001eU) | (0x0000003cU 
                                              & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops_pre_bm[26U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__br_snapshot_en 
        = ((2U & (((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                    ? ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                       & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[20U] 
                           >> 0x0000001eU) & ((IData)(__VdfgRegularize_h6e95ff9d_0_742) 
                                              >> 1U)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_749) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_749)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_737 = (0x0000003fU 
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
                                                                >> 5U)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                           >> 5U)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351) 
                                                          >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_738 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_744)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351)))
                                                       ? 0U
                                                       : vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_351))])));
    __VdfgRegularize_h6e95ff9d_0_0 = ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746))
                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_377
                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108);
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
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[26U] 
        = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q[26U];
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
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[26U] 
            = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops[26U];
    }
    if ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
                                 << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
                                           >> 0x0000001fU)) 
                               & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                   << 0x00000014U) 
                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                     >> 0x0000000cU)))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next 
            = (2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next));
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block) {
        __Vtemp_47 = (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
                                       << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
                                                 >> 0x0000001fU)) 
                                     & (~ ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                              >> 0x00000012U)))));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
            = ((0x7fffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U]) 
               | ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
                     << 1U) | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[7U] 
                               >> 0x0000001fU)) & (~ 
                                                   ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U] 
            = ((0xffffffe0U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[8U]) 
               | (__Vtemp_47 >> 1U));
    }
    if ((0U != (0x0000003fU & (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                                 >> 2U)) & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                             << 0x00000014U) 
                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                               >> 0x0000000cU)))))) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next 
            = (1U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next));
    }
    if (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
            = ((0xffffff03U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U]) 
               | (0x000000fcU & ((((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                                    << 0x0000001eU) 
                                   | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next[21U] 
                                      >> 2U)) & (~ 
                                                 ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                   << 0x0000000eU) 
                                                  | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w[15U] 
                                                     >> 0x00000012U)))) 
                                 << 2U)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163 = (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241) 
                                                      & ((~ (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush)) 
                                                         & (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire) 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_743)) 
                                                            >> 1U)))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746) 
                                                      >> 1U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_746)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[0U] 
        = (IData)(((0x00ffffffffffff00ULL & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108) 
                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[1U] 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
            << 0x00000018U) | (IData)((((0x00ffffffffffff00ULL 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108) 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))) 
                                       >> 0x00000020U)));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[2U] 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
            >> 8U) | ((IData)((__VdfgRegularize_h6e95ff9d_0_0 
                               >> 0x00000020U)) << 0x00000018U));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[3U] 
        = ((IData)((__VdfgRegularize_h6e95ff9d_0_0 
                    >> 0x00000020U)) >> 8U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766 = ((
                                                   ((0U 
                                                     != 
                                                     (0x00ffffffU 
                                                      & (IData)(
                                                                (__VdfgRegularize_h6e95ff9d_0_0 
                                                                 >> 0x00000020U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0ULL 
                                                                != 
                                                                (0x00ff0000ffff0000ULL 
                                                                 & __VdfgRegularize_h6e95ff9d_0_0))) 
                                                       << 4U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x0000ff00ff00ff00ULL 
                                                                   & __VdfgRegularize_h6e95ff9d_0_0))) 
                                                         << 3U))) 
                                                  | (((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x00f0f0f0f0f0f0f0ULL 
                                                                & __VdfgRegularize_h6e95ff9d_0_0))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    ((0ULL 
                                                                      != 
                                                                      (0x00cccccccccccc00ULL 
                                                                       & __VdfgRegularize_h6e95ff9d_0_0)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & ((IData)(
                                                                                (__VdfgRegularize_h6e95ff9d_0_0 
                                                                                >> 6U)) 
                                                                            | (IData)(
                                                                                (__VdfgRegularize_h6e95ff9d_0_0 
                                                                                >> 2U))))))) 
                                                            << 1U)) 
                                                        | (IData)(
                                                                  (0ULL 
                                                                   != 
                                                                   (0x00aaaaaaaaaaaaaaULL 
                                                                    & __VdfgRegularize_h6e95ff9d_0_0))))));
    if ((2U & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741 
            = (0x00000fffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_737) 
                               << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_738)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 
            = (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_766));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_741 
            = (0x00000fffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 
                                      >> 0x00000012U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 
            = (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747) 
                              >> 6U));
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U] 
        = (0x00ffffffffffffffULL & ((((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[1U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[0U]))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] 
        = (0x00ffffffffffffffULL & ((((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[3U])) 
                                      << 0x00000028U) 
                                     | (((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[2U])) 
                                         << 8U) | ((QData)((IData)(core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_pick[1U])) 
                                                   >> 0x00000018U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en) 
                                                             >> 1U)))))));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[0U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[3U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[4U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[5U] = 0U;
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U] 
        = ((0x00ffffffU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U]) 
           | ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U]) 
              << 0x00000018U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U] 
        = (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U]) 
            >> 8U) | ((IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[3U] 
        = ((0xffff0000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[3U]) 
           | ((IData)((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[1U] 
                       >> 0x00000020U)) >> 8U));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[0U] 
        = (IData)((0x00ffffffffffffffULL & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[3U])) 
                                              << 0x00000028U) 
                                             | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                   >> 0x00000018U))) 
                                            | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U])));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U] 
        = ((0xff000000U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U]) 
           | (IData)(((0x00ffffffffffffffULL & ((((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[3U])) 
                                                  << 0x00000028U) 
                                                 | (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                       >> 0x00000018U))) 
                                                | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[0U])) 
                      >> 0x00000020U)));
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all 
        = (0x00ffffffffffffffULL & (((QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix[0U]))));
    core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask = 0ULL;
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en) 
         & (0U != (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg))))) {
        if ((0x37U >= (0x0000003fU & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg)))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                   | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg)))));
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en) 
          >> 1U) & (0U != (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg) 
                                          >> 6U))))) {
        if ((0x37U >= (0x0000003fU & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg) 
                                      >> 6U)))) {
            core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                = (core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask 
                   | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg) 
                                                      >> 6U)))));
        }
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask = 0ULL;
    if ((0x00000100U & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[2U])) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask 
            = ((5U >= (7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[10U] 
                             >> 5U))) ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q
               [(7U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_b2_q[10U] 
                       >> 5U))] : 0ULL);
    }
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next 
        = (((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec 
             & (~ vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all)) 
            | core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__commit_free_mask) 
           | vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next 
        = (0x00fffffffffffffeULL & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next);
    vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_747)));
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
}
