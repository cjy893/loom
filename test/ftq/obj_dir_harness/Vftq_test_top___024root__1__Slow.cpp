// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

VL_ATTR_COLD void Vftq_test_top___024root___eval_final(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_final\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vftq_test_top___024root___eval_settle(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_settle\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vftq_test_top___024root___ctor_var_reset(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___ctor_var_reset\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2699135004424038591ull);
    vlSelf->enq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2295098096676757834ull);
    vlSelf->enq_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11118565581476489560ull);
    vlSelf->enq_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1404111583416684849ull);
    vlSelf->enq_br_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4637946741959641756ull);
    vlSelf->enq_cfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9590737507653878544ull);
    vlSelf->enq_cfi_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14015695233665191636ull);
    vlSelf->enq_cfi_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1495398087292680263ull);
    vlSelf->enq_cfi_is_call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9227090078894736724ull);
    vlSelf->enq_cfi_is_ret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14839579699990522760ull);
    vlSelf->enq_cfi_npc_plus4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5455455728114527241ull);
    vlSelf->enq_cfi_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14506346805101860020ull);
    vlSelf->enq_ras_top = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2394476071167364875ull);
    vlSelf->enq_ras_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7438388440478310758ull);
    vlSelf->enq_start_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12284863927828555545ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->enq_ghist, __VscopeHash, 15130395017833091388ull);
    VL_SCOPED_RAND_RESET_W(240, vlSelf->enq_meta, __VscopeHash, 10193026518634340657ull);
    vlSelf->enq_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1309706772640220785ull);
    vlSelf->commit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1248538124957539926ull);
    vlSelf->commit_ftq_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12828011588056435548ull);
    vlSelf->redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5733825445089749461ull);
    vlSelf->redirect_ftq_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2200480871649013273ull);
    vlSelf->brupdate_b2_mispredict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10695173564232964313ull);
    vlSelf->brupdate_b2_ftq_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8211853988230588725ull);
    vlSelf->brupdate_b2_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 948442512094919306ull);
    vlSelf->brupdate_b2_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13792037279461949219ull);
    vlSelf->brupdate_b2_pc_lob = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4561180861367310119ull);
    vlSelf->brupdate_b2_cfi_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4083928571929892898ull);
    vlSelf->bpd_update_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8485723521938598147ull);
    vlSelf->bpd_update_is_mispredict_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 353516733647158569ull);
    vlSelf->bpd_update_is_repair_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6919249178677247398ull);
    vlSelf->bpd_update_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11841839045819897860ull);
    vlSelf->bpd_update_br_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15344290369606465527ull);
    vlSelf->bpd_update_cfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15195524473453214341ull);
    vlSelf->bpd_update_cfi_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12875060087116300543ull);
    vlSelf->bpd_update_cfi_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1552150084224633835ull);
    vlSelf->bpd_update_cfi_mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 566622407074270209ull);
    vlSelf->bpd_update_cfi_is_br = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10518964983782805551ull);
    vlSelf->bpd_update_cfi_is_b_bl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10585987560089131855ull);
    vlSelf->bpd_update_cfi_is_jirl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17453761085535936604ull);
    vlSelf->bpd_update_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18205208034500202584ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->bpd_update_ghist, __VscopeHash, 14737084805384310698ull);
    VL_SCOPED_RAND_RESET_W(240, vlSelf->bpd_update_meta, __VscopeHash, 4892111432106744000ull);
    vlSelf->ghist_restore_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6667802789107535558ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->ghist_restore, __VscopeHash, 15955074343499460993ull);
    vlSelf->ras_repair_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5030001014003729570ull);
    vlSelf->ras_repair_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6908149631196990267ull);
    vlSelf->ras_repair_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5654752080752548303ull);
    vlSelf->query_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 474183351093363481ull);
    vlSelf->query_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14009218176975355105ull);
    vlSelf->query_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3369485557530335602ull);
    vlSelf->query_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1457790059672030785ull);
    vlSelf->query_br_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3732462455421149646ull);
    vlSelf->query_cfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3238972039209017469ull);
    vlSelf->query_cfi_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11379976202134410200ull);
    vlSelf->query_cfi_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8144250813960760491ull);
    vlSelf->query_cfi_is_call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5765798783949708892ull);
    vlSelf->query_cfi_is_ret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5538729490917024802ull);
    vlSelf->query_cfi_npc_plus4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6114611956552785658ull);
    vlSelf->query_cfi_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5639794894727190184ull);
    vlSelf->query_ras_top = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11257863607473634136ull);
    vlSelf->query_ras_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10824082402747942938ull);
    vlSelf->query_start_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11174838396651821081ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->query_ghist, __VscopeHash, 9659864400553355471ull);
}
