// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__ico__2(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___dump_triggers__ico__2\n"); );
    // Body
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( ipi_irq)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}

bool Vcsr_file_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcsr_file_test_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vcsr_file_test_top___024root___ctor_var_reset_0(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___ctor_var_reset_0\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->csr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15321472922041309029ull);
    vlSelf->csr_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6664746767044046675ull);
    vlSelf->csr_req_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9385116963720806805ull);
    vlSelf->csr_req_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1589251417961806730ull);
    vlSelf->csr_cmd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12467272236922965782ull);
    vlSelf->csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6382147037310304714ull);
    vlSelf->csr_wmask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6105116862850729686ull);
    vlSelf->csr_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17616299213386429325ull);
    vlSelf->csr_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10437355190764420998ull);
    vlSelf->csr_resp_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17347181830661573883ull);
    vlSelf->csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686967141507380524ull);
    vlSelf->csr_commit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12067149303297005596ull);
    vlSelf->csr_commit_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9418244197944189215ull);
    vlSelf->csr_flush_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11671704401831121547ull);
    vlSelf->xcpt_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16031708268220374240ull);
    vlSelf->xcpt_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15840462721358587073ull);
    vlSelf->xcpt_code = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17611019330043043742ull);
    vlSelf->xcpt_esubcode = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12379127955234504771ull);
    vlSelf->xcpt_badvaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15015679604254540579ull);
    vlSelf->ertn_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9065464773567083468ull);
    vlSelf->hw_irq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15931156668881404995ull);
    vlSelf->ipi_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14014328947208719334ull);
    vlSelf->interrupt_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17105965950086130003ull);
    vlSelf->interrupt_pending_bits = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12428248462595774085ull);
    vlSelf->current_plv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5699408198838797458ull);
    vlSelf->current_ie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13070653684086786965ull);
    vlSelf->xcpt_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11979783279439263552ull);
    vlSelf->ertn_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11511928007309542333ull);
    vlSelf->crmd_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13611001234836125982ull);
    vlSelf->asid_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1908206845251351056ull);
    vlSelf->dmw0_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13199344208912795227ull);
    vlSelf->dmw1_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3437338221515388151ull);
    vlSelf->era_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3465733228518119629ull);
    vlSelf->eentry_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3258883052003636273ull);
    vlSelf->tlbrentry_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5959623040687175606ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__crmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12479268449099511642ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__prmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13767733758030771116ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__euen_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 122572689188036501ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__ecfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3685913467897747470ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__estat_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4285482527267652817ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__era_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10191983667258098925ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__badv_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4228277822546300882ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__eentry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8934297588518449977ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tlbidx_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17159201333530795996ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tlbehi_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3712049400287706382ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tlbelo0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7930313799261070864ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tlbelo1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11933820771098673698ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__asid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16092034191397359069ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pgdl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9048129521538977887ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pgdh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 98808224665106192ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->csr_file_test_top__DOT__dut__DOT__save_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5092460357637832836ull);
    }
    vlSelf->csr_file_test_top__DOT__dut__DOT__tid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11137176416975562807ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tcfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2198340471385446987ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6981650911604263593ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__llbctl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11575546641718001248ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__tlbrentry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13994188410022016525ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__dmw0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1808698071352381718ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__dmw1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3250646624682278419ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__stable_counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12923782843716807187ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__timer_irq_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14605024435838465581ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__timer_armed_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15224500383152906069ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548905226920646854ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4811904393746649283ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pending_addr_q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11735507460652632708ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pending_cmd_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3331151385104722901ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pending_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9555371632981869571ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__pending_wmask_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5667366558670259535ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__resp_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15378075334788761376ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__resp_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17235775412036163783ull);
    vlSelf->csr_file_test_top__DOT__dut__DOT__commit_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11523487058375050371ull);
    vlSelf->__Vdly__csr_file_test_top__DOT__dut__DOT__stable_counter_q = 0;
    vlSelf->__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q = 0;
    vlSelf->__Vdly__csr_file_test_top__DOT__dut__DOT__tcfg_q = 0;
    vlSelf->__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q = 0;
    vlSelf->__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q = 0;
    vlSelf->__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q = 0;
    vlSelf->__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v0 = 0;
    vlSelf->__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v0 = 0;
    vlSelf->__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v1 = 0;
    vlSelf->__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v1 = 0;
    vlSelf->__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v2 = 0;
    vlSelf->__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v2 = 0;
    vlSelf->__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v3 = 0;
    vlSelf->__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v3 = 0;
    vlSelf->__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v4 = 0;
    vlSelf->__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v5 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_req_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_req_rob_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_req_addr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_cmd__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_wdata__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_wmask__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_resp_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_commit_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csr_commit_rob_idx__0 = 0;
}
