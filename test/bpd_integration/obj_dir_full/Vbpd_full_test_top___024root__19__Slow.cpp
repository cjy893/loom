// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__ico__3(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___dump_triggers__ico__3\n"); );
    // Body
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}

bool Vbpd_full_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vbpd_full_test_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vbpd_full_test_top___024root___ctor_var_reset_0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ctor_var_reset_0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->f0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17964792061724107863ull);
    vlSelf->f0_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3742133646934385567ull);
    vlSelf->f1_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4387276564496598276ull);
    vlSelf->f1_is_br = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4332619509236552811ull);
    vlSelf->f1_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11556738033151983535ull);
    vlSelf->f1_is_call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11297961219662271135ull);
    vlSelf->f1_is_ret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4795643274001586487ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->ubtb_f1_preds, __VscopeHash, 4898921332630914510ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->bim_f2_preds, __VscopeHash, 4224500133819964ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->btb_f3_preds, __VscopeHash, 1461468576785166389ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->bim_f2_meta, __VscopeHash, 7460770200636899654ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->current_ghist, __VscopeHash, 13719217505266853371ull);
    vlSelf->bim_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15374399794578234125ull);
    vlSelf->ras_read_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1494051225844018983ull);
    vlSelf->ras_read_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 969787211295054673ull);
    vlSelf->ghist_restore_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6667802789107535558ull);
    vlSelf->restore_old_history = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13993382063235890643ull);
    vlSelf->restore_saw_nt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 791593791889020483ull);
    vlSelf->restore_ras_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14868844846213778856ull);
    vlSelf->update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13941482127321219686ull);
    vlSelf->update_is_mispredict_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451351922404287402ull);
    vlSelf->update_is_repair_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17197372016578446650ull);
    vlSelf->update_btb_mispredicts = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6520835924358661650ull);
    vlSelf->update_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11352593715495909995ull);
    vlSelf->update_br_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 19976910656026784ull);
    vlSelf->update_cfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822491377217541407ull);
    vlSelf->update_cfi_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16677182931808609609ull);
    vlSelf->update_cfi_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12276587686021965731ull);
    vlSelf->update_cfi_mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5908311946667342542ull);
    vlSelf->update_cfi_is_br = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8434356096023520974ull);
    vlSelf->update_cfi_is_b_bl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15370559430566382981ull);
    vlSelf->update_cfi_is_jirl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 141205718059196603ull);
    vlSelf->update_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7030701398616043476ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->update_meta, __VscopeHash, 11561886820011511920ull);
    VL_SCOPED_RAND_RESET_W(293, vlSelf->bpd_full_test_top__DOT__update_packed, __VscopeHash, 9096012233956710740ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->bpd_full_test_top__DOT__restore_packed, __VscopeHash, 6948866869157945324ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9972757322059690360ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(120, vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__entries[__Vi0], __VscopeHash, 3933215563089738107ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 858621965440556346ull);
    }
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4041805504261433303ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__s1_set = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2624306055271024185ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__s1_tag = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10438264933459636041ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9124559043447800154ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__s2_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4408465588856799921ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__s2_entry, __VscopeHash, 12107779698473263201ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__f3_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252603022956164064ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__f3_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12298875978842385090ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__f3_entry, __VscopeHash, 3490860721116187279ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in, __VscopeHash, 1282787449268545595ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9617266273359899742ull);
    vlSelf->bpd_full_test_top__DOT__btb_inst__DOT__do_allocate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14452437203015687754ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__ram[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3359267889558189202ull);
        }
    }
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3496960260462044623ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s1_rdata = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3516362512865452058ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s1_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10700027118602572047ull);
    VL_SCOPED_RAND_RESET_W(293, vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s1_update, __VscopeHash, 2684761998844626384ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3014079901793658436ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in, __VscopeHash, 6382907420651203525ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7100937252882727576ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6740795615289128771ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13668148362281655183ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__upd_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8425412137591773770ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5614246133623023558ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8612487299272302658ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1622681925448444084ull);
    }
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hits = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9364184573778899184ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3238339646778079531ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17974549058146310502ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7886398118383190040ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__doing_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17481517543291015100ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__rst_col = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 536579306575698401ull);
    vlSelf->bpd_full_test_top__DOT__bim_inst__DOT__rst_set = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4422602628901487540ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5834653906947136345ull);
    VL_SCOPED_RAND_RESET_W(1040, vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__entries, __VscopeHash, 8980269446947875287ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13760635972586785826ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15313316775639083527ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16478295943565152332ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1873820681564520233ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17327757585301881224ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3419190466766661684ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11931382091167590390ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__do_allocate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12853226890415190478ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10620399406086344570ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5377830575832172027ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10287977076667144488ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4960286544184551727ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387070696947751497ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 661127222392110385ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9968604972486311330ull);
    vlSelf->bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1148326134381653463ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->bpd_full_test_top__DOT__ras_inst__DOT__stack[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18004897271778423077ull);
    }
    vlSelf->bpd_full_test_top__DOT__ghist_inst__DOT__hist = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14648549228988229110ull);
    vlSelf->bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12024313365129388853ull);
    vlSelf->bpd_full_test_top__DOT__ghist_inst__DOT__saw_nt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10505957285847168349ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
}
