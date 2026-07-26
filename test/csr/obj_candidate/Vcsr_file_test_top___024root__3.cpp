// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

bool Vcsr_file_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcsr_file_test_top___024root___nba_sequent__TOP__0(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___nba_sequent__TOP__0\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__stable_counter_q 
        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__stable_counter_q;
    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q 
        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tval_q;
    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tcfg_q 
        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q;
    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q 
        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__prmd_q;
    vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v0 = 0U;
    vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v1 = 0U;
    vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v2 = 0U;
    vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v3 = 0U;
    vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v4 = 0U;
    vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v5 = 0U;
    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q 
        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q;
    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q 
        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q;
}

extern const VlWide<60>/*1919:0*/ Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0;
extern const VlUnpacked<IData/*31:0*/, 30> Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0;

void Vcsr_file_test_top___024root___nba_sequent__TOP__1(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___nba_sequent__TOP__1\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__Vfuncout = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__1__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__1__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__3__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__3__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__5__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__5__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__7__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__7__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__9__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__9__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__11__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__11__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__13__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__13__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__15__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__15__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__17__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__17__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__19__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__19__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__21__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__21__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__23__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__23__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__25__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__25__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__27__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__27__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__29__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__29__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__31__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__31__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__33__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__33__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__35__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__35__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__37__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__37__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__39__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__39__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__41__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__41__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__43__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__43__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__45__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__45__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__47__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__47__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__49__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__49__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__51__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__51__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__effective_mask = 0;
    SData/*13:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__53__addr;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__53__addr = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__Vfuncout;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__old_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__old_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__new_value;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__new_value = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__operand_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__operand_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__arch_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__arch_mask = 0;
    IData/*31:0*/ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__effective_mask;
    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__effective_mask = 0;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    IData/*31:0*/ __Vtemp_9;
    IData/*31:0*/ __Vtemp_10;
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_12;
    IData/*31:0*/ __Vtemp_13;
    IData/*31:0*/ __Vtemp_14;
    IData/*31:0*/ __Vtemp_15;
    IData/*31:0*/ __Vtemp_16;
    IData/*31:0*/ __Vtemp_17;
    IData/*31:0*/ __Vtemp_18;
    IData/*31:0*/ __Vtemp_19;
    IData/*31:0*/ __Vtemp_20;
    IData/*31:0*/ __Vtemp_21;
    IData/*31:0*/ __Vtemp_22;
    IData/*31:0*/ __Vtemp_23;
    IData/*31:0*/ __Vtemp_24;
    IData/*31:0*/ __Vtemp_25;
    IData/*31:0*/ __Vtemp_26;
    IData/*31:0*/ __Vtemp_27;
    // Body
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q) 
             & (IData)(vlSelfRef.csr_resp_ready))) {
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 0U;
        }
        if (((IData)(vlSelfRef.csr_req_valid) & (IData)(vlSelfRef.csr_req_ready))) {
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 1U;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q 
                = vlSelfRef.csr_req_rob_idx;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q = 1U;
            __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr 
                = vlSelfRef.csr_req_addr;
            __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__Vfuncout 
                = ((0x00002000U & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                    ? 0U : ((0x00001000U & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                             ? 0U : ((0x00000800U & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                      ? 0U : ((0x00000400U 
                                               & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                               ? 0U
                                               : ((0x00000200U 
                                                   & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                   ? 0U
                                                   : 
                                                  ((0x00000100U 
                                                    & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                     ? 
                                                    ((0x00000040U 
                                                      & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                      ? 0U
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                       ? 0U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? (IData)(
                                                                      (vlSelfRef.csr_file_test_top__DOT__dut__DOT__stable_counter_q 
                                                                       >> 0x20U))
                                                            : (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__stable_counter_q))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw1_q
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw0_q)))))))
                                                     : 0U)
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                     ? 
                                                    ((0x00000040U 
                                                      & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                      ? 0U
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                       ? 0U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 0U
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q)))
                                                         : 0U))))
                                                     : 
                                                    ((0x00000040U 
                                                      & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                      ? 
                                                     ((0x00000020U 
                                                       & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                       ? 
                                                      ((0x00000010U 
                                                        & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 0U
                                                            : 
                                                           (5U 
                                                            & vlSelfRef.csr_file_test_top__DOT__dut__DOT__llbctl_q))))))
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 0U
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__tval_q)
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__tid_q))))))
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                       ? 
                                                      ((0x00000010U 
                                                        & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[3U]
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[2U])
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[1U]
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[0U]))))
                                                        : 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 0U
                                                            : 0x00000078U)))))
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 
                                                           ((vlSelfRef.csr_file_test_top__DOT__dut__DOT__badv_q 
                                                             >> 0x1fU)
                                                             ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdh_q
                                                             : vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdl_q)
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdh_q)
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdl_q
                                                            : 
                                                           (0x000003ffU 
                                                            & vlSelfRef.csr_file_test_top__DOT__dut__DOT__asid_q))))
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo1_q
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo0_q)
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbehi_q
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbidx_q))))
                                                        : 
                                                       ((8U 
                                                         & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 0U
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q))
                                                          : 0U)
                                                         : 
                                                        ((4U 
                                                          & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__badv_q
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q)
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 
                                                           (0x7fff1fffU 
                                                            & ((0xffffe000U 
                                                                & vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q) 
                                                               | (IData)(vlSelfRef.interrupt_pending_bits)))
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q))
                                                          : 
                                                         ((2U 
                                                           & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? 0U
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__euen_q)
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__addr))
                                                            ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__prmd_q
                                                            : vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q))))))))))))));
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_data_q 
                = __Vfunc_csr_file_test_top__DOT__dut__DOT__read_csr__0__Vfuncout;
        }
        if (vlSelfRef.csr_file_test_top__DOT__dut__DOT__commit_match) {
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 0U;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q = 0U;
        } else if (vlSelfRef.csr_flush_pending) {
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 0U;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q = 0U;
        }
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__stable_counter_q 
            = (1ULL + vlSelfRef.csr_file_test_top__DOT__dut__DOT__stable_counter_q);
        if (vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_armed_q) {
            if ((0U != vlSelfRef.csr_file_test_top__DOT__dut__DOT__tval_q)) {
                vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q 
                    = (vlSelfRef.csr_file_test_top__DOT__dut__DOT__tval_q 
                       - (IData)(1U));
            } else {
                vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_irq_q = 1U;
                if ((2U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q)) {
                    vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q 
                        = (0xfffffffcU & vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q);
                } else {
                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_armed_q = 0U;
                }
            }
        }
        if (vlSelfRef.csr_file_test_top__DOT__dut__DOT__commit_match) {
            if ((0U != (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_cmd_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                              >> 0x0000000dU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                  >> 0x0000000cU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                      >> 0x0000000bU)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                          >> 0x0000000aU)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                              >> 9U)))) {
                                    if ((0x00000100U 
                                         & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((0x00000080U 
                                             & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__1__addr 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                                        __Vtemp_1 
                                                                            = 
                                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__1__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_32__write_mask 
                                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                                            [__Vtemp_1];
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__arch_mask 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_32__write_mask;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__operand_mask 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__new_value 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__old_value 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw1_q;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__effective_mask 
                                                                            = 
                                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__operand_mask 
                                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__arch_mask);
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__Vfuncout 
                                                                            = 
                                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__old_value 
                                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__effective_mask)) 
                                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__new_value 
                                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__effective_mask));
                                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw1_q 
                                                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__2__Vfuncout;
                                                                    } else {
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__3__addr 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                                        __Vtemp_2 
                                                                            = 
                                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__3__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_31__write_mask 
                                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                                            [__Vtemp_2];
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__arch_mask 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_31__write_mask;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__operand_mask 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__new_value 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__old_value 
                                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw0_q;
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__effective_mask 
                                                                            = 
                                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__operand_mask 
                                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__arch_mask);
                                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__Vfuncout 
                                                                            = 
                                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__old_value 
                                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__effective_mask)) 
                                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__new_value 
                                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__effective_mask));
                                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw0_q 
                                                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__4__Vfuncout;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x00000080U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q)))) {
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__5__addr 
                                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                                    __Vtemp_3 
                                                                        = 
                                                                        VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__5__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_30__write_mask 
                                                                        = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                                        [__Vtemp_3];
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__arch_mask 
                                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_30__write_mask;
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__operand_mask 
                                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__new_value 
                                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__old_value 
                                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q;
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__effective_mask 
                                                                        = 
                                                                        (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__operand_mask 
                                                                         & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__arch_mask);
                                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__Vfuncout 
                                                                        = 
                                                                        ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__old_value 
                                                                          & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__effective_mask)) 
                                                                         | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__new_value 
                                                                            & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__effective_mask));
                                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q 
                                                                        = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__6__Vfuncout;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x00000040U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q)))) {
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__7__addr 
                                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                                __Vtemp_4 
                                                                    = 
                                                                    VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__7__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_29__write_mask 
                                                                    = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                                    [__Vtemp_4];
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__arch_mask 
                                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_29__write_mask;
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__operand_mask 
                                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__new_value 
                                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__old_value 
                                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__llbctl_q;
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__effective_mask 
                                                                    = 
                                                                    (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__operand_mask 
                                                                     & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__arch_mask);
                                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__Vfuncout 
                                                                    = 
                                                                    ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__old_value 
                                                                      & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__effective_mask)) 
                                                                     | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__new_value 
                                                                        & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__effective_mask));
                                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT__llbctl_q 
                                                                    = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__8__Vfuncout;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                        >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q)))) {
                                                            if (
                                                                (1U 
                                                                 & (vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q 
                                                                    & vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q))) {
                                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_irq_q = 0U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__9__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_5 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__9__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_24__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_5];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_24__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__arch_mask);
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__Vfuncout 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__effective_mask));
                                                        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tcfg_q 
                                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__10__Vfuncout;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__11__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_6 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__11__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_25__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_6];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_25__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__arch_mask);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_26__merge_write 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__12__effective_mask));
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_armed_q 
                                                            = 
                                                            (1U 
                                                             & vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_26__merge_write);
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__13__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_7 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__13__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_27__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_7];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_27__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__arch_mask);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_28__merge_write 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__14__effective_mask));
                                                        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q 
                                                            = 
                                                            (0xfffffffcU 
                                                             & vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_28__merge_write);
                                                    } else {
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__15__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_8 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__15__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_23__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_8];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_23__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tid_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__arch_mask);
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__Vfuncout 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__effective_mask));
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tid_q 
                                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__16__Vfuncout;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x00000020U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__17__addr 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                            __Vtemp_9 
                                                                = 
                                                                VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__17__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_21__write_mask 
                                                                = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                                [__Vtemp_9];
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__arch_mask 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_21__write_mask;
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__operand_mask 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__new_value 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__old_value 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[3U];
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__effective_mask 
                                                                = 
                                                                (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__operand_mask 
                                                                 & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__arch_mask);
                                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_22__merge_write 
                                                                = 
                                                                ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__old_value 
                                                                  & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__effective_mask)) 
                                                                 | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__new_value 
                                                                    & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__18__effective_mask));
                                                            vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v0 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_22__merge_write;
                                                            vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v0 = 1U;
                                                        } else {
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__19__addr 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                            __Vtemp_10 
                                                                = 
                                                                VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__19__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_19__write_mask 
                                                                = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                                [__Vtemp_10];
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__arch_mask 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_19__write_mask;
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__operand_mask 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__new_value 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__old_value 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[2U];
                                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__effective_mask 
                                                                = 
                                                                (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__operand_mask 
                                                                 & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__arch_mask);
                                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_20__merge_write 
                                                                = 
                                                                ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__old_value 
                                                                  & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__effective_mask)) 
                                                                 | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__new_value 
                                                                    & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__20__effective_mask));
                                                            vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v1 
                                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_20__merge_write;
                                                            vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v1 = 1U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__21__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_11 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__21__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_17__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_11];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_17__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[1U];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__arch_mask);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_18__merge_write 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__22__effective_mask));
                                                        vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v2 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_18__merge_write;
                                                        vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v2 = 1U;
                                                    } else {
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__23__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_12 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__23__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_15__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_12];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_15__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[0U];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__arch_mask);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_16__merge_write 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__24__effective_mask));
                                                        vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v3 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_16__merge_write;
                                                        vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v3 = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((8U & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q)))) {
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__25__addr 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                        __Vtemp_13 
                                                            = 
                                                            VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__25__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_14__write_mask 
                                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                            [__Vtemp_13];
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__arch_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_14__write_mask;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__operand_mask 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__new_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__old_value 
                                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdh_q;
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__effective_mask 
                                                            = 
                                                            (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__operand_mask 
                                                             & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__arch_mask);
                                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__Vfuncout 
                                                            = 
                                                            ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__old_value 
                                                              & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__effective_mask)) 
                                                             | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__new_value 
                                                                & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__effective_mask));
                                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdh_q 
                                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__26__Vfuncout;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__27__addr 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                    __Vtemp_14 
                                                        = 
                                                        VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__27__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_13__write_mask 
                                                        = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                        [__Vtemp_14];
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__arch_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_13__write_mask;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__operand_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__new_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__old_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdl_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__effective_mask 
                                                        = 
                                                        (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__operand_mask 
                                                         & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__arch_mask);
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__Vfuncout 
                                                        = 
                                                        ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__old_value 
                                                          & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__effective_mask)) 
                                                         | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__new_value 
                                                            & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__effective_mask));
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdl_q 
                                                        = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__28__Vfuncout;
                                                } else {
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__29__addr 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                    __Vtemp_15 
                                                        = 
                                                        VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__29__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_12__write_mask 
                                                        = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                        [__Vtemp_15];
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__arch_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_12__write_mask;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__operand_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__new_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__old_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__asid_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__effective_mask 
                                                        = 
                                                        (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__operand_mask 
                                                         & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__arch_mask);
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__Vfuncout 
                                                        = 
                                                        ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__old_value 
                                                          & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__effective_mask)) 
                                                         | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__new_value 
                                                            & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__effective_mask));
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__asid_q 
                                                        = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__30__Vfuncout;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__31__addr 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                    __Vtemp_16 
                                                        = 
                                                        VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__31__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_11__write_mask 
                                                        = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                        [__Vtemp_16];
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__arch_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_11__write_mask;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__operand_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__new_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__old_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo1_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__effective_mask 
                                                        = 
                                                        (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__operand_mask 
                                                         & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__arch_mask);
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__Vfuncout 
                                                        = 
                                                        ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__old_value 
                                                          & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__effective_mask)) 
                                                         | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__new_value 
                                                            & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__effective_mask));
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo1_q 
                                                        = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__32__Vfuncout;
                                                } else {
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__33__addr 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                    __Vtemp_17 
                                                        = 
                                                        VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__33__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_10__write_mask 
                                                        = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                        [__Vtemp_17];
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__arch_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_10__write_mask;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__operand_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__new_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__old_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo0_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__effective_mask 
                                                        = 
                                                        (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__operand_mask 
                                                         & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__arch_mask);
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__Vfuncout 
                                                        = 
                                                        ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__old_value 
                                                          & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__effective_mask)) 
                                                         | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__new_value 
                                                            & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__effective_mask));
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo0_q 
                                                        = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__34__Vfuncout;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__35__addr 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                __Vtemp_18 
                                                    = 
                                                    VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__35__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_9__write_mask 
                                                    = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                    [__Vtemp_18];
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__arch_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_9__write_mask;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__operand_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__new_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__old_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbehi_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__effective_mask 
                                                    = 
                                                    (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__operand_mask 
                                                     & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__arch_mask);
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__Vfuncout 
                                                    = 
                                                    ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__old_value 
                                                      & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__effective_mask)) 
                                                     | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__new_value 
                                                        & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__effective_mask));
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbehi_q 
                                                    = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__36__Vfuncout;
                                            } else {
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__37__addr 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                __Vtemp_19 
                                                    = 
                                                    VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__37__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_8__write_mask 
                                                    = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                    [__Vtemp_19];
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__arch_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_8__write_mask;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__operand_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__new_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__old_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbidx_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__effective_mask 
                                                    = 
                                                    (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__operand_mask 
                                                     & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__arch_mask);
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__Vfuncout 
                                                    = 
                                                    ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__old_value 
                                                      & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__effective_mask)) 
                                                     | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__new_value 
                                                        & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__effective_mask));
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbidx_q 
                                                    = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__38__Vfuncout;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((4U & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q)))) {
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__39__addr 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                    __Vtemp_20 
                                                        = 
                                                        VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__39__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_7__write_mask 
                                                        = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                        [__Vtemp_20];
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__arch_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_7__write_mask;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__operand_mask 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__new_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__old_value 
                                                        = vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q;
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__effective_mask 
                                                        = 
                                                        (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__operand_mask 
                                                         & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__arch_mask);
                                                    __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__Vfuncout 
                                                        = 
                                                        ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__old_value 
                                                          & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__effective_mask)) 
                                                         | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__new_value 
                                                            & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__effective_mask));
                                                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q 
                                                        = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__40__Vfuncout;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((2U & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__41__addr 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                __Vtemp_21 
                                                    = 
                                                    VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__41__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_6__write_mask 
                                                    = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                    [__Vtemp_21];
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__arch_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_6__write_mask;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__operand_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__new_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__old_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__badv_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__effective_mask 
                                                    = 
                                                    (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__operand_mask 
                                                     & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__arch_mask);
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__Vfuncout 
                                                    = 
                                                    ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__old_value 
                                                      & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__effective_mask)) 
                                                     | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__new_value 
                                                        & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__effective_mask));
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT__badv_q 
                                                    = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__42__Vfuncout;
                                            } else {
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__43__addr 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                                __Vtemp_22 
                                                    = 
                                                    VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__43__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_5__write_mask 
                                                    = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                    [__Vtemp_22];
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__arch_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_5__write_mask;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__operand_mask 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__new_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__old_value 
                                                    = vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q;
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__effective_mask 
                                                    = 
                                                    (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__operand_mask 
                                                     & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__arch_mask);
                                                __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__Vfuncout 
                                                    = 
                                                    ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__old_value 
                                                      & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__effective_mask)) 
                                                     | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__new_value 
                                                        & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__effective_mask));
                                                vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q 
                                                    = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__44__Vfuncout;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__45__addr 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                            __Vtemp_23 
                                                = VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__45__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_4__write_mask 
                                                = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                [__Vtemp_23];
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__arch_mask 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_4__write_mask;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__operand_mask 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__new_value 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__old_value 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__effective_mask 
                                                = (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__operand_mask 
                                                   & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__arch_mask);
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__Vfuncout 
                                                = (
                                                   (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__old_value 
                                                    & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__effective_mask)) 
                                                   | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__new_value 
                                                      & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__effective_mask));
                                            vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q 
                                                = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__46__Vfuncout;
                                        } else {
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__47__addr 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                            __Vtemp_24 
                                                = VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__47__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_3__write_mask 
                                                = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                [__Vtemp_24];
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__arch_mask 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_3__write_mask;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__operand_mask 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__new_value 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__old_value 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__effective_mask 
                                                = (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__operand_mask 
                                                   & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__arch_mask);
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__Vfuncout 
                                                = (
                                                   (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__old_value 
                                                    & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__effective_mask)) 
                                                   | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__new_value 
                                                      & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__effective_mask));
                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q 
                                                = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__48__Vfuncout;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        if ((1U & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q)))) {
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__49__addr 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                            __Vtemp_25 
                                                = VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__49__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_2__write_mask 
                                                = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                                [__Vtemp_25];
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__arch_mask 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_2__write_mask;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__operand_mask 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__new_value 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__old_value 
                                                = vlSelfRef.csr_file_test_top__DOT__dut__DOT__euen_q;
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__effective_mask 
                                                = (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__operand_mask 
                                                   & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__arch_mask);
                                            __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__Vfuncout 
                                                = (
                                                   (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__old_value 
                                                    & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__effective_mask)) 
                                                   | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__new_value 
                                                      & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__effective_mask));
                                            vlSelfRef.csr_file_test_top__DOT__dut__DOT__euen_q 
                                                = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__50__Vfuncout;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q))) {
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__51__addr 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                        __Vtemp_26 
                                            = VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__51__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_1__write_mask 
                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                            [__Vtemp_26];
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__arch_mask 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_1__write_mask;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__operand_mask 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__new_value 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__old_value 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__prmd_q;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__effective_mask 
                                            = (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__operand_mask 
                                               & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__arch_mask);
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__Vfuncout 
                                            = ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__old_value 
                                                & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__effective_mask)) 
                                               | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__new_value 
                                                  & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__effective_mask));
                                        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q 
                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__52__Vfuncout;
                                    } else {
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__53__addr 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q;
                                        __Vtemp_27 
                                            = VL_MATCHMASKED_I(14, (IData)(__Vfunc_csr_file_test_top__DOT__dut__DOT__write_mask__53__addr), Vcsr_file_test_top__ConstPool__CONST_h1a7fe5a2_0);
                                        vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_0__write_mask 
                                            = Vcsr_file_test_top__ConstPool__TABLE_h3b134c1b_0
                                            [__Vtemp_27];
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__arch_mask 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT____VlemCall_0__write_mask;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__operand_mask 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__new_value 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__old_value 
                                            = vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q;
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__effective_mask 
                                            = (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__operand_mask 
                                               & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__arch_mask);
                                        __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__Vfuncout 
                                            = ((__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__old_value 
                                                & (~ __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__effective_mask)) 
                                               | (__Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__new_value 
                                                  & __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__effective_mask));
                                        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q 
                                            = __Vfunc_csr_file_test_top__DOT__dut__DOT__merge_write__54__Vfuncout;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.xcpt_valid) {
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 0U;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q = 0U;
            vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q 
                = ((0xfffffff8U & vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q) 
                   | (7U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q));
            vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q 
                = ((0x8000ffffU & vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q) 
                   | (((IData)(vlSelfRef.xcpt_esubcode) 
                       << 0x00000016U) | ((IData)(vlSelfRef.xcpt_code) 
                                          << 0x00000010U)));
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q 
                = vlSelfRef.xcpt_pc;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__badv_q 
                = vlSelfRef.xcpt_badvaddr;
            vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q 
                = (0xfffffff8U & vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q);
            if ((0x3fU == (IData)(vlSelfRef.xcpt_code))) {
                vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbehi_q 
                    = (0xffffe000U & vlSelfRef.xcpt_badvaddr);
                vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q 
                    = (8U | (0xffffffe7U & vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q));
            }
        } else if (vlSelfRef.ertn_valid) {
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 0U;
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q = 0U;
            vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q 
                = ((0xfffffff8U & vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q) 
                   | (7U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__prmd_q));
            vlSelfRef.csr_file_test_top__DOT__dut__DOT__llbctl_q 
                = (0xfffffffbU & vlSelfRef.csr_file_test_top__DOT__dut__DOT__llbctl_q);
            if ((0x3fU == (0x0000003fU & (vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q 
                                          >> 0x10U)))) {
                vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q 
                    = (0x00000010U | (0xffffffe7U & vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q));
            }
        }
    } else {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q = 0U;
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q = 8U;
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__euen_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q = 0U;
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__badv_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbidx_q = 0x80000000U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbehi_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo0_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbelo1_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__asid_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdl_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__pgdh_q = 0U;
        vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v4 = 1U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tid_q = 0x12345678U;
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tcfg_q = 0U;
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__llbctl_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw0_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw1_q = 0U;
        vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__stable_counter_q = 0ULL;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_irq_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_armed_q = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_data_q = 0U;
        vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v5 = 1U;
    }
}
