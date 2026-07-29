// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore_top_contract_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__0(Vcore_top_contract_test_top___024root* vlSelf);
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___stl_sequent__TOP__1(Vcore_top_contract_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vcore_top_contract_test_top___024root___eval_phase__stl(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__stl\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vcore_top_contract_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcore_top_contract_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vcore_top_contract_test_top___024root___stl_sequent__TOP__0(vlSelf);
                Vcore_top_contract_test_top___024root___stl_sequent__TOP__1(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vcore_top_contract_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcore_top_contract_test_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( imem_req_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( imem_resp_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( imem_resp_insts)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( dmem_req_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( dmem_resp_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( dmem_resp_is_store)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( dmem_resp_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( dmem_resp_idx)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( hw_irq)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( ipi_irq)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcore_top_contract_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcore_top_contract_test_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vcore_top_contract_test_top___024root___ctor_var_reset(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___ctor_var_reset\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->imem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16078812764813148173ull);
    vlSelf->imem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295164739498033148ull);
    vlSelf->imem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14008838257255596747ull);
    vlSelf->imem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7387687715032006181ull);
    vlSelf->imem_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9314145971151784139ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->imem_resp_insts, __VscopeHash, 11201529057722218681ull);
    vlSelf->dmem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11163449224025498003ull);
    vlSelf->dmem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10088607018490729786ull);
    vlSelf->dmem_req_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 26205096547695164ull);
    vlSelf->dmem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 642292657722991981ull);
    vlSelf->dmem_req_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7591348588679148855ull);
    vlSelf->dmem_req_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7075930637259986089ull);
    vlSelf->dmem_req_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1750966613358248268ull);
    vlSelf->dmem_req_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 854278469646108965ull);
    vlSelf->dmem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5774640918001958128ull);
    vlSelf->dmem_resp_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6620712772984753936ull);
    vlSelf->dmem_resp_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11518110768268596214ull);
    vlSelf->dmem_resp_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14293880863806092472ull);
    vlSelf->hw_irq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15931156668881404995ull);
    vlSelf->ipi_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14014328947208719334ull);
    vlSelf->commit_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1248538124957539926ull);
    vlSelf->commit_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13273871951109446755ull);
    vlSelf->commit_inst = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5128824248803840457ull);
    vlSelf->commit_ldst = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15154423228884520275ull);
    vlSelf->exception_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18324506416411141223ull);
    vlSelf->exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16612269061222115007ull);
    vlSelf->exception_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7379024239501400619ull);
    vlSelf->exception_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11889171423339542449ull);
    vlSelf->exception_badvaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16056280132858937064ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17266037997657024377ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__ifu_fetch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1297272715207511406ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7246291008641417971ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15338936855610032004ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_insts = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1623686255828985838ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__buffer_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1586843854505200251ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8572988376765721785ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_redirect_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5008947115754344866ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__arch_valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18135901330014148548ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__uops, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__fp_flags = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__debug_insts = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core_commit.__PVT__debug_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18135901330014148548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15692314158446377743ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3600439102156859411ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12331918938310761417ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 829786263933877639ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_uops, __VscopeHash, 8549535545622266609ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__next_decode_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17192591130643301011ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dec_pcs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4400458675984337098ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unique_dispatch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10744214551817664008ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_finished_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 862898786102837704ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__fe_completed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3461984874343898093ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_mem_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 230177316574804092ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_alu_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1754504598222605782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iq_unq_dis_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6855664172045629973ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1027793631038509218ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15515717777489443293ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq_dis_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15422386784730499310ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7730867471137643342ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dis_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13934260624498193047ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_iq_type_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2606812677267845634ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_exception_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2037723065496602122ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_unique_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17044856302190000494ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uses_ldq_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13163379442945628760ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_uses_stq_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16544709295500998514ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rn2_pc_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8933711423102691611ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_req_ready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4358789697493958061ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_ertn_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5731566896267456660ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_counter_value_w = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17796316469545479252ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_br_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5077822733146322984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__bm_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10486858077888349057ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_in_uops, __VscopeHash, 4603605814139308203ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iss_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4895143352307656256ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iss_valid__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3533557954142846819ull);
    VL_ZERO_RESET_W(1233, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__alu_iq__iss_uop);
    VL_ZERO_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__mem_iq__iss_uop);
    VL_ZERO_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8350128268744822169ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 4929091318504920177ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data, __VscopeHash, 148534381932496232ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10331254913056886610ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18135193927075115785ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_wakeup_valid__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16078486679126578891ull);
    VL_SCOPED_RAND_RESET_W(451, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_xcpt__BRA__450__03a0__KET__, __VscopeHash, 252450466377355563ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5610048627726506957ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_clr_bsy_rob_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7389923427213069017ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_load_wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4791551107220928852ull);
    VL_ZERO_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__lsu_inst__commit_uops);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_res_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145123784549687944ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_exec_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12542282200172160595ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_inst__src2_data = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_tail_idx_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8611600169860673327ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_head_idx_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5138269493548462808ull);
    VL_SCOPED_RAND_RESET_W(2706, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_wb_resps, __VscopeHash, 7870204114334927270ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_com_xcpt_w, __VscopeHash, 8487389894758906454ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_interrupt_next_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1659084673176525078ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__rob_inst__enq_partial_stall = 0;
    VL_SCOPED_RAND_RESET_W(492, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brupdate_w, __VscopeHash, 17140793154739265952ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__res_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__gen_mem__BRA__0__KET____DOT__mem_inst__agen_valid = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12747597651509187522ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop, __VscopeHash, 17365173913315775709ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16084157371760653278ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 557430192972526241ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14388427671501948002ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__busy_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16269996464968670313ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6062528273819237385ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__issue_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9384704252032951315ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4518868946853341503ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__div_req_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12199654180191949754ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT____Vcellinp__divider_i__kill = 0;
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__dividend_abs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5242546486534960995ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__divisor_abs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6579378568904266091ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__quotient_negate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456414893013831250ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__remainder_negate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3308163666415259409ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__select_remainder_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2972385336558421346ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__divisor_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432618433588190415ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14595418976908683602ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8811963804524601680ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__divisor_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 9228998394999626506ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_count_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6068180592172619739ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_index_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10161975606004551784ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__recovery_shift_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2007451303325140616ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_digit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7290500583629539826ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_after_digit = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7658621512397180185ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10133523737129219573ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient_minus_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8061701922532255964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 391815740910549866ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15015493563316529579ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__quotient_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2064748370390174213ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__remainder_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6803506417794784361ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 380907717622217271ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__resp_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1344809847772062129ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14401135715169404333ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14049772194976342241ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_write_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13040366522719164286ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14904486999298088654ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2934194288558082341ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_commit_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6968535710376973270ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__mt_arch_busy_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17684844683453693582ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__br_snapshot_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13527039529883217408ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__br_snapshot_tag = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2300068775314325809ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6311015384169830331ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__fl_free_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11461667752595323872ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_en = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5152657667885721620ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__bt_wakeup_preg = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16174483867028016525ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17326015110246477183ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_mask_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15278013877102380372ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_q, __VscopeHash, 5774068619822437864ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__rn2_uops_next, __VscopeHash, 679951275173041366ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__busytable__DOT__busy_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 7666280077953967708ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 10784806796889743156ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask[__Vi0] = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 3337591301498604255ull);
    }
    VL_SCOPED_RAND_RESET_W(144, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_suffix, __VscopeHash, 574166636546218914ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_mask_all = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13074690927201465144ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_free_mask = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14711911121333163500ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4751436972737816073ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__free_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2155315046594134284ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__alloc_cand = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10536127157931554590ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 302928011135521804ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6479411467484828037ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7764610587456553980ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_after_lane[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10824158531946836098ull);
        }
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10718532903833614203ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6211881426429265083ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5688471617329916708ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ldq_enq_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15925421590804167259ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10794767308080858130ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8295773226383993996ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4382585760566381732ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__stq_enq_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6254062791331766000ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12751063316436696426ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12166217895783267734ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4476362485669241061ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14562878351758173363ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_query_forward_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6039096684189441025ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__ld_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9534020081272057949ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__st_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 173912463801759097ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__arb_locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5498792322814579729ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__locked_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 660225782390601055ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__prefer_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6908601215861283362ull);
    VL_SCOPED_RAND_RESET_W(7712, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries, __VscopeHash, 8405975240839243699ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__next_gen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5852198563296297628ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8910684938332055524ull);
    VL_SCOPED_RAND_RESET_W(964, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_entries, __VscopeHash, 12385857772606772816ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1400128153061549579ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__enq_write = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15913085767320481162ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__alloc_hint_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5416439060052488118ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__clr_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5115713103972481020ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_fifo, __VscopeHash, 204816927416148679ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_head = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8137911176342128504ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16310086408219996112ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17798743057838394768ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4976870208427302041ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_write_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15968146917067145037ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8002336324034159788ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__commit_push_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3544764183732156160ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_tail_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5739686758773939926ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_commiting = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1656216841372411277ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_head_tag = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16344085387394540347ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16510514973533879567ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2308534615256944864ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 543651495457399119ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11379536126013997498ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_uop, __VscopeHash, 9396590674241560547ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7796775034350985443ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__store_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8139941187886253034ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6851260257174877934ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__ack_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 163483781112985869ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__cq_count_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6762078639103809433ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entry_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10133057112025124904ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__agen_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5891980563565666279ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__dgen_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1983024256444436022ull);
    VL_SCOPED_RAND_RESET_W(7168, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries, __VscopeHash, 636674277303937207ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__next_gen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16776869802132451060ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7252223506154947620ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__query_cursor = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17898759262212962082ull);
    VL_SCOPED_RAND_RESET_W(896, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_entries, __VscopeHash, 4474615668555603075ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16163033158216252312ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__enq_write = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1392364894316875947ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__alloc_hint_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11059800532901533980ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14280864393208433536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553327864181357950ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 652631808533325279ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_uop, __VscopeHash, 2520312739985264216ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050049294689022917ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2712507582048528847ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_candidate_uop, __VscopeHash, 11517817689026208845ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5092213280522347852ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12427458073831080570ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__dmem_req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003463736154393964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__resp_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204015213624726361ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6780500876931144583ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2215506657872578086ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11795831255555627395ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16490647019217747312ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4329156029115972036ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_wb_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9860001094031131075ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entry_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9440442940051136353ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__agen_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17298699824029444087ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1130854184092641622ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4455545108006774685ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3271447758937357191ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 11854760615056528567ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16584176829233671712ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 822410369955533529ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10008566679432551548ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15163823595746336807ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 3720445219667101380ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5566915443055178638ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5398669180632420803ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6614166816063209701ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9707277210849613619ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11837275390511475480ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742242573030037639ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041723977395607787ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 13372134163189682661ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4007400784621318964ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6695478013611078603ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11283255009571658881ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11364708924613733812ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 16952450142074999296ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7583479013786928161ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17122364349467101258ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2702705767055644554ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 362616356973670170ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1720839223601671084ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484606096764492209ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5242961461092016066ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 18324486023234953274ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17653465556050131810ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1435310319889455984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4674075303718058947ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4114816821464189170ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 12991773725656144765ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13732562297125011885ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13327094039760451793ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14889982121781629345ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5877106952825052730ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__iss_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7624401510536427262ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2101972983629259520ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_br_killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17572441040255511787ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_uop, __VscopeHash, 2607681940361664415ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4346053630691122222ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7510705903975326659ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16177123155511417850ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082995495451191601ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop, __VscopeHash, 15863730113474928909ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12628358226839516549ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4406560963210425149ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10370176431729603899ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__eff_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503741373912235350ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__crmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11746186842498581147ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__prmd_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12345996181385658976ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__euen_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2748712288257481676ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__ecfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16789354733268021831ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__estat_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15722300546560369277ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__era_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18206138533113464466ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__badv_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11691592314988217366ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__eentry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7486006245321589911ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbidx_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11326011299072386654ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbehi_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15502868508424600621ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbelo0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15425613387388323697ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbelo1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2558136358507089491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__asid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9773006541070024244ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pgdl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 373644095422919959ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pgdh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16563462983059066059ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9371687651433114409ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1226167685573322580ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tcfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18305629852671108617ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10685362639877440095ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__llbctl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10106943897486932962ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tlbrentry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15671884247665464924ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__dmw0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2552996540118105984ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__dmw1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15500478636334973128ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__stable_counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9482853790162787024ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__badi_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11194852033171527154ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__cntc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14520892029517997301ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__timer_irq_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17308234037221171924ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__timer_armed_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16502695888454759536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1634572988583989193ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_rob_idx_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8516934764032069956ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_addr_q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2175219910109177665ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_cmd_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3213591485927480496ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4806207536569369189ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_wmask_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4739611246275142580ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__resp_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15194500695389048788ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__pending_tcfg_write_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14024083065270000291ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__commit_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17362578768156535284ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__interrupt_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15528052700327405384ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12930509113855792222ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18016643013689773279ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4092056515453962939ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(13152, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop[__Vi0], __VscopeHash, 13999879201120921992ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(1024, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_wdata[__Vi0], __VscopeHash, 8289719558678379500ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5195689504291375587ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_predicated[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15555060997400277532ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13631731639397501601ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5756715141922759836ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 535111172751999817ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17835723432764860614ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8750611512102875536ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head_vals = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8491481497824229050ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(1024, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause[__Vi0], __VscopeHash, 3003002840226402953ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(1024, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr[__Vi0], __VscopeHash, 4935772062529207402ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__lxcpt_live = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9245912903324822999ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__can_throw_exception = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15825826781444522473ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__will_commit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2939163423750714254ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5966500890448823884ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14374619381740541022ull);
    VL_SCOPED_RAND_RESET_W(411, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__xcpt_uop, __VscopeHash, 10833347356335573167ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__flush_commit_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3157685659191178782ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9853320999892649673ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__exception_throw_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16676541976316957294ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__finished_committing_row = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16272637926468014075ull);
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17025389862334918570ull);
    }
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 852764741487700953ull);
    VL_SCOPED_RAND_RESET_W(4932, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop, __VscopeHash, 16955459105290969812ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4762455091213898914ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8267802625329891313ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9780955978283587491ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8976733595182221786ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__dis_uop_updated, __VscopeHash, 2405043580386518716ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18373736060116036149ull);
    VL_SCOPED_RAND_RESET_W(6576, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_uop, __VscopeHash, 125126960643065226ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4080026178585933850ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 529211962787420767ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11876875151851420143ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2767480488598873237ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__dis_uop_updated, __VscopeHash, 9019154580632305800ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12458225995475049279ull);
    VL_SCOPED_RAND_RESET_W(6576, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_uop, __VscopeHash, 1677684345798050147ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6058820023219643131ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11448386138112822196ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13919958115403047957ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_br_killed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15851333280260707247ull);
    VL_SCOPED_RAND_RESET_W(822, vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__dis_uop_updated, __VscopeHash, 13717983146653294343ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__dispatch_inst__DOT__block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161566405390956263ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__br_mask_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13530342932146034544ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__core__DOT__brmask__DOT__curr_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2834312585520972971ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__inst_mem, __VscopeHash, 13212810271083274051ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__pc_mem, __VscopeHash, 12762185431776592098ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__head_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2666169747002069967ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__tail_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13291665614683531272ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__count_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13855581929312839429ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_insts, __VscopeHash, 2395112886688518917ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__packed_enq_pcs, __VscopeHash, 3684850844605096807ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9072602513423626319ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__deq_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15917224006430264745ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__enq_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13015398341129179546ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 62453665419780510ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7619804654762842559ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_stale_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3158079960870660273ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__redirect_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11449801065830495423ull);
    vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_valid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2428415591284666429ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_pc_q, __VscopeHash, 12765783187894066056ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_insts_q, __VscopeHash, 9988448591770051490ull);
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__Vfuncout = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__data = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__addr = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__size = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__align_store_data__26__byte_offset = 0;
    vlSelf->__Vfunc_core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__priority_encoder__84__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_43 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_44 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
    VL_ZERO_RESET_W(411, vlSelf->__VdfgRegularize_h6e95ff9d_0_51);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_59 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_60 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_71 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_72 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_73 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_91 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_92 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_93 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_94 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_110 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_111 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_112 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_114 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_115 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_116 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_128 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_129 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_137 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_146 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_147 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_150 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_151 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_152 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_158 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_159 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_160 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_161 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_162 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_163 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_164 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_165 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_166 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_167 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_168 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_169 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_170 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_171 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_172 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_173 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_174 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_175 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_176 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_177 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_178 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_179 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_180 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_181 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_182 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_183 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_184 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_185 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_186 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_187 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_188 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_189 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_190 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_196 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_197 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_198 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_199 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_203 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_205 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_206 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_207 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_208 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_209 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_210 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_235 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_236 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_256 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_258 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_259 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_261 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_262 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_267 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_269 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_270 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_271 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_272 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_273 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_274 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_275 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_276 = 0;
    VL_ZERO_RESET_W(259, vlSelf->__VdfgRegularize_h6e95ff9d_0_283);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_289 = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__state = 0;
    VL_ZERO_RESET_W(411, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__state = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__partial_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_count_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__iteration_index_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__recovery_shift_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__divider_i__DOT__srt4_core_i__DOT__otfc_quotient_minus_one = 0;
    VL_ZERO_RESET_W(7712, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__entries);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__req_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__store_queue_i__DOT__next_gen = 0;
    VL_ZERO_RESET_W(7168, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__entries);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_valid = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__req_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__fwd_hold_idx = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__lsu_inst__DOT__load_queue_i__DOT__next_gen = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__tval_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__estat_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__prmd_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__crmd_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_head = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_tail = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_state = 0;
    VL_ZERO_RESET_W(4932, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6576, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__mem_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6576, vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__core__DOT__alu_iq__DOT__slot_uop);
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__tail_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__fetch_buffer__DOT__head_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__state_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_pc_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__request_stale_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__fetch_valid_q = 0;
    vlSelf->__Vdly__core_top_contract_test_top__DOT__dut__DOT__frontend__DOT__redirect_pc_q = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v4 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v6 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v7 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v8 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v8 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v9 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__freelist__DOT__br_alloc_q__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v64 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__map_q__v96 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__br_snapshot_q__v64 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rename__DOT__maptable__DOT__commit_map_q__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_file_inst__DOT__save_q__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v2 = 0;
    VL_ZERO_RESET_W(411, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0);
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v0 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v5 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v6 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v7 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v7 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v8 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v9 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v11 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v2 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v1 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v5 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v6 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v7 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v8 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v9 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v10 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v11 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v12 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v13 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v14 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v15 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v16 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v17 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v18 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v19 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v21 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v22 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v23 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v24 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v25 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v26 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v27 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v28 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v29 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v30 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v31 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v32 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v33 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v34 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v35 = 0;
    VL_ZERO_RESET_W(411, vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1);
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_uop__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v12 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v11 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v11 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v13 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v12 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v14 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v13 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v15 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v14 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v16 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v15 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v17 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v16 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v18 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v17 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v19 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v18 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v20 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v19 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v21 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_unsafe__v20 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v22 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_bsy__v23 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exception__v5 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_badvaddr__v5 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v36 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v37 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v38 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v39 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v40 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v41 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v42 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v43 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v44 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v45 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v46 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v47 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v48 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v49 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v50 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v51 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v52 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v53 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v54 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v55 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v56 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v57 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v58 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v59 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v60 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v61 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v62 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v63 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v64 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v65 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v66 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v67 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v68 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v69 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v70 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v70 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_val__v71 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v3 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v4 = 0;
    vlSelf->__VdlyLsb__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__rob_inst__DOT__rob_exc_cause__v5 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    vlSelf->__VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    vlSelf->__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    vlSelf->__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__imem_req_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__imem_resp_valid__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vtrigprevexpr___TOP__imem_resp_insts__0);
    vlSelf->__Vtrigprevexpr___TOP__dmem_req_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_is_store__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dmem_resp_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__hw_irq__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ipi_irq__0 = 0;
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
