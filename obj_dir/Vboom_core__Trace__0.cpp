// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vboom_core__Syms.h"


void Vboom_core___024root__trace_chg_0_sub_0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vboom_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_0\n"); );
    // Body
    Vboom_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboom_core___024root*>(voidSelf);
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vboom_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vboom_core___024root__trace_chg_dtype____0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____1(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____2(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____3(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____4(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____5(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____6(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
void Vboom_core___024root__trace_chg_dtype____7(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const Vboom_core_commit_signal_t__struct__0& __VdtypeVar);

void Vboom_core___024root__trace_chg_0_sub_0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_0_sub_0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<14>/*447:0*/ __Vtemp_1;
    VlWide<24>/*767:0*/ __Vtemp_4;
    VlWide<40>/*1279:0*/ __Vtemp_10;
    VlWide<36>/*1151:0*/ __Vtemp_12;
    VlWide<15>/*479:0*/ __Vtemp_15;
    VlWide<16>/*511:0*/ __Vtemp_21;
    VlWide<29>/*927:0*/ __Vtemp_22;
    VlWide<43>/*1375:0*/ __Vtemp_23;
    VlWide<24>/*767:0*/ __Vtemp_24;
    VlWide<24>/*767:0*/ __Vtemp_25;
    VlWide<12>/*383:0*/ __Vtemp_27;
    VlWide<14>/*447:0*/ __Vtemp_29;
    VlWide<15>/*479:0*/ __Vtemp_32;
    VlWide<12>/*383:0*/ __Vtemp_34;
    VlWide<14>/*447:0*/ __Vtemp_36;
    VlWide<15>/*479:0*/ __Vtemp_39;
    VlWide<12>/*383:0*/ __Vtemp_41;
    VlWide<14>/*447:0*/ __Vtemp_43;
    VlWide<15>/*479:0*/ __Vtemp_46;
    VlWide<12>/*383:0*/ __Vtemp_48;
    VlWide<12>/*383:0*/ __Vtemp_50;
    VlWide<24>/*767:0*/ __Vtemp_52;
    VlWide<10>/*319:0*/ __Vtemp_60;
    VlWide<12>/*383:0*/ __Vtemp_61;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        __Vtemp_1[0U] = (IData)(((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                 << 7U));
        __Vtemp_1[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                          << 7U) | (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             << 7U) 
                                            >> 0x00000020U)));
        __Vtemp_1[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] 
                                             << 7U));
        __Vtemp_1[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] 
                                             << 7U));
        __Vtemp_1[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] 
                                             << 7U));
        __Vtemp_1[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] 
                                             << 7U));
        __Vtemp_1[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] 
                                             << 7U));
        __Vtemp_1[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] 
                                             << 7U));
        __Vtemp_1[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] 
                                             << 7U));
        __Vtemp_1[9U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] 
                          >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] 
                                             << 7U));
        __Vtemp_1[10U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] 
                           >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] 
                                              << 7U));
        __Vtemp_1[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] 
                           >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
                                              << 7U));
        __Vtemp_1[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
                           >> 0x00000019U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[11U] 
                                              << 7U));
        __Vtemp_1[13U] = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[11U] 
                          >> 0x00000019U);
        bufp->chgWData(oldp+0,(__Vtemp_1),417);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[2U] 
                       | vlSelfRef.__Vm_traceActivity[8U]) 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgWData(oldp+14,(vlSelfRef.boom_core__DOT__wakeups),2304);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+86,(((2U & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                        >> 0x00000014U)) 
                                 | (1U & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U] 
                                          >> 0x00000015U)))),2);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__PVT__instr_type),4);
        bufp->chgWData(oldp+88,(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop),377);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__PVT__instr_type),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgWData(oldp+101,(vlSelfRef.boom_core__DOT__iregfile__DOT__write_data),160);
        bufp->chgWData(oldp+106,(vlSelfRef.boom_core__DOT__rob_wb_resps),2502);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgWData(oldp+185,(vlSelfRef.boom_core__DOT__rename__DOT__dec_uops),754);
        bufp->chgCData(oldp+209,(vlSelfRef.boom_core__DOT__brmask__DOT__will_fire),2);
        bufp->chgCData(oldp+210,(vlSelfRef.boom_core__DOT__bm_br_mask),8);
        bufp->chgCData(oldp+211,(vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask),4);
        bufp->chgIData(oldp+212,((((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                   << 0x0000000fU) 
                                  | (0x00007fffU & vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_32))),30);
        bufp->chgQData(oldp+213,((((QData)((IData)(
                                                   (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_156) 
                                                     << 0x0000000cU) 
                                                    | (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_157) 
                                                        << 6U) 
                                                       | (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_158))))) 
                                   << 0x00000012U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_159) 
                                                      << 0x0000000cU) 
                                                     | (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_161)))))),36);
        bufp->chgCData(oldp+215,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en),2);
        bufp->chgSData(oldp+216,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_lreg),10);
        bufp->chgSData(oldp+217,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_preg),12);
        bufp->chgSData(oldp+218,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand),12);
        bufp->chgQData(oldp+219,((((QData)((IData)(
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_28 
                                                               >> 0x0000001eU))))) 
                                   << 0x0000001eU) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_55) 
                                                      << 0x00000012U) 
                                                     | (0x0003ffffU 
                                                        & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_28))))))),36);
        bufp->chgQData(oldp+221,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask),48);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgCData(oldp+223,(vlSelfRef.boom_core__DOT__dis_fire),2);
        __Vtemp_4[0U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[0U];
        __Vtemp_4[1U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[1U];
        __Vtemp_4[2U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[2U];
        __Vtemp_4[3U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[3U];
        __Vtemp_4[4U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[4U];
        __Vtemp_4[5U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[5U];
        __Vtemp_4[6U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[6U];
        __Vtemp_4[7U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[7U];
        __Vtemp_4[8U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[8U];
        __Vtemp_4[9U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[9U];
        __Vtemp_4[10U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[10U];
        __Vtemp_4[11U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[0U] 
                           << 0x00000019U) | (0x01ffffffU 
                                              & vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_33[11U]));
        __Vtemp_4[12U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[0U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[1U] 
                                     << 0x00000019U));
        __Vtemp_4[13U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[1U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[2U] 
                                     << 0x00000019U));
        __Vtemp_4[14U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[2U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[3U] 
                                     << 0x00000019U));
        __Vtemp_4[15U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[3U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[4U] 
                                     << 0x00000019U));
        __Vtemp_4[16U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[4U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[5U] 
                                     << 0x00000019U));
        __Vtemp_4[17U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[5U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[6U] 
                                     << 0x00000019U));
        __Vtemp_4[18U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[6U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[7U] 
                                     << 0x00000019U));
        __Vtemp_4[19U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[7U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[8U] 
                                     << 0x00000019U));
        __Vtemp_4[20U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[8U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[9U] 
                                     << 0x00000019U));
        __Vtemp_4[21U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[9U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[10U] 
                                     << 0x00000019U));
        __Vtemp_4[22U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[10U] 
                           >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[11U] 
                                     << 0x00000019U));
        __Vtemp_4[23U] = (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_40[11U] 
                          >> 7U);
        bufp->chgWData(oldp+224,(__Vtemp_4),754);
        bufp->chgWData(oldp+248,(vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops),754);
        bufp->chgBit(oldp+272,((1U & (~ (IData)(vlSelfRef.boom_core__DOT__disp__DOT__block)))));
        bufp->chgBit(oldp+273,(vlSelfRef.boom_core__DOT__iq_mem_dis_valid));
        bufp->chgBit(oldp+274,(vlSelfRef.boom_core__DOT__iq_alu_dis_valid));
        bufp->chgBit(oldp+275,(vlSelfRef.boom_core__DOT__iq_unq_dis_valid));
        bufp->chgWData(oldp+276,(vlSelfRef.boom_core__DOT__iq_mem_dis_uop),377);
        bufp->chgWData(oldp+288,(vlSelfRef.boom_core__DOT__iq_alu_dis_uop),377);
        bufp->chgWData(oldp+300,(vlSelfRef.boom_core__DOT__iq_unq_dis_uop),377);
        bufp->chgBit(oldp+312,(vlSelfRef.boom_core__DOT__iq_alu_dis_valid));
        bufp->chgWData(oldp+313,(vlSelfRef.boom_core__DOT__iq_alu_dis_uop),377);
        bufp->chgCData(oldp+325,(vlSelfRef.boom_core__DOT__disp__DOT__iq_ready),2);
        bufp->chgBit(oldp+326,(vlSelfRef.boom_core__DOT__disp__DOT__block));
        bufp->chgBit(oldp+327,(vlSelfRef.boom_core__DOT__iq_mem_dis_valid));
        bufp->chgWData(oldp+328,(vlSelfRef.boom_core__DOT__iq_mem_dis_uop),377);
        bufp->chgCData(oldp+340,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy),6);
        bufp->chgBit(oldp+341,(vlSelfRef.boom_core__DOT__iq_unq_dis_valid));
        bufp->chgWData(oldp+342,(vlSelfRef.boom_core__DOT__iq_unq_dis_uop),377);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgWData(oldp+354,(vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop),377);
        bufp->chgIData(oldp+366,(vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1),32);
        bufp->chgIData(oldp+367,(vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2),32);
        bufp->chgQData(oldp+368,(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1), 
                                             VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2))),64);
        bufp->chgIData(oldp+370,((IData)(VL_MULS_QQQ(64, 
                                                     VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1), 
                                                     VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2)))),32);
        bufp->chgIData(oldp+371,(VL_DIVS_III(32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgWData(oldp+372,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop),377);
        bufp->chgIData(oldp+384,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs2),32);
        bufp->chgWData(oldp+385,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop),377);
        bufp->chgCData(oldp+397,(vlSelfRef.boom_core__DOT__alu_iss_valid),3);
        bufp->chgBit(oldp+398,((2U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state))));
        bufp->chgBit(oldp+399,(vlSelfRef.boom_core__DOT__mem_iq_dis_ready));
        bufp->chgBit(oldp+400,(vlSelfRef.boom_core__DOT__alu_iq_dis_ready));
        bufp->chgBit(oldp+401,(vlSelfRef.boom_core__DOT__unq_iq_dis_ready));
        bufp->chgWData(oldp+402,(vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop),1131);
        bufp->chgCData(oldp+438,(vlSelfRef.boom_core__DOT__mem_iss_valid),2);
        bufp->chgWData(oldp+439,(vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop),754);
        bufp->chgBit(oldp+463,(vlSelfRef.boom_core__DOT__unq_iss_valid));
        bufp->chgWData(oldp+464,(vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop),377);
        bufp->chgSData(oldp+476,(((((0x00000018U & 
                                     ((- (IData)((IData)(vlSelfRef.boom_core__DOT__unq_iss_valid))) 
                                      << 3U)) | (((IData)(vlSelfRef.boom_core__DOT__mem_iss_valid) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                                       >> 2U)))) 
                                   << 5U) | ((0x00000018U 
                                              & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                                 << 2U)) 
                                             | ((6U 
                                                 & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid)))))),10);
        bufp->chgQData(oldp+477,((((QData)((IData)(
                                                   ((((0x00000fc0U 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                           << 9U) 
                                                          | (0x000001c0U 
                                                             & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                                >> 0x00000017U)))) 
                                                      | (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                            >> 3U))) 
                                                     << 0x00000012U) 
                                                    | ((0x0003f000U 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                            << 0x00000010U) 
                                                           | (0x0000f000U 
                                                              & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                                 >> 0x00000010U)))) 
                                                       | ((0x00000fc0U 
                                                           & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                              << 3U)) 
                                                          | (0x0000003fU 
                                                             & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                                >> 0x0000000fU))))))) 
                                   << 0x0000001eU) 
                                  | (QData)((IData)(
                                                    ((((0x00000fc0U 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                           >> 0x0000000fU)) 
                                                       | (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                             >> 0x00000016U))) 
                                                      << 0x00000012U) 
                                                     | ((0x0003f000U 
                                                         & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                             << 0x00000010U) 
                                                            | (0x0000f000U 
                                                               & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                                  >> 0x00000010U)))) 
                                                        | ((0x00000fc0U 
                                                            & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                                << 9U) 
                                                               | (0x000001c0U 
                                                                  & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                                     >> 0x00000017U)))) 
                                                           | (0x0000003fU 
                                                              & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                                 >> 3U))))))))),60);
        __Vtemp_10[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                  << 7U));
        __Vtemp_10[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                              << 7U) 
                                             >> 0x00000020U)));
        __Vtemp_10[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              << 7U));
        __Vtemp_10[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              << 7U));
        __Vtemp_10[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              << 7U));
        __Vtemp_10[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              << 7U));
        __Vtemp_10[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              << 7U));
        __Vtemp_10[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              << 7U));
        __Vtemp_10[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              << 7U));
        __Vtemp_10[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              << 7U));
        __Vtemp_10[10U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                               << 7U));
        __Vtemp_10[11U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               << 7U));
        __Vtemp_10[12U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                               << 7U));
        __Vtemp_10[13U] = (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result)) 
                                    << 8U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid))));
        __Vtemp_10[14U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            << 8U) | (IData)(((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result)) 
                                                << 8U) 
                                               | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid))) 
                                              >> 0x00000020U)));
        __Vtemp_10[15U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                               << 8U));
        __Vtemp_10[16U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                               << 8U));
        __Vtemp_10[17U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                               << 8U));
        __Vtemp_10[18U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                               << 8U));
        __Vtemp_10[19U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                               << 8U));
        __Vtemp_10[20U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                               << 8U));
        __Vtemp_10[21U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                               << 8U));
        __Vtemp_10[22U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                               << 8U));
        __Vtemp_10[23U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                               << 8U));
        __Vtemp_10[24U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               << 8U));
        __Vtemp_10[25U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                            >> 0x00000018U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                               << 8U));
        __Vtemp_10[26U] = (((IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                      << 8U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid)))) 
                            << 1U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                      >> 0x00000018U));
        __Vtemp_10[27U] = (((IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                      << 8U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid)))) 
                            >> 0x0000001fU) | ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                << 9U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                                             << 8U) 
                                                            | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid))) 
                                                           >> 0x00000020U)) 
                                                  << 1U)));
        __Vtemp_10[28U] = (((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                   >> 0x00000017U)) 
                            | ((IData)(((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                          << 8U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid))) 
                                        >> 0x00000020U)) 
                               >> 0x0000001fU)) | (
                                                   (0x000001feU 
                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                       >> 0x00000017U)) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      << 9U)));
        __Vtemp_10[29U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                 << 9U)));
        __Vtemp_10[30U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                 << 9U)));
        __Vtemp_10[31U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                 << 9U)));
        __Vtemp_10[32U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                 << 9U)));
        __Vtemp_10[33U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                 << 9U)));
        __Vtemp_10[34U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                 << 9U)));
        __Vtemp_10[35U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                 << 9U)));
        __Vtemp_10[36U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                 << 9U)));
        __Vtemp_10[37U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                 << 9U)));
        __Vtemp_10[38U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                  >> 0x00000017U)) 
                           | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 << 9U)));
        __Vtemp_10[39U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                  >> 0x00000017U)) 
                           | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
                               << 2U) | (0x000001feU 
                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                            >> 0x00000017U))));
        bufp->chgWData(oldp+479,(__Vtemp_10),1251);
        bufp->chgCData(oldp+519,((((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                   << 2U) | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid)))),3);
        __Vtemp_12[0U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[0U];
        __Vtemp_12[1U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[1U];
        __Vtemp_12[2U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[2U];
        __Vtemp_12[3U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[3U];
        __Vtemp_12[4U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[4U];
        __Vtemp_12[5U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[5U];
        __Vtemp_12[6U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[6U];
        __Vtemp_12[7U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[7U];
        __Vtemp_12[8U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[8U];
        __Vtemp_12[9U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[9U];
        __Vtemp_12[10U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[10U];
        __Vtemp_12[11U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[11U];
        __Vtemp_12[12U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[0U];
        __Vtemp_12[13U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[1U];
        __Vtemp_12[14U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[2U];
        __Vtemp_12[15U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[3U];
        __Vtemp_12[16U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[4U];
        __Vtemp_12[17U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[5U];
        __Vtemp_12[18U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[6U];
        __Vtemp_12[19U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[7U];
        __Vtemp_12[20U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[8U];
        __Vtemp_12[21U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[9U];
        __Vtemp_12[22U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[10U];
        __Vtemp_12[23U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[11U];
        __Vtemp_12[24U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[0U];
        __Vtemp_12[25U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[1U];
        __Vtemp_12[26U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[2U];
        __Vtemp_12[27U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[3U];
        __Vtemp_12[28U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[4U];
        __Vtemp_12[29U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[5U];
        __Vtemp_12[30U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[6U];
        __Vtemp_12[31U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[7U];
        __Vtemp_12[32U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[8U];
        __Vtemp_12[33U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[9U];
        __Vtemp_12[34U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[10U];
        __Vtemp_12[35U] = vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[11U];
        bufp->chgWData(oldp+520,(__Vtemp_12),1152);
        bufp->chgCData(oldp+556,((((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid) 
                                   << 2U) | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid)))),3);
        __Vtemp_15[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                         << 6U) | (
                                                   ((0x00000010U 
                                                     & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                      ? 2U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                       >> 2U))))))) 
                                                   << 3U)) 
                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                          << 2U)) << 2U)) 
                          | (((IData)((0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                          + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                              >> 0x0000001fU) | ((IData)(
                                                         ((0x00000001ffffffffULL 
                                                           & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                              + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                          >> 0x00000020U)) 
                                                 << 1U)));
        __Vtemp_21[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                         << 6U) | (
                                                   ((0x00000010U 
                                                     & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                      ? 2U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                       >> 2U))))))) 
                                                   << 3U)) 
                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true) 
                                          << 2U)) << 2U)) 
                          | (((IData)((0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                          + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                              >> 0x0000001fU) | ((IData)(
                                                         ((0x00000001ffffffffULL 
                                                           & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                              + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                          >> 0x00000020U)) 
                                                 << 1U)));
        __Vtemp_22[16U] = (((IData)((0x00000003fffffffeULL 
                                     & (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))) 
                                        << 1U))) >> 0x0000001eU) 
                           | ((((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                 << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                              << 6U) 
                                             | (((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 1U
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                                << 3U)) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                               << 2U)) 
                                           << 2U)) 
                               | (IData)(((0x00000003fffffffeULL 
                                           & (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                               + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))) 
                                              << 1U)) 
                                          >> 0x00000020U))) 
                              << 2U));
        __Vtemp_22[17U] = (((((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                               << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                            << 6U) 
                                           | (((0x00000010U 
                                                & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                ? 1U
                                                : (
                                                   (8U 
                                                    & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                    ? 2U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                     >> 2U))))))) 
                                              << 3U)) 
                                          | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                             << 2U)) 
                                         << 2U)) | (IData)(
                                                           ((0x00000003fffffffeULL 
                                                             & (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                                 + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))) 
                                                                << 1U)) 
                                                            >> 0x00000020U))) 
                            >> 0x0000001eU) | ((((3U 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                     >> 0x00000017U)) 
                                                 | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                                       << 6U) 
                                                      | (((0x00000010U 
                                                           & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                           ? 1U
                                                           : 
                                                          ((8U 
                                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                            ? 2U
                                                            : 
                                                           (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                             >> 2U))))))) 
                                                         << 3U)) 
                                                     | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                                        << 2U)) 
                                                    >> 0x0000001eU)) 
                                                | ((0x000001fcU 
                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                       >> 0x00000017U)) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      << 9U))) 
                                               << 2U));
        __Vtemp_22[18U] = (((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                     >> 0x00000017U)) 
                              | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                    << 6U) | (((0x00000010U 
                                                & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                ? 1U
                                                : (
                                                   (8U 
                                                    & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                    ? 2U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                     >> 2U))))))) 
                                              << 3U)) 
                                  | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                     << 2U)) >> 0x0000001eU)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                     << 9U))) << 2U));
        __Vtemp_23[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)));
        __Vtemp_23[1U] = (((IData)((0x00000001ffffffffULL 
                                    & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                       + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                           << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                             >> 0x00000020U)));
        __Vtemp_23[2U] = __Vtemp_21[2U];
        __Vtemp_23[3U] = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                           | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                 << 6U) | (((0x00000010U 
                                             & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                             ? 1U : 
                                            ((8U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                              ? 2U : 
                                             (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                             >> 2U))))))) 
                                           << 3U)) 
                               | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true) 
                                  << 2U)) >> 0x0000001eU)) 
                          | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                             >> 0x00000017U)) 
                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                << 9U)));
        __Vtemp_23[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                              << 9U)));
        __Vtemp_23[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                              << 9U)));
        __Vtemp_23[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                              << 9U)));
        __Vtemp_23[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                              << 9U)));
        __Vtemp_23[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                              << 9U)));
        __Vtemp_23[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              << 9U)));
        __Vtemp_23[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                 << 9U)));
        __Vtemp_23[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                 << 9U)));
        __Vtemp_23[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                 << 9U)));
        __Vtemp_23[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 << 9U)));
        __Vtemp_23[14U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                  >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm 
                              << 2U));
        __Vtemp_23[15U] = (((IData)((0x00000003fffffffeULL 
                                     & (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))) 
                                        << 1U))) << 2U) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm 
                              >> 0x0000001eU));
        __Vtemp_23[16U] = __Vtemp_22[16U];
        __Vtemp_23[17U] = __Vtemp_22[17U];
        __Vtemp_23[18U] = __Vtemp_22[18U];
        __Vtemp_23[19U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                     << 9U))) << 2U));
        __Vtemp_23[20U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                     << 9U))) << 2U));
        __Vtemp_23[21U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                     << 9U))) << 2U));
        __Vtemp_23[22U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                     << 9U))) << 2U));
        __Vtemp_23[23U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                     << 9U))) << 2U));
        __Vtemp_23[24U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                     << 9U))) << 2U));
        __Vtemp_23[25U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                     << 9U))) << 2U));
        __Vtemp_23[26U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                     << 9U))) << 2U));
        __Vtemp_23[27U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                   << 9U))) >> 0x0000001eU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                     << 9U))) << 2U));
        __Vtemp_23[28U] = (((IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm))) 
                            << 4U) | ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               >> 0x00000017U)) 
                                        | ((0x000001fcU 
                                            & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               >> 0x00000017U)) 
                                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                              << 9U))) 
                                       >> 0x0000001eU) 
                                      | (0x0000000cU 
                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                            >> 0x00000015U))));
        __Vtemp_23[29U] = (((IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm))) 
                            >> 0x0000001cU) | (((IData)(
                                                        (0x00000001ffffffffULL 
                                                         & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                            + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                                                << 5U) 
                                               | ((IData)(
                                                          ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
        __Vtemp_23[30U] = (((0x0000000fU & ((IData)(
                                                    (0x00000001ffffffffULL 
                                                     & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                        + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                                            >> 0x0000001bU)) 
                            | ((IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                        >> 0x00000020U)) 
                               >> 0x0000001cU)) | (__Vtemp_15[2U] 
                                                   << 4U));
        __Vtemp_23[31U] = ((__Vtemp_15[2U] >> 0x0000001cU) 
                           | ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                       >> 0x00000017U)) 
                                | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                      << 6U) | (((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 1U
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                                << 3U)) 
                                    | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                       << 2U)) >> 0x0000001eU)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                     << 9U))) << 4U));
        __Vtemp_23[32U] = (((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                     >> 0x00000017U)) 
                              | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                    << 6U) | (((0x00000010U 
                                                & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                ? 1U
                                                : (
                                                   (8U 
                                                    & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                    ? 2U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                     >> 2U))))))) 
                                              << 3U)) 
                                  | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                     << 2U)) >> 0x0000001eU)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                     << 9U))) << 4U));
        __Vtemp_23[33U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                     << 9U))) << 4U));
        __Vtemp_23[34U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                     << 9U))) << 4U));
        __Vtemp_23[35U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                     << 9U))) << 4U));
        __Vtemp_23[36U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                     << 9U))) << 4U));
        __Vtemp_23[37U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                     << 9U))) << 4U));
        __Vtemp_23[38U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                     << 9U))) << 4U));
        __Vtemp_23[39U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                     << 9U))) << 4U));
        __Vtemp_23[40U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                     << 9U))) << 4U));
        __Vtemp_23[41U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                      >> 0x00000017U)) 
                               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                  >> 0x00000017U)) 
                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                     << 9U))) << 4U));
        __Vtemp_23[42U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                    >> 0x00000017U)) 
                             | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                >> 0x00000017U)) 
                                | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                   << 9U))) >> 0x0000001cU) 
                           | (0x00000030U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                             >> 0x00000013U)));
        bufp->chgWData(oldp+557,(__Vtemp_23),1350);
        __Vtemp_24[0U] = 0U;
        __Vtemp_24[1U] = 0U;
        __Vtemp_24[2U] = 0U;
        __Vtemp_24[3U] = 0U;
        __Vtemp_24[4U] = 0U;
        __Vtemp_24[5U] = 0U;
        __Vtemp_24[6U] = 0U;
        __Vtemp_24[7U] = 0U;
        __Vtemp_24[8U] = 0U;
        __Vtemp_24[9U] = 0U;
        __Vtemp_24[10U] = 0U;
        __Vtemp_24[11U] = (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[0U] 
                           << 0x00000019U);
        __Vtemp_24[12U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[0U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[1U] 
                                      << 0x00000019U));
        __Vtemp_24[13U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[1U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[2U] 
                                      << 0x00000019U));
        __Vtemp_24[14U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[2U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[3U] 
                                      << 0x00000019U));
        __Vtemp_24[15U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[3U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                      << 0x00000019U));
        __Vtemp_24[16U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[5U] 
                                      << 0x00000019U));
        __Vtemp_24[17U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[5U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[6U] 
                                      << 0x00000019U));
        __Vtemp_24[18U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[6U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[7U] 
                                      << 0x00000019U));
        __Vtemp_24[19U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[7U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                      << 0x00000019U));
        __Vtemp_24[20U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[9U] 
                                      << 0x00000019U));
        __Vtemp_24[21U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[9U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[10U] 
                                      << 0x00000019U));
        __Vtemp_24[22U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[10U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[11U] 
                                      << 0x00000019U));
        __Vtemp_24[23U] = (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[11U] 
                           >> 7U);
        bufp->chgWData(oldp+600,(__Vtemp_24),754);
        bufp->chgQData(oldp+624,((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs2)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs2)))),64);
        __Vtemp_25[0U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[0U];
        __Vtemp_25[1U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[1U];
        __Vtemp_25[2U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U];
        __Vtemp_25[3U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[3U];
        __Vtemp_25[4U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U];
        __Vtemp_25[5U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[5U];
        __Vtemp_25[6U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[6U];
        __Vtemp_25[7U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[7U];
        __Vtemp_25[8U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[8U];
        __Vtemp_25[9U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[9U];
        __Vtemp_25[10U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[10U];
        __Vtemp_25[11U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[0U] 
                            << 0x00000019U) | vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[11U]);
        __Vtemp_25[12U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[0U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[1U] 
                                      << 0x00000019U));
        __Vtemp_25[13U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[1U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[2U] 
                                      << 0x00000019U));
        __Vtemp_25[14U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[2U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[3U] 
                                      << 0x00000019U));
        __Vtemp_25[15U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[3U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                                      << 0x00000019U));
        __Vtemp_25[16U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[4U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[5U] 
                                      << 0x00000019U));
        __Vtemp_25[17U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[5U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[6U] 
                                      << 0x00000019U));
        __Vtemp_25[18U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[6U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[7U] 
                                      << 0x00000019U));
        __Vtemp_25[19U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[7U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                      << 0x00000019U));
        __Vtemp_25[20U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[9U] 
                                      << 0x00000019U));
        __Vtemp_25[21U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[9U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[10U] 
                                      << 0x00000019U));
        __Vtemp_25[22U] = ((vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[10U] 
                            >> 7U) | (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[11U] 
                                      << 0x00000019U));
        __Vtemp_25[23U] = (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[11U] 
                           >> 7U);
        bufp->chgWData(oldp+626,(__Vtemp_25),754);
        bufp->chgBit(oldp+650,(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid));
        bufp->chgCData(oldp+651,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx),6);
        bufp->chgWData(oldp+652,(vlSelfRef.boom_core__DOT__brmask__DOT__brupdate),458);
        bufp->chgCData(oldp+667,(vlSelfRef.boom_core__DOT__resolve_mask),4);
        bufp->chgCData(oldp+668,((0x0000000fU & (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178))) 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                         >> 0x00000016U)))) 
                                                 | ((((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                          >> 0x00000016U))) 
                                                     & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))) 
                                                        & (- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid))))) 
                                                    | (((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                            >> 0x00000016U))) 
                                                       & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))) 
                                                          & (- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid))))))))),4);
        bufp->chgBit(oldp+669,(vlSelfRef.boom_core__DOT__alu_iq_dis_ready));
        bufp->chgSData(oldp+670,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid),16);
        bufp->chgSData(oldp+671,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed),16);
        bufp->chgSData(oldp+672,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready),16);
        bufp->chgSData(oldp+673,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant),16);
        bufp->chgCData(oldp+674,(vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot),4);
        bufp->chgSData(oldp+675,(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available),16);
        bufp->chgCData(oldp+676,(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used),3);
        bufp->chgCData(oldp+677,(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q),4);
        bufp->chgCData(oldp+678,(((~ (IData)(vlSelfRef.boom_core__DOT__resolve_mask)) 
                                  & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))),4);
        bufp->chgBit(oldp+679,((1U & (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid))));
        __Vtemp_27[0U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U];
        __Vtemp_27[1U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U];
        __Vtemp_27[2U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U];
        __Vtemp_27[3U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U];
        __Vtemp_27[4U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U];
        __Vtemp_27[5U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U];
        __Vtemp_27[6U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U];
        __Vtemp_27[7U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U];
        __Vtemp_27[8U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U];
        __Vtemp_27[9U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U];
        __Vtemp_27[10U] = vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U];
        __Vtemp_27[11U] = (0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]);
        bufp->chgWData(oldp+680,(__Vtemp_27),377);
        bufp->chgBit(oldp+692,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid));
        __Vtemp_29[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                  << 7U));
        __Vtemp_29[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                              << 7U) 
                                             >> 0x00000020U)));
        __Vtemp_29[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              << 7U));
        __Vtemp_29[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              << 7U));
        __Vtemp_29[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              << 7U));
        __Vtemp_29[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              << 7U));
        __Vtemp_29[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              << 7U));
        __Vtemp_29[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              << 7U));
        __Vtemp_29[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              << 7U));
        __Vtemp_29[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              << 7U));
        __Vtemp_29[10U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                               << 7U));
        __Vtemp_29[11U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               << 7U));
        __Vtemp_29[12U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                               << 7U));
        __Vtemp_29[13U] = vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid;
        bufp->chgWData(oldp+693,(__Vtemp_29),417);
        bufp->chgBit(oldp+707,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid));
        bufp->chgWData(oldp+708,(vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup),384);
        bufp->chgBit(oldp+720,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid));
        __Vtemp_32[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)));
        __Vtemp_32[1U] = (((IData)((0x00000001ffffffffULL 
                                    & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                       + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                           << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                             >> 0x00000020U)));
        __Vtemp_32[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                         << 6U) | (
                                                   ((0x00000010U 
                                                     & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                      ? 2U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                       >> 2U))))))) 
                                                   << 3U)) 
                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true) 
                                          << 2U)) << 2U)) 
                          | (((IData)((0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                          + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                              >> 0x0000001fU) | ((IData)(
                                                         ((0x00000001ffffffffULL 
                                                           & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                              + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                          >> 0x00000020U)) 
                                                 << 1U)));
        __Vtemp_32[3U] = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                           | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                 << 6U) | (((0x00000010U 
                                             & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                             ? 1U : 
                                            ((8U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                              ? 2U : 
                                             (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                             >> 2U))))))) 
                                           << 3U)) 
                               | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true) 
                                  << 2U)) >> 0x0000001eU)) 
                          | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                             >> 0x00000017U)) 
                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                << 9U)));
        __Vtemp_32[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                              << 9U)));
        __Vtemp_32[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                              << 9U)));
        __Vtemp_32[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                              << 9U)));
        __Vtemp_32[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                              << 9U)));
        __Vtemp_32[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                              << 9U)));
        __Vtemp_32[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              << 9U)));
        __Vtemp_32[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                 << 9U)));
        __Vtemp_32[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                 << 9U)));
        __Vtemp_32[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                 << 9U)));
        __Vtemp_32[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 << 9U)));
        __Vtemp_32[14U] = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 >> 0x00000017U));
        bufp->chgWData(oldp+721,(__Vtemp_32),450);
        bufp->chgBit(oldp+736,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid));
        bufp->chgWData(oldp+737,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop),377);
        bufp->chgIData(oldp+749,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_rs1),32);
        bufp->chgIData(oldp+750,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_rs2),32);
        bufp->chgIData(oldp+751,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_imm),32);
        bufp->chgWData(oldp+752,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop),377);
        bufp->chgIData(oldp+764,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1),32);
        bufp->chgIData(oldp+765,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2),32);
        bufp->chgIData(oldp+766,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm),32);
        bufp->chgIData(oldp+767,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result),32);
        bufp->chgIData(oldp+768,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1),32);
        bufp->chgIData(oldp+769,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2),32);
        bufp->chgBit(oldp+770,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true));
        bufp->chgIData(oldp+771,(((0x00004000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
                                   ? (((0x00001000U 
                                        & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
                                        ? (0x0000001fU 
                                           & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                              >> 0x0000000cU))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                                                           >> 5U)))) 
                                            << 0x0000001aU) 
                                           | (0x03ffffffU 
                                              & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                                                  << 0x00000014U) 
                                                 | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                    >> 0x0000000cU))))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                                                        >> 0x0000000dU))))))
                                   : ((0x00002000U 
                                       & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
                                       ? ((0x00001000U 
                                           & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
                                           ? (0xfffff000U 
                                              & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U])
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                              >> 0x0000001bU)))) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                    >> 0x0000000cU))))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                          >> 0x00000017U)))) 
                                           << 0x0000000cU) 
                                          | (0x00000fffU 
                                             & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                                >> 0x0000000cU)))))),32);
        bufp->chgBit(oldp+772,((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                      >> 1U))));
        __Vtemp_34[0U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                                     >> 0x00000019U));
        __Vtemp_34[1U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                                     >> 0x00000019U));
        __Vtemp_34[2U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                                     >> 0x00000019U));
        __Vtemp_34[3U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                                     >> 0x00000019U));
        __Vtemp_34[4U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                     >> 0x00000019U));
        __Vtemp_34[5U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                     >> 0x00000019U));
        __Vtemp_34[6U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                                     >> 0x00000019U));
        __Vtemp_34[7U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                                     >> 0x00000019U));
        __Vtemp_34[8U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                                     >> 0x00000019U));
        __Vtemp_34[9U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                                     >> 0x00000019U));
        __Vtemp_34[10U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                            << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                                      >> 0x00000019U));
        __Vtemp_34[11U] = (0x01ffffffU & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                                           << 7U) | 
                                          (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                                           >> 0x00000019U)));
        bufp->chgWData(oldp+773,(__Vtemp_34),377);
        bufp->chgBit(oldp+785,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid));
        __Vtemp_36[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result)) 
                                  << 7U));
        __Vtemp_36[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result)) 
                                              << 7U) 
                                             >> 0x00000020U)));
        __Vtemp_36[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              << 7U));
        __Vtemp_36[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              << 7U));
        __Vtemp_36[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              << 7U));
        __Vtemp_36[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              << 7U));
        __Vtemp_36[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              << 7U));
        __Vtemp_36[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              << 7U));
        __Vtemp_36[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              << 7U));
        __Vtemp_36[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              << 7U));
        __Vtemp_36[10U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                               << 7U));
        __Vtemp_36[11U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               << 7U));
        __Vtemp_36[12U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                               << 7U));
        __Vtemp_36[13U] = vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid;
        bufp->chgWData(oldp+786,(__Vtemp_36),417);
        bufp->chgBit(oldp+800,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid));
        bufp->chgWData(oldp+801,(vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup),384);
        bufp->chgBit(oldp+813,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid));
        __Vtemp_39[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)));
        __Vtemp_39[1U] = (((IData)((0x00000001ffffffffULL 
                                    & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                       + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                           << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                             >> 0x00000020U)));
        __Vtemp_39[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                         << 6U) | (
                                                   ((0x00000010U 
                                                     & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                      ? 2U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                       >> 2U))))))) 
                                                   << 3U)) 
                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                          << 2U)) << 2U)) 
                          | (((IData)((0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                          + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                              >> 0x0000001fU) | ((IData)(
                                                         ((0x00000001ffffffffULL 
                                                           & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                              + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                          >> 0x00000020U)) 
                                                 << 1U)));
        __Vtemp_39[3U] = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                           | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                 << 6U) | (((0x00000010U 
                                             & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                             ? 1U : 
                                            ((8U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                              ? 2U : 
                                             (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                             >> 2U))))))) 
                                           << 3U)) 
                               | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                  << 2U)) >> 0x0000001eU)) 
                          | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                             >> 0x00000017U)) 
                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                << 9U)));
        __Vtemp_39[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                              << 9U)));
        __Vtemp_39[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                              << 9U)));
        __Vtemp_39[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                              << 9U)));
        __Vtemp_39[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                              << 9U)));
        __Vtemp_39[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                              << 9U)));
        __Vtemp_39[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              << 9U)));
        __Vtemp_39[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                 << 9U)));
        __Vtemp_39[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                 << 9U)));
        __Vtemp_39[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                 << 9U)));
        __Vtemp_39[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 << 9U)));
        __Vtemp_39[14U] = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 >> 0x00000017U));
        bufp->chgWData(oldp+814,(__Vtemp_39),450);
        bufp->chgBit(oldp+829,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid));
        bufp->chgWData(oldp+830,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop),377);
        bufp->chgIData(oldp+842,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_rs1),32);
        bufp->chgIData(oldp+843,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_rs2),32);
        bufp->chgIData(oldp+844,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_imm),32);
        bufp->chgWData(oldp+845,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop),377);
        bufp->chgIData(oldp+857,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1),32);
        bufp->chgIData(oldp+858,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2),32);
        bufp->chgIData(oldp+859,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm),32);
        bufp->chgIData(oldp+860,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result),32);
        bufp->chgIData(oldp+861,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1),32);
        bufp->chgIData(oldp+862,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2),32);
        bufp->chgBit(oldp+863,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true));
        bufp->chgIData(oldp+864,(((0x00000080U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
                                   ? (((0x00000020U 
                                        & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
                                        ? (0x0000001fU 
                                           & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                              >> 5U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                           >> 0x0000001eU)))) 
                                            << 0x0000001aU) 
                                           | (0x03ffffffU 
                                              & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                 >> 5U)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                        >> 6U))))))
                                   : ((0x00000040U 
                                       & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
                                       ? ((0x00000020U 
                                           & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
                                           ? (0xfffff000U 
                                              & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                 << 7U))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                              >> 0x00000014U)))) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                    >> 5U))))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                          >> 0x00000010U)))) 
                                           << 0x0000000cU) 
                                          | (0x00000fffU 
                                             & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                >> 5U)))))),32);
        bufp->chgBit(oldp+865,((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                      >> 2U))));
        __Vtemp_41[0U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                                              >> 0x00000012U));
        __Vtemp_41[1U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                                              >> 0x00000012U));
        __Vtemp_41[2U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                                              >> 0x00000012U));
        __Vtemp_41[3U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                                              >> 0x00000012U));
        __Vtemp_41[4U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                              >> 0x00000012U));
        __Vtemp_41[5U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                                              >> 0x00000012U));
        __Vtemp_41[6U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                              >> 0x00000012U));
        __Vtemp_41[7U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                              >> 0x00000012U));
        __Vtemp_41[8U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                                              >> 0x00000012U));
        __Vtemp_41[9U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                           << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                                              >> 0x00000012U));
        __Vtemp_41[10U] = ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                            << 0x0000000eU) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                                               >> 0x00000012U));
        __Vtemp_41[11U] = (0x01ffffffU & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                                             >> 0x00000012U)));
        bufp->chgWData(oldp+866,(__Vtemp_41),377);
        bufp->chgBit(oldp+878,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid));
        __Vtemp_43[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                  << 7U));
        __Vtemp_43[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                              << 7U) 
                                             >> 0x00000020U)));
        __Vtemp_43[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              << 7U));
        __Vtemp_43[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              << 7U));
        __Vtemp_43[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              << 7U));
        __Vtemp_43[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              << 7U));
        __Vtemp_43[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              << 7U));
        __Vtemp_43[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              << 7U));
        __Vtemp_43[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              << 7U));
        __Vtemp_43[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              << 7U));
        __Vtemp_43[10U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                               << 7U));
        __Vtemp_43[11U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                               << 7U));
        __Vtemp_43[12U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                            >> 0x00000019U) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                               << 7U));
        __Vtemp_43[13U] = vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid;
        bufp->chgWData(oldp+879,(__Vtemp_43),417);
        bufp->chgBit(oldp+893,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid));
        bufp->chgWData(oldp+894,(vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup),384);
        bufp->chgBit(oldp+906,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid));
        __Vtemp_46[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)));
        __Vtemp_46[1U] = (((IData)((0x00000001ffffffffULL 
                                    & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                       + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                           << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                             >> 0x00000020U)));
        __Vtemp_46[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                            << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                         << 6U) | (
                                                   ((0x00000010U 
                                                     & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                      ? 2U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                       >> 2U))))))) 
                                                   << 3U)) 
                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                          << 2U)) << 2U)) 
                          | (((IData)((0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                          + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                              >> 0x0000001fU) | ((IData)(
                                                         ((0x00000001ffffffffULL 
                                                           & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                              + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                          >> 0x00000020U)) 
                                                 << 1U)));
        __Vtemp_46[3U] = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                           | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                 << 6U) | (((0x00000010U 
                                             & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                             ? 1U : 
                                            ((8U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                              ? 2U : 
                                             (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                             >> 2U))))))) 
                                           << 3U)) 
                               | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                  << 2U)) >> 0x0000001eU)) 
                          | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                             >> 0x00000017U)) 
                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                << 9U)));
        __Vtemp_46[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                              << 9U)));
        __Vtemp_46[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                              << 9U)));
        __Vtemp_46[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                              << 9U)));
        __Vtemp_46[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                              << 9U)));
        __Vtemp_46[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                              << 9U)));
        __Vtemp_46[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                 >> 0x00000017U)) | 
                          ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                           >> 0x00000017U)) 
                           | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              << 9U)));
        __Vtemp_46[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                 << 9U)));
        __Vtemp_46[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                 << 9U)));
        __Vtemp_46[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                 << 9U)));
        __Vtemp_46[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                  >> 0x00000017U)) 
                           | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 << 9U)));
        __Vtemp_46[14U] = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                 >> 0x00000017U));
        bufp->chgWData(oldp+907,(__Vtemp_46),450);
        bufp->chgBit(oldp+922,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_valid));
        bufp->chgWData(oldp+923,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop),377);
        bufp->chgIData(oldp+935,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_rs1),32);
        bufp->chgIData(oldp+936,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_rs2),32);
        bufp->chgIData(oldp+937,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_imm),32);
        bufp->chgWData(oldp+938,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop),377);
        bufp->chgIData(oldp+950,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1),32);
        bufp->chgIData(oldp+951,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2),32);
        bufp->chgIData(oldp+952,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm),32);
        bufp->chgIData(oldp+953,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result),32);
        bufp->chgIData(oldp+954,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1),32);
        bufp->chgIData(oldp+955,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2),32);
        bufp->chgBit(oldp+956,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true));
        bufp->chgBit(oldp+957,((1U & (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid))));
        __Vtemp_48[0U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U];
        __Vtemp_48[1U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U];
        __Vtemp_48[2U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U];
        __Vtemp_48[3U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U];
        __Vtemp_48[4U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U];
        __Vtemp_48[5U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U];
        __Vtemp_48[6U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U];
        __Vtemp_48[7U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U];
        __Vtemp_48[8U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U];
        __Vtemp_48[9U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U];
        __Vtemp_48[10U] = vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U];
        __Vtemp_48[11U] = (0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]);
        bufp->chgWData(oldp+958,(__Vtemp_48),377);
        bufp->chgIData(oldp+970,((((- (IData)((1U & 
                                               (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                                                >> 0x0000001eU)))) 
                                   << 0x0000000cU) 
                                  | (0x00000fffU & 
                                     (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                                      >> 0x00000013U)))),32);
        bufp->chgBit(oldp+971,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_valid));
        bufp->chgWData(oldp+972,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_uop),377);
        bufp->chgIData(oldp+984,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_rs1),32);
        bufp->chgIData(oldp+985,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_rs2),32);
        bufp->chgIData(oldp+986,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_imm),32);
        bufp->chgBit(oldp+987,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid));
        bufp->chgIData(oldp+988,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs1),32);
        bufp->chgIData(oldp+989,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm),32);
        bufp->chgIData(oldp+990,((vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs1 
                                  + vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm)),32);
        bufp->chgBit(oldp+991,((1U & ((IData)(vlSelfRef.boom_core__DOT__mem_iss_valid) 
                                      >> 1U))));
        __Vtemp_50[0U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                                     >> 0x00000019U));
        __Vtemp_50[1U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                                     >> 0x00000019U));
        __Vtemp_50[2U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                                     >> 0x00000019U));
        __Vtemp_50[3U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                                     >> 0x00000019U));
        __Vtemp_50[4U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                     >> 0x00000019U));
        __Vtemp_50[5U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                     >> 0x00000019U));
        __Vtemp_50[6U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                                     >> 0x00000019U));
        __Vtemp_50[7U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                                     >> 0x00000019U));
        __Vtemp_50[8U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                                     >> 0x00000019U));
        __Vtemp_50[9U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                           << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                                     >> 0x00000019U));
        __Vtemp_50[10U] = ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                            << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                                      >> 0x00000019U));
        __Vtemp_50[11U] = (0x01ffffffU & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                                           << 7U) | 
                                          (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                                           >> 0x00000019U)));
        bufp->chgWData(oldp+992,(__Vtemp_50),377);
        bufp->chgIData(oldp+1004,((((- (IData)((1U 
                                                & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                                                   >> 0x00000017U)))) 
                                    << 0x0000000cU) 
                                   | (0x00000fffU & 
                                      (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                                       >> 0x0000000cU)))),32);
        bufp->chgBit(oldp+1005,(((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid) 
                                 & (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                    >> 0x0000000cU))));
        bufp->chgIData(oldp+1006,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs2),32);
        bufp->chgBit(oldp+1007,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_valid));
        bufp->chgWData(oldp+1008,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_uop),377);
        bufp->chgIData(oldp+1020,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_rs1),32);
        bufp->chgIData(oldp+1021,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_rs2),32);
        bufp->chgIData(oldp+1022,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_imm),32);
        bufp->chgBit(oldp+1023,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid));
        bufp->chgIData(oldp+1024,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs1),32);
        bufp->chgIData(oldp+1025,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_imm),32);
        bufp->chgBit(oldp+1026,(vlSelfRef.boom_core__DOT__mem_iq_dis_ready));
        bufp->chgSData(oldp+1027,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid),16);
        bufp->chgSData(oldp+1028,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed),16);
        bufp->chgSData(oldp+1029,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready),16);
        bufp->chgSData(oldp+1030,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant),16);
        bufp->chgCData(oldp+1031,(vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot),4);
        bufp->chgSData(oldp+1032,(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available),16);
        bufp->chgCData(oldp+1033,(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used),2);
        bufp->chgQData(oldp+1034,(vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec),48);
        bufp->chgBit(oldp+1036,((1U & (~ (0U != (0x00007fffffffffffULL 
                                                 & (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                    >> 1U)))))));
        bufp->chgQData(oldp+1037,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec),48);
        bufp->chgQData(oldp+1039,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec),48);
        Vboom_core___024root__trace_chg_dtype____0(vlSelf, bufp, 1041, vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q);
        Vboom_core___024root__trace_chg_dtype____1(vlSelf, bufp, 1073, vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q);
        bufp->chgCData(oldp+1105,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_idx),6);
        bufp->chgCData(oldp+1106,((((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr) 
                                    << 1U) | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr_lsb))),6);
        Vboom_core___024root__trace_chg_dtype____2(vlSelf, bufp, 1107, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_val);
        Vboom_core___024root__trace_chg_dtype____3(vlSelf, bufp, 1109, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy);
        Vboom_core___024root__trace_chg_dtype____4(vlSelf, bufp, 1111, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe);
        Vboom_core___024root__trace_chg_dtype____5(vlSelf, bufp, 1113, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception);
        Vboom_core___024root__trace_chg_dtype____6(vlSelf, bufp, 1115, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_predicated);
        bufp->chgCData(oldp+1117,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head),5);
        bufp->chgCData(oldp+1118,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail),5);
        bufp->chgCData(oldp+1119,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr),5);
        bufp->chgBit(oldp+1120,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_lsb));
        bufp->chgBit(oldp+1121,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_lsb));
        bufp->chgBit(oldp+1122,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr_lsb));
        bufp->chgBit(oldp+1123,((1U & (~ ((0U != vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[0U]) 
                                          | (0U != vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[1U]))))));
        bufp->chgCData(oldp+1124,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state),2);
        bufp->chgCData(oldp+1125,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                    << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))),2);
        bufp->chgCData(oldp+1126,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals),2);
        bufp->chgCData(oldp+1127,(((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                           >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[0U] 
                                          >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))),2);
        bufp->chgCData(oldp+1128,(((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[1U] 
                                           >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[0U] 
                                          >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))),2);
        bufp->chgCData(oldp+1129,(((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[1U] 
                                           >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[0U] 
                                          >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))),2);
        bufp->chgCData(oldp+1130,(((((~ ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                          >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                         | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
                                            >> 8U))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)) 
                                    << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51))),2);
        bufp->chgBit(oldp+1131,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)) 
                                 & ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
                                    == (0x0000001fU 
                                        & (((IData)(1U) 
                                            + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)) 
                                           & (- (IData)(
                                                        (0x1fU 
                                                         != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail))))))))));
        bufp->chgCData(oldp+1132,(vlSelfRef.boom_core__DOT__unq_inst__DOT__state),2);
        bufp->chgCData(oldp+1133,((3U & ((2U & (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                                          ? ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state) 
                                             & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done))))))
                                          : ((((2U 
                                                != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)) 
                                               & (IData)(vlSelfRef.boom_core__DOT__unq_iss_valid))
                                               ? ((0x00008000U 
                                                   & vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U])
                                                   ? 1U
                                                   : 
                                                  ((0x00002000U 
                                                    & vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U])
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                                                                     >> 0x0000000eU)))))))
                                               : (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
                                             & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))))))))),2);
        bufp->chgCData(oldp+1134,(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_cnt),5);
        bufp->chgBit(oldp+1135,(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done));
        bufp->chgBit(oldp+1136,(vlSelfRef.boom_core__DOT__unq_iq_dis_ready));
        bufp->chgBit(oldp+1137,(vlSelfRef.boom_core__DOT__unq_iss_valid));
        bufp->chgWData(oldp+1138,(vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop),377);
        bufp->chgSData(oldp+1150,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid),12);
        bufp->chgSData(oldp+1151,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed),12);
        bufp->chgSData(oldp+1152,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready),12);
        bufp->chgSData(oldp+1153,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant),12);
        bufp->chgCData(oldp+1154,(vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot),4);
        bufp->chgSData(oldp+1155,(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available),12);
        bufp->chgBit(oldp+1156,(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[10U]))) {
        bufp->chgWData(oldp+1157,(vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops),754);
        bufp->chgCData(oldp+1181,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_en),2);
        bufp->chgSData(oldp+1182,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_lreg),10);
        bufp->chgSData(oldp+1183,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_preg),12);
        bufp->chgCData(oldp+1184,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_en),2);
        bufp->chgSData(oldp+1185,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_preg),12);
        bufp->chgCData(oldp+1186,(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception),2);
        bufp->chgCData(oldp+1187,(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit),2);
        bufp->chgBit(oldp+1188,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155))));
        bufp->chgBit(oldp+1189,(((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155))) 
                                 & (0U != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)))));
    }
    bufp->chgBit(oldp+1190,(vlSelfRef.clk));
    bufp->chgBit(oldp+1191,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+1192,(vlSelfRef.fe_valid),4);
    bufp->chgWData(oldp+1193,(vlSelfRef.fe_insts),128);
    bufp->chgBit(oldp+1197,(vlSelfRef.fe_ready));
    bufp->chgBit(oldp+1198,(vlSelfRef.lsu_agen_valid));
    bufp->chgIData(oldp+1199,(vlSelfRef.lsu_agen_addr),32);
    bufp->chgBit(oldp+1200,(vlSelfRef.lsu_dgen_valid));
    bufp->chgBit(oldp+1201,(vlSelfRef.lsu_resp_valid));
    bufp->chgWData(oldp+1202,(vlSelfRef.lsu_resp),417);
    bufp->chgBit(oldp+1216,(vlSelfRef.csr_req_valid));
    bufp->chgSData(oldp+1217,(vlSelfRef.csr_addr),14);
    bufp->chgCData(oldp+1218,(vlSelfRef.csr_cmd),2);
    bufp->chgIData(oldp+1219,(vlSelfRef.csr_wdata),32);
    bufp->chgIData(oldp+1220,(vlSelfRef.csr_rdata),32);
    Vboom_core___024root__trace_chg_dtype____7(vlSelf, bufp, 1221, vlSelfRef.commit);
    bufp->chgBit(oldp+1252,(vlSelfRef.rob_empty));
    bufp->chgIData(oldp+1253,(vlSelfRef.debug_pc),32);
    bufp->chgBit(oldp+1254,(vlSelfRef.commit_valid_dbg));
    bufp->chgCData(oldp+1255,(vlSelfRef.commit_ldst_dbg),5);
    bufp->chgBit(oldp+1256,(vlSelfRef.rf_wr_en_dbg));
    bufp->chgCData(oldp+1257,(vlSelfRef.rf_wr_pdst_dbg),6);
    bufp->chgCData(oldp+1258,(vlSelfRef.rf_wr_ldst_dbg),5);
    bufp->chgIData(oldp+1259,(vlSelfRef.rf_wr_data_dbg),32);
    bufp->chgIData(oldp+1260,(vlSelfRef.alu_rs1_dbg),32);
    bufp->chgIData(oldp+1261,(vlSelfRef.alu_imm_dbg),32);
    bufp->chgIData(oldp+1262,(vlSelfRef.alu_imm_packed_dbg),26);
    bufp->chgCData(oldp+1263,(vlSelfRef.alu_imm_sel_dbg),3);
    bufp->chgBit(oldp+1264,(vlSelfRef.rob_ready_dbg));
    bufp->chgCData(oldp+1265,(vlSelfRef.ren_stalls_dbg),2);
    bufp->chgCData(oldp+1266,(vlSelfRef.rn2_mask_dbg),2);
    bufp->chgCData(oldp+1267,(vlSelfRef.alu_res_valid_dbg),3);
    bufp->chgCData(oldp+1268,(vlSelfRef.rob_wb_valid_dbg),6);
    bufp->chgCData(oldp+1269,(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire),2);
    __Vtemp_52[0U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[0U];
    __Vtemp_52[1U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[1U];
    __Vtemp_52[2U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[2U];
    __Vtemp_52[3U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[3U];
    __Vtemp_52[4U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[4U];
    __Vtemp_52[5U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[5U];
    __Vtemp_52[6U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[6U];
    __Vtemp_52[7U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U];
    __Vtemp_52[8U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[8U];
    __Vtemp_52[9U] = (((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
                       << 0x00000019U) | vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[9U]);
    __Vtemp_52[10U] = (((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
                        >> 7U) | ((IData)(((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                                           >> 0x00000020U)) 
                                  << 0x00000019U));
    __Vtemp_52[11U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[0U] 
                        << 0x00000019U) | ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                                                    >> 0x00000020U)) 
                                           >> 7U));
    __Vtemp_52[12U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[0U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[1U] 
                                  << 0x00000019U));
    __Vtemp_52[13U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[1U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[2U] 
                                  << 0x00000019U));
    __Vtemp_52[14U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[2U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[3U] 
                                  << 0x00000019U));
    __Vtemp_52[15U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[3U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[4U] 
                                  << 0x00000019U));
    __Vtemp_52[16U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[4U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[5U] 
                                  << 0x00000019U));
    __Vtemp_52[17U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[5U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[6U] 
                                  << 0x00000019U));
    __Vtemp_52[18U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[6U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[7U] 
                                  << 0x00000019U));
    __Vtemp_52[19U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[7U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[8U] 
                                  << 0x00000019U));
    __Vtemp_52[20U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[8U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[9U] 
                                  << 0x00000019U));
    __Vtemp_52[21U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[9U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[10U] 
                                  << 0x00000019U));
    __Vtemp_52[22U] = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[10U] 
                        >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[11U] 
                                  << 0x00000019U));
    __Vtemp_52[23U] = (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[11U] 
                       >> 7U);
    bufp->chgWData(oldp+1270,(__Vtemp_52),754);
    bufp->chgCData(oldp+1294,((3U & (IData)(vlSelfRef.fe_valid))),2);
    bufp->chgCData(oldp+1295,((((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_101) 
                                << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102))),4);
    bufp->chgCData(oldp+1296,(((((0x0fU == (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25)) 
                                 & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                    >> 0x00000015U)) 
                                << 1U) | ((0x0fU == (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q)) 
                                          & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U] 
                                             >> 0x00000015U)))),2);
    bufp->chgCData(oldp+1297,(vlSelfRef.boom_core__DOT__wakeup_valid_w),6);
    bufp->chgQData(oldp+1298,(vlSelfRef.boom_core__DOT__wakeup_pdst_w),36);
    __Vtemp_60[0U] = vlSelfRef.alu_rs1_dbg;
    __Vtemp_60[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144;
    __Vtemp_60[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_139;
    __Vtemp_60[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134;
    __Vtemp_60[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129;
    __Vtemp_60[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124;
    __Vtemp_60[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119;
    __Vtemp_60[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114;
    __Vtemp_60[8U] = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109))));
    __Vtemp_60[9U] = (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109))) 
                              >> 0x00000020U));
    bufp->chgWData(oldp+1300,(__Vtemp_60),320);
    bufp->chgCData(oldp+1310,(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en),5);
    bufp->chgIData(oldp+1311,(vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr),30);
    bufp->chgCData(oldp+1312,(((IData)(vlSelfRef.lsu_agen_valid) 
                               << 1U)),2);
    bufp->chgQData(oldp+1313,(((QData)((IData)(vlSelfRef.lsu_agen_addr)) 
                               << 0x00000020U)),64);
    bufp->chgCData(oldp+1315,(((0x001ffffeU & (((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid) 
                                                << 1U) 
                                               & (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                                  >> 0x0000000bU))) 
                               | (IData)(vlSelfRef.lsu_dgen_valid))),2);
    bufp->chgCData(oldp+1316,(vlSelfRef.boom_core__DOT__brmask__DOT__alloc_mask),8);
    bufp->chgCData(oldp+1317,(((((8U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                                  ? ((4U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                                      ? ((2U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                                          ? (1U & (~ (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25)))
                                          : 2U) : 4U)
                                  : 8U) & (- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                                         >> 0x00000015U))))) 
                               | (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))),4);
    bufp->chgIData(oldp+1318,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.alu_rs1_dbg))))),32);
    bufp->chgIData(oldp+1319,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_148)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144))))),32);
    bufp->chgIData(oldp+1320,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_139))))),32);
    bufp->chgIData(oldp+1321,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134))))),32);
    bufp->chgIData(oldp+1322,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129))))),32);
    bufp->chgIData(oldp+1323,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124))))),32);
    bufp->chgBit(oldp+1324,((1U & (IData)(vlSelfRef.fe_valid))));
    bufp->chgBit(oldp+1325,((1U & ((IData)(vlSelfRef.fe_valid) 
                                   >> 1U))));
    bufp->chgIData(oldp+1326,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119))))),32);
    bufp->chgIData(oldp+1327,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114))))),32);
    bufp->chgCData(oldp+1328,(((0x00000038U & (((2U 
                                                 & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))
                                                 ? 
                                                (3U 
                                                 | ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[1U] 
                                                         >> 0x0000000fU))) 
                                                    << 2U))
                                                 : 
                                                ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_170) 
                                                 >> 3U)) 
                                               << 3U)) 
                               | (7U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_170)))),6);
    bufp->chgCData(oldp+1329,(((0x00000018U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire) 
                                                              >> 1U)))) 
                                               << 3U)) 
                               | (3U & (- (IData)((1U 
                                                   & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))))))),6);
    bufp->chgCData(oldp+1330,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en),6);
    bufp->chgQData(oldp+1331,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg),36);
    bufp->chgBit(oldp+1333,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                              & ((~ ((~ ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                          >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                         | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
                                            >> 8U))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48))) 
                                 | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception) 
                                    >> 1U))) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47) 
                                                   & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)) 
                                                      | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)))))));
    bufp->chgBit(oldp+1334,(vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d1));
    bufp->chgBit(oldp+1335,(vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d2));
    bufp->chgBit(oldp+1336,(((0U != vlSelfRef.commit
                              .__PVT__valids) & (0U 
                                                 == 
                                                 ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit) 
                                                  ^ (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals))))));
    bufp->chgIData(oldp+1337,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                            ? ((vlSelfRef.lsu_resp[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.lsu_resp[0U] 
                                                  >> 7U))
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104))))),32);
    bufp->chgIData(oldp+1338,(vlSelfRef.fe_insts[0U]),32);
    __Vtemp_61[0U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[0U];
    __Vtemp_61[1U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[1U];
    __Vtemp_61[2U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[2U];
    __Vtemp_61[3U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[3U];
    __Vtemp_61[4U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[4U];
    __Vtemp_61[5U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[5U];
    __Vtemp_61[6U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[6U];
    __Vtemp_61[7U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U];
    __Vtemp_61[8U] = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[8U];
    __Vtemp_61[9U] = (((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
                       << 0x00000019U) | vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[9U]);
    __Vtemp_61[10U] = (((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
                        >> 7U) | ((IData)(((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                                           >> 0x00000020U)) 
                                  << 0x00000019U));
    __Vtemp_61[11U] = ((IData)(((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                                >> 0x00000020U)) >> 7U);
    bufp->chgWData(oldp+1339,(__Vtemp_61),377);
    bufp->chgCData(oldp+1351,((vlSelfRef.fe_insts[0U] 
                               >> 0x0000001aU)),6);
    bufp->chgBit(oldp+1352,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x0000001dU))));
    bufp->chgBit(oldp+1353,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x0000001cU))));
    bufp->chgBit(oldp+1354,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x0000001bU))));
    bufp->chgBit(oldp+1355,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x0000001aU))));
    bufp->chgBit(oldp+1356,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x00000019U))));
    bufp->chgBit(oldp+1357,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x00000018U))));
    bufp->chgBit(oldp+1358,((1U & (vlSelfRef.fe_insts[0U] 
                                   >> 0x00000016U))));
    bufp->chgCData(oldp+1359,((0x0000001fU & vlSelfRef.fe_insts[0U])),5);
    bufp->chgCData(oldp+1360,((0x0000001fU & (vlSelfRef.fe_insts[0U] 
                                              >> 5U))),5);
    bufp->chgCData(oldp+1361,((0x0000001fU & (vlSelfRef.fe_insts[0U] 
                                              >> 0x0000000aU))),5);
    bufp->chgSData(oldp+1362,((0x00000fffU & (vlSelfRef.fe_insts[0U] 
                                              >> 0x0000000aU))),12);
    bufp->chgSData(oldp+1363,((0x00003fffU & (vlSelfRef.fe_insts[0U] 
                                              >> 0x0000000aU))),14);
    bufp->chgIData(oldp+1364,((0x000fffffU & (vlSelfRef.fe_insts[0U] 
                                              >> 5U))),20);
    bufp->chgSData(oldp+1365,((0x0000ffffU & (vlSelfRef.fe_insts[0U] 
                                              >> 0x0000000aU))),16);
    bufp->chgIData(oldp+1366,(((0x03ff0000U & (vlSelfRef.fe_insts[0U] 
                                               << 0x00000010U)) 
                               | (0x0000ffffU & (vlSelfRef.fe_insts[0U] 
                                                 >> 0x0000000aU)))),26);
    bufp->chgCData(oldp+1367,((0x0000007fU & (vlSelfRef.fe_insts[0U] 
                                              >> 0x0000000fU))),7);
    bufp->chgCData(oldp+1368,((7U & (vlSelfRef.fe_insts[0U] 
                                     >> 0x0000000fU))),5);
    bufp->chgBit(oldp+1369,((1U & (~ ((3U == (3U & 
                                              (vlSelfRef.fe_insts[0U] 
                                               >> 0x0000001bU))) 
                                      | (vlSelfRef.fe_insts[0U] 
                                         >> 0x0000001dU))))));
    bufp->chgIData(oldp+1370,(vlSelfRef.fe_insts[1U]),32);
    bufp->chgCData(oldp+1371,((vlSelfRef.fe_insts[1U] 
                               >> 0x0000001aU)),6);
    bufp->chgBit(oldp+1372,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x0000001dU))));
    bufp->chgBit(oldp+1373,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x0000001cU))));
    bufp->chgBit(oldp+1374,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x0000001bU))));
    bufp->chgBit(oldp+1375,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x0000001aU))));
    bufp->chgBit(oldp+1376,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x00000019U))));
    bufp->chgBit(oldp+1377,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x00000018U))));
    bufp->chgBit(oldp+1378,((1U & (vlSelfRef.fe_insts[1U] 
                                   >> 0x00000016U))));
    bufp->chgCData(oldp+1379,((0x0000001fU & vlSelfRef.fe_insts[1U])),5);
    bufp->chgCData(oldp+1380,((0x0000001fU & (vlSelfRef.fe_insts[1U] 
                                              >> 5U))),5);
    bufp->chgCData(oldp+1381,((0x0000001fU & (vlSelfRef.fe_insts[1U] 
                                              >> 0x0000000aU))),5);
    bufp->chgSData(oldp+1382,((0x00000fffU & (vlSelfRef.fe_insts[1U] 
                                              >> 0x0000000aU))),12);
    bufp->chgSData(oldp+1383,((0x00003fffU & (vlSelfRef.fe_insts[1U] 
                                              >> 0x0000000aU))),14);
    bufp->chgIData(oldp+1384,((0x000fffffU & (vlSelfRef.fe_insts[1U] 
                                              >> 5U))),20);
    bufp->chgSData(oldp+1385,((0x0000ffffU & (vlSelfRef.fe_insts[1U] 
                                              >> 0x0000000aU))),16);
    bufp->chgIData(oldp+1386,(((0x03ff0000U & (vlSelfRef.fe_insts[1U] 
                                               << 0x00000010U)) 
                               | (0x0000ffffU & (vlSelfRef.fe_insts[1U] 
                                                 >> 0x0000000aU)))),26);
    bufp->chgCData(oldp+1387,((0x0000007fU & (vlSelfRef.fe_insts[1U] 
                                              >> 0x0000000fU))),7);
    bufp->chgCData(oldp+1388,((7U & (vlSelfRef.fe_insts[1U] 
                                     >> 0x0000000fU))),5);
    bufp->chgBit(oldp+1389,((1U & (~ ((3U == (3U & 
                                              (vlSelfRef.fe_insts[1U] 
                                               >> 0x0000001bU))) 
                                      | (vlSelfRef.fe_insts[1U] 
                                         >> 0x0000001dU))))));
}

