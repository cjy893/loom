// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

VL_ATTR_COLD void Vicache_test_top___024root___ctor_var_reset(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___ctor_var_reset\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12465084953323796564ull);
    vlSelf->req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539944981316001420ull);
    vlSelf->req_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14750932541516619065ull);
    vlSelf->req_cacheable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 314185423037674440ull);
    vlSelf->resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735948940430534270ull);
    vlSelf->resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5253117115727090143ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->resp_insts, __VscopeHash, 8842277431807532477ull);
    vlSelf->maint_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13326052681237301462ull);
    vlSelf->maint_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1117282513251722710ull);
    vlSelf->maint_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4102473412029864649ull);
    vlSelf->maint_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15598352260789656982ull);
    vlSelf->maint_vaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14134072103938835259ull);
    vlSelf->maint_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18158394253987172825ull);
    vlSelf->maint_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16655547953438404964ull);
    vlSelf->mem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16796970116056786851ull);
    vlSelf->mem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653000016004071877ull);
    vlSelf->mem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11075180566457716839ull);
    vlSelf->mem_req_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16615347939919469380ull);
    vlSelf->mem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953970547806985782ull);
    vlSelf->mem_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15648465894761239781ull);
    vlSelf->mem_resp_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10853456841072758915ull);
    vlSelf->mem_resp_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11404546491723975392ull);
    vlSelf->icache_test_top__DOT__dut__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4484021045159391115ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->icache_test_top__DOT__dut__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16331115000884081765ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
                vlSelf->icache_test_top__DOT__dut__DOT__data_array[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11018354581725776366ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->icache_test_top__DOT__dut__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6073496760058384384ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->icache_test_top__DOT__dut__DOT__replace_way_q[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6245170171287681530ull);
    }
    vlSelf->icache_test_top__DOT__dut__DOT__req_paddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14166496587226830533ull);
    vlSelf->icache_test_top__DOT__dut__DOT__req_cacheable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16506224701463477838ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->icache_test_top__DOT__dut__DOT__resp_insts_q, __VscopeHash, 2610723342739430501ull);
    vlSelf->icache_test_top__DOT__dut__DOT__refill_set_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6169707600587227561ull);
    vlSelf->icache_test_top__DOT__dut__DOT__refill_tag_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7067296371214794769ull);
    vlSelf->icache_test_top__DOT__dut__DOT__refill_way_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1990983074661131341ull);
    vlSelf->icache_test_top__DOT__dut__DOT__refill_beat_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16020720453597302018ull);
    vlSelf->icache_test_top__DOT__dut__DOT__maint_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17389615450771398141ull);
    vlSelf->icache_test_top__DOT__dut__DOT__lookup_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9266415633218711353ull);
    vlSelf->icache_test_top__DOT__dut__DOT__lookup_hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11969022839923002754ull);
    vlSelf->icache_test_top__DOT__dut__DOT__lookup_victim_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13299328129537211684ull);
    vlSelf->icache_test_top__DOT__dut__DOT__lookup_set = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17727426969750115967ull);
    vlSelf->icache_test_top__DOT__dut__DOT__lookup_tag = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12645484401490382076ull);
    vlSelf->__Vdly__icache_test_top__DOT__dut__DOT__state_q = 0;
    vlSelf->__VdlyVal__icache_test_top__DOT__dut__DOT__data_array__v0 = 0;
    vlSelf->__VdlyDim0__icache_test_top__DOT__dut__DOT__data_array__v0 = 0;
    vlSelf->__VdlyDim1__icache_test_top__DOT__dut__DOT__data_array__v0 = 0;
    vlSelf->__VdlyDim2__icache_test_top__DOT__dut__DOT__data_array__v0 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__data_array__v0 = 0;
    vlSelf->__VdlyVal__icache_test_top__DOT__dut__DOT__tag_array__v0 = 0;
    vlSelf->__VdlyDim0__icache_test_top__DOT__dut__DOT__tag_array__v0 = 0;
    vlSelf->__VdlyDim1__icache_test_top__DOT__dut__DOT__tag_array__v0 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__tag_array__v0 = 0;
    vlSelf->__VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v0 = 0;
    vlSelf->__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v0 = 0;
    vlSelf->__VdlyVal__icache_test_top__DOT__dut__DOT__replace_way_q__v0 = 0;
    vlSelf->__VdlyDim0__icache_test_top__DOT__dut__DOT__replace_way_q__v0 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v1 = 0;
    vlSelf->__VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v9 = 0;
    vlSelf->__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v9 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v9 = 0;
    vlSelf->__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v10 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v10 = 0;
    vlSelf->__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v11 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v11 = 0;
    vlSelf->__VdlySet__icache_test_top__DOT__dut__DOT__replace_way_q__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_paddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__req_cacheable__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__resp_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__maint_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__maint_mode__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__maint_all__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__maint_vaddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__maint_paddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mem_req_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mem_resp_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mem_resp_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mem_resp_last__0 = 0;
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
