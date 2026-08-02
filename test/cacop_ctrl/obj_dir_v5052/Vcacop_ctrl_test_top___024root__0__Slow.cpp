// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcacop_ctrl_test_top.h for the primary calling header

#include "Vcacop_ctrl_test_top__pch.h"

VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___eval_static(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_static\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___eval_initial(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_initial\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___eval_final(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_final\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcacop_ctrl_test_top___024root___eval_phase__stl(Vcacop_ctrl_test_top___024root* vlSelf);

VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___eval_settle(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_settle\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcacop_ctrl_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/cacop_ctrl/cacop_ctrl_test_top.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcacop_ctrl_test_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vcacop_ctrl_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcacop_ctrl_test_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcacop_ctrl_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vcacop_ctrl_test_top___024root___eval_phase__stl(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___eval_phase__stl\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vcacop_ctrl_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcacop_ctrl_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.resp_valid = (5U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q));
                    vlSelfRef.icache_maint_valid = 
                        (1U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q));
                    vlSelfRef.dcache_maint_valid = 
                        (3U == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q));
                    vlSelfRef.resp_rob_idx = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__rob_idx_q;
                    vlSelfRef.resp_xcpt_valid = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q;
                    vlSelfRef.resp_xcpt_code = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q;
                    vlSelfRef.resp_badvaddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q;
                    vlSelfRef.icache_maint_vaddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q;
                    vlSelfRef.dcache_maint_vaddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q;
                    vlSelfRef.icache_maint_paddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__paddr_q;
                    vlSelfRef.dcache_maint_paddr = vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__paddr_q;
                    vlSelfRef.req_ready = ((IData)(vlSelfRef.rst_n) 
                                           & ((~ (IData)(vlSelfRef.flush_pending)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__state_q))));
                    vlSelfRef.icache_maint_mode = (3U 
                                                   & ((IData)(vlSelfRef.cacop_ctrl_test_top__DOT__dut__DOT__code_q) 
                                                      >> 3U));
                    vlSelfRef.dcache_maint_op = (2U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.icache_maint_mode)))));
                    vlSelfRef.dcache_maint_mode = vlSelfRef.icache_maint_mode;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vcacop_ctrl_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcacop_ctrl_test_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( req_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( req_rob_idx)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( req_code)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( req_vaddr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( req_paddr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( req_xcpt_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( req_xcpt_code)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( req_badvaddr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( resp_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( flush_pending)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( icache_maint_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( icache_maint_done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( dcache_maint_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( dcache_maint_done)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcacop_ctrl_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcacop_ctrl_test_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcacop_ctrl_test_top___024root___ctor_var_reset(Vcacop_ctrl_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcacop_ctrl_test_top___024root___ctor_var_reset\n"); );
    Vcacop_ctrl_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12465084953323796564ull);
    vlSelf->req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539944981316001420ull);
    vlSelf->req_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17352435206221224473ull);
    vlSelf->req_code = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2079809201580763023ull);
    vlSelf->req_vaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14573106402838126490ull);
    vlSelf->req_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14750932541516619065ull);
    vlSelf->req_xcpt_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5914299043913535117ull);
    vlSelf->req_xcpt_code = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12075284018990225868ull);
    vlSelf->req_badvaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10824560403155161726ull);
    vlSelf->resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735948940430534270ull);
    vlSelf->resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5253117115727090143ull);
    vlSelf->resp_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 41267427641225127ull);
    vlSelf->resp_xcpt_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16212983230954213625ull);
    vlSelf->resp_xcpt_code = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17080101372687162285ull);
    vlSelf->resp_badvaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8967106435604616635ull);
    vlSelf->flush_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17809186807470239199ull);
    vlSelf->icache_maint_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2017931023408812460ull);
    vlSelf->icache_maint_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10276577913337125948ull);
    vlSelf->icache_maint_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14491028414796944406ull);
    vlSelf->icache_maint_vaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10195592634230960260ull);
    vlSelf->icache_maint_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9683118982932679328ull);
    vlSelf->icache_maint_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11584045135312293945ull);
    vlSelf->dcache_maint_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15019496260763951365ull);
    vlSelf->dcache_maint_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8855908694721680152ull);
    vlSelf->dcache_maint_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5465232159982932549ull);
    vlSelf->dcache_maint_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15291018427348079394ull);
    vlSelf->dcache_maint_vaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8169253558859121875ull);
    vlSelf->dcache_maint_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4677631790030537220ull);
    vlSelf->dcache_maint_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 364339639101078555ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8480193555688416410ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__rob_idx_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16386913413114360900ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__code_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17634915759164407205ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15239570081464726105ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__paddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17372509846780326235ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9283464259354460916ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9024445812195650657ull);
    vlSelf->cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 959685586336582281ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_rob_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_code__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_vaddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_paddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_xcpt_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_xcpt_code__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_badvaddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__resp_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__flush_pending__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__icache_maint_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__icache_maint_done__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dcache_maint_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dcache_maint_done__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
