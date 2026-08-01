// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

void Vicache_test_top___024root___nba_sequent__TOP__3(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___nba_sequent__TOP__3\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__Vfuncout;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__addr = 0;
    IData/*24:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__Vfuncout;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__addr = 0;
    // Body
    vlSelfRef.mem_req_valid = (2U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.mem_resp_ready = (3U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.maint_ready = ((IData)(vlSelfRef.rst_n) 
                             & (0U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q)));
    vlSelfRef.mem_req_addr = ((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q)
                               ? (0xffffffe0U & vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q)
                               : (0xfffffff0U & vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q));
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__addr 
        = vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__Vfuncout 
        = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__addr 
                 >> 5U));
    vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set 
        = __Vfunc_icache_test_top__DOT__dut__DOT__address_set__0__Vfuncout;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__addr 
        = vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__Vfuncout 
        = (__Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__addr 
           >> 7U);
    vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_tag 
        = __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__1__Vfuncout;
    vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit = 0U;
    vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way = 0U;
    if ((vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
         [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][0U] 
         & (vlSelfRef.icache_test_top__DOT__dut__DOT__tag_array
            [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][0U] 
            == vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_tag))) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit = 1U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way = 0U;
    }
    if ((vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
         [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][1U] 
         & (vlSelfRef.icache_test_top__DOT__dut__DOT__tag_array
            [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][1U] 
            == vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_tag))) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit = 1U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way = 1U;
    }
    vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way 
        = vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q
        [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set];
}
