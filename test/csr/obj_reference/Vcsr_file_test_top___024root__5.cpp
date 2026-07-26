// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

void Vcsr_file_test_top___024root___nba_sequent__TOP__0(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___nba_sequent__TOP__1(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___nba_sequent__TOP__2(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___nba_sequent__TOP__3(Vcsr_file_test_top___024root* vlSelf);

void Vcsr_file_test_top___024root___eval_nba(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_nba\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsr_file_test_top___024root___nba_sequent__TOP__0(vlSelf);
        Vcsr_file_test_top___024root___nba_sequent__TOP__1(vlSelf);
        Vcsr_file_test_top___024root___nba_sequent__TOP__2(vlSelf);
        Vcsr_file_test_top___024root___nba_sequent__TOP__3(vlSelf);
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.interrupt_pending_bits = ((((IData)(vlSelfRef.ipi_irq) 
                                                  << 0x0000000cU) 
                                                 | ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_irq_q) 
                                                    << 0x0000000bU)) 
                                                | (((IData)(vlSelfRef.hw_irq) 
                                                    << 2U) 
                                                   | (3U 
                                                      & vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q)));
            vlSelfRef.current_plv = (3U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q);
            vlSelfRef.crmd_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q;
            vlSelfRef.current_ie = (1U & (vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q 
                                          >> 2U));
            if (vlSelfRef.rst_n) {
                if (((IData)(vlSelfRef.csr_req_valid) 
                     & (IData)(vlSelfRef.csr_req_ready))) {
                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_cmd_q 
                        = vlSelfRef.csr_cmd;
                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q 
                        = vlSelfRef.csr_wmask;
                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q 
                        = vlSelfRef.csr_wdata;
                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q 
                        = vlSelfRef.csr_req_addr;
                }
            } else {
                vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_cmd_q = 0U;
                vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wmask_q = 0U;
                vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_wdata_q = 0U;
                vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_addr_q = 0U;
            }
            vlSelfRef.interrupt_pending = ((IData)(vlSelfRef.current_ie) 
                                           & (0U != 
                                              (vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q 
                                               & (IData)(vlSelfRef.interrupt_pending_bits))));
            vlSelfRef.csr_req_ready = (1U & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q)));
        }
    }
}
