// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vftq_test_top.h for the primary calling header

#ifndef VERILATED_VFTQ_TEST_TOP___024ROOT_H_
#define VERILATED_VFTQ_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vftq_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vftq_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(enq_valid,0,0);
        VL_OUT8(enq_ready,0,0);
        VL_IN8(enq_br_mask,3,0);
        VL_IN8(enq_cfi_valid,0,0);
        VL_IN8(enq_cfi_idx,1,0);
        VL_IN8(enq_cfi_type,2,0);
        VL_IN8(enq_cfi_is_call,0,0);
        VL_IN8(enq_cfi_is_ret,0,0);
        VL_IN8(enq_cfi_npc_plus4,0,0);
        VL_IN8(enq_cfi_taken,0,0);
        VL_IN8(enq_ras_idx,4,0);
        VL_IN8(enq_start_bank,0,0);
        VL_OUT8(enq_idx,3,0);
        VL_IN8(commit_valid,0,0);
        VL_IN8(commit_ftq_idx,3,0);
        VL_IN8(redirect_valid,0,0);
        VL_IN8(redirect_ftq_idx,3,0);
        VL_IN8(brupdate_b2_mispredict,0,0);
        VL_IN8(brupdate_b2_ftq_idx,3,0);
        VL_IN8(brupdate_b2_taken,0,0);
        VL_IN8(brupdate_b2_br_mask,3,0);
        VL_IN8(brupdate_b2_cfi_is_br,0,0);
        VL_IN8(brupdate_b2_cfi_is_call,0,0);
        VL_IN8(brupdate_b2_cfi_is_ret,0,0);
        VL_OUT8(bpd_update_valid,0,0);
        VL_OUT8(bpd_update_is_mispredict_update,0,0);
        VL_OUT8(bpd_update_is_repair_update,0,0);
        VL_OUT8(bpd_update_br_mask,3,0);
        VL_OUT8(bpd_update_cfi_valid,0,0);
        VL_OUT8(bpd_update_cfi_idx,1,0);
        VL_OUT8(bpd_update_cfi_taken,0,0);
        VL_OUT8(bpd_update_cfi_mispredicted,0,0);
        VL_OUT8(bpd_update_cfi_is_br,0,0);
        VL_OUT8(bpd_update_cfi_is_b_bl,0,0);
        VL_OUT8(bpd_update_cfi_is_jirl,0,0);
        VL_OUT8(ghist_restore_valid,0,0);
        VL_OUT8(ras_repair_valid,0,0);
        VL_OUT8(ras_repair_idx,4,0);
        VL_IN8(query_valid,0,0);
        VL_IN8(query_idx,3,0);
        VL_OUT8(query_resp_valid,0,0);
        VL_OUT8(query_br_mask,3,0);
        VL_OUT8(query_cfi_valid,0,0);
        VL_OUT8(query_cfi_idx,1,0);
        VL_OUT8(query_cfi_type,2,0);
        VL_OUT8(query_cfi_is_call,0,0);
        VL_OUT8(query_cfi_is_ret,0,0);
        VL_OUT8(query_cfi_npc_plus4,0,0);
        VL_OUT8(query_cfi_taken,0,0);
        VL_OUT8(query_ras_idx,4,0);
        VL_OUT8(query_start_bank,0,0);
        VL_IN(enq_pc,31,0);
        VL_IN(enq_next_pc,31,0);
        VL_IN(enq_ras_top,31,0);
        VL_INW(enq_meta,239,0,8);
        VL_IN(brupdate_b2_target,31,0);
        VL_OUT(bpd_update_pc,31,0);
        VL_OUT(bpd_update_target,31,0);
        VL_OUTW(bpd_update_meta,239,0,8);
        VL_OUT(ras_repair_addr,31,0);
        VL_OUT(query_pc,31,0);
        VL_OUT(query_ras_top,31,0);
    };
    struct {
        VL_INW(enq_ghist,71,0,3);
        VL_OUTW(bpd_update_ghist,71,0,3);
        VL_OUTW(ghist_restore,71,0,3);
        VL_OUTW(query_ghist,71,0,3);
    };

    // INTERNAL VARIABLES
    Vftq_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vftq_test_top___024root(Vftq_test_top__Syms* symsp, const char* namep);
    ~Vftq_test_top___024root();
    VL_UNCOPYABLE(Vftq_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
