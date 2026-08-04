// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico__3(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___dump_triggers__ico__3\n"); );
    // Body
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}

bool Vrename_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vrename_test_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vrename_test_top___024root___ctor_var_reset_0(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ctor_var_reset_0\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->in_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2339549897027650563ull);
    vlSelf->in_lsrc1_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9441778357284378824ull);
    vlSelf->in_lsrc2_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9328874893547998570ull);
    vlSelf->in_ldst_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 102810951074494803ull);
    vlSelf->in_br_mask_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5055373003752791275ull);
    vlSelf->in_lsrc1_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5318597636850678534ull);
    vlSelf->in_lsrc2_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18034370551650116565ull);
    vlSelf->in_ldst_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13082566200306670318ull);
    vlSelf->in_br_mask_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1025446021710995784ull);
    vlSelf->in_allocate_brtag_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7793890753369403813ull);
    vlSelf->in_br_tag_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9616741249176590783ull);
    vlSelf->in_allocate_brtag_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5958308027354702709ull);
    vlSelf->in_br_tag_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2187604482301815286ull);
    vlSelf->wakeup_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1365023594416796541ull);
    vlSelf->wakeup_pdst = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8685798821636643213ull);
    vlSelf->commit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1248538124957539926ull);
    vlSelf->commit_ldst = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15154423228884520275ull);
    vlSelf->commit_pdst = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9587549039861473010ull);
    vlSelf->commit_stale_pdst = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5042553690246322628ull);
    vlSelf->rollback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13980066892625981097ull);
    vlSelf->kill = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10303986350005360185ull);
    vlSelf->br_mispredict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4207249113304258111ull);
    vlSelf->br_mispredict_tag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17618662444340984845ull);
    vlSelf->br_resolve_mask = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18203469718490629511ull);
    vlSelf->br_mispredict_mask = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13318564711002406359ull);
    vlSelf->dis_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2739549104283963648ull);
    vlSelf->dis_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13019747401702078286ull);
    vlSelf->out_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2886291494070200219ull);
    vlSelf->out_psrc1_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11885027578376585511ull);
    vlSelf->out_psrc2_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2337523506145339504ull);
    vlSelf->out_pdst_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9252697610902813184ull);
    vlSelf->out_stale_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4472557566278820789ull);
    vlSelf->out_psrc1_busy_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12103200997960804148ull);
    vlSelf->out_psrc1_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17939444170743053822ull);
    vlSelf->out_psrc2_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9753466494787683538ull);
    vlSelf->out_pdst_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8290567963936383785ull);
    vlSelf->out_stale_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17278393063140490999ull);
    vlSelf->out_psrc1_busy_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16175178957147736258ull);
    vlSelf->out_br_mask_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3446912107828191737ull);
    vlSelf->out_br_mask_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9980305923963358212ull);
    vlSelf->stalls = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17444179603170070137ull);
    VL_SCOPED_RAND_RESET_W(504, vlSelf->rename_test_top__DOT__brupdate, __VscopeHash, 17442337496313795723ull);
    vlSelf->rename_test_top__DOT__dut__DOT__mt_write_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6061442864784576794ull);
    vlSelf->rename_test_top__DOT__dut__DOT__mt_write_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7455194116664972085ull);
    vlSelf->rename_test_top__DOT__dut__DOT__mt_write_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7720340371701426703ull);
    vlSelf->rename_test_top__DOT__dut__DOT__mt_commit_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11562384744786491073ull);
    vlSelf->rename_test_top__DOT__dut__DOT__mt_commit_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4793324207567789094ull);
    vlSelf->rename_test_top__DOT__dut__DOT__mt_arch_busy_vec = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10855723181129887591ull);
    vlSelf->rename_test_top__DOT__dut__DOT__br_snapshot_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10622920362692426080ull);
    vlSelf->rename_test_top__DOT__dut__DOT__br_snapshot_tag = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4825450858203575466ull);
    vlSelf->rename_test_top__DOT__dut__DOT__fl_free_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6099963267236056132ull);
    vlSelf->rename_test_top__DOT__dut__DOT__fl_free_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 247170009709196592ull);
    vlSelf->rename_test_top__DOT__dut__DOT__rn2_mask_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13163199741796265382ull);
    vlSelf->rename_test_top__DOT__dut__DOT__rn2_mask_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12910276259729955061ull);
    VL_SCOPED_RAND_RESET_W(838, vlSelf->rename_test_top__DOT__dut__DOT__rn2_uops_q, __VscopeHash, 16798189210375624926ull);
    VL_SCOPED_RAND_RESET_W(838, vlSelf->rename_test_top__DOT__dut__DOT__rn2_uops_next, __VscopeHash, 12164506950400799814ull);
    vlSelf->rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 9085157739739993553ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10605974833078947431ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask[__Vi0] = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 5805248579898933982ull);
    }
    VL_SCOPED_RAND_RESET_W(168, vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix, __VscopeHash, 17068521903072275742ull);
    vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 18233498489083090556ull);
    vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 15217400767189826153ull);
    vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16260325687965822892ull);
    vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec_next = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 2467628260587674138ull);
    vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 18034274301849201998ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick, __VscopeHash, 10866036641901292357ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13827977006732563858ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16389183929614141292ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7856227142528027684ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16575793501431335817ull);
        }
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_22 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_36 = 0;
}