void Vboom_core___024root__trace_chg_dtype____0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[31]),6);
    bufp->chgCData(oldp+1,(__VdtypeVar[30]),6);
    bufp->chgCData(oldp+2,(__VdtypeVar[29]),6);
    bufp->chgCData(oldp+3,(__VdtypeVar[28]),6);
    bufp->chgCData(oldp+4,(__VdtypeVar[27]),6);
    bufp->chgCData(oldp+5,(__VdtypeVar[26]),6);
    bufp->chgCData(oldp+6,(__VdtypeVar[25]),6);
    bufp->chgCData(oldp+7,(__VdtypeVar[24]),6);
    bufp->chgCData(oldp+8,(__VdtypeVar[23]),6);
    bufp->chgCData(oldp+9,(__VdtypeVar[22]),6);
    bufp->chgCData(oldp+10,(__VdtypeVar[21]),6);
    bufp->chgCData(oldp+11,(__VdtypeVar[20]),6);
    bufp->chgCData(oldp+12,(__VdtypeVar[19]),6);
    bufp->chgCData(oldp+13,(__VdtypeVar[18]),6);
    bufp->chgCData(oldp+14,(__VdtypeVar[17]),6);
    bufp->chgCData(oldp+15,(__VdtypeVar[16]),6);
    bufp->chgCData(oldp+16,(__VdtypeVar[15]),6);
    bufp->chgCData(oldp+17,(__VdtypeVar[14]),6);
    bufp->chgCData(oldp+18,(__VdtypeVar[13]),6);
    bufp->chgCData(oldp+19,(__VdtypeVar[12]),6);
    bufp->chgCData(oldp+20,(__VdtypeVar[11]),6);
    bufp->chgCData(oldp+21,(__VdtypeVar[10]),6);
    bufp->chgCData(oldp+22,(__VdtypeVar[9]),6);
    bufp->chgCData(oldp+23,(__VdtypeVar[8]),6);
    bufp->chgCData(oldp+24,(__VdtypeVar[7]),6);
    bufp->chgCData(oldp+25,(__VdtypeVar[6]),6);
    bufp->chgCData(oldp+26,(__VdtypeVar[5]),6);
    bufp->chgCData(oldp+27,(__VdtypeVar[4]),6);
    bufp->chgCData(oldp+28,(__VdtypeVar[3]),6);
    bufp->chgCData(oldp+29,(__VdtypeVar[2]),6);
    bufp->chgCData(oldp+30,(__VdtypeVar[1]),6);
    bufp->chgCData(oldp+31,(__VdtypeVar[0]),6);
}

