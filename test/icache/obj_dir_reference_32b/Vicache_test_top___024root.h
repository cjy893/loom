// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vicache_test_top.h for the primary calling header

#ifndef VERILATED_VICACHE_TEST_TOP___024ROOT_H_
#define VERILATED_VICACHE_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vicache_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vicache_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(req_valid,0,0);
        VL_OUT8(req_ready,0,0);
        VL_IN8(req_cacheable,0,0);
        VL_OUT8(resp_valid,0,0);
        VL_IN8(resp_ready,0,0);
        VL_IN8(maint_valid,0,0);
        VL_OUT8(maint_ready,0,0);
        VL_IN8(maint_mode,1,0);
        VL_IN8(maint_all,0,0);
        VL_OUT8(maint_done,0,0);
        VL_OUT8(mem_req_valid,0,0);
        VL_IN8(mem_req_ready,0,0);
        VL_OUT8(mem_req_len,3,0);
        VL_IN8(mem_resp_valid,0,0);
        VL_OUT8(mem_resp_ready,0,0);
        VL_IN8(mem_resp_last,0,0);
        CData/*1:0*/ icache_test_top__DOT__dut__DOT____VlemCall_5__address_set;
        CData/*1:0*/ icache_test_top__DOT__dut__DOT____VlemCall_3__address_set;
        CData/*1:0*/ icache_test_top__DOT__dut__DOT____VlemCall_2__address_set;
        CData/*1:0*/ icache_test_top__DOT__dut__DOT____VlemCall_1__address_set;
        CData/*2:0*/ icache_test_top__DOT__dut__DOT__state_q;
        CData/*0:0*/ icache_test_top__DOT__dut__DOT__req_cacheable_q;
        CData/*1:0*/ icache_test_top__DOT__dut__DOT__refill_set_q;
        CData/*0:0*/ icache_test_top__DOT__dut__DOT__refill_way_q;
        CData/*2:0*/ icache_test_top__DOT__dut__DOT__refill_beat_q;
        CData/*0:0*/ icache_test_top__DOT__dut__DOT__maint_done_q;
        CData/*0:0*/ icache_test_top__DOT__dut__DOT__lookup_hit;
        CData/*0:0*/ icache_test_top__DOT__dut__DOT__lookup_hit_way;
        CData/*0:0*/ icache_test_top__DOT__dut__DOT__lookup_victim_way;
        CData/*1:0*/ icache_test_top__DOT__dut__DOT__lookup_set;
        CData/*2:0*/ __Vdly__icache_test_top__DOT__dut__DOT__state_q;
        CData/*2:0*/ __VdlyDim0__icache_test_top__DOT__dut__DOT__data_array__v0;
        CData/*0:0*/ __VdlyDim1__icache_test_top__DOT__dut__DOT__data_array__v0;
        CData/*1:0*/ __VdlyDim2__icache_test_top__DOT__dut__DOT__data_array__v0;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__data_array__v0;
        CData/*0:0*/ __VdlyDim0__icache_test_top__DOT__dut__DOT__tag_array__v0;
        CData/*1:0*/ __VdlyDim1__icache_test_top__DOT__dut__DOT__tag_array__v0;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__tag_array__v0;
        CData/*0:0*/ __VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v0;
        CData/*1:0*/ __VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v0;
        CData/*0:0*/ __VdlyVal__icache_test_top__DOT__dut__DOT__replace_way_q__v0;
        CData/*1:0*/ __VdlyDim0__icache_test_top__DOT__dut__DOT__replace_way_q__v0;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v1;
        CData/*0:0*/ __VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v9;
        CData/*1:0*/ __VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v9;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v9;
        CData/*1:0*/ __VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v10;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v10;
        CData/*1:0*/ __VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v11;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v11;
        CData/*0:0*/ __VdlySet__icache_test_top__DOT__dut__DOT__replace_way_q__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__req_valid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__req_cacheable__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__resp_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__maint_valid__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__maint_mode__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__maint_all__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_req_ready__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_resp_valid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_resp_last__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(req_paddr,31,0);
        VL_OUTW(resp_insts,127,0,4);
        VL_IN(maint_vaddr,31,0);
        VL_IN(maint_paddr,31,0);
        VL_OUT(mem_req_addr,31,0);
        VL_IN(mem_resp_data,31,0);
        IData/*24:0*/ icache_test_top__DOT__dut__DOT____VlemCall_4__address_tag;
        IData/*31:0*/ icache_test_top__DOT__dut__DOT__req_paddr_q;
        VlWide<4>/*127:0*/ icache_test_top__DOT__dut__DOT__resp_insts_q;
        IData/*24:0*/ icache_test_top__DOT__dut__DOT__refill_tag_q;
        IData/*24:0*/ icache_test_top__DOT__dut__DOT__lookup_tag;
        IData/*31:0*/ __VdlyVal__icache_test_top__DOT__dut__DOT__data_array__v0;
        IData/*24:0*/ __VdlyVal__icache_test_top__DOT__dut__DOT__tag_array__v0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__req_paddr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__maint_vaddr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__maint_paddr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__mem_resp_data__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<IData/*24:0*/, 2>, 4> icache_test_top__DOT__dut__DOT__tag_array;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 2>, 4> icache_test_top__DOT__dut__DOT__data_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> icache_test_top__DOT__dut__DOT__valid_array;
        VlUnpacked<CData/*0:0*/, 4> icache_test_top__DOT__dut__DOT__replace_way_q;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vicache_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vicache_test_top___024root(Vicache_test_top__Syms* symsp, const char* namep);
    ~Vicache_test_top___024root();
    VL_UNCOPYABLE(Vicache_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
