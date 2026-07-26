import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_ifu_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    output logic                         imem_req_valid,
    input  logic                         imem_req_ready,
    output logic [31:0]                  imem_req_addr,
    input  logic                         imem_resp_valid,
    output logic                         imem_resp_ready,
    input  logic [3:0][31:0]             imem_resp_insts,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic                         dmem_req_is_store,
    output logic [31:0]                  dmem_req_addr,
    output logic [31:0]                  dmem_req_data,
    output logic [3:0]                   dmem_req_mask,
    output logic [1:0]                   dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dmem_req_idx,
    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    output logic                         rob_empty,
    output logic                         core_fe_ready,
    output logic [3:0]                   ifu_fetch_valid,
    output logic [3:0][31:0]             ifu_fetch_pc,
    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic [3:0]                   core_packet_valid,
    output logic [3:0][31:0]             core_packet_pc,
    output logic [3:0][31:0]             core_packet_inst,
    output logic                         core_packet_partial,
    output logic [1:0]                   core_dec_fire,
    output logic [1:0]                   core_dis_fire,
    output logic                         core_dis_unique,
    output logic                         core_flush_valid,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][5:0]              commit_rob_idx,

    output logic [4:0]                   rf_write_valid,
    output logic [4:0][4:0]              rf_write_ldst,
    output logic [4:0][31:0]             rf_write_data
);
    localparam logic [31:0] PROGRAM_BASE = 32'h1c05_0000;

    logic [3:0][31:0] ifu_fetch_insts;
    commit_signal_t core_commit;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(PROGRAM_BASE)
    ) frontend (
        .clk,
        .rst_n,
        .redirect_valid,
        .redirect_pc,
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid(ifu_fetch_valid),
        .fetch_insts(ifu_fetch_insts),
        .fetch_pc(ifu_fetch_pc),
        .fetch_ready(core_fe_ready)
    );

    loom_core #(
        .RESET_PC(PROGRAM_BASE),
        .USE_EXTERNAL_FE_PCS(1'b1)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(ifu_fetch_valid),
        .fe_insts(ifu_fetch_insts),
        .fe_pcs(ifu_fetch_pc),
        .fe_ready(core_fe_ready),
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop(),
        .dmem_resp_valid,
        .dmem_resp_is_store,
        .dmem_resp_data,
        .dmem_resp_idx,
        .hw_irq('0),
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty,
        .debug_pc(),
        .commit_valid_dbg(),
        .commit_valids_dbg(),
        .commit_ldst_dbg(),
        .rf_wr_en_dbg(),
        .rf_wr_pdst_dbg(),
        .rf_wr_ldst_dbg(),
        .rf_wr_data_dbg(),
        .alu_rs1_dbg(),
        .alu_imm_dbg(),
        .alu_imm_packed_dbg(),
        .alu_imm_sel_dbg(),
        .rob_ready_dbg(),
        .ren_stalls_dbg(),
        .rn2_mask_dbg(),
        .dis_fire_dbg(core_dis_fire),
        .dis_unique_dbg(core_dis_unique),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    assign core_packet_valid =
        ifu_fetch_valid & ~core.fe_finished_q;
    assign core_packet_pc = ifu_fetch_pc;
    assign core_packet_inst = ifu_fetch_insts;
    assign core_packet_partial = |core.fe_finished_q;
    assign core_dec_fire = core.dec_fire;
    assign core_flush_valid = redirect_valid;

    always_comb begin
        commit_valid = core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_rob_idx = '0;
        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] = core_commit.uops[lane].pc[31:0];
            commit_inst[lane] = core_commit.uops[lane].inst;
            commit_rob_idx[lane] = core_commit.uops[lane].rob_idx;
        end
    end

    assign rf_write_valid = core.rf_write_en;
    assign rf_write_data = core.rf_write_data;

    always_comb begin
        rf_write_ldst = '0;
        for (int port = 0; port < 3; port++)
            rf_write_ldst[port] = core.alu_res[port].uop.ldst;
        rf_write_ldst[3] = core.lsu_resp_w.uop.ldst;
        rf_write_ldst[4] = core.unq_res.uop.ldst;
    end
endmodule
