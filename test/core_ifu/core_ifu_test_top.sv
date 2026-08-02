import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_ifu_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic                         fetch_allow,
    input  logic [7:0]                   hw_irq,

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
    output logic [3:0]                   ifu_fetch_predicted_taken_dbg,
    output logic [3:0][31:0]             ifu_fetch_predicted_npc_dbg,
    output logic                         bpd_update_valid_dbg,
    output logic                         bpd_ready_dbg,
    output logic                         bpd_update_is_mispredict_dbg,
    output logic                         bpd_update_is_repair_dbg,
    output logic                         bpd_update_cfi_is_jirl_dbg,
    output logic [31:0]                  bpd_update_pc_dbg,
    output logic [31:0]                  bpd_update_target_dbg,
    output logic                         ftq_backpressure_dbg,
    output logic                         ftq_nonempty_dbg,
    output logic [4:0]                   ftq_valid_count_dbg,
    output logic                         ghist_nonzero_dbg,
    output logic                         interrupt_pending_dbg,
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
    logic [3:0][FTQ_ADDR_SZ-1:0] ifu_fetch_ftq_idx;
    logic [3:0] ifu_fetch_predicted_taken;
    logic [3:0][31:0] ifu_fetch_predicted_npc;
    logic [3:0] ifu_fetch_xcpt_valid;
    logic [3:0][5:0] ifu_fetch_xcpt_code;
    logic [31:0] ifu_xlate_req_vaddr;
    commit_signal_t core_commit;
    logic frontend_flush_valid;
    logic [FTQ_ADDR_SZ-1:0] redirect_ftq_idx;
    logic redirect_taken;
    logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] redirect_pc_lob;
    logic [2:0] redirect_cfi_type;
    logic ftq_commit_valid;
    logic [FTQ_ADDR_SZ-1:0] ftq_commit_idx;
    logic [ALU_WIDTH-1:0] ftq_exec_query_valid;
    logic [ALU_WIDTH-1:0][FTQ_ADDR_SZ-1:0] ftq_exec_query_idx;
    logic [ALU_WIDTH-1:0][31:0] ftq_exec_query_pc;
    logic [ALU_WIDTH-1:0] ftq_exec_query_resp_valid;
    logic [ALU_WIDTH-1:0][31:0] ftq_exec_query_next_pc;
    logic [ALU_WIDTH-1:0] ftq_exec_query_cfi_match;
    logic core_fe_ready_raw;
    logic [3:0] core_fe_valid;

    always_comb begin
        ftq_commit_valid = 1'b0;
        ftq_commit_idx = '0;
        for (int lane = 0; lane < 2; lane++) begin
            if (core_commit.valids[lane]) begin
                ftq_commit_valid = 1'b1;
                ftq_commit_idx = core_commit.uops[lane].ftq_idx;
            end
        end
    end

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(PROGRAM_BASE)
    ) frontend (
        .clk,
        .rst_n,
        .redirect_valid,
        .flush_valid(frontend_flush_valid),
        .redirect_pc,
        .branch_redirect_ftq_idx(redirect_ftq_idx),
        .branch_redirect_taken(redirect_taken),
        .branch_redirect_pc_lob(redirect_pc_lob),
        .branch_redirect_cfi_type(redirect_cfi_type),
        .ftq_commit_valid,
        .ftq_commit_idx,
        .exec_query_valid(ftq_exec_query_valid),
        .exec_query_idx(ftq_exec_query_idx),
        .exec_query_pc(ftq_exec_query_pc),
        .exec_query_resp_valid(ftq_exec_query_resp_valid),
        .exec_query_next_pc(ftq_exec_query_next_pc),
        .exec_query_cfi_match(ftq_exec_query_cfi_match),
        .xlate_req_valid(),
        .xlate_req_ready(1'b1),
        .xlate_req_vaddr(ifu_xlate_req_vaddr),
        .xlate_resp_valid(1'b1),
        .xlate_resp_ready(),
        .xlate_resp_vaddr(ifu_xlate_req_vaddr),
        .xlate_resp_paddr(ifu_xlate_req_vaddr),
        .xlate_resp_mat(2'b01),
        .xlate_resp_cacheable(1'b1),
        .xlate_resp_xcpt_valid(1'b0),
        .xlate_resp_xcpt_code('0),
        .imem_req_mat(),
        .imem_req_cacheable(),
        .fetch_xcpt_valid(ifu_fetch_xcpt_valid),
        .fetch_xcpt_code(ifu_fetch_xcpt_code),
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid(ifu_fetch_valid),
        .fetch_insts(ifu_fetch_insts),
        .fetch_pc(ifu_fetch_pc),
        .fetch_ftq_idx(ifu_fetch_ftq_idx),
        .fetch_predicted_taken(ifu_fetch_predicted_taken),
        .fetch_predicted_npc(ifu_fetch_predicted_npc),
        .fetch_ready(core_fe_ready)
    );

    loom_core #(
        .RESET_PC(PROGRAM_BASE),
        .USE_EXTERNAL_FE_PCS(1'b1)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(core_fe_valid),
        .fe_insts(ifu_fetch_insts),
        .fe_pcs(ifu_fetch_pc),
        .fe_ftq_idx(ifu_fetch_ftq_idx),
        .fe_predicted_taken(ifu_fetch_predicted_taken),
        .fe_predicted_npc(ifu_fetch_predicted_npc),
        .fe_xcpt_valid(ifu_fetch_xcpt_valid),
        .fe_xcpt_code(ifu_fetch_xcpt_code),
        .fe_ready(core_fe_ready_raw),
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
        .fe_flush_valid(frontend_flush_valid),
        .fe_redirect_ftq_idx(redirect_ftq_idx),
        .fe_redirect_taken(redirect_taken),
        .fe_redirect_pc_lob(redirect_pc_lob),
        .fe_redirect_cfi_type(redirect_cfi_type),
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
        .ftq_exec_query_valid,
        .ftq_exec_query_idx,
        .ftq_exec_query_pc,
        .ftq_exec_query_resp_valid,
        .ftq_exec_query_next_pc,
        .ftq_exec_query_cfi_match,
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_cacheable(),
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
        .icache_maint_valid(),
        .icache_maint_ready(1'b1),
        .icache_maint_mode(),
        .icache_maint_vaddr(),
        .icache_maint_paddr(),
        .icache_maint_done(1'b1),
        .dcache_maint_valid(),
        .dcache_maint_ready(1'b1),
        .dcache_maint_op(),
        .dcache_maint_mode(),
        .dcache_maint_vaddr(),
        .dcache_maint_paddr(),
        .dcache_maint_done(1'b1),
        .hw_irq,
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
        .alu_src1_dbg(),
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
    assign core_fe_valid = ifu_fetch_valid & {4{fetch_allow}};
    assign core_fe_ready = core_fe_ready_raw && fetch_allow;
    assign ifu_fetch_predicted_taken_dbg = ifu_fetch_predicted_taken;
    assign ifu_fetch_predicted_npc_dbg = ifu_fetch_predicted_npc;
    assign bpd_update_valid_dbg = frontend.ftq_bpd_update_valid;
    assign bpd_ready_dbg = frontend.bpd_ready;
    assign bpd_update_is_mispredict_dbg =
        frontend.ftq_bpd_update_is_mispredict_update;
    assign bpd_update_is_repair_dbg =
        frontend.ftq_bpd_update_is_repair_update;
    assign bpd_update_cfi_is_jirl_dbg =
        frontend.ftq_bpd_update_cfi_is_jirl;
    assign bpd_update_pc_dbg = frontend.ftq_bpd_update_pc;
    assign bpd_update_target_dbg = frontend.ftq_bpd_update_target;
    assign ftq_backpressure_dbg =
        frontend.packet_available && !frontend.ftq_enq_ready;
    assign ftq_nonempty_dbg = |frontend.ftq_inst.entry_valid_q;
    assign ftq_valid_count_dbg =
        5'($countones(frontend.ftq_inst.entry_valid_q));
    assign ghist_nonzero_dbg = frontend.current_ghist != '0;
    assign interrupt_pending_dbg = core.csr_interrupt_pending_w;
    assign core_packet_pc = ifu_fetch_pc;
    assign core_packet_inst = ifu_fetch_insts;
    assign core_packet_partial = |core.fe_finished_q;
    assign core_dec_fire = core.dec_fire;
    assign core_flush_valid = frontend_flush_valid;

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
