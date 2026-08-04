// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

VL_ATTR_COLD void Vrename_test_top___024root___eval_static(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_static\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__in_valid__0 = vlSelfRef.in_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc1_0__0 
        = vlSelfRef.in_lsrc1_0;
    vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc2_0__0 
        = vlSelfRef.in_lsrc2_0;
    vlSelfRef.__Vtrigprevexpr___TOP__in_ldst_0__0 = vlSelfRef.in_ldst_0;
    vlSelfRef.__Vtrigprevexpr___TOP__in_br_mask_0__0 
        = vlSelfRef.in_br_mask_0;
    vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc1_1__0 
        = vlSelfRef.in_lsrc1_1;
    vlSelfRef.__Vtrigprevexpr___TOP__in_lsrc2_1__0 
        = vlSelfRef.in_lsrc2_1;
    vlSelfRef.__Vtrigprevexpr___TOP__in_ldst_1__0 = vlSelfRef.in_ldst_1;
    vlSelfRef.__Vtrigprevexpr___TOP__in_br_mask_1__0 
        = vlSelfRef.in_br_mask_1;
    vlSelfRef.__Vtrigprevexpr___TOP__in_allocate_brtag_0__0 
        = vlSelfRef.in_allocate_brtag_0;
    vlSelfRef.__Vtrigprevexpr___TOP__in_br_tag_0__0 
        = vlSelfRef.in_br_tag_0;
    vlSelfRef.__Vtrigprevexpr___TOP__in_allocate_brtag_1__0 
        = vlSelfRef.in_allocate_brtag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__in_br_tag_1__0 
        = vlSelfRef.in_br_tag_1;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid__0 
        = vlSelfRef.wakeup_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst__0 
        = vlSelfRef.wakeup_pdst;
    vlSelfRef.__Vtrigprevexpr___TOP__commit_valid__0 
        = vlSelfRef.commit_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__commit_ldst__0 
        = vlSelfRef.commit_ldst;
    vlSelfRef.__Vtrigprevexpr___TOP__commit_pdst__0 
        = vlSelfRef.commit_pdst;
    vlSelfRef.__Vtrigprevexpr___TOP__commit_stale_pdst__0 
        = vlSelfRef.commit_stale_pdst;
    vlSelfRef.__Vtrigprevexpr___TOP__rollback__0 = vlSelfRef.rollback;
    vlSelfRef.__Vtrigprevexpr___TOP__kill__0 = vlSelfRef.kill;
    vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0 
        = vlSelfRef.br_mispredict;
    vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict_tag__0 
        = vlSelfRef.br_mispredict_tag;
    vlSelfRef.__Vtrigprevexpr___TOP__br_resolve_mask__0 
        = vlSelfRef.br_resolve_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict_mask__0 
        = vlSelfRef.br_mispredict_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_ready__0 = vlSelfRef.dis_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_fire__0 = vlSelfRef.dis_fire;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vrename_test_top___024root___eval_initial(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_initial\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vrename_test_top___024root___eval_final(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_final\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrename_test_top___024root___eval_phase__stl(Vrename_test_top___024root* vlSelf);

VL_ATTR_COLD void Vrename_test_top___024root___eval_settle(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_settle\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrename_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/rename/rename_test_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vrename_test_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}
