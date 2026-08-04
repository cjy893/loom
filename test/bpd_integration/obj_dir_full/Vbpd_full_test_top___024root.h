// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbpd_full_test_top.h for the primary calling header

#ifndef VERILATED_VBPD_FULL_TEST_TOP___024ROOT_H_
#define VERILATED_VBPD_FULL_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vbpd_full_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbpd_full_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(f0_valid,0,0);
        VL_IN8(f1_update_valid,0,0);
        VL_IN8(f1_is_br,0,0);
        VL_IN8(f1_taken,0,0);
        VL_IN8(f1_is_call,0,0);
        VL_IN8(f1_is_ret,0,0);
        VL_OUT8(bim_ready,0,0);
        VL_IN8(ras_read_idx,4,0);
        VL_IN8(ghist_restore_valid,0,0);
        VL_IN8(restore_saw_nt,0,0);
        VL_IN8(restore_ras_idx,4,0);
        VL_IN8(update_valid,0,0);
        VL_IN8(update_is_mispredict_update,0,0);
        VL_IN8(update_is_repair_update,0,0);
        VL_IN8(update_btb_mispredicts,1,0);
        VL_IN8(update_br_mask,1,0);
        VL_IN8(update_cfi_valid,0,0);
        VL_IN8(update_cfi_idx,0,0);
        VL_IN8(update_cfi_taken,0,0);
        VL_IN8(update_cfi_mispredicted,0,0);
        VL_IN8(update_cfi_is_br,0,0);
        VL_IN8(update_cfi_is_b_bl,0,0);
        VL_IN8(update_cfi_is_jirl,0,0);
        CData/*0:0*/ bpd_full_test_top__DOT__ghist_cfi_valid;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s1_valid;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s1_read_bypass_valid;
        CData/*3:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s1_read_bypass_data;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s1_update_valid;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s2_valid;
        CData/*3:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs;
        CData/*3:0*/ bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr;
        CData/*3:0*/ bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__upd_write;
        CData/*1:0*/ bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid;
        CData/*1:0*/ bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hits;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx;
        CData/*0:0*/ bpd_full_test_top__DOT__bim_inst__DOT__doing_reset;
        CData/*3:0*/ bpd_full_test_top__DOT__bim_inst__DOT____Vcellout__ram__read_data;
        CData/*0:0*/ bpd_full_test_top__DOT__btb_inst__DOT__s1_valid;
        SData/*9:0*/ bpd_full_test_top__DOT__btb_inst__DOT__s1_set;
        CData/*0:0*/ bpd_full_test_top__DOT__btb_inst__DOT__s2_valid;
        CData/*1:0*/ bpd_full_test_top__DOT__btb_inst__DOT__s2_hit;
        CData/*0:0*/ bpd_full_test_top__DOT__btb_inst__DOT__f3_valid;
        CData/*1:0*/ bpd_full_test_top__DOT__btb_inst__DOT__f3_hit;
        CData/*0:0*/ bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way;
        SData/*9:0*/ bpd_full_test_top__DOT__btb_inst__DOT__invalidate_set;
        CData/*0:0*/ bpd_full_test_top__DOT__btb_inst__DOT__do_allocate;
        CData/*3:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr;
        CData/*0:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid;
        CData/*0:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit;
        CData/*3:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx;
        CData/*0:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__do_allocate;
        CData/*0:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty;
        CData/*3:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx;
        CData/*3:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx;
        CData/*0:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit;
        CData/*3:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx;
        CData/*0:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
        CData/*0:0*/ __Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset;
        CData/*3:0*/ __VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0;
        CData/*0:0*/ __VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0;
        CData/*0:0*/ __VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0;
        CData/*3:0*/ __VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v1;
        CData/*0:0*/ __VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v1;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v1;
        CData/*0:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0;
        CData/*0:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1;
        CData/*0:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v3;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v1;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v1;
        CData/*3:0*/ __VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem__v0;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5;
        CData/*0:0*/ __VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7;
        CData/*0:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8;
        CData/*4:0*/ __VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__f0_valid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__f1_update_valid__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__f1_is_br__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__f1_taken__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__f1_is_call__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__f1_is_ret__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__ras_read_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ghist_restore_valid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__restore_saw_nt__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__restore_ras_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_valid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_is_mispredict_update__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_is_repair_update__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__update_btb_mispredicts__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__update_br_mask__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_valid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_taken__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_mispredicted__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_is_br__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_is_b_bl__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__update_cfi_is_jirl__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*10:0*/ bpd_full_test_top__DOT__bim_inst__DOT__rst_idx;
        SData/*15:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid;
        SData/*15:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec;
        SData/*15:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_vec;
        SData/*15:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_vec;
        SData/*10:0*/ __Vdly__bpd_full_test_top__DOT__bim_inst__DOT__rst_idx;
        SData/*10:0*/ __VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0;
        SData/*10:0*/ __VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem__v0;
        VL_IN(f0_pc,31,0);
        VL_OUTW(bim_f2_meta,119,0,4);
        VL_OUT(ras_read_addr,31,0);
        VL_IN(update_pc,31,0);
        VL_IN(update_target,31,0);
        VL_INW(update_meta,119,0,4);
        QData/*49:0*/ bpd_full_test_top__DOT__btb_inst__DOT__s1_tag;
        IData/*31:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc;
        IData/*31:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc;
        IData/*31:0*/ __VdlyVal__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0;
        IData/*24:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0;
        IData/*31:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4;
        IData/*31:0*/ __VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7;
        IData/*31:0*/ __VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8;
        IData/*31:0*/ __Vtrigprevexpr___TOP__f0_pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__update_pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__update_target__0;
        VlWide<4>/*119:0*/ __Vtrigprevexpr___TOP__update_meta__0;
        IData/*31:0*/ __VactIterCount;
        VL_OUTW(ubtb_f1_preds,71,0,3);
        VL_OUTW(bim_f2_preds,71,0,3);
        VL_OUTW(btb_f3_preds,71,0,3);
    };
    struct {
        VL_OUTW(current_ghist,71,0,3);
        VL_IN64(restore_old_history,63,0);
        VlWide<10>/*292:0*/ bpd_full_test_top__DOT__update_packed;
        VlWide<10>/*292:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s1_update;
        VlWide<3>/*71:0*/ bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in;
        VlWide<4>/*119:0*/ bpd_full_test_top__DOT__btb_inst__DOT__s2_entry;
        VlWide<4>/*119:0*/ bpd_full_test_top__DOT__btb_inst__DOT__f3_entry;
        VlWide<3>/*71:0*/ bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in;
        VlWide<33>/*1039:0*/ bpd_full_test_top__DOT__ubtb_inst__DOT__entries;
        VlWide<3>/*71:0*/ bpd_full_test_top__DOT__ghist_inst__DOT__history_q;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        VlWide<3>/*71:0*/ __Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q;
        QData/*63:0*/ __Vtrigprevexpr___TOP__restore_old_history__0;
        VlUnpacked<SData/*10:0*/, 2> bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx;
        VlUnpacked<CData/*3:0*/, 2> bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data;
        VlUnpacked<CData/*3:0*/, 2048> bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem;
        VlUnpacked<CData/*1:0*/, 32> bpd_full_test_top__DOT__btb_inst__DOT__entry_valid;
        VlUnpacked<VlWide<4>/*119:0*/, 32> bpd_full_test_top__DOT__btb_inst__DOT__entries;
        VlUnpacked<CData/*0:0*/, 32> bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr;
        VlUnpacked<IData/*31:0*/, 32> bpd_full_test_top__DOT__ras_inst__DOT__stack;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vbpd_full_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vbpd_full_test_top___024root(Vbpd_full_test_top__Syms* symsp, const char* namep);
    ~Vbpd_full_test_top___024root();
    VL_UNCOPYABLE(Vbpd_full_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
