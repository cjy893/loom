// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico__2(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___dump_triggers__ico__2\n"); );
    // Body
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( br_mispredict)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( flush_pipeline)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}

bool Vmem_issue_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmem_issue_test_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vmem_issue_test_top___024root___ctor_var_reset(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ctor_var_reset\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->dis_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18199756259924936641ull);
    vlSelf->dis_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2739549104283963648ull);
    vlSelf->dis_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6349269633989764627ull);
    vlSelf->dis_prs1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6895211821585443027ull);
    vlSelf->dis_prs2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1844015278512591885ull);
    vlSelf->dis_prs1_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14982169725351504555ull);
    vlSelf->dis_prs2_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9645560170112052401ull);
    vlSelf->dis_use_agen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3672133151536583016ull);
    vlSelf->dis_use_dgen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4743687424322479646ull);
    vlSelf->wakeup_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12850997718700873171ull);
    vlSelf->wakeup_pdst_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7272207431539058999ull);
    vlSelf->wakeup_valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6752011017713353644ull);
    vlSelf->wakeup_pdst_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3020963727616712506ull);
    vlSelf->rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16624318508599476813ull);
    vlSelf->rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10683005467506302743ull);
    vlSelf->imm_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14241541078639530634ull);
    vlSelf->resolve_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14234034982933503054ull);
    vlSelf->mispredict_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15371513664559499429ull);
    vlSelf->br_mispredict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4207249113304258111ull);
    vlSelf->flush_pipeline = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12364968460667121080ull);
    vlSelf->iss_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4695317264362533219ull);
    vlSelf->iss_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2448561813516813088ull);
    vlSelf->iss_use_agen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11105278714845378409ull);
    vlSelf->iss_use_dgen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11800595242556724360ull);
    vlSelf->agen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13381973064760386327ull);
    vlSelf->agen_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8958825175798947229ull);
    vlSelf->agen_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3616520479625800697ull);
    vlSelf->dgen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11272434236502293061ull);
    vlSelf->dgen_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5631711421683092926ull);
    vlSelf->dgen_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13907451562507241840ull);
    vlSelf->mem_issue_test_top__DOT__dis_ready_vec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12383614854081925957ull);
    vlSelf->mem_issue_test_top__DOT__iss_valid_vec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15811328559684215526ull);
    vlSelf->mem_issue_test_top__DOT__wakeup_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12988650995347180312ull);
    vlSelf->mem_issue_test_top__DOT__wakeup_pdst = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3179540096165117166ull);
    VL_SCOPED_RAND_RESET_W(492, vlSelf->mem_issue_test_top__DOT__brupdate, __VscopeHash, 6041905114954873358ull);
    VL_ZERO_RESET_W(411, vlSelf->mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11147881629937541573ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17833882381222479413ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 441803604784556819ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop, __VscopeHash, 13437022322621245296ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3370043407115625028ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11523690793125875583ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11497750262232912320ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1962662193887785648ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_uop, __VscopeHash, 3119624283110872215ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4927386791077301491ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17203815321602855734ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14957279074730482390ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231170275172864628ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15885079130154288237ull);
    VL_SCOPED_RAND_RESET_W(1644, vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_uop, __VscopeHash, 3372798216748173763ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7967108297369692501ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4644045559383203477ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13166025498039614665ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11947337670068089006ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated, __VscopeHash, 7981143148826978776ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    VL_ZERO_RESET_W(1644, vlSelf->__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_rob_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_prs1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_prs2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_prs1_busy__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_prs2_busy__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_use_agen__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_use_dgen__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_valid_0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_pdst_0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_valid_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wakeup_pdst_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rs1_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rs2_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__imm_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__resolve_mask__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mispredict_mask__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__br_mispredict__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__flush_pipeline__0 = 0;
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
