import loom_params::*;
import loom_consts::*;
import loom_types::*;

module branch_recovery_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic [3:0]                   fe_valid,
    input  logic [3:0][31:0]             fe_insts,
    output logic                         fe_ready,

    input  logic                         lsu_resp_valid,
    input  logic [2:0]                   lsu_resp_slot,
    input  logic [31:0]                  lsu_resp_data,

    output logic                         rob_empty,
    output logic [31:0]                  debug_pc,
    output logic [1:0]                   commit_valids,
    output logic [4:0]                   commit_ldst_0,
    output logic [4:0]                   commit_ldst_1,
    output logic [1:0]                   ren_stalls,
    output logic                         br_mispredict,

    output logic [3:0]                   lsu_req_count,
    output logic [5:0]                   selected_lsu_pdst,
    output logic [4:0]                   selected_lsu_ldst,
    output logic [3:0]                   selected_lsu_br_mask,

    output logic [4:0]                   rf_write_valid,
    output logic [4:0][5:0]              rf_write_pdst,
    output logic [4:0][4:0]              rf_write_ldst,
    output logic [4:0][31:0]             rf_write_data,

    output logic [5:0]                   rename_map_r5,
    output logic [5:0]                   rename_map_r6,
    output logic [47:0]                  rename_free_vec,
    output logic [47:0]                  rename_busy_vec
);
    localparam int LSU_LOG_ENTRIES = 8;

    logic                         core_lsu_agen_valid;
    logic [31:0]                  core_lsu_agen_addr;
    uop_t                         core_lsu_agen_uop;
    logic                         core_lsu_dgen_valid;
    logic [31:0]                  core_lsu_dgen_data;
    uop_t                         core_lsu_dgen_uop;
    exe_unit_resp_t               core_lsu_resp;
    commit_signal_t               core_commit;

    logic [3:0]                   lsu_req_count_q;
    uop_t [LSU_LOG_ENTRIES-1:0]   lsu_req_uops;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            lsu_req_count_q <= '0;
            lsu_req_uops <= '0;
        end else if (core_lsu_agen_valid &&
                     lsu_req_count_q < LSU_LOG_ENTRIES) begin
            lsu_req_uops[lsu_req_count_q] <= core_lsu_agen_uop;
            lsu_req_count_q <= lsu_req_count_q + 1'b1;
        end
    end

    always_comb begin
        core_lsu_resp = '0;
        if (lsu_resp_slot < lsu_req_count_q) begin
            core_lsu_resp.uop = lsu_req_uops[lsu_resp_slot];
            core_lsu_resp.data = lsu_resp_data;
        end
        core_lsu_resp.valid = lsu_resp_valid;
    end

    assign lsu_req_count = lsu_req_count_q;
    assign selected_lsu_pdst =
        (lsu_resp_slot < lsu_req_count_q) ?
        lsu_req_uops[lsu_resp_slot].pdst : '0;
    assign selected_lsu_ldst =
        (lsu_resp_slot < lsu_req_count_q) ?
        lsu_req_uops[lsu_resp_slot].ldst : '0;
    assign selected_lsu_br_mask =
        (lsu_resp_slot < lsu_req_count_q) ?
        lsu_req_uops[lsu_resp_slot].br_mask : '0;

    boom_core core (
        .clk,
        .rst_n,
        .fe_valid,
        .fe_insts,
        .fe_ready,
        .lsu_agen_valid(core_lsu_agen_valid),
        .lsu_agen_addr(core_lsu_agen_addr),
        .lsu_agen_uop(core_lsu_agen_uop),
        .lsu_dgen_valid(core_lsu_dgen_valid),
        .lsu_dgen_data(core_lsu_dgen_data),
        .lsu_dgen_uop(core_lsu_dgen_uop),
        .lsu_resp_valid,
        .lsu_resp(core_lsu_resp),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .csr_rdata('0),
        .commit(core_commit),
        .rob_empty,
        .debug_pc,
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
        .ren_stalls_dbg(ren_stalls),
        .rn2_mask_dbg(),
        .dis_fire_dbg(),
        .dis_unique_dbg(),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    assign commit_valids = core_commit.arch_valids;
    assign commit_ldst_0 = core_commit.uops[0].ldst;
    assign commit_ldst_1 = core_commit.uops[1].ldst;
    assign br_mispredict = core.brupdate_w.b2.mispredict;

    always_comb begin
        rf_write_ldst = '0;
        for (int i = 0; i < 3; i++)
            rf_write_ldst[i] = core.alu_res[i].uop.ldst;
        rf_write_ldst[3] = core_lsu_resp.uop.ldst;
        rf_write_ldst[4] = core.unq_res.uop.ldst;
    end

    assign rf_write_valid = core.rf_write_en;
    assign rf_write_pdst = core.rf_write_addr;
    assign rf_write_data = core.rf_write_data;

    assign rename_map_r5 = core.rename.maptable.map_q[5];
    assign rename_map_r6 = core.rename.maptable.map_q[6];
    assign rename_free_vec = core.rename.freelist.free_vec;
    assign rename_busy_vec = core.rename.busytable.busy_vec;
endmodule
