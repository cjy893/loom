// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

void Vcore_top_contract_test_top___024root___nba_sequent__TOP__4(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___nba_sequent__TOP__4\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    CData/*5:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    CData/*5:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    CData/*5:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    CData/*5:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0;
    IData/*31:0*/ __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4;
    __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    CData/*5:0*/ __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4;
    __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    CData/*0:0*/ __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0;
    // Body
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 0U;
    __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 0U;
    if (((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
         & (0U != (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr)))) {
        if ((0x2fU >= (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[0U];
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 
                = (0x0000003fU & vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr);
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 1U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 6U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 6U)))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[1U];
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 6U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 2U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 0x0cU))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 0x0cU)))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[2U];
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 0x0cU));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 3U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 0x12U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 0x12U)))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[3U];
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 0x12U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en) 
          >> 4U) & (0U != (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                          >> 0x18U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                      >> 0x18U)))) {
            __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[4U];
            __VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 
                = (0x0000003fU & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                                  >> 0x18U));
            __VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4 = 1U;
        }
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v0;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v1;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v2;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v3;
    }
    if (__VdlySet__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4) {
        vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf[__VdlyDim0__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4] 
            = __VdlyVal__core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf__v4;
    }
}

void Vcore_top_contract_test_top___024root___nba_sequent__TOP__0(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__1(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__2(Vcore_top_contract_test_top___024root* vlSelf);
void Vcore_top_contract_test_top___024root___nba_sequent__TOP__3(Vcore_top_contract_test_top___024root* vlSelf);

void Vcore_top_contract_test_top___024root___eval_nba(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_nba\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcore_top_contract_test_top___024root___nba_sequent__TOP__0(vlSelf);
        Vcore_top_contract_test_top___024root___nba_sequent__TOP__1(vlSelf);
        Vcore_top_contract_test_top___024root___nba_sequent__TOP__2(vlSelf);
        Vcore_top_contract_test_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcore_top_contract_test_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_en 
                = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                     << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                       << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_addr 
                = ((((0x00000fc0U & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                     >> 3U)) | (0x0000003fU 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48[4U] 
                                                   >> 9U))) 
                    << 0x00000012U) | ((0x0003f000U 
                                        & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                           << 3U)) 
                                       | ((0x00000fc0U 
                                           & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              >> 3U)) 
                                          | (0x0000003fU 
                                             & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                >> 9U)))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[0U] 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[1U] 
                = vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result;
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))) 
                           >> 0x00000020U));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__rf_write_data[4U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__csr_wdata 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_139)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                : (((0U != (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                               >> 3U))) 
                                    & (((0x0000003fU 
                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                            >> 3U)) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                               >> 9U))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140)
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_139)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                    : 
                                                   (((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 3U))) 
                                                     & (0x2fU 
                                                        >= 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                            >> 3U))))
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf
                                                    [
                                                    (0x0000003fU 
                                                     & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                        >> 3U))]
                                                     : 0U))))))))));
            vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellinp__unq_inst__rs2_data 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                        ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                : (((0U != (0x0000003fU 
                                            & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                << 3U) 
                                               | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                  >> 0x0000001dU)))) 
                                    & (((0x0000003fU 
                                         & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                             << 3U) 
                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                               >> 0x0000001dU))) 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                               >> 9U))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                            ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                                ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                    ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                    : 
                                                   (((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                           << 3U) 
                                                          | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                             >> 0x0000001dU)))) 
                                                     & (0x2fU 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                               >> 0x0000001dU)))))
                                                     ? vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT__iregfile__DOT__rf
                                                    [
                                                    (0x0000003fU 
                                                     & ((vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.core_top_contract_test_top__DOT__dut__DOT__core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                           >> 0x0000001dU)))]
                                                     : 0U))))))))));
        }
    }
}

void Vcore_top_contract_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcore_top_contract_test_top___024root___eval_phase__act(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__act\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore_top_contract_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcore_top_contract_test_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcore_top_contract_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcore_top_contract_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vcore_top_contract_test_top___024root___eval_phase__nba(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_phase__nba\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcore_top_contract_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcore_top_contract_test_top___024root___eval_nba(vlSelf);
        Vcore_top_contract_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_contract_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcore_top_contract_test_top___024root___eval_phase__ico(Vcore_top_contract_test_top___024root* vlSelf);

void Vcore_top_contract_test_top___024root___eval(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcore_top_contract_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/core_top/core_top_contract_test_top.sv", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcore_top_contract_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcore_top_contract_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/core_top/core_top_contract_test_top.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore_top_contract_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/core_top/core_top_contract_test_top.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcore_top_contract_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcore_top_contract_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcore_top_contract_test_top___024root___eval_debug_assertions(Vcore_top_contract_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_contract_test_top___024root___eval_debug_assertions\n"); );
    Vcore_top_contract_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.imem_req_ready & 0xfeU)))) {
        Verilated::overWidthError("imem_req_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.imem_resp_valid & 0xfeU)))) {
        Verilated::overWidthError("imem_resp_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmem_req_ready & 0xfeU)))) {
        Verilated::overWidthError("dmem_req_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmem_resp_valid & 0xfeU)))) {
        Verilated::overWidthError("dmem_resp_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmem_resp_is_store 
                      & 0xfeU)))) {
        Verilated::overWidthError("dmem_resp_is_store");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmem_resp_idx & 0xc0U)))) {
        Verilated::overWidthError("dmem_resp_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.ipi_irq & 0xfeU)))) {
        Verilated::overWidthError("ipi_irq");
    }
}
#endif  // VL_DEBUG
