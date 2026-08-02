// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

#ifdef VL_DEBUG
void Vicache_test_top___024root___eval_debug_assertions(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_debug_assertions\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_valid & 0xfeU)))) {
        Verilated::overWidthError("req_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_cacheable & 0xfeU)))) {
        Verilated::overWidthError("req_cacheable");
    }
    if (VL_UNLIKELY(((vlSelfRef.resp_ready & 0xfeU)))) {
        Verilated::overWidthError("resp_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.maint_valid & 0xfeU)))) {
        Verilated::overWidthError("maint_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.maint_mode & 0xfcU)))) {
        Verilated::overWidthError("maint_mode");
    }
    if (VL_UNLIKELY(((vlSelfRef.maint_all & 0xfeU)))) {
        Verilated::overWidthError("maint_all");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_req_ready & 0xfeU)))) {
        Verilated::overWidthError("mem_req_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_resp_valid & 0xfeU)))) {
        Verilated::overWidthError("mem_resp_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_resp_last & 0xfeU)))) {
        Verilated::overWidthError("mem_resp_last");
    }
}
#endif  // VL_DEBUG
