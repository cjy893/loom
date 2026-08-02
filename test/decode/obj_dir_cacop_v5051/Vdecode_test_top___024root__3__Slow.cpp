// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

VL_ATTR_COLD void Vdecode_test_top___024root___ctor_var_reset(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___ctor_var_reset\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->status_prv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10252264757765211525ull);
    vlSelf->iq_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6952689915111429397ull);
    vlSelf->fu_code = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14970476383115304167ull);
    vlSelf->ldst = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4012159365059743826ull);
    vlSelf->lsrc1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12770057982006466583ull);
    vlSelf->lsrc2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8880980505464022756ull);
    vlSelf->dst_rtype = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12046815539018353626ull);
    vlSelf->lsrc1_rtype = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8369907302216195800ull);
    vlSelf->lsrc2_rtype = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4832286696774737457ull);
    vlSelf->op1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8197221296664578370ull);
    vlSelf->op2_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6280829177910090033ull);
    vlSelf->fcn_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3204955127654539057ull);
    vlSelf->imm_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12526993102784214647ull);
    vlSelf->imm_packed = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14894001257443134959ull);
    vlSelf->br_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5106123903061439567ull);
    vlSelf->allocate_brtag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16825145593542817584ull);
    vlSelf->is_br = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7737540161767248663ull);
    vlSelf->is_b_bl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4870650367447554979ull);
    vlSelf->is_jirl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13343894793339139136ull);
    vlSelf->uses_ldq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12828323629969544751ull);
    vlSelf->uses_stq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2111131651902414199ull);
    vlSelf->mem_cmd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6257472191606592052ull);
    vlSelf->mem_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17307295816127443787ull);
    vlSelf->mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282029530831230118ull);
    vlSelf->is_unique = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14624854016047831696ull);
    vlSelf->is_rdcnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8888545297073581181ull);
    vlSelf->is_ertn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6519131346778657251ull);
    vlSelf->flush_on_commit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15838463179975901201ull);
    vlSelf->csr_cmd = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12467272236922965782ull);
    vlSelf->tlb_cmd = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4463700740287743532ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
    vlSelf->exc_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4661477134946315351ull);
    vlSelf->exc_adef = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7162319893271254460ull);
    vlSelf->decode_test_top__DOT__dut__DOT__instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1693627821913397514ull);
    VL_ZERO_RESET_W(317, vlSelf->__VdfgRegularize_h6e95ff9d_0_0);
    VL_ZERO_RESET_W(266, vlSelf->__VdfgRegularize_h6e95ff9d_0_1);
    VL_ZERO_RESET_W(317, vlSelf->__VdfgRegularize_h6e95ff9d_0_2);
    VL_ZERO_RESET_W(225, vlSelf->__VdfgRegularize_h6e95ff9d_0_3);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    VL_ZERO_RESET_W(136, vlSelf->__VdfgRegularize_h6e95ff9d_0_7);
    VL_ZERO_RESET_W(249, vlSelf->__VdfgRegularize_h6e95ff9d_0_8);
    VL_ZERO_RESET_W(164, vlSelf->__VdfgRegularize_h6e95ff9d_0_10);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    VL_ZERO_RESET_W(148, vlSelf->__VdfgRegularize_h6e95ff9d_0_13);
    VL_ZERO_RESET_W(187, vlSelf->__VdfgRegularize_h6e95ff9d_0_14);
    VL_ZERO_RESET_W(265, vlSelf->__VdfgRegularize_h6e95ff9d_0_15);
    VL_ZERO_RESET_W(249, vlSelf->__VdfgRegularize_h6e95ff9d_0_16);
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_17);
    VL_ZERO_RESET_W(87, vlSelf->__VdfgRegularize_h6e95ff9d_0_18);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    VL_ZERO_RESET_W(196, vlSelf->__VdfgRegularize_h6e95ff9d_0_23);
    VL_ZERO_RESET_W(194, vlSelf->__VdfgRegularize_h6e95ff9d_0_24);
    VL_ZERO_RESET_W(184, vlSelf->__VdfgRegularize_h6e95ff9d_0_27);
    VL_ZERO_RESET_W(223, vlSelf->__VdfgRegularize_h6e95ff9d_0_28);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__inst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pc__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__status_prv__0 = 0;
    vlSelf->__VicoDidInit = 0;
}
