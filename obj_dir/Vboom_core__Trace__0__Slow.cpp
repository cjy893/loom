// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vboom_core__Syms.h"


VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____1(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____2(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____3(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____4(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____5(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____6(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____7(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__loom_consts__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__loom_params__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_sub__TOP__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1192,0,"fe_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+1193,0,"fe_insts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+1197,0,"fe_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1198,0,"lsu_agen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1199,0,"lsu_agen_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+372,0,"lsu_agen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+1200,0,"lsu_dgen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"lsu_dgen_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+385,0,"lsu_dgen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+1201,0,"lsu_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1202,0,"lsu_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_BIT(tracep,c+1216,0,"csr_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1217,0,"csr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1218,0,"csr_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1219,0,"csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vboom_core___024root__trace_init_dtype____0(vlSelf, tracep, "commit", 0, c+1221, VerilatedTraceSigDirection::OUTPUT);
    VL_TRACE_DECL_BIT(tracep,c+1252,0,"rob_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1253,0,"debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1254,0,"commit_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1255,0,"commit_ldst_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+1256,0,"rf_wr_en_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1257,0,"rf_wr_pdst_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1258,0,"rf_wr_ldst_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1259,0,"rf_wr_data_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1260,0,"alu_rs1_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1261,0,"alu_imm_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1262,0,"alu_imm_packed_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1263,0,"alu_imm_sel_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1264,0,"rob_ready_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1265,0,"ren_stalls_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1266,0,"rn2_mask_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"dis_fire_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"alu_iss_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1267,0,"alu_res_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1268,0,"rob_wb_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "boom_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"CORE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"FETCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1392,0,"ALU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"LSU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"PHYSICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"ALU_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"MEM_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1397,0,"UNQ_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"NUM_WAKEUPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1399,0,"NUM_REGF_READS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"NUM_REGF_WRITES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1192,0,"fe_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+1193,0,"fe_insts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+1197,0,"fe_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1198,0,"lsu_agen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1199,0,"lsu_agen_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+372,0,"lsu_agen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+1200,0,"lsu_dgen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"lsu_dgen_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+385,0,"lsu_dgen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+1201,0,"lsu_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1202,0,"lsu_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_BIT(tracep,c+1216,0,"csr_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1217,0,"csr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1218,0,"csr_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1219,0,"csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "commit", VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+1221,0,"valids",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1222,0,"arch_valids",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+1223,0,"uops",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+1247,0,"fflags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1248,0,"debug_insts",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1250,0,"debug_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+1252,0,"rob_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1253,0,"debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1254,0,"commit_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1255,0,"commit_ldst_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+1256,0,"rf_wr_en_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1257,0,"rf_wr_pdst_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1258,0,"rf_wr_ldst_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1259,0,"rf_wr_data_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1260,0,"alu_rs1_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1261,0,"alu_imm_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1262,0,"alu_imm_packed_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1263,0,"alu_imm_sel_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+1264,0,"rob_ready_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1265,0,"ren_stalls_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1266,0,"rn2_mask_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"dis_fire_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"alu_iss_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1267,0,"alu_res_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1268,0,"rob_wb_valid_dbg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1269,0,"dec_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+1270,0,"dec_uops_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_WIDE(tracep,c+185,0,"dec_uops",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+1294,0,"dec_valids",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+1197,0,"dec_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1401,0,"dec_xcpts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"bm_is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"bm_will_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1295,0,"bm_br_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"bm_br_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1296,0,"bm_is_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"bm_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1265,0,"rn_stalls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1266,0,"rn2_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+224,0,"rn2_uops_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"rn2_uops",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_WIDE(tracep,c+14,0,"wakeups",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2303,0);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"dis_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"iq_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+400,0,"iq_alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"iq_unq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+273,0,"iq_mem_dis_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"iq_alu_dis_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"iq_unq_dis_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+276,0,"iq_mem_dis_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_WIDE(tracep,c+288,0,"iq_alu_dis_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_WIDE(tracep,c+300,0,"iq_unq_dis_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"dis_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"dis_uops_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BIT(tracep,c+400,0,"alu_iq_dis_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"mem_iq_dis_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"unq_iq_dis_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"alu_iss_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+402,0,"alu_iss_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1130,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"mem_iss_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+439,0,"mem_iss_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"unq_iss_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+464,0,"unq_iss_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1402,0,"alu_slot_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1403,0,"mem_slot_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+1404,0,"unq_slot_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1405,0,"alu_slot_request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1406,0,"mem_slot_request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1407,0,"unq_slot_request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1297,0,"wakeup_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1298,0,"wakeup_pdst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"rf_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+477,0,"rf_read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 59,0);
    VL_TRACE_DECL_WIDE(tracep,c+1300,0,"rf_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 319,0);
    VL_TRACE_DECL_BUS(tracep,c+1310,0,"rf_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1311,0,"rf_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_WIDE(tracep,c+101,0,"rf_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+479,0,"alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1250,0);
    VL_TRACE_DECL_BUS(tracep,c+1267,0,"alu_res_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+519,0,"alu_wakeup_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+520,0,"alu_wakeup",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1151,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"alu_brinfo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+557,0,"alu_brinfo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1349,0);
    VL_TRACE_DECL_BUS(tracep,c+1312,0,"mem_agen_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+1313,0,"mem_agen_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+600,0,"mem_agen_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+1315,0,"mem_dgen_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+624,0,"mem_dgen_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+626,0,"mem_dgen_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BIT(tracep,c+650,0,"unq_res_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+0,0,"unq_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"NUM_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1310,0,"bp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1311,0,"bp_pdst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_WIDE(tracep,c+101,0,"bp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"rob_enq_valids",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"rob_enq_uops",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"rob_tail_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_WIDE(tracep,c+106,0,"rob_wb_resps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2501,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"rob_rollback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1264,0,"rob_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BUS(tracep,c+667,0,"resolve_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+668,0,"mispredict_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_iq", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"NUM_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1392,0,"ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"DISPATCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"NUM_WAKEUP_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"IS_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"dis_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_WIDE(tracep,c+313,0,"dis_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+669,0,"dis_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"iss_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+402,0,"iss_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1130,0);
    VL_TRACE_DECL_BUS(tracep,c+1297,0,"wakeup_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1298,0,"wakeup_pdst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"flush_pipeline",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"squash_grant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+670,0,"slot_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+671,0,"slot_killed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+672,0,"slot_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+673,0,"slot_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+674,0,"dis_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"available",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+676,0,"port_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "brmask", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"CORE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"MAX_BR_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"is_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"will_fire",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1295,0,"br_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"br_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1296,0,"is_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"flush_pipeline",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"BR_TAG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+677,0,"br_mask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1295,0,"alloc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1316,0,"alloc_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1317,0,"allocate_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+678,0,"resolved_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"curr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "disp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"CORE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1266,0,"rn2_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"rn2_uops",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"iq_mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+400,0,"iq_alu_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"iq_unq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+273,0,"iq_mem_dis_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+276,0,"iq_mem_dis_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"iq_alu_dis_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+288,0,"iq_alu_dis_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"iq_unq_dis_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+300,0,"iq_unq_dis_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"dis_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"dis_fire",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"dis_uops",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"iq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_alu[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1261,0,"alu_imm_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+679,0,"iss_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+680,0,"iss_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1318,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1319,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1261,0,"imm_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+692,0,"res_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+693,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_BIT(tracep,c+707,0,"wakeup_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+708,0,"wakeup",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 383,0);
    VL_TRACE_DECL_BIT(tracep,c+720,0,"brinfo_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+721,0,"brinfo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 449,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+736,0,"rrd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+737,0,"rrd_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+749,0,"rrd_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+750,0,"rrd_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+751,0,"rrd_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+692,0,"exe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+752,0,"exe_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+764,0,"exe_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+765,0,"exe_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"exe_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+769,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+770,0,"cond_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_alu[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"alu_imm_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"iss_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+773,0,"iss_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1320,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1321,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"imm_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+785,0,"res_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+786,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_BIT(tracep,c+800,0,"wakeup_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+801,0,"wakeup",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 383,0);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"brinfo_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+814,0,"brinfo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 449,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"rrd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+830,0,"rrd_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"rrd_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"rrd_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+844,0,"rrd_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+785,0,"exe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+845,0,"exe_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+857,0,"exe_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"exe_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"exe_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+860,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+861,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+863,0,"cond_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_alu[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+864,0,"alu_imm_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"iss_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+866,0,"iss_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1322,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1323,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+864,0,"imm_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+878,0,"res_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+879,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_BIT(tracep,c+893,0,"wakeup_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+894,0,"wakeup",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 383,0);
    VL_TRACE_DECL_BIT(tracep,c+906,0,"brinfo_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+907,0,"brinfo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 449,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+922,0,"rrd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+923,0,"rrd_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+935,0,"rrd_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+936,0,"rrd_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+937,0,"rrd_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+878,0,"exe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+938,0,"exe_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+950,0,"exe_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"exe_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"exe_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+954,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+955,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+956,0,"cond_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_decode[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1324,0,"dec_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "decode_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_decode[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1325,0,"dec_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "decode_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_mem[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1410,0,"HAS_AGEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"HAS_DGEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+957,0,"iss_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+958,0,"iss_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1326,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1411,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+970,0,"imm_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"agen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1411,0,"agen_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1412,0,"agen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+1200,0,"dgen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"dgen_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+385,0,"dgen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+971,0,"rrd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+972,0,"rrd_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+984,0,"rrd_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+985,0,"rrd_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+986,0,"rrd_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+987,0,"exe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+385,0,"exe_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"exe_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"exe_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+989,0,"exe_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+990,0,"eff_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_mem[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"HAS_AGEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"HAS_DGEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+991,0,"iss_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+992,0,"iss_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1327,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1411,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1004,0,"imm_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1198,0,"agen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1199,0,"agen_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+372,0,"agen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BIT(tracep,c+1005,0,"dgen_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"dgen_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+372,0,"dgen_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1007,0,"rrd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+1008,0,"rrd_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1020,0,"rrd_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1021,0,"rrd_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1022,0,"rrd_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1023,0,"exe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+372,0,"exe_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1024,0,"exe_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"exe_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1025,0,"exe_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1199,0,"eff_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iregfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"NUM_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1399,0,"NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"NUM_WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"read_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+477,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 59,0);
    VL_TRACE_DECL_WIDE(tracep,c+1300,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 319,0);
    VL_TRACE_DECL_BUS(tracep,c+1310,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1311,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_WIDE(tracep,c+101,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_iq", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"NUM_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"DISPATCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"NUM_WAKEUP_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"IS_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"dis_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_WIDE(tracep,c+328,0,"dis_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1026,0,"dis_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"iss_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+439,0,"iss_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+1297,0,"wakeup_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1298,0,"wakeup_pdst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"flush_pipeline",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"squash_grant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1027,0,"slot_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1028,0,"slot_killed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1029,0,"slot_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1030,0,"slot_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1031,0,"dis_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1032,0,"available",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1033,0,"port_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rename", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"CORE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"PHYSICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"WAKEUP_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1410,0,"IS_FP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1269,0,"dec_fire",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+185,0,"dec_uops",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_WIDE(tracep,c+14,0,"wakeups",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2303,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1221,0,"commit_valids",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+1157,0,"commit_uops",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"rollback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"dis_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1265,0,"rn_stalls",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1266,0,"rn2_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+224,0,"rn2_uops",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+1426,0,"child_rebusys",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"LOGICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"LREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"NUM_READS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1328,0,"mt_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"mt_lreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_QUAD(tracep,c+213,0,"mt_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"mt_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"mt_write_lreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"mt_write_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1181,0,"mt_commit_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1182,0,"mt_commit_lreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+1183,0,"mt_commit_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_QUAD(tracep,c+1034,0,"mt_arch_busy_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"fl_alloc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"fl_alloc_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1184,0,"fl_free_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1185,0,"fl_free_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+1036,0,"fl_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1329,0,"bt_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+219,0,"bt_read_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"bt_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"bt_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"bt_write_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1330,0,"bt_wakeup_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1331,0,"bt_wakeup_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_PUSH_PREFIX(tracep, "busytable", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"PHYSICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"WAKEUP_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1329,0,"read_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+219,0,"read_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"write_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1330,0,"wakeup_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1331,0,"wakeup_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"rollback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1037,0,"busy_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "freelist", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"PHYSICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"ALLOC_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"FREE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"alloc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"alloc_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1184,0,"free_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1185,0,"free_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"rollback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1034,0,"rollback_busy_vec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BIT(tracep,c+1036,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1039,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"alloc_cand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+221,0,"taken_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "maptable", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"LOGICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"PHYSICAL_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"COMMIT_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1328,0,"read_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"lreg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_QUAD(tracep,c+213,0,"preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"write_lreg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"write_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1181,0,"commit_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1182,0,"commit_lreg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+1183,0,"commit_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"rollback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1034,0,"arch_busy_vec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"LREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vboom_core___024root__trace_init_dtype____1(vlSelf, tracep, "map_q", 0, c+1041, VerilatedTraceSigDirection::NONE);

    Vboom_core___024root__trace_init_dtype____2(vlSelf, tracep, "commit_map_q", 0, c+1073, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rob_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"NUM_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"CORE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"ROB_ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"NUM_WAKEUP_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"enq_valids",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"enq_uops",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"enq_partial_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"rob_tail_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_WIDE(tracep,c+106,0,"wb_resps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2501,0);
    VL_TRACE_DECL_BUS(tracep,c+1426,0,"lsu_clr_bsy_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1427,0,"lsu_clr_bsy_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_WIDE(tracep,c+1428,0,"lxcpt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 415,0);
    VL_TRACE_DECL_WIDE(tracep,c+1428,0,"csr_replay",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 415,0);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"csr_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "commit", VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+1221,0,"valids",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1222,0,"arch_valids",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+1223,0,"uops",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+1247,0,"fflags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1248,0,"debug_insts",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1250,0,"debug_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_WIDE(tracep,c+1441,0,"com_xcpt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 78,0);
    VL_TRACE_DECL_WIDE(tracep,c+1444,0,"flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 78,0);
    VL_TRACE_DECL_BIT(tracep,c+1252,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1264,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"rollback",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1447,0,"flush_frontend",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1105,0,"rob_head_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1106,0,"rob_pnr_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);

    Vboom_core___024root__trace_init_dtype____3(vlSelf, tracep, "rob_val", 0, c+1107, VerilatedTraceSigDirection::NONE);

    Vboom_core___024root__trace_init_dtype____4(vlSelf, tracep, "rob_bsy", 0, c+1109, VerilatedTraceSigDirection::NONE);

    Vboom_core___024root__trace_init_dtype____5(vlSelf, tracep, "rob_unsafe", 0, c+1111, VerilatedTraceSigDirection::NONE);

    Vboom_core___024root__trace_init_dtype____6(vlSelf, tracep, "rob_exception", 0, c+1113, VerilatedTraceSigDirection::NONE);

    Vboom_core___024root__trace_init_dtype____7(vlSelf, tracep, "rob_predicated", 0, c+1115, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+1117,0,"rob_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1118,0,"rob_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1119,0,"rob_pnr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1120,0,"rob_head_lsb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1121,0,"rob_tail_lsb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1122,0,"rob_pnr_lsb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1123,0,"rob_safe_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1124,0,"rob_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1448,0,"next_rob_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1125,0,"rob_tail_valids",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1126,0,"rob_head_vals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1127,0,"rob_head_bsy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1128,0,"rob_head_unsafe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1129,0,"rob_head_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1130,0,"can_commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1186,0,"can_throw_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1187,0,"will_commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+1333,0,"block_commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1188,0,"block_xcpt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1189,0,"exception_throw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1334,0,"exception_throw_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1335,0,"exception_throw_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1336,0,"finished_committing_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1131,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unq_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"iss_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+464,0,"iss_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1219,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1337,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1216,0,"csr_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1217,0,"csr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1218,0,"csr_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1219,0,"csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+650,0,"res_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+0,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 416,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"kill",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1133,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+354,0,"pipe_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"pipe_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"pipe_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1134,0,"busy_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+1135,0,"busy_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+368,0,"mul_result_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"div_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unq_iq", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1397,0,"NUM_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"DISPATCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"NUM_WAKEUP_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"IS_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"dis_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_WIDE(tracep,c+342,0,"dis_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1136,0,"dis_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"iss_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_WIDE(tracep,c+1138,0,"iss_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+1297,0,"wakeup_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+1298,0,"wakeup_pdst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_WIDE(tracep,c+652,0,"brupdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 457,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"flush_pipeline",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1409,0,"squash_grant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1150,0,"slot_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1151,0,"slot_killed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1152,0,"slot_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1153,0,"slot_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1154,0,"dis_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1155,0,"available",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1156,0,"port_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "loom_consts", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vboom_core___024root__trace_init_sub__TOP__loom_consts__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "loom_params", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vboom_core___024root__trace_init_sub__TOP__loom_params__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"valids",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"arch_valids",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+2,fidx,"uops",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 753,0);
    VL_TRACE_DECL_BUS(tracep,c+26,fidx,"fflags",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,fidx,"debug_insts",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+29,fidx,"debug_wdata",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____1(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____1(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____1(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 5,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____2(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____2(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____2\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____2(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____2\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 5,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____3(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____3(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____3\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____3(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____3\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____4(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____4(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____4(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____4(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____5(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____5(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____5\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____5(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____5(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____5\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____6(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____6(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____6\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____6(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____6(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____6\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____7(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype____7(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype____7\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_dtype_sub____7(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_dtype_sub____7(Vboom_core___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_dtype_sub____7\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1338,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1426,0,"status_prv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+1339,0,"uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1351,0,"op_31_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+1352,0,"bit29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1353,0,"bit28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1354,0,"bit27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1355,0,"bit26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1356,0,"bit25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1357,0,"bit24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1358,0,"bit22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1359,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1360,0,"rj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1361,0,"rk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1361,0,"i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1362,0,"i12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1363,0,"i14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1364,0,"i20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+1365,0,"offs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1366,0,"offs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1367,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1368,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1363,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+1369,0,"need_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_sub__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1370,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1426,0,"status_prv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+88,0,"uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 376,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1371,0,"op_31_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+1372,0,"bit29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1373,0,"bit28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1374,0,"bit27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1375,0,"bit26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1376,0,"bit25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1377,0,"bit24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1378,0,"bit22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1379,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1380,0,"rj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1381,0,"rk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1381,0,"i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1382,0,"i12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+1383,0,"i14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1384,0,"i20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+1385,0,"offs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1386,0,"offs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1387,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1388,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1383,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+1389,0,"need_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__loom_params__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_sub__TOP__loom_params__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"USING_FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"USING_FDIV_SQRT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"USING_ROCC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"USING_VM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"DCACHE_SINGLE_PORTED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ICACHE_SINGLE_PORTED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"FLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"VADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"PADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1397,0,"PGIDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1399,0,"ASID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"LOGICAL_REG_CNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"LREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"HART_ID_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"FETCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"LSU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1392,0,"ALU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"FP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1449,0,"TOTAL_ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"ROB_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"ROB_ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"STQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"LDQ_ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"STQ_ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"LSU_ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"MAX_BR_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"BR_TAG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"FTQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"FTQ_ADDR_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1450,0,"FETCH_BUFFER_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"RXQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1450,0,"RCQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"NUM_INT_PHYS_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"NUM_FP_PHYS_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1394,0,"NUM_IMM_PHYS_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"IPREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"FPREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"MAX_PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"IMM_PREG_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"NUM_IRF_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"NUM_FRF_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"ALU_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"ALU_IQ_DISPATCH_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"MEM_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"MEM_IQ_DISPATCH_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1397,0,"UNQ_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"UNQ_IQ_DISPATCH_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"FP_IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"FP_IQ_DISPATCH_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"GLOBAL_HISTORY_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"LOCAL_HISTORY_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1451,0,"LOCAL_HISTORY_NSETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1452,0,"BPD_MAX_META_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1424,0,"RAS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"RAS_IDX_SZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"USE_RAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"ICACHE_BLOCK_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"ICACHE_FETCH_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1451,0,"DCACHE_ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"ICACHE_NSETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"ICACHE_NWAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1395,0,"DCACHE_NSETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"DCACHE_NWAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"DCACHE_NMSHRS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"DCACHE_NTLBWAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1396,0,"ICACHE_NTLBWAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1392,0,"IMUL_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"SFMA_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"DFMA_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"INT_TO_FP_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"LOAD_USE_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_FAST_LOAD_USE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_ST_LD_FORWARDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_COMPACT_LSU_DISPATCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_AGEN_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_FAST_PNR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_SFB_OPT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_GHIST_STALL_REPAIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_BTB_FAST_REPAIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_LOAD_TO_STORE_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_SUPER_SCALAR_SNAPSHOTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_COLUMN_ALU_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_ALU_SINGLE_WIDE_DISP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_BANKED_FP_FREELIST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_BPD_HPMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_PREFETCHING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_SLOW_BTB_REDIRECT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"ENABLE_CONSERVATIVE_SNI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1425,0,"ENABLE_RAS_TOP_REPAIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"NBANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1450,0,"BANK_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"PG_LEVELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1450,0,"PMP_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1453,0,"L2_TLB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"L2_TLB_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1410,0,"N_BREAKPOINTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"N_PERF_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1408,0,"USE_LBT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_sub__TOP__loom_consts__0(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_sub__TOP__loom_consts__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1454,0,"CFI_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1455,0,"CFI_BR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1456,0,"CFI_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1457,0,"CFI_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1458,0,"PC_PLUS4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1459,0,"PC_BRJMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1460,0,"PC_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1461,0,"B_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1462,0,"B_NE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1463,0,"B_EQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1464,0,"B_GE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1465,0,"B_GEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1466,0,"B_LT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1467,0,"B_LTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1468,0,"B_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1469,0,"B_JR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1458,0,"OP1_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1459,0,"OP1_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1460,0,"OP1_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1454,0,"OP2_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1455,0,"OP2_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1456,0,"OP2_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1457,0,"OP2_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1470,0,"OP2_IMMC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1458,0,"RT_FIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1459,0,"RT_FLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1460,0,"RT_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1471,0,"RT_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1462,0,"IQ_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1463,0,"IQ_UNQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1465,0,"IQ_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1469,0,"IQ_FP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1410,0,"IQ_IDX_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"IQ_IDX_UNQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"IQ_IDX_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1392,0,"IQ_IDX_FP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1410,0,"FC_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1393,0,"FC_AGEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1390,0,"FC_DGEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1392,0,"FC_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1391,0,"FC_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1400,0,"FC_CSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1398,0,"FC_FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1449,0,"FC_FDV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1450,0,"FC_I2F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1472,0,"FC_F2I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1454,0,"IS_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1455,0,"IS_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1456,0,"IS_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1457,0,"IS_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1470,0,"IS_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1473,0,"IS_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1474,0,"IS_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1475,0,"IS_F3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1454,0,"BSRC_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1455,0,"BSRC_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1456,0,"BSRC_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1457,0,"BSRC_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1470,0,"BSRC_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1454,0,"FT_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1455,0,"FT_XCPT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1457,0,"FT_ERET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1456,0,"FT_REFETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1470,0,"FT_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1476,0,"FUNCT7_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1477,0,"FUNCT7_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1461,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1462,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1463,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1464,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1465,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1466,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1467,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1468,0,"ALU_NOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1469,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1478,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1479,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1480,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
}

VL_ATTR_COLD void Vboom_core___024root__trace_init_top(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_init_top\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboom_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vboom_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vboom_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vboom_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vboom_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vboom_core___024root__trace_register(Vboom_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_register\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vboom_core___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vboom_core___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vboom_core___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vboom_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vboom_core___024root__trace_const_0_sub_0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vboom_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_const_0\n"); );
    // Body
    Vboom_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboom_core___024root*>(voidSelf);
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vboom_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<12>/*383:0*/ Vboom_core__ConstPool__CONST_hdb31f06b_0;
extern const VlWide<13>/*415:0*/ Vboom_core__ConstPool__CONST_h75d095d1_0;

VL_ATTR_COLD void Vboom_core___024root__trace_const_0_sub_0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_const_0_sub_0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1390,(2U),32);
    bufp->fullIData(oldp+1391,(4U),32);
    bufp->fullIData(oldp+1392,(3U),32);
    bufp->fullIData(oldp+1393,(1U),32);
    bufp->fullIData(oldp+1394,(0x00000030U),32);
    bufp->fullIData(oldp+1395,(0x00000040U),32);
    bufp->fullIData(oldp+1396,(0x00000010U),32);
    bufp->fullIData(oldp+1397,(0x0000000cU),32);
    bufp->fullIData(oldp+1398,(6U),32);
    bufp->fullIData(oldp+1399,(0x0000000aU),32);
    bufp->fullIData(oldp+1400,(5U),32);
    bufp->fullCData(oldp+1401,(vlSelfRef.boom_core__DOT__dec_xcpts),2);
    bufp->fullCData(oldp+1402,(vlSelfRef.boom_core__DOT__alu_slot_grant),3);
    bufp->fullCData(oldp+1403,(vlSelfRef.boom_core__DOT__mem_slot_grant),2);
    bufp->fullBit(oldp+1404,(vlSelfRef.boom_core__DOT__unq_slot_grant));
    bufp->fullSData(oldp+1405,(vlSelfRef.boom_core__DOT__alu_slot_request),16);
    bufp->fullSData(oldp+1406,(vlSelfRef.boom_core__DOT__mem_slot_request),16);
    bufp->fullSData(oldp+1407,(vlSelfRef.boom_core__DOT__unq_slot_request),12);
    bufp->fullBit(oldp+1408,(0U));
    bufp->fullBit(oldp+1409,(0U));
    bufp->fullIData(oldp+1410,(0U),32);
    bufp->fullIData(oldp+1411,(0U),32);
    bufp->fullWData(oldp+1412,(Vboom_core__ConstPool__CONST_hdb31f06b_0),377);
    bufp->fullIData(oldp+1424,(0x00000020U),32);
    bufp->fullBit(oldp+1425,(1U));
    bufp->fullCData(oldp+1426,(0U),2);
    bufp->fullSData(oldp+1427,(0U),12);
    bufp->fullWData(oldp+1428,(Vboom_core__ConstPool__CONST_h75d095d1_0),416);
    bufp->fullWData(oldp+1441,(vlSelfRef.boom_core__DOT__rob_inst__DOT__com_xcpt),79);
    bufp->fullWData(oldp+1444,(vlSelfRef.boom_core__DOT__rob_inst__DOT__flush),79);
    bufp->fullBit(oldp+1447,(vlSelfRef.boom_core__DOT__rob_inst__DOT__flush_frontend));
    bufp->fullCData(oldp+1448,(vlSelfRef.boom_core__DOT__rob_inst__DOT__next_rob_state),2);
    bufp->fullIData(oldp+1449,(7U),32);
    bufp->fullIData(oldp+1450,(8U),32);
    bufp->fullIData(oldp+1451,(0x00000080U),32);
    bufp->fullIData(oldp+1452,(0x00000078U),32);
    bufp->fullIData(oldp+1453,(0x00000200U),32);
    bufp->fullCData(oldp+1454,(0U),3);
    bufp->fullCData(oldp+1455,(1U),3);
    bufp->fullCData(oldp+1456,(2U),3);
    bufp->fullCData(oldp+1457,(3U),3);
    bufp->fullCData(oldp+1458,(0U),2);
    bufp->fullCData(oldp+1459,(1U),2);
    bufp->fullCData(oldp+1460,(2U),2);
    bufp->fullCData(oldp+1461,(0U),4);
    bufp->fullCData(oldp+1462,(1U),4);
    bufp->fullCData(oldp+1463,(2U),4);
    bufp->fullCData(oldp+1464,(3U),4);
    bufp->fullCData(oldp+1465,(4U),4);
    bufp->fullCData(oldp+1466,(5U),4);
    bufp->fullCData(oldp+1467,(6U),4);
    bufp->fullCData(oldp+1468,(7U),4);
    bufp->fullCData(oldp+1469,(8U),4);
    bufp->fullCData(oldp+1470,(4U),3);
    bufp->fullCData(oldp+1471,(3U),2);
    bufp->fullIData(oldp+1472,(9U),32);
    bufp->fullCData(oldp+1473,(5U),3);
    bufp->fullCData(oldp+1474,(6U),3);
    bufp->fullCData(oldp+1475,(7U),3);
    bufp->fullCData(oldp+1476,(0U),7);
    bufp->fullCData(oldp+1477,(2U),7);
    bufp->fullCData(oldp+1478,(9U),4);
    bufp->fullCData(oldp+1479,(0x0aU),4);
    bufp->fullCData(oldp+1480,(0x0bU),4);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_0_sub_0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vboom_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_0\n"); );
    // Body
    Vboom_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboom_core___024root*>(voidSelf);
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vboom_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____1(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____2(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____3(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____4(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____5(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____6(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____7(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const Vboom_core_commit_signal_t__struct__0& __VdtypeVar);

VL_ATTR_COLD void Vboom_core___024root__trace_full_0_sub_0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_0_sub_0\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    __Vtemp_1[0U] = (IData)(((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                             << 7U));
    __Vtemp_1[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                      << 7U) | (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                         << 7U) >> 0x00000020U)));
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
    bufp->fullWData(oldp+0,(__Vtemp_1),417);
    bufp->fullWData(oldp+14,(vlSelfRef.boom_core__DOT__wakeups),2304);
    bufp->fullCData(oldp+86,(((2U & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                     >> 0x00000014U)) 
                              | (1U & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U] 
                                       >> 0x00000015U)))),2);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__PVT__instr_type),4);
    bufp->fullWData(oldp+88,(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop),377);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__PVT__instr_type),4);
    bufp->fullWData(oldp+101,(vlSelfRef.boom_core__DOT__iregfile__DOT__write_data),160);
    bufp->fullWData(oldp+106,(vlSelfRef.boom_core__DOT__rob_wb_resps),2502);
    bufp->fullWData(oldp+185,(vlSelfRef.boom_core__DOT__rename__DOT__dec_uops),754);
    bufp->fullCData(oldp+209,(vlSelfRef.boom_core__DOT__brmask__DOT__will_fire),2);
    bufp->fullCData(oldp+210,(vlSelfRef.boom_core__DOT__bm_br_mask),8);
    bufp->fullCData(oldp+211,(vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask),4);
    bufp->fullIData(oldp+212,((((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                << 0x0000000fU) | (0x00007fffU 
                                                   & vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_32))),30);
    bufp->fullQData(oldp+213,((((QData)((IData)((((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_156) 
                                                  << 0x0000000cU) 
                                                 | (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_157) 
                                                     << 6U) 
                                                    | (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_158))))) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_159) 
                                                                    << 0x0000000cU) 
                                                                   | (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_161)))))),36);
    bufp->fullCData(oldp+215,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en),2);
    bufp->fullSData(oldp+216,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_lreg),10);
    bufp->fullSData(oldp+217,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_preg),12);
    bufp->fullSData(oldp+218,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand),12);
    bufp->fullQData(oldp+219,((((QData)((IData)((0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_28 
                                                            >> 0x0000001eU))))) 
                                << 0x0000001eU) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                    << 0x00000012U) 
                                                                   | (0x0003ffffU 
                                                                      & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_28))))))),36);
    bufp->fullQData(oldp+221,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask),48);
    bufp->fullCData(oldp+223,(vlSelfRef.boom_core__DOT__dis_fire),2);
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
    bufp->fullWData(oldp+224,(__Vtemp_4),754);
    bufp->fullWData(oldp+248,(vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops),754);
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelfRef.boom_core__DOT__disp__DOT__block)))));
    bufp->fullBit(oldp+273,(vlSelfRef.boom_core__DOT__iq_mem_dis_valid));
    bufp->fullBit(oldp+274,(vlSelfRef.boom_core__DOT__iq_alu_dis_valid));
    bufp->fullBit(oldp+275,(vlSelfRef.boom_core__DOT__iq_unq_dis_valid));
    bufp->fullWData(oldp+276,(vlSelfRef.boom_core__DOT__iq_mem_dis_uop),377);
    bufp->fullWData(oldp+288,(vlSelfRef.boom_core__DOT__iq_alu_dis_uop),377);
    bufp->fullWData(oldp+300,(vlSelfRef.boom_core__DOT__iq_unq_dis_uop),377);
    bufp->fullBit(oldp+312,(vlSelfRef.boom_core__DOT__iq_alu_dis_valid));
    bufp->fullWData(oldp+313,(vlSelfRef.boom_core__DOT__iq_alu_dis_uop),377);
    bufp->fullCData(oldp+325,(vlSelfRef.boom_core__DOT__disp__DOT__iq_ready),2);
    bufp->fullBit(oldp+326,(vlSelfRef.boom_core__DOT__disp__DOT__block));
    bufp->fullBit(oldp+327,(vlSelfRef.boom_core__DOT__iq_mem_dis_valid));
    bufp->fullWData(oldp+328,(vlSelfRef.boom_core__DOT__iq_mem_dis_uop),377);
    bufp->fullCData(oldp+340,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy),6);
    bufp->fullBit(oldp+341,(vlSelfRef.boom_core__DOT__iq_unq_dis_valid));
    bufp->fullWData(oldp+342,(vlSelfRef.boom_core__DOT__iq_unq_dis_uop),377);
    bufp->fullWData(oldp+354,(vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop),377);
    bufp->fullIData(oldp+366,(vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1),32);
    bufp->fullIData(oldp+367,(vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2),32);
    bufp->fullQData(oldp+368,(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2))),64);
    bufp->fullIData(oldp+370,((IData)(VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1), 
                                                  VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2)))),32);
    bufp->fullIData(oldp+371,(VL_DIVS_III(32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2)),32);
    bufp->fullWData(oldp+372,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop),377);
    bufp->fullIData(oldp+384,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs2),32);
    bufp->fullWData(oldp+385,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop),377);
    bufp->fullCData(oldp+397,(vlSelfRef.boom_core__DOT__alu_iss_valid),3);
    bufp->fullBit(oldp+398,((2U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state))));
    bufp->fullBit(oldp+399,(vlSelfRef.boom_core__DOT__mem_iq_dis_ready));
    bufp->fullBit(oldp+400,(vlSelfRef.boom_core__DOT__alu_iq_dis_ready));
    bufp->fullBit(oldp+401,(vlSelfRef.boom_core__DOT__unq_iq_dis_ready));
    bufp->fullWData(oldp+402,(vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop),1131);
    bufp->fullCData(oldp+438,(vlSelfRef.boom_core__DOT__mem_iss_valid),2);
    bufp->fullWData(oldp+439,(vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop),754);
    bufp->fullBit(oldp+463,(vlSelfRef.boom_core__DOT__unq_iss_valid));
    bufp->fullWData(oldp+464,(vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop),377);
    bufp->fullSData(oldp+476,(((((0x00000018U & ((- (IData)((IData)(vlSelfRef.boom_core__DOT__unq_iss_valid))) 
                                                 << 3U)) 
                                 | (((IData)(vlSelfRef.boom_core__DOT__mem_iss_valid) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                                >> 2U)))) 
                                << 5U) | ((0x00000018U 
                                           & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                              << 2U)) 
                                          | ((6U & 
                                              ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid)))))),10);
    bufp->fullQData(oldp+477,((((QData)((IData)((((
                                                   (0x00000fc0U 
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
                                << 0x0000001eU) | (QData)((IData)(
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
                                          << 7U) >> 0x00000020U)));
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
                               >> 0x00000017U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                                              << 8U) 
                                                             | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001fU)) 
                       | ((0x000001feU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                          >> 0x00000017U)) 
                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                             << 9U)));
    __Vtemp_10[29U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     << 9U)));
    __Vtemp_10[30U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     << 9U)));
    __Vtemp_10[31U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     << 9U)));
    __Vtemp_10[32U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     << 9U)));
    __Vtemp_10[33U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     << 9U)));
    __Vtemp_10[34U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                     << 9U)));
    __Vtemp_10[35U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 9U)));
    __Vtemp_10[36U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                     << 9U)));
    __Vtemp_10[37U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                     << 9U)));
    __Vtemp_10[38U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                              >> 0x00000017U)) | ((0x000001feU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                     << 9U)));
    __Vtemp_10[39U] = ((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                              >> 0x00000017U)) | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
                                                   << 2U) 
                                                  | (0x000001feU 
                                                     & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                        >> 0x00000017U))));
    bufp->fullWData(oldp+479,(__Vtemp_10),1251);
    bufp->fullCData(oldp+519,((((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                << 2U) | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                           << 1U) | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid)))),3);
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
    bufp->fullWData(oldp+520,(__Vtemp_12),1152);
    bufp->fullCData(oldp+556,((((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid) 
                                << 2U) | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid) 
                                           << 1U) | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid)))),3);
    __Vtemp_15[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                        << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
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
                                     << 6U) | (((0x00000010U 
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
                                          << 6U) | 
                                         (((0x00000010U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? 1U : 
                                           ((8U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                             ? 2U : 
                                            (3U & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                 >> 2U))))))) 
                                          << 3U)) | 
                                        ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                         << 2U)) << 2U)) 
                           | (IData)(((0x00000003fffffffeULL 
                                       & (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                           + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))) 
                                          << 1U)) >> 0x00000020U))) 
                          << 2U));
    __Vtemp_22[17U] = (((((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                           << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                        << 6U) | ((
                                                   (0x00000010U 
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
                         | (IData)(((0x00000003fffffffeULL 
                                     & (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))) 
                                        << 1U)) >> 0x00000020U))) 
                        >> 0x0000001eU) | ((((3U & 
                                              (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
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
                                 >> 0x00000017U)) | 
                          (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                              << 6U) | (((0x00000010U 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                          ? 1U : ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                        << 3U)) | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                                   << 2U)) 
                           >> 0x0000001eU)) | ((0x000001fcU 
                                                & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   >> 0x00000017U)) 
                                               | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                  << 9U))) 
                        >> 0x0000001eU) | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000017U)) 
                                            | ((0x000001fcU 
                                                & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000017U)) 
                                               | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                  << 9U))) 
                                           << 2U));
    __Vtemp_23[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)));
    __Vtemp_23[1U] = (((IData)((0x00000001ffffffffULL 
                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                       << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         >> 0x00000020U)));
    __Vtemp_23[2U] = __Vtemp_21[2U];
    __Vtemp_23[3U] = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                              >> 0x00000017U)) | ((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                     << 6U) 
                                                    | (((0x00000010U 
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
                                                      << 2U)) 
                                                  >> 0x0000001eU)) 
                      | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                         >> 0x00000017U)) 
                         | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                            << 9U)));
    __Vtemp_23[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    << 9U)));
    __Vtemp_23[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    << 9U)));
    __Vtemp_23[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    << 9U)));
    __Vtemp_23[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    << 9U)));
    __Vtemp_23[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    << 9U)));
    __Vtemp_23[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    << 9U)));
    __Vtemp_23[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 9U)));
    __Vtemp_23[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                     << 9U)));
    __Vtemp_23[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                     << 9U)));
    __Vtemp_23[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                     << 9U)));
    __Vtemp_23[14U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                              >> 0x00000017U)) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
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
                                  | (0x0000000cU & 
                                     (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
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
    __Vtemp_23[30U] = (((0x0000000fU & ((IData)((0x00000001ffffffffULL 
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
                                              ? 1U : 
                                             ((8U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                               ? 2U
                                               : (3U 
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
                                 >> 0x00000017U)) | 
                          (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                              << 6U) | (((0x00000010U 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                          ? 1U : ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                        << 3U)) | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                                   << 2U)) 
                           >> 0x0000001eU)) | ((0x000001fcU 
                                                & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   >> 0x00000017U)) 
                                               | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                  << 9U))) 
                        >> 0x0000001cU) | (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000017U)) 
                                            | ((0x000001fcU 
                                                & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000017U)) 
                                               | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                  << 9U))) 
                                           << 4U));
    __Vtemp_23[33U] = ((((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
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
                                >> 0x00000017U)) | 
                         ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                          >> 0x00000017U)) 
                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                             << 9U))) >> 0x0000001cU) 
                       | (0x00000030U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                         >> 0x00000013U)));
    bufp->fullWData(oldp+557,(__Vtemp_23),1350);
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
    bufp->fullWData(oldp+600,(__Vtemp_24),754);
    bufp->fullQData(oldp+624,((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs2)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs2)))),64);
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
    bufp->fullWData(oldp+626,(__Vtemp_25),754);
    bufp->fullBit(oldp+650,(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid));
    bufp->fullCData(oldp+651,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx),6);
    bufp->fullWData(oldp+652,(vlSelfRef.boom_core__DOT__brmask__DOT__brupdate),458);
    bufp->fullCData(oldp+667,(vlSelfRef.boom_core__DOT__resolve_mask),4);
    bufp->fullCData(oldp+668,((0x0000000fU & (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178))) 
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
    bufp->fullBit(oldp+669,(vlSelfRef.boom_core__DOT__alu_iq_dis_ready));
    bufp->fullSData(oldp+670,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid),16);
    bufp->fullSData(oldp+671,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed),16);
    bufp->fullSData(oldp+672,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready),16);
    bufp->fullSData(oldp+673,(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant),16);
    bufp->fullCData(oldp+674,(vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot),4);
    bufp->fullSData(oldp+675,(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available),16);
    bufp->fullCData(oldp+676,(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used),3);
    bufp->fullCData(oldp+677,(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q),4);
    bufp->fullCData(oldp+678,(((~ (IData)(vlSelfRef.boom_core__DOT__resolve_mask)) 
                               & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))),4);
    bufp->fullBit(oldp+679,((1U & (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid))));
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
    bufp->fullWData(oldp+680,(__Vtemp_27),377);
    bufp->fullBit(oldp+692,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid));
    __Vtemp_29[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                              << 7U));
    __Vtemp_29[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                       << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                          << 7U) >> 0x00000020U)));
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
    bufp->fullWData(oldp+693,(__Vtemp_29),417);
    bufp->fullBit(oldp+707,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid));
    bufp->fullWData(oldp+708,(vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup),384);
    bufp->fullBit(oldp+720,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid));
    __Vtemp_32[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)));
    __Vtemp_32[1U] = (((IData)((0x00000001ffffffffULL 
                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                       << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         >> 0x00000020U)));
    __Vtemp_32[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                        << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                     << 6U) | (((0x00000010U 
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
                              >> 0x00000017U)) | ((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                     << 6U) 
                                                    | (((0x00000010U 
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
                                                      << 2U)) 
                                                  >> 0x0000001eU)) 
                      | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                         >> 0x00000017U)) 
                         | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                            << 9U)));
    __Vtemp_32[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    << 9U)));
    __Vtemp_32[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    << 9U)));
    __Vtemp_32[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    << 9U)));
    __Vtemp_32[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    << 9U)));
    __Vtemp_32[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    << 9U)));
    __Vtemp_32[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    << 9U)));
    __Vtemp_32[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 9U)));
    __Vtemp_32[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                     << 9U)));
    __Vtemp_32[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                     << 9U)));
    __Vtemp_32[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                     << 9U)));
    __Vtemp_32[14U] = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                             >> 0x00000017U));
    bufp->fullWData(oldp+721,(__Vtemp_32),450);
    bufp->fullBit(oldp+736,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid));
    bufp->fullWData(oldp+737,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop),377);
    bufp->fullIData(oldp+749,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_rs1),32);
    bufp->fullIData(oldp+750,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_rs2),32);
    bufp->fullIData(oldp+751,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_imm),32);
    bufp->fullWData(oldp+752,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop),377);
    bufp->fullIData(oldp+764,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1),32);
    bufp->fullIData(oldp+765,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2),32);
    bufp->fullIData(oldp+766,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm),32);
    bufp->fullIData(oldp+767,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result),32);
    bufp->fullIData(oldp+768,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1),32);
    bufp->fullIData(oldp+769,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2),32);
    bufp->fullBit(oldp+770,(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true));
    bufp->fullIData(oldp+771,(((0x00004000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
                                ? (((0x00001000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
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
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                                                     >> 0x0000000dU))))))
                                : ((0x00002000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U])
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
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
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
                                       << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                                                 >> 0x00000019U)));
    bufp->fullWData(oldp+773,(__Vtemp_34),377);
    bufp->fullBit(oldp+785,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid));
    __Vtemp_36[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result)) 
                              << 7U));
    __Vtemp_36[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                       << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result)) 
                                          << 7U) >> 0x00000020U)));
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
    bufp->fullWData(oldp+786,(__Vtemp_36),417);
    bufp->fullBit(oldp+800,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid));
    bufp->fullWData(oldp+801,(vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup),384);
    bufp->fullBit(oldp+813,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid));
    __Vtemp_39[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)));
    __Vtemp_39[1U] = (((IData)((0x00000001ffffffffULL 
                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                       << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         >> 0x00000020U)));
    __Vtemp_39[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                        << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                     << 6U) | (((0x00000010U 
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
                              >> 0x00000017U)) | ((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
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
                      | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                         >> 0x00000017U)) 
                         | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                            << 9U)));
    __Vtemp_39[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    << 9U)));
    __Vtemp_39[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    << 9U)));
    __Vtemp_39[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    << 9U)));
    __Vtemp_39[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    << 9U)));
    __Vtemp_39[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    << 9U)));
    __Vtemp_39[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    << 9U)));
    __Vtemp_39[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 9U)));
    __Vtemp_39[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                     << 9U)));
    __Vtemp_39[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                     << 9U)));
    __Vtemp_39[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                     << 9U)));
    __Vtemp_39[14U] = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                             >> 0x00000017U));
    bufp->fullWData(oldp+814,(__Vtemp_39),450);
    bufp->fullBit(oldp+829,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid));
    bufp->fullWData(oldp+830,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop),377);
    bufp->fullIData(oldp+842,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_rs1),32);
    bufp->fullIData(oldp+843,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_rs2),32);
    bufp->fullIData(oldp+844,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_imm),32);
    bufp->fullWData(oldp+845,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop),377);
    bufp->fullIData(oldp+857,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1),32);
    bufp->fullIData(oldp+858,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2),32);
    bufp->fullIData(oldp+859,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm),32);
    bufp->fullIData(oldp+860,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result),32);
    bufp->fullIData(oldp+861,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1),32);
    bufp->fullIData(oldp+862,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2),32);
    bufp->fullBit(oldp+863,(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true));
    bufp->fullIData(oldp+864,(((0x00000080U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
                                ? (((0x00000020U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
                                     ? (0x0000001fU 
                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                           >> 5U)) : 
                                    (((- (IData)((1U 
                                                  & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                                     >> 0x0000001eU)))) 
                                      << 0x0000001aU) 
                                     | (0x03ffffffU 
                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                                           >> 5U)))) 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                                                     >> 6U))))))
                                : ((0x00000040U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U])
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
    bufp->fullBit(oldp+865,((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iss_valid) 
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
    bufp->fullWData(oldp+866,(__Vtemp_41),377);
    bufp->fullBit(oldp+878,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid));
    __Vtemp_43[0U] = (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                              << 7U));
    __Vtemp_43[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                       << 7U) | (IData)((((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result)) 
                                          << 7U) >> 0x00000020U)));
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
    bufp->fullWData(oldp+879,(__Vtemp_43),417);
    bufp->fullBit(oldp+893,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid));
    bufp->fullWData(oldp+894,(vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup),384);
    bufp->fullBit(oldp+906,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid));
    __Vtemp_46[0U] = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)));
    __Vtemp_46[1U] = (((IData)((0x00000001ffffffffULL 
                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                       << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                         >> 0x00000020U)));
    __Vtemp_46[2U] = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                        << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
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
                              >> 0x00000017U)) | ((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                                     << 6U) 
                                                    | (((0x00000010U 
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
                                                      << 2U)) 
                                                  >> 0x0000001eU)) 
                      | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                         >> 0x00000017U)) 
                         | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                            << 9U)));
    __Vtemp_46[4U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    << 9U)));
    __Vtemp_46[5U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    << 9U)));
    __Vtemp_46[6U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    << 9U)));
    __Vtemp_46[7U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    << 9U)));
    __Vtemp_46[8U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    << 9U)));
    __Vtemp_46[9U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                             >> 0x00000017U)) | ((0x000001fcU 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     >> 0x00000017U)) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    << 9U)));
    __Vtemp_46[10U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 9U)));
    __Vtemp_46[11U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                     << 9U)));
    __Vtemp_46[12U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                     << 9U)));
    __Vtemp_46[13U] = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                              >> 0x00000017U)) | ((0x000001fcU 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      >> 0x00000017U)) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                     << 9U)));
    __Vtemp_46[14U] = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                             >> 0x00000017U));
    bufp->fullWData(oldp+907,(__Vtemp_46),450);
    bufp->fullBit(oldp+922,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_valid));
    bufp->fullWData(oldp+923,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop),377);
    bufp->fullIData(oldp+935,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_rs1),32);
    bufp->fullIData(oldp+936,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_rs2),32);
    bufp->fullIData(oldp+937,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_imm),32);
    bufp->fullWData(oldp+938,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop),377);
    bufp->fullIData(oldp+950,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1),32);
    bufp->fullIData(oldp+951,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2),32);
    bufp->fullIData(oldp+952,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm),32);
    bufp->fullIData(oldp+953,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result),32);
    bufp->fullIData(oldp+954,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1),32);
    bufp->fullIData(oldp+955,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2),32);
    bufp->fullBit(oldp+956,(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true));
    bufp->fullBit(oldp+957,((1U & (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid))));
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
    bufp->fullWData(oldp+958,(__Vtemp_48),377);
    bufp->fullIData(oldp+970,((((- (IData)((1U & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                                                  >> 0x0000001eU)))) 
                                << 0x0000000cU) | (0x00000fffU 
                                                   & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                                                      >> 0x00000013U)))),32);
    bufp->fullBit(oldp+971,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_valid));
    bufp->fullWData(oldp+972,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_uop),377);
    bufp->fullIData(oldp+984,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_rs1),32);
    bufp->fullIData(oldp+985,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_rs2),32);
    bufp->fullIData(oldp+986,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_imm),32);
    bufp->fullBit(oldp+987,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid));
    bufp->fullIData(oldp+988,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs1),32);
    bufp->fullIData(oldp+989,(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm),32);
    bufp->fullIData(oldp+990,((vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs1 
                               + vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm)),32);
    bufp->fullBit(oldp+991,((1U & ((IData)(vlSelfRef.boom_core__DOT__mem_iss_valid) 
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
                                       << 7U) | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                                                 >> 0x00000019U)));
    bufp->fullWData(oldp+992,(__Vtemp_50),377);
    bufp->fullIData(oldp+1004,((((- (IData)((1U & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                                                   >> 0x00000017U)))) 
                                 << 0x0000000cU) | 
                                (0x00000fffU & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                                                >> 0x0000000cU)))),32);
    bufp->fullBit(oldp+1005,(((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid) 
                              & (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                 >> 0x0000000cU))));
    bufp->fullIData(oldp+1006,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs2),32);
    bufp->fullBit(oldp+1007,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_valid));
    bufp->fullWData(oldp+1008,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_uop),377);
    bufp->fullIData(oldp+1020,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_rs1),32);
    bufp->fullIData(oldp+1021,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_rs2),32);
    bufp->fullIData(oldp+1022,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_imm),32);
    bufp->fullBit(oldp+1023,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid));
    bufp->fullIData(oldp+1024,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs1),32);
    bufp->fullIData(oldp+1025,(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_imm),32);
    bufp->fullBit(oldp+1026,(vlSelfRef.boom_core__DOT__mem_iq_dis_ready));
    bufp->fullSData(oldp+1027,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid),16);
    bufp->fullSData(oldp+1028,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed),16);
    bufp->fullSData(oldp+1029,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready),16);
    bufp->fullSData(oldp+1030,(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant),16);
    bufp->fullCData(oldp+1031,(vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot),4);
    bufp->fullSData(oldp+1032,(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available),16);
    bufp->fullCData(oldp+1033,(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used),2);
    bufp->fullQData(oldp+1034,(vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec),48);
    bufp->fullBit(oldp+1036,((1U & (~ (0U != (0x00007fffffffffffULL 
                                              & (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                 >> 1U)))))));
    bufp->fullQData(oldp+1037,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec),48);
    bufp->fullQData(oldp+1039,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec),48);
    Vboom_core___024root__trace_full_dtype____0(vlSelf, bufp, 1041, vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q);
    Vboom_core___024root__trace_full_dtype____1(vlSelf, bufp, 1073, vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q);
    bufp->fullCData(oldp+1105,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_idx),6);
    bufp->fullCData(oldp+1106,((((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr) 
                                 << 1U) | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr_lsb))),6);
    Vboom_core___024root__trace_full_dtype____2(vlSelf, bufp, 1107, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_val);
    Vboom_core___024root__trace_full_dtype____3(vlSelf, bufp, 1109, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy);
    Vboom_core___024root__trace_full_dtype____4(vlSelf, bufp, 1111, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe);
    Vboom_core___024root__trace_full_dtype____5(vlSelf, bufp, 1113, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception);
    Vboom_core___024root__trace_full_dtype____6(vlSelf, bufp, 1115, vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_predicated);
    bufp->fullCData(oldp+1117,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head),5);
    bufp->fullCData(oldp+1118,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail),5);
    bufp->fullCData(oldp+1119,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr),5);
    bufp->fullBit(oldp+1120,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_lsb));
    bufp->fullBit(oldp+1121,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_lsb));
    bufp->fullBit(oldp+1122,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_pnr_lsb));
    bufp->fullBit(oldp+1123,((1U & (~ ((0U != vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[0U]) 
                                       | (0U != vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[1U]))))));
    bufp->fullCData(oldp+1124,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state),2);
    bufp->fullCData(oldp+1125,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                 << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))),2);
    bufp->fullCData(oldp+1126,(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals),2);
    bufp->fullCData(oldp+1127,(((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                        >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                       << 1U)) | (1U 
                                                  & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[0U] 
                                                     >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))),2);
    bufp->fullCData(oldp+1128,(((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[1U] 
                                        >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                       << 1U)) | (1U 
                                                  & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_unsafe[0U] 
                                                     >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))),2);
    bufp->fullCData(oldp+1129,(((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[1U] 
                                        >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                       << 1U)) | (1U 
                                                  & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[0U] 
                                                     >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))),2);
    bufp->fullCData(oldp+1130,(((((~ ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                       >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
                                         >> 8U))) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)) 
                                 << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51))),2);
    bufp->fullBit(oldp+1131,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)) 
                              & ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
                                 == (0x0000001fU & 
                                     (((IData)(1U) 
                                       + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)) 
                                      & (- (IData)(
                                                   (0x1fU 
                                                    != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail))))))))));
    bufp->fullCData(oldp+1132,(vlSelfRef.boom_core__DOT__unq_inst__DOT__state),2);
    bufp->fullCData(oldp+1133,((3U & ((2U & (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                                       ? ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done))))))
                                       : ((((2U != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)) 
                                            & (IData)(vlSelfRef.boom_core__DOT__unq_iss_valid))
                                            ? ((0x00008000U 
                                                & vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U])
                                                ? 1U
                                                : (
                                                   (0x00002000U 
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
    bufp->fullCData(oldp+1134,(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_cnt),5);
    bufp->fullBit(oldp+1135,(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done));
    bufp->fullBit(oldp+1136,(vlSelfRef.boom_core__DOT__unq_iq_dis_ready));
    bufp->fullBit(oldp+1137,(vlSelfRef.boom_core__DOT__unq_iss_valid));
    bufp->fullWData(oldp+1138,(vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop),377);
    bufp->fullSData(oldp+1150,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid),12);
    bufp->fullSData(oldp+1151,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed),12);
    bufp->fullSData(oldp+1152,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready),12);
    bufp->fullSData(oldp+1153,(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant),12);
    bufp->fullCData(oldp+1154,(vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot),4);
    bufp->fullSData(oldp+1155,(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available),12);
    bufp->fullBit(oldp+1156,(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used));
    bufp->fullWData(oldp+1157,(vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops),754);
    bufp->fullCData(oldp+1181,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_en),2);
    bufp->fullSData(oldp+1182,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_lreg),10);
    bufp->fullSData(oldp+1183,(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_preg),12);
    bufp->fullCData(oldp+1184,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_en),2);
    bufp->fullSData(oldp+1185,(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_preg),12);
    bufp->fullCData(oldp+1186,(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception),2);
    bufp->fullCData(oldp+1187,(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit),2);
    bufp->fullBit(oldp+1188,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155))));
    bufp->fullBit(oldp+1189,(((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155))) 
                              & (0U != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)))));
    bufp->fullBit(oldp+1190,(vlSelfRef.clk));
    bufp->fullBit(oldp+1191,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+1192,(vlSelfRef.fe_valid),4);
    bufp->fullWData(oldp+1193,(vlSelfRef.fe_insts),128);
    bufp->fullBit(oldp+1197,(vlSelfRef.fe_ready));
    bufp->fullBit(oldp+1198,(vlSelfRef.lsu_agen_valid));
    bufp->fullIData(oldp+1199,(vlSelfRef.lsu_agen_addr),32);
    bufp->fullBit(oldp+1200,(vlSelfRef.lsu_dgen_valid));
    bufp->fullBit(oldp+1201,(vlSelfRef.lsu_resp_valid));
    bufp->fullWData(oldp+1202,(vlSelfRef.lsu_resp),417);
    bufp->fullBit(oldp+1216,(vlSelfRef.csr_req_valid));
    bufp->fullSData(oldp+1217,(vlSelfRef.csr_addr),14);
    bufp->fullCData(oldp+1218,(vlSelfRef.csr_cmd),2);
    bufp->fullIData(oldp+1219,(vlSelfRef.csr_wdata),32);
    bufp->fullIData(oldp+1220,(vlSelfRef.csr_rdata),32);
    Vboom_core___024root__trace_full_dtype____7(vlSelf, bufp, 1221, vlSelfRef.commit);
    bufp->fullBit(oldp+1252,(vlSelfRef.rob_empty));
    bufp->fullIData(oldp+1253,(vlSelfRef.debug_pc),32);
    bufp->fullBit(oldp+1254,(vlSelfRef.commit_valid_dbg));
    bufp->fullCData(oldp+1255,(vlSelfRef.commit_ldst_dbg),5);
    bufp->fullBit(oldp+1256,(vlSelfRef.rf_wr_en_dbg));
    bufp->fullCData(oldp+1257,(vlSelfRef.rf_wr_pdst_dbg),6);
    bufp->fullCData(oldp+1258,(vlSelfRef.rf_wr_ldst_dbg),5);
    bufp->fullIData(oldp+1259,(vlSelfRef.rf_wr_data_dbg),32);
    bufp->fullIData(oldp+1260,(vlSelfRef.alu_rs1_dbg),32);
    bufp->fullIData(oldp+1261,(vlSelfRef.alu_imm_dbg),32);
    bufp->fullIData(oldp+1262,(vlSelfRef.alu_imm_packed_dbg),26);
    bufp->fullCData(oldp+1263,(vlSelfRef.alu_imm_sel_dbg),3);
    bufp->fullBit(oldp+1264,(vlSelfRef.rob_ready_dbg));
    bufp->fullCData(oldp+1265,(vlSelfRef.ren_stalls_dbg),2);
    bufp->fullCData(oldp+1266,(vlSelfRef.rn2_mask_dbg),2);
    bufp->fullCData(oldp+1267,(vlSelfRef.alu_res_valid_dbg),3);
    bufp->fullCData(oldp+1268,(vlSelfRef.rob_wb_valid_dbg),6);
    bufp->fullCData(oldp+1269,(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire),2);
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
    bufp->fullWData(oldp+1270,(__Vtemp_52),754);
    bufp->fullCData(oldp+1294,((3U & (IData)(vlSelfRef.fe_valid))),2);
    bufp->fullCData(oldp+1295,((((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_101) 
                                 << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102))),4);
    bufp->fullCData(oldp+1296,(((((0x0fU == (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25)) 
                                  & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                     >> 0x00000015U)) 
                                 << 1U) | ((0x0fU == (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q)) 
                                           & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U] 
                                              >> 0x00000015U)))),2);
    bufp->fullCData(oldp+1297,(vlSelfRef.boom_core__DOT__wakeup_valid_w),6);
    bufp->fullQData(oldp+1298,(vlSelfRef.boom_core__DOT__wakeup_pdst_w),36);
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
    bufp->fullWData(oldp+1300,(__Vtemp_60),320);
    bufp->fullCData(oldp+1310,(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en),5);
    bufp->fullIData(oldp+1311,(vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr),30);
    bufp->fullCData(oldp+1312,(((IData)(vlSelfRef.lsu_agen_valid) 
                                << 1U)),2);
    bufp->fullQData(oldp+1313,(((QData)((IData)(vlSelfRef.lsu_agen_addr)) 
                                << 0x00000020U)),64);
    bufp->fullCData(oldp+1315,(((0x001ffffeU & (((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid) 
                                                 << 1U) 
                                                & (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                                   >> 0x0000000bU))) 
                                | (IData)(vlSelfRef.lsu_dgen_valid))),2);
    bufp->fullCData(oldp+1316,(vlSelfRef.boom_core__DOT__brmask__DOT__alloc_mask),8);
    bufp->fullCData(oldp+1317,(((((8U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                                   ? ((4U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                                       ? ((2U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                                           ? (1U & 
                                              (~ (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25)))
                                           : 2U) : 4U)
                                   : 8U) & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                                          >> 0x00000015U))))) 
                                | (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))),4);
    bufp->fullIData(oldp+1318,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)
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
    bufp->fullIData(oldp+1319,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)
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
    bufp->fullIData(oldp+1320,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140)
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
    bufp->fullIData(oldp+1321,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
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
    bufp->fullIData(oldp+1322,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
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
    bufp->fullIData(oldp+1323,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
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
    bufp->fullBit(oldp+1324,((1U & (IData)(vlSelfRef.fe_valid))));
    bufp->fullBit(oldp+1325,((1U & ((IData)(vlSelfRef.fe_valid) 
                                    >> 1U))));
    bufp->fullIData(oldp+1326,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
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
    bufp->fullIData(oldp+1327,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
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
    bufp->fullCData(oldp+1328,(((0x00000038U & (((2U 
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
    bufp->fullCData(oldp+1329,(((0x00000018U & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire) 
                                                               >> 1U)))) 
                                                << 3U)) 
                                | (3U & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))))))),6);
    bufp->fullCData(oldp+1330,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en),6);
    bufp->fullQData(oldp+1331,(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg),36);
    bufp->fullBit(oldp+1333,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
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
    bufp->fullBit(oldp+1334,(vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d1));
    bufp->fullBit(oldp+1335,(vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d2));
    bufp->fullBit(oldp+1336,(((0U != vlSelfRef.commit
                               .__PVT__valids) & (0U 
                                                  == 
                                                  ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit) 
                                                   ^ (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals))))));
    bufp->fullIData(oldp+1337,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105)
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
    bufp->fullIData(oldp+1338,(vlSelfRef.fe_insts[0U]),32);
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
    bufp->fullWData(oldp+1339,(__Vtemp_61),377);
    bufp->fullCData(oldp+1351,((vlSelfRef.fe_insts[0U] 
                                >> 0x0000001aU)),6);
    bufp->fullBit(oldp+1352,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x0000001dU))));
    bufp->fullBit(oldp+1353,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x0000001cU))));
    bufp->fullBit(oldp+1354,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x0000001bU))));
    bufp->fullBit(oldp+1355,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x0000001aU))));
    bufp->fullBit(oldp+1356,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x00000019U))));
    bufp->fullBit(oldp+1357,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x00000018U))));
    bufp->fullBit(oldp+1358,((1U & (vlSelfRef.fe_insts[0U] 
                                    >> 0x00000016U))));
    bufp->fullCData(oldp+1359,((0x0000001fU & vlSelfRef.fe_insts[0U])),5);
    bufp->fullCData(oldp+1360,((0x0000001fU & (vlSelfRef.fe_insts[0U] 
                                               >> 5U))),5);
    bufp->fullCData(oldp+1361,((0x0000001fU & (vlSelfRef.fe_insts[0U] 
                                               >> 0x0000000aU))),5);
    bufp->fullSData(oldp+1362,((0x00000fffU & (vlSelfRef.fe_insts[0U] 
                                               >> 0x0000000aU))),12);
    bufp->fullSData(oldp+1363,((0x00003fffU & (vlSelfRef.fe_insts[0U] 
                                               >> 0x0000000aU))),14);
    bufp->fullIData(oldp+1364,((0x000fffffU & (vlSelfRef.fe_insts[0U] 
                                               >> 5U))),20);
    bufp->fullSData(oldp+1365,((0x0000ffffU & (vlSelfRef.fe_insts[0U] 
                                               >> 0x0000000aU))),16);
    bufp->fullIData(oldp+1366,(((0x03ff0000U & (vlSelfRef.fe_insts[0U] 
                                                << 0x00000010U)) 
                                | (0x0000ffffU & (vlSelfRef.fe_insts[0U] 
                                                  >> 0x0000000aU)))),26);
    bufp->fullCData(oldp+1367,((0x0000007fU & (vlSelfRef.fe_insts[0U] 
                                               >> 0x0000000fU))),7);
    bufp->fullCData(oldp+1368,((7U & (vlSelfRef.fe_insts[0U] 
                                      >> 0x0000000fU))),5);
    bufp->fullBit(oldp+1369,((1U & (~ ((3U == (3U & 
                                               (vlSelfRef.fe_insts[0U] 
                                                >> 0x0000001bU))) 
                                       | (vlSelfRef.fe_insts[0U] 
                                          >> 0x0000001dU))))));
    bufp->fullIData(oldp+1370,(vlSelfRef.fe_insts[1U]),32);
    bufp->fullCData(oldp+1371,((vlSelfRef.fe_insts[1U] 
                                >> 0x0000001aU)),6);
    bufp->fullBit(oldp+1372,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x0000001dU))));
    bufp->fullBit(oldp+1373,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x0000001cU))));
    bufp->fullBit(oldp+1374,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x0000001bU))));
    bufp->fullBit(oldp+1375,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x0000001aU))));
    bufp->fullBit(oldp+1376,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x00000019U))));
    bufp->fullBit(oldp+1377,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x00000018U))));
    bufp->fullBit(oldp+1378,((1U & (vlSelfRef.fe_insts[1U] 
                                    >> 0x00000016U))));
    bufp->fullCData(oldp+1379,((0x0000001fU & vlSelfRef.fe_insts[1U])),5);
    bufp->fullCData(oldp+1380,((0x0000001fU & (vlSelfRef.fe_insts[1U] 
                                               >> 5U))),5);
    bufp->fullCData(oldp+1381,((0x0000001fU & (vlSelfRef.fe_insts[1U] 
                                               >> 0x0000000aU))),5);
    bufp->fullSData(oldp+1382,((0x00000fffU & (vlSelfRef.fe_insts[1U] 
                                               >> 0x0000000aU))),12);
    bufp->fullSData(oldp+1383,((0x00003fffU & (vlSelfRef.fe_insts[1U] 
                                               >> 0x0000000aU))),14);
    bufp->fullIData(oldp+1384,((0x000fffffU & (vlSelfRef.fe_insts[1U] 
                                               >> 5U))),20);
    bufp->fullSData(oldp+1385,((0x0000ffffU & (vlSelfRef.fe_insts[1U] 
                                               >> 0x0000000aU))),16);
    bufp->fullIData(oldp+1386,(((0x03ff0000U & (vlSelfRef.fe_insts[1U] 
                                                << 0x00000010U)) 
                                | (0x0000ffffU & (vlSelfRef.fe_insts[1U] 
                                                  >> 0x0000000aU)))),26);
    bufp->fullCData(oldp+1387,((0x0000007fU & (vlSelfRef.fe_insts[1U] 
                                               >> 0x0000000fU))),7);
    bufp->fullCData(oldp+1388,((7U & (vlSelfRef.fe_insts[1U] 
                                      >> 0x0000000fU))),5);
    bufp->fullBit(oldp+1389,((1U & (~ ((3U == (3U & 
                                               (vlSelfRef.fe_insts[1U] 
                                                >> 0x0000001bU))) 
                                       | (vlSelfRef.fe_insts[1U] 
                                          >> 0x0000001dU))))));
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____0(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[31]),6);
    bufp->fullCData(oldp+1,(__VdtypeVar[30]),6);
    bufp->fullCData(oldp+2,(__VdtypeVar[29]),6);
    bufp->fullCData(oldp+3,(__VdtypeVar[28]),6);
    bufp->fullCData(oldp+4,(__VdtypeVar[27]),6);
    bufp->fullCData(oldp+5,(__VdtypeVar[26]),6);
    bufp->fullCData(oldp+6,(__VdtypeVar[25]),6);
    bufp->fullCData(oldp+7,(__VdtypeVar[24]),6);
    bufp->fullCData(oldp+8,(__VdtypeVar[23]),6);
    bufp->fullCData(oldp+9,(__VdtypeVar[22]),6);
    bufp->fullCData(oldp+10,(__VdtypeVar[21]),6);
    bufp->fullCData(oldp+11,(__VdtypeVar[20]),6);
    bufp->fullCData(oldp+12,(__VdtypeVar[19]),6);
    bufp->fullCData(oldp+13,(__VdtypeVar[18]),6);
    bufp->fullCData(oldp+14,(__VdtypeVar[17]),6);
    bufp->fullCData(oldp+15,(__VdtypeVar[16]),6);
    bufp->fullCData(oldp+16,(__VdtypeVar[15]),6);
    bufp->fullCData(oldp+17,(__VdtypeVar[14]),6);
    bufp->fullCData(oldp+18,(__VdtypeVar[13]),6);
    bufp->fullCData(oldp+19,(__VdtypeVar[12]),6);
    bufp->fullCData(oldp+20,(__VdtypeVar[11]),6);
    bufp->fullCData(oldp+21,(__VdtypeVar[10]),6);
    bufp->fullCData(oldp+22,(__VdtypeVar[9]),6);
    bufp->fullCData(oldp+23,(__VdtypeVar[8]),6);
    bufp->fullCData(oldp+24,(__VdtypeVar[7]),6);
    bufp->fullCData(oldp+25,(__VdtypeVar[6]),6);
    bufp->fullCData(oldp+26,(__VdtypeVar[5]),6);
    bufp->fullCData(oldp+27,(__VdtypeVar[4]),6);
    bufp->fullCData(oldp+28,(__VdtypeVar[3]),6);
    bufp->fullCData(oldp+29,(__VdtypeVar[2]),6);
    bufp->fullCData(oldp+30,(__VdtypeVar[1]),6);
    bufp->fullCData(oldp+31,(__VdtypeVar[0]),6);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____1(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[31]),6);
    bufp->fullCData(oldp+1,(__VdtypeVar[30]),6);
    bufp->fullCData(oldp+2,(__VdtypeVar[29]),6);
    bufp->fullCData(oldp+3,(__VdtypeVar[28]),6);
    bufp->fullCData(oldp+4,(__VdtypeVar[27]),6);
    bufp->fullCData(oldp+5,(__VdtypeVar[26]),6);
    bufp->fullCData(oldp+6,(__VdtypeVar[25]),6);
    bufp->fullCData(oldp+7,(__VdtypeVar[24]),6);
    bufp->fullCData(oldp+8,(__VdtypeVar[23]),6);
    bufp->fullCData(oldp+9,(__VdtypeVar[22]),6);
    bufp->fullCData(oldp+10,(__VdtypeVar[21]),6);
    bufp->fullCData(oldp+11,(__VdtypeVar[20]),6);
    bufp->fullCData(oldp+12,(__VdtypeVar[19]),6);
    bufp->fullCData(oldp+13,(__VdtypeVar[18]),6);
    bufp->fullCData(oldp+14,(__VdtypeVar[17]),6);
    bufp->fullCData(oldp+15,(__VdtypeVar[16]),6);
    bufp->fullCData(oldp+16,(__VdtypeVar[15]),6);
    bufp->fullCData(oldp+17,(__VdtypeVar[14]),6);
    bufp->fullCData(oldp+18,(__VdtypeVar[13]),6);
    bufp->fullCData(oldp+19,(__VdtypeVar[12]),6);
    bufp->fullCData(oldp+20,(__VdtypeVar[11]),6);
    bufp->fullCData(oldp+21,(__VdtypeVar[10]),6);
    bufp->fullCData(oldp+22,(__VdtypeVar[9]),6);
    bufp->fullCData(oldp+23,(__VdtypeVar[8]),6);
    bufp->fullCData(oldp+24,(__VdtypeVar[7]),6);
    bufp->fullCData(oldp+25,(__VdtypeVar[6]),6);
    bufp->fullCData(oldp+26,(__VdtypeVar[5]),6);
    bufp->fullCData(oldp+27,(__VdtypeVar[4]),6);
    bufp->fullCData(oldp+28,(__VdtypeVar[3]),6);
    bufp->fullCData(oldp+29,(__VdtypeVar[2]),6);
    bufp->fullCData(oldp+30,(__VdtypeVar[1]),6);
    bufp->fullCData(oldp+31,(__VdtypeVar[0]),6);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____2(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____2\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0]),32);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____3(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____3\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0]),32);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____4(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0]),32);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____5(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____5\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0]),32);
}

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____6(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____6\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0]),32);
}

extern const VlWide<24>/*767:0*/ Vboom_core__ConstPool__CONST_h547465de_0;

VL_ATTR_COLD void Vboom_core___024root__trace_full_dtype____7(Vboom_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const Vboom_core_commit_signal_t__struct__0& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root__trace_full_dtype____7\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<24>/*767:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,((3U & __VdtypeVar.__PVT__valids)),2);
    bufp->fullCData(oldp+1,((3U & __VdtypeVar.__PVT__arch_valids)),2);
    VL_AND_W(24, __Vtemp_1, Vboom_core__ConstPool__CONST_h547465de_0, 
             __VdtypeVar.__PVT__uops);
    bufp->fullWData(oldp+2,(__Vtemp_1),754);
    bufp->fullCData(oldp+26,((0x0000003fU & __VdtypeVar
                              .__PVT__fflags)),6);
    bufp->fullQData(oldp+27,(__VdtypeVar.__PVT__debug_insts),64);
    bufp->fullQData(oldp+29,(__VdtypeVar.__PVT__debug_wdata),64);
}
