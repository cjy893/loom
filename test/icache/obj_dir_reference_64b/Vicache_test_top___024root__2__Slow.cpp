// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vicache_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vicache_test_top___024root___stl_sequent__TOP__0(Vicache_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vicache_test_top___024root___eval_phase__stl(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_phase__stl\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vicache_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vicache_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vicache_test_top___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: _stl_sequent__TOP__1
                    CData/*0:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__1_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__1_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 0;
                    vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way 
                        = vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q
                        [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set];
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__1_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
                                         [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][0U])))) {
                        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way = 0U;
                        __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__1_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 1U;
                    }
                    if ((1U & ((~ (IData)(__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__1_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found)) 
                               & (~ (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
                                            [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][1U]))))) {
                        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way = 1U;
                        __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__1_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 1U;
                    }
                    vlSelfRef.req_ready = ((~ (IData)(vlSelfRef.maint_valid)) 
                                           & (IData)(vlSelfRef.maint_ready));
                }
            }
        }
    }
    return (__VstlExecute);
}