void Vboom_core___024root__trace_chg_dtype____1(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[31]),6);
    bufp->chgCData(oldp+1,(__VdtypeVar[30]),6);
    bufp->chgCData(oldp+2,(__VdtypeVar[29]),6);
    bufp->chgCData(oldp+3,(__VdtypeVar[28]),6);
    bufp->chgCData(oldp+4,(__VdtypeVar[27]),6);
    bufp->chgCData(oldp+5,(__VdtypeVar[26]),6);
    bufp->chgCData(oldp+6,(__VdtypeVar[25]),6);
    bufp->chgCData(oldp+7,(__VdtypeVar[24]),6);
    bufp->chgCData(oldp+8,(__VdtypeVar[23]),6);
    bufp->chgCData(oldp+9,(__VdtypeVar[22]),6);
    bufp->chgCData(oldp+10,(__VdtypeVar[21]),6);
    bufp->chgCData(oldp+11,(__VdtypeVar[20]),6);
    bufp->chgCData(oldp+12,(__VdtypeVar[19]),6);
    bufp->chgCData(oldp+13,(__VdtypeVar[18]),6);
    bufp->chgCData(oldp+14,(__VdtypeVar[17]),6);
    bufp->chgCData(oldp+15,(__VdtypeVar[16]),6);
    bufp->chgCData(oldp+16,(__VdtypeVar[15]),6);
    bufp->chgCData(oldp+17,(__VdtypeVar[14]),6);
    bufp->chgCData(oldp+18,(__VdtypeVar[13]),6);
    bufp->chgCData(oldp+19,(__VdtypeVar[12]),6);
    bufp->chgCData(oldp+20,(__VdtypeVar[11]),6);
    bufp->chgCData(oldp+21,(__VdtypeVar[10]),6);
    bufp->chgCData(oldp+22,(__VdtypeVar[9]),6);
    bufp->chgCData(oldp+23,(__VdtypeVar[8]),6);
    bufp->chgCData(oldp+24,(__VdtypeVar[7]),6);
    bufp->chgCData(oldp+25,(__VdtypeVar[6]),6);
    bufp->chgCData(oldp+26,(__VdtypeVar[5]),6);
    bufp->chgCData(oldp+27,(__VdtypeVar[4]),6);
    bufp->chgCData(oldp+28,(__VdtypeVar[3]),6);
    bufp->chgCData(oldp+29,(__VdtypeVar[2]),6);
    bufp->chgCData(oldp+30,(__VdtypeVar[1]),6);
    bufp->chgCData(oldp+31,(__VdtypeVar[0]),6);
}

