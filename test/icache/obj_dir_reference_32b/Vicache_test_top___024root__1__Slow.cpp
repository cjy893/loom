// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

VL_ATTR_COLD bool Vicache_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vicache_test_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vicache_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vicache_test_top___024root___stl_sequent__TOP__0(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.resp_valid = (4U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.mem_req_valid = (2U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.mem_resp_ready = (3U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.resp_insts[0U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[0U];
    vlSelfRef.resp_insts[1U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[1U];
    vlSelfRef.resp_insts[2U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[2U];
    vlSelfRef.resp_insts[3U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[3U];
    vlSelfRef.maint_done = vlSelfRef.icache_test_top__DOT__dut__DOT__maint_done_q;
    if (vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q) {
        vlSelfRef.mem_req_len = 7U;
        vlSelfRef.mem_req_addr = (0xffffffe0U & vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q);
    } else {
        vlSelfRef.mem_req_len = 3U;
        vlSelfRef.mem_req_addr = (0xfffffff0U & vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q);
    }
    vlSelfRef.maint_ready = ((IData)(vlSelfRef.rst_n) 
                             & (0U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q)));
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
}
