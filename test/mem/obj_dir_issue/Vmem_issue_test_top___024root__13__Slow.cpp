// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___eval_static__TOP(Vmem_issue_test_top___024root* vlSelf);

VL_ATTR_COLD void Vmem_issue_test_top___024root___eval_static__0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_static__0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmem_issue_test_top___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__rob_head_idx__0 
        = vlSelfRef.rob_head_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_valid__0 = vlSelfRef.dis_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx__0 
        = vlSelfRef.dis_rob_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1__0 = vlSelfRef.dis_psrc1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2__0 = vlSelfRef.dis_psrc2;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy__0 
        = vlSelfRef.dis_psrc1_busy;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy__0 
        = vlSelfRef.dis_psrc2_busy;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen__0 
        = vlSelfRef.dis_use_agen;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen__0 
        = vlSelfRef.dis_use_dgen;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_br_mask__0 
        = vlSelfRef.dis_br_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_valid_1__0 
        = vlSelfRef.dis_valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx_1__0 
        = vlSelfRef.dis_rob_idx_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_1__0 
        = vlSelfRef.dis_psrc1_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_1__0 
        = vlSelfRef.dis_psrc2_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy_1__0 
        = vlSelfRef.dis_psrc1_busy_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy_1__0 
        = vlSelfRef.dis_psrc2_busy_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen_1__0 
        = vlSelfRef.dis_use_agen_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen_1__0 
        = vlSelfRef.dis_use_dgen_1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_br_mask_1__0 
        = vlSelfRef.dis_br_mask_1;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_0__0 
        = vlSelfRef.wakeup_valid_0;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_0__0 
        = vlSelfRef.wakeup_pdst_0;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_1__0 
        = vlSelfRef.wakeup_valid_1;
    vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_1__0 
        = vlSelfRef.wakeup_pdst_1;
    vlSelfRef.__Vtrigprevexpr___TOP__src1_data__0 = vlSelfRef.src1_data;
    vlSelfRef.__Vtrigprevexpr___TOP__src2_data__0 = vlSelfRef.src2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__imm_data__0 = vlSelfRef.imm_data;
    vlSelfRef.__Vtrigprevexpr___TOP__resolve_mask__0 
        = vlSelfRef.resolve_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__mispredict_mask__0 
        = vlSelfRef.mispredict_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0 
        = vlSelfRef.br_mispredict;
    vlSelfRef.__Vtrigprevexpr___TOP__flush_pipeline__0 
        = vlSelfRef.flush_pipeline;
}

VL_ATTR_COLD void Vmem_issue_test_top___024root___ctor_var_reset_0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ctor_var_reset_0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->rob_head_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17477571887129178285ull);
    vlSelf->dis_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18199756259924936641ull);
    vlSelf->dis_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2739549104283963648ull);
    vlSelf->dis_rob_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6349269633989764627ull);
    vlSelf->dis_psrc1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9894951713930312959ull);
    vlSelf->dis_psrc2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14464276449527082293ull);
    vlSelf->dis_psrc1_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16000048451949594355ull);
    vlSelf->dis_psrc2_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7138736636689697608ull);
    vlSelf->dis_use_agen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3672133151536583016ull);
    vlSelf->dis_use_dgen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4743687424322479646ull);
    vlSelf->dis_br_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4807911286982792624ull);
    vlSelf->dis_valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546545481900518465ull);
    vlSelf->dis_ready_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13422021963393325301ull);
    vlSelf->dis_rob_idx_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11866946954357149339ull);
    vlSelf->dis_psrc1_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14770069241716314855ull);
    vlSelf->dis_psrc2_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2985819725239609314ull);
    vlSelf->dis_psrc1_busy_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13854721555554141771ull);
    vlSelf->dis_psrc2_busy_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 667896399426623600ull);
    vlSelf->dis_use_agen_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 836029340082964439ull);
    vlSelf->dis_use_dgen_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16906213544342605414ull);
    vlSelf->dis_br_mask_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13985774717409731216ull);
    vlSelf->wakeup_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12850997718700873171ull);
    vlSelf->wakeup_pdst_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7272207431539058999ull);
    vlSelf->wakeup_valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6752011017713353644ull);
    vlSelf->wakeup_pdst_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3020963727616712506ull);
    vlSelf->src1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10771041567548021431ull);
    vlSelf->src2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13378938079437600379ull);
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
    vlSelf->mem_issue_test_top__DOT__dis_valid_vec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5545103877867511570ull);
    vlSelf->mem_issue_test_top__DOT__dis_ready_vec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12383614854081925957ull);
    vlSelf->mem_issue_test_top__DOT__iss_valid_vec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15811328559684215526ull);
    vlSelf->mem_issue_test_top__DOT__wakeup_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12988650995347180312ull);
    vlSelf->mem_issue_test_top__DOT__wakeup_pdst = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3179540096165117166ull);
    VL_SCOPED_RAND_RESET_W(504, vlSelf->mem_issue_test_top__DOT__brupdate, __VscopeHash, 6041905114954873358ull);
    VL_ZERO_RESET_W(419, vlSelf->mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11147881629937541573ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17833882381222479413ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 441803604784556819ull);
    VL_SCOPED_RAND_RESET_W(419, vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop, __VscopeHash, 13437022322621245296ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1513105702440983874ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11530168068708007663ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11497750262232912320ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1962662193887785648ull);
    VL_SCOPED_RAND_RESET_W(419, vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_uop, __VscopeHash, 3119624283110872215ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10886766018943022978ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2135989278577033268ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14957279074730482390ull);
    vlSelf->mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231170275172864628ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15885079130154288237ull);
    VL_SCOPED_RAND_RESET_W(1676, vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_uop, __VscopeHash, 3372798216748173763ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7967108297369692501ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4644045559383203477ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13166025498039614665ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_complete = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7097146804025057100ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17375842586703492397ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14187680375706578119ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__issue_agen = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5691246166159663278ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8732299642100214244ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11947337670068089006ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11879229170832610569ull);
    VL_SCOPED_RAND_RESET_W(838, vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated, __VscopeHash, 7981143148826978776ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12757468992159755690ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__older_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15866186445833088696ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__older_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15788202530101165832ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15540029099996156133ull);
    vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__survivor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17238088333415616273ull);
    VL_SCOPED_RAND_RESET_W(1676, vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms, __VscopeHash, 6655566449753370945ull);
    VL_SCOPED_RAND_RESET_W(419, vlSelf->mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits, __VscopeHash, 10982251680939148963ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    VL_ZERO_RESET_W(1676, vlSelf->__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rob_head_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_rob_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc1_busy__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_psrc2_busy__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_use_agen__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_use_dgen__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dis_br_mask__0 = 0;
}
