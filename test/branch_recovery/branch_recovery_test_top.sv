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

    logic                         core_dmem_req_valid;
    logic                         core_dmem_req_ready;
    logic                         core_dmem_req_is_store;
    logic [31:0]                  core_dmem_req_addr;
    logic [31:0]                  core_dmem_req_data;
    logic [3:0]                   core_dmem_req_mask;
    logic [1:0]                   core_dmem_req_size;
    logic [LSU_ADDR_SZ+1:0]       core_dmem_req_idx;
    uop_t                         core_dmem_req_uop;
    logic                         core_dmem_resp_valid;
    logic                         core_dmem_resp_is_store;
    logic [31:0]                  core_dmem_resp_data;
    logic [LSU_ADDR_SZ+1:0]       core_dmem_resp_idx;
    commit_signal_t               core_commit;

    logic [3:0]                   lsu_req_count_q;
    uop_t [LSU_LOG_ENTRIES-1:0]   lsu_req_uops;
    logic [LSU_LOG_ENTRIES-1:0][LSU_ADDR_SZ+1:0] lsu_req_idxs;

    assign core_dmem_req_ready = 1'b1;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            lsu_req_count_q <= '0;
            lsu_req_uops <= '0;
            lsu_req_idxs <= '0;
        end else if (core_dmem_req_valid && core_dmem_req_ready &&
                     !core_dmem_req_is_store &&
                     lsu_req_count_q < LSU_LOG_ENTRIES) begin
            lsu_req_uops[lsu_req_count_q] <= core_dmem_req_uop;
            lsu_req_idxs[lsu_req_count_q] <= core_dmem_req_idx;
            lsu_req_count_q <= lsu_req_count_q + 1'b1;
        end
    end

    always_comb begin
        core_dmem_resp_valid = 1'b0;
        core_dmem_resp_is_store = 1'b0;
        core_dmem_resp_data = lsu_resp_data;
        core_dmem_resp_idx = '0;
        if (lsu_resp_slot < lsu_req_count_q) begin
            core_dmem_resp_valid = lsu_resp_valid;
            core_dmem_resp_idx = lsu_req_idxs[lsu_resp_slot];
        end
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

    loom_core core (
        .clk,
        .rst_n,
        .fe_valid,
        .fe_insts,
        .fe_pcs('0),
        .fe_xcpt_valid('0),
        .fe_xcpt_code('0),
        .fe_ready,
        .fe_redirect_valid(br_mispredict),
        .fe_redirect_pc(),
        .ifu_xlate_req_valid(1'b0),
        .ifu_xlate_req_ready(),
        .ifu_xlate_req_vaddr('0),
        .ifu_xlate_resp_valid(),
        .ifu_xlate_resp_ready(1'b1),
        .ifu_xlate_resp_vaddr(),
        .ifu_xlate_resp_paddr(),
        .ifu_xlate_resp_mat(),
        .ifu_xlate_resp_cacheable(),
        .ifu_xlate_resp_xcpt_valid(),
        .ifu_xlate_resp_xcpt_code(),
        .ifu_xlate_resp_badvaddr(),
        .dmem_req_valid(core_dmem_req_valid),
        .dmem_req_ready(core_dmem_req_ready),
        .dmem_req_is_store(core_dmem_req_is_store),
        .dmem_req_addr(core_dmem_req_addr),
        .dmem_req_data(core_dmem_req_data),
        .dmem_req_mask(core_dmem_req_mask),
        .dmem_req_size(core_dmem_req_size),
        .dmem_req_idx(core_dmem_req_idx),
        .dmem_req_uop(core_dmem_req_uop),
        .dmem_resp_valid(core_dmem_resp_valid),
        .dmem_resp_is_store(core_dmem_resp_is_store),
        .dmem_resp_data(core_dmem_resp_data),
        .dmem_resp_idx(core_dmem_resp_idx),
        .hw_irq('0),
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
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
        .alu_src1_dbg(),
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
    always_comb begin
        rf_write_ldst = '0;
        for (int i = 0; i < 3; i++)
            rf_write_ldst[i] = core.alu_res[i].uop.ldst;
        rf_write_ldst[3] = core.lsu_resp_w.uop.ldst;
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
