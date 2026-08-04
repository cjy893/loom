// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico__2(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___dump_triggers__ico__2\n"); );
    // Body
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( commit_pdst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( commit_stale_pdst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( rollback)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( kill)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @( br_mispredict)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @( br_mispredict_tag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @( br_resolve_mask)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @( br_mispredict_mask)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @( dis_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @( dis_fire)\n");
    }
}
