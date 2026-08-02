// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

void Vicache_test_top___024root___eval_ico(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_ico\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__0
            vlSelfRef.maint_ready = ((IData)(vlSelfRef.rst_n) 
                                     & (0U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q)));
        }
    }
    if ((0x0000000000000042ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.req_ready = ((~ (IData)(vlSelfRef.maint_valid)) 
                                   & (IData)(vlSelfRef.maint_ready));
        }
    }
}

void Vicache_test_top___024root___eval_triggers_vec__ico__0(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___eval_triggers_vec__ico__2(Vicache_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vicache_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vicache_test_top___024root___eval_phase__ico(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_phase__ico\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        Vicache_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
        {
            // Inlined CFunc: _eval_triggers_vec__ico__1
            vlSelfRef.__Vtrigprevexpr___TOP__clk__0 
                = vlSelfRef.clk;
            vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 
                = vlSelfRef.rst_n;
            vlSelfRef.__Vtrigprevexpr___TOP__req_valid__0 
                = vlSelfRef.req_valid;
            vlSelfRef.__Vtrigprevexpr___TOP__req_paddr__0 
                = vlSelfRef.req_paddr;
            vlSelfRef.__Vtrigprevexpr___TOP__req_cacheable__0 
                = vlSelfRef.req_cacheable;
            vlSelfRef.__Vtrigprevexpr___TOP__resp_ready__0 
                = vlSelfRef.resp_ready;
            vlSelfRef.__Vtrigprevexpr___TOP__maint_valid__0 
                = vlSelfRef.maint_valid;
            vlSelfRef.__Vtrigprevexpr___TOP__maint_mode__0 
                = vlSelfRef.maint_mode;
            vlSelfRef.__Vtrigprevexpr___TOP__maint_all__0 
                = vlSelfRef.maint_all;
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
        }
        Vicache_test_top___024root___eval_triggers_vec__ico__2(vlSelf);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vicache_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vicache_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vicache_test_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}
