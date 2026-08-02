// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

VL_ATTR_COLD void Vicache_test_top___024root___eval_static(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_static\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        CData/*0:0*/ __Vinline_0__eval_static__TOP_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found;
        __Vinline_0__eval_static__TOP_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 0;
        __Vinline_0__eval_static__TOP_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 0;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__req_valid__0 = vlSelfRef.req_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__req_paddr__0 = vlSelfRef.req_paddr;
    vlSelfRef.__Vtrigprevexpr___TOP__req_cacheable__0 
        = vlSelfRef.req_cacheable;
    vlSelfRef.__Vtrigprevexpr___TOP__resp_ready__0 
        = vlSelfRef.resp_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__maint_valid__0 
        = vlSelfRef.maint_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__maint_mode__0 
        = vlSelfRef.maint_mode;
    vlSelfRef.__Vtrigprevexpr___TOP__maint_all__0 = vlSelfRef.maint_all;
    vlSelfRef.__Vtrigprevexpr___TOP__maint_vaddr__0 
        = vlSelfRef.maint_vaddr;
    vlSelfRef.__Vtrigprevexpr___TOP__maint_paddr__0 
        = vlSelfRef.maint_paddr;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_req_ready__0 
        = vlSelfRef.mem_req_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_resp_valid__0 
        = vlSelfRef.mem_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_resp_data__0 
        = vlSelfRef.mem_resp_data;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_resp_last__0 
        = vlSelfRef.mem_resp_last;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vicache_test_top___024root___eval_initial(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_initial\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vicache_test_top___024root___eval_final(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_final\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vicache_test_top___024root___eval_phase__stl(Vicache_test_top___024root* vlSelf);

VL_ATTR_COLD void Vicache_test_top___024root___eval_settle(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_settle\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vicache_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_test_top.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vicache_test_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}
