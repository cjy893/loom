import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_fetch_buffer_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic                         frontend_enable,

    output logic                         imem_req_valid,
    input  logic                         imem_req_ready,
    output logic [31:0]                  imem_req_addr,
    input  logic                         imem_resp_valid,
    output logic                         imem_resp_ready,
    input  logic [3:0][31:0]             imem_resp_insts,

    output logic [3:0]                   ifu_packet_valid_dbg,
    output logic                         buffer_enq_ready_dbg,
    output logic [1:0]                   buffer_deq_valid_dbg,
    output logic [31:0]                  buffer_deq_pc0_dbg,
    output logic [31:0]                  buffer_deq_pc1_dbg,
    output logic [31:0]                  buffer_deq_inst0_dbg,
    output logic [31:0]                  buffer_deq_inst1_dbg,
    output logic                         core_fe_ready_dbg,
    output logic                         frontend_fire_dbg,

    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic                         rob_empty,
    output logic [1:0]                   core_dis_fire,
    output logic                         core_dis_unique,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][ROB_ADDR_SZ-1:0]  commit_rob_idx
);
    localparam logic [31:0] PROGRAM_BASE = 32'h1c06_0000;

    logic [3:0] ifu_fetch_valid;
    logic [3:0][31:0] ifu_fetch_pcs;
    logic [3:0][31:0] ifu_fetch_insts;
    logic [3:0][FTQ_ADDR_SZ-1:0] ifu_fetch_ftq_idx;
    logic [3:0] ifu_fetch_predicted_taken;
    logic [3:0][31:0] ifu_fetch_predicted_npc;
    logic [3:0] ifu_fetch_xcpt_valid;
    logic [3:0][5:0] ifu_fetch_xcpt_code;
    logic [31:0] ifu_xlate_req_vaddr;
    logic ifu_fetch_ready;

    logic [1:0] buffer_deq_valid;
    logic [1:0][31:0] buffer_deq_pcs;
    logic [1:0][31:0] buffer_deq_insts;
    logic [1:0] buffer_deq_xcpt_valid;
    logic [1:0][5:0] buffer_deq_xcpt_code;
    logic [1:0][FTQ_ADDR_SZ-1:0] buffer_deq_ftq_idx;
    logic [1:0] buffer_deq_predicted_taken;
    logic [1:0][31:0] buffer_deq_predicted_npc;
    logic buffer_deq_ready;

    logic [1:0] core_fe_valid;
    logic [1:0][31:0] core_fe_pcs;
    logic [1:0][31:0] core_fe_insts;
    logic core_fe_ready;
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

    logic                         dmem_req_valid;
    logic                         dmem_req_is_store;
    logic [31:0]                  dmem_req_addr;
    logic [31:0]                  dmem_req_data;
    logic [3:0]                   dmem_req_mask;
    logic [1:0]                   dmem_req_size;
    logic [LSU_ADDR_SZ+1:0]       dmem_req_idx;
    uop_t                         dmem_req_uop;

    assign ifu_packet_valid_dbg = ifu_fetch_valid;
    assign buffer_enq_ready_dbg = ifu_fetch_ready;
    assign buffer_deq_valid_dbg = buffer_deq_valid;
    assign buffer_deq_pc0_dbg = buffer_deq_pcs[0];
    assign buffer_deq_pc1_dbg = buffer_deq_pcs[1];
    assign buffer_deq_inst0_dbg = buffer_deq_insts[0];
    assign buffer_deq_inst1_dbg = buffer_deq_insts[1];
    assign core_fe_ready_dbg = core_fe_ready;
    assign frontend_fire_dbg =
        buffer_deq_ready && (|buffer_deq_valid);

    assign core_fe_valid =
        frontend_enable ? buffer_deq_valid : '0;
    assign core_fe_pcs = buffer_deq_pcs;
    assign core_fe_insts = buffer_deq_insts;
    assign buffer_deq_ready =
        frontend_enable && core_fe_ready;

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
        .fetch_pc(ifu_fetch_pcs),
        .fetch_ftq_idx(ifu_fetch_ftq_idx),
        .fetch_predicted_taken(ifu_fetch_predicted_taken),
        .fetch_predicted_npc(ifu_fetch_predicted_npc),
        .fetch_ready(ifu_fetch_ready)
    );

    fetcher_buffer #(
        .FETCH_WIDTH(4),
        .CORE_WIDTH(2),
        .NUM_ENTRIES(8)
    ) fetch_buffer (
        .clk,
        .rst_n,
        .flush(redirect_valid),
        .enq_valid(ifu_fetch_valid),
        .enq_xcpt_valid(ifu_fetch_xcpt_valid),
        .enq_xcpt_code(ifu_fetch_xcpt_code),
        .enq_insts(ifu_fetch_insts),
        .enq_pcs(ifu_fetch_pcs),
        .enq_ftq_idx(ifu_fetch_ftq_idx),
        .enq_predicted_taken(ifu_fetch_predicted_taken),
        .enq_predicted_npc(ifu_fetch_predicted_npc),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(buffer_deq_valid),
        .deq_xcpt_valid(buffer_deq_xcpt_valid),
        .deq_xcpt_code(buffer_deq_xcpt_code),
        .deq_insts(buffer_deq_insts),
        .deq_pcs(buffer_deq_pcs),
        .deq_ftq_idx(buffer_deq_ftq_idx),
        .deq_predicted_taken(buffer_deq_predicted_taken),
        .deq_predicted_npc(buffer_deq_predicted_npc),
        .deq_ready(buffer_deq_ready)
    );

    loom_core #(
        .RESET_PC(PROGRAM_BASE),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .FETCH_WIDTH(2),
        .CORE_WIDTH(2)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(core_fe_valid),
        .fe_insts(core_fe_insts),
        .fe_pcs(core_fe_pcs),
        .fe_ftq_idx(buffer_deq_ftq_idx),
        .fe_predicted_taken(buffer_deq_predicted_taken),
        .fe_predicted_npc(buffer_deq_predicted_npc),
        .fe_xcpt_valid(buffer_deq_xcpt_valid),
        .fe_xcpt_code(buffer_deq_xcpt_code),
        .fe_ready(core_fe_ready),
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
        .dmem_req_ready(1'b1),
        .dmem_req_is_store,
        .dmem_req_cacheable(),
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid(1'b0),
        .dmem_resp_is_store(1'b0),
        .dmem_resp_data('0),
        .dmem_resp_idx('0),
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

    always_comb begin
        commit_valid = core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_rob_idx = '0;
        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] =
                core_commit.uops[lane].pc[31:0];
            commit_inst[lane] =
                core_commit.uops[lane].inst;
            commit_rob_idx[lane] =
                core_commit.uops[lane].rob_idx;
        end
    end
endmodule