void Vboom_core___024root__trace_chg_dtype____2(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____2\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0]),32);
}

void Vboom_core___024root__trace_chg_dtype____3(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____3\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0]),32);
}

void Vboom_core___024root__trace_chg_dtype____4(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0]),32);
}

void Vboom_core___024root__trace_chg_dtype____5(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____5\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0]),32);
}

void Vboom_core___024root__trace_chg_dtype____6(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____6\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0]),32);
}

extern const VlWide<24>/*767:0*/ Vboom_core__ConstPool__CONST_h547465de_0;

void Vboom_core___024root__trace_chg_dtype____7(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const Vboom_core_commit_signal_t__struct__0& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_chg_dtype____7\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<24>/*767:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,((3U & __VdtypeVar.__PVT__valids)),2);
    bufp->chgCData(oldp+1,((3U & __VdtypeVar.__PVT__arch_valids)),2);
    VL_AND_W(24, __Vtemp_1, Vboom_core__ConstPool__CONST_h547465de_0, 
             __VdtypeVar.__PVT__uops);
    bufp->chgWData(oldp+2,(__Vtemp_1),754);
    bufp->chgCData(oldp+26,((0x0000003fU & __VdtypeVar
                             .__PVT__fflags)),6);
    bufp->chgQData(oldp+27,(__VdtypeVar.__PVT__debug_insts),64);
    bufp->chgQData(oldp+29,(__VdtypeVar.__PVT__debug_wdata),64);
}

void Vboom_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_cleanup\n"); );
    // Body
    Vboom_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboom_core___024root*>(voidSelf);
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
}
