// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

bool Vicache_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___trigger_anySet__ico\n"); );
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

void Vicache_test_top___024root___eval_triggers_vec__ico__0(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_triggers_vec__ico__0\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.mem_resp_last) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_resp_last__0)) 
                                                         << 6U) 
                                                        | (((vlSelfRef.mem_resp_data 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__mem_resp_data__0) 
                                                            << 5U) 
                                                           | (((IData)(vlSelfRef.mem_resp_valid) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_resp_valid__0)) 
                                                              << 4U))) 
                                                       | (((((IData)(vlSelfRef.mem_req_ready) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_req_ready__0)) 
                                                            << 3U) 
                                                           | ((vlSelfRef.maint_paddr 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__maint_paddr__0) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.maint_vaddr 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__maint_vaddr__0) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.maint_all) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__maint_all__0))))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.maint_mode) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__maint_mode__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.maint_valid) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__maint_valid__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.resp_ready) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__resp_ready__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.req_cacheable) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_cacheable__0)))) 
                                                         << 4U) 
                                                        | ((((vlSelfRef.req_paddr 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__req_paddr__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.req_valid) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_valid__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.rst_n) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))))));
}
