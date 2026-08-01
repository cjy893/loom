// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcacop_ctrl_test_top.h for the primary calling header

#include "Vcacop_ctrl_test_top__pch.h"

void Vcacop_ctrl_test_top___024root___eval_triggers_vec__ico(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_triggers_vec__ico\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((((((IData)(vlSelfRef.dcache_maint_done) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dcache_maint_done__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.dcache_maint_ready) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dcache_maint_ready__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.icache_maint_done) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__icache_maint_done__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.icache_maint_ready) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__icache_maint_ready__0)))) 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSelfRef.flush_pending) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flush_pending__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.resp_ready) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__resp_ready__0)) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.req_badvaddr 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__req_badvaddr__0) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.req_xcpt_code) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_xcpt_code__0)))) 
                                                         << 8U)) 
                                                     | (((((((IData)(vlSelfRef.req_xcpt_valid) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_xcpt_valid__0)) 
                                                            << 3U) 
                                                           | ((vlSelfRef.req_paddr 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__req_paddr__0) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.req_vaddr 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__req_vaddr__0) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.req_code) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_code__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.req_rob_idx) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_rob_idx__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.req_valid) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__req_valid__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.rst_n) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__req_valid__0 = vlSelfRef.req_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__req_rob_idx__0 
        = vlSelfRef.req_rob_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__req_code__0 = vlSelfRef.req_code;
    vlSelfRef.__Vtrigprevexpr___TOP__req_vaddr__0 = vlSelfRef.req_vaddr;
    vlSelfRef.__Vtrigprevexpr___TOP__req_paddr__0 = vlSelfRef.req_paddr;
    vlSelfRef.__Vtrigprevexpr___TOP__req_xcpt_valid__0 
        = vlSelfRef.req_xcpt_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__req_xcpt_code__0 
        = vlSelfRef.req_xcpt_code;
    vlSelfRef.__Vtrigprevexpr___TOP__req_badvaddr__0 
        = vlSelfRef.req_badvaddr;
    vlSelfRef.__Vtrigprevexpr___TOP__resp_ready__0 
        = vlSelfRef.resp_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__flush_pending__0 
        = vlSelfRef.flush_pending;
    vlSelfRef.__Vtrigprevexpr___TOP__icache_maint_ready__0 
        = vlSelfRef.icache_maint_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__icache_maint_done__0 
        = vlSelfRef.icache_maint_done;
    vlSelfRef.__Vtrigprevexpr___TOP__dcache_maint_ready__0 
        = vlSelfRef.dcache_maint_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__dcache_maint_done__0 
        = vlSelfRef.dcache_maint_done;
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
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000001000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000002000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000004000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000008000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vcacop_ctrl_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___trigger_anySet__ico\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcacop_ctrl_test_top___024root___eval_phase__ico(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_phase__ico\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcacop_ctrl_test_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcacop_ctrl_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcacop_ctrl_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((0x0000000000000802ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.req_ready = ((IData)(vlSelfRef.rst_n) 
                                           & ((~ (IData)(vlSelfRef.flush_pending)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vcacop_ctrl_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___trigger_anySet__act\n"); );
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

void Vcacop_ctrl_test_top___024root___nba_sequent__TOP__0(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___nba_sequent__TOP__0\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q;
    __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 0;
    // Body
    __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q 
        = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.flush_pending) {
            __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 0U;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q = 0U;
        } else if ((4U & (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))) {
                __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 0U;
            } else if ((1U & (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))) {
                if (((IData)(vlSelfRef.resp_valid) 
                     & (IData)(vlSelfRef.resp_ready))) {
                    __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 0U;
                    vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q = 0U;
                }
            } else if (vlSelfRef.dcache_maint_done) {
                __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))) {
                if (vlSelfRef.dcache_maint_ready) {
                    __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q 
                        = ((IData)(vlSelfRef.dcache_maint_done)
                            ? 5U : 4U);
                }
            } else if (vlSelfRef.icache_maint_done) {
                __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 5U;
            }
        } else if ((1U & (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))) {
            if (vlSelfRef.icache_maint_ready) {
                __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q 
                    = ((IData)(vlSelfRef.icache_maint_done)
                        ? 5U : 2U);
            }
        } else if (((IData)(vlSelfRef.req_valid) & (IData)(vlSelfRef.req_ready))) {
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__rob_idx_q 
                = vlSelfRef.req_rob_idx;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__code_q 
                = vlSelfRef.req_code;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q 
                = vlSelfRef.req_vaddr;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__paddr_q 
                = vlSelfRef.req_paddr;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q = 0U;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q = 0U;
            vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q = 0U;
            if (((3U != (3U & ((IData)(vlSelfRef.req_code) 
                               >> 3U))) & ((0U == (7U 
                                                   & (IData)(vlSelfRef.req_code))) 
                                           | (1U == 
                                              (7U & (IData)(vlSelfRef.req_code)))))) {
                if ((IData)(((0x10U == (0x18U & (IData)(vlSelfRef.req_code))) 
                             & (IData)(vlSelfRef.req_xcpt_valid)))) {
                    vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q = 1U;
                    vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q 
                        = vlSelfRef.req_xcpt_code;
                    vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q 
                        = vlSelfRef.req_badvaddr;
                    __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 5U;
                } else {
                    __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q 
                        = ((0U == (7U & (IData)(vlSelfRef.req_code)))
                            ? 1U : 3U);
                }
            } else {
                __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 5U;
            }
        }
    } else {
        __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__rob_idx_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__code_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__paddr_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q = 0U;
        vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q = 0U;
    }
    vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q 
        = __Vdly__cacop_ctrl_test_top__DOT__dut__DOT__state_q;
    vlSelfRef.resp_xcpt_valid = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q;
    vlSelfRef.resp_rob_idx = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__rob_idx_q;
    vlSelfRef.resp_xcpt_code = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q;
    vlSelfRef.resp_badvaddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q;
    vlSelfRef.icache_maint_vaddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q;
    vlSelfRef.dcache_maint_vaddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q;
    vlSelfRef.icache_maint_paddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__paddr_q;
    vlSelfRef.dcache_maint_paddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__paddr_q;
    vlSelfRef.icache_maint_mode = (3U & ((IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__code_q) 
                                         >> 3U));
    vlSelfRef.resp_valid = (5U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.icache_maint_valid = (1U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.dcache_maint_valid = (3U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q));
    vlSelfRef.req_ready = ((IData)(vlSelfRef.rst_n) 
                           & ((~ (IData)(vlSelfRef.flush_pending)) 
                              & (0U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))));
    vlSelfRef.dcache_maint_op = (2U & (- (IData)((0U 
                                                  != (IData)(vlSelfRef.icache_maint_mode)))));
    vlSelfRef.dcache_maint_mode = vlSelfRef.icache_maint_mode;
}

void Vcacop_ctrl_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcacop_ctrl_test_top___024root___eval_phase__act(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_phase__act\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcacop_ctrl_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcacop_ctrl_test_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcacop_ctrl_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcacop_ctrl_test_top___024root___eval_phase__nba(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_phase__nba\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcacop_ctrl_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcacop_ctrl_test_top___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vcacop_ctrl_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcacop_ctrl_test_top___024root___eval(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcacop_ctrl_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/cacop_ctrl/cacop_ctrl_test_top.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcacop_ctrl_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcacop_ctrl_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/cacop_ctrl/cacop_ctrl_test_top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcacop_ctrl_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/cacop_ctrl/cacop_ctrl_test_top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcacop_ctrl_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcacop_ctrl_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcacop_ctrl_test_top___024root___eval_debug_assertions(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_debug_assertions\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if (VL_UNLIKELY(((vlSelfRef.req_rob_idx & 0xc0U)))) {
        Verilated::overWidthError("req_rob_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_code & 0xe0U)))) {
        Verilated::overWidthError("req_code");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_xcpt_valid & 0xfeU)))) {
        Verilated::overWidthError("req_xcpt_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.req_xcpt_code & 0xc0U)))) {
        Verilated::overWidthError("req_xcpt_code");
    }
    if (VL_UNLIKELY(((vlSelfRef.resp_ready & 0xfeU)))) {
        Verilated::overWidthError("resp_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.flush_pending & 0xfeU)))) {
        Verilated::overWidthError("flush_pending");
    }
    if (VL_UNLIKELY(((vlSelfRef.icache_maint_ready 
                      & 0xfeU)))) {
        Verilated::overWidthError("icache_maint_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.icache_maint_done & 0xfeU)))) {
        Verilated::overWidthError("icache_maint_done");
    }
    if (VL_UNLIKELY(((vlSelfRef.dcache_maint_ready 
                      & 0xfeU)))) {
        Verilated::overWidthError("dcache_maint_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.dcache_maint_done & 0xfeU)))) {
        Verilated::overWidthError("dcache_maint_done");
    }
}
#endif  // VL_DEBUG
