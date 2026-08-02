import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_top_reference #(
    parameter logic [31:0] RESET_PC = 32'h1c00_0000
) (
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

    input  logic [7:0]                   hw_irq,
    input  logic                         ipi_irq,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][4:0]              commit_ldst,

    output logic                         exception_valid,
    output logic [31:0]                  exception_pc,
    output logic [31:0]                  exception_inst,
    output logic [31:0]                  exception_cause,
    output logic [31:0]                  exception_badvaddr
);
    logic [3:0] ifu_fetch_valid;
    logic [3:0][31:0] ifu_fetch_pc;
    logic [3:0][31:0] ifu_fetch_insts;
    logic [3:0][FTQ_ADDR_SZ-1:0] ifu_fetch_ftq_idx;
    logic [3:0] ifu_fetch_predicted_taken;
    logic [3:0][31:0] ifu_fetch_predicted_npc;
    logic [3:0] ifu_fetch_xcpt_valid;
    logic [3:0][5:0] ifu_fetch_xcpt_code;
    logic ifu_fetch_ready;
    logic [31:0] ifu_xlate_req_vaddr;

    logic [1:0] buffer_deq_valid;
    logic [1:0][31:0] buffer_deq_pc;
    logic [1:0][31:0] buffer_deq_insts;
    logic [1:0][FTQ_ADDR_SZ-1:0] buffer_deq_ftq_idx;
    logic [1:0] buffer_deq_predicted_taken;
    logic [1:0][31:0] buffer_deq_predicted_npc;
    logic [1:0] buffer_deq_xcpt_valid;
    logic [1:0][5:0] buffer_deq_xcpt_code;
    logic buffer_deq_ready;

    logic core_fe_ready;
    logic core_redirect_valid;
    logic core_frontend_flush_valid;
    logic [31:0] core_redirect_pc;
    logic [FTQ_ADDR_SZ-1:0] core_redirect_ftq_idx;
    logic core_redirect_taken;
    logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] core_redirect_pc_lob;
    logic [2:0] core_redirect_cfi_type;
    logic ftq_commit_valid;
    logic [FTQ_ADDR_SZ-1:0] ftq_commit_idx;
    logic [ALU_WIDTH-1:0] ftq_exec_query_valid;
    logic [ALU_WIDTH-1:0][FTQ_ADDR_SZ-1:0] ftq_exec_query_idx;
    logic [ALU_WIDTH-1:0][31:0] ftq_exec_query_pc;
    logic [ALU_WIDTH-1:0] ftq_exec_query_resp_valid;
    logic [ALU_WIDTH-1:0][31:0] ftq_exec_query_next_pc;
    logic [ALU_WIDTH-1:0] ftq_exec_query_cfi_match;
    uop_t dmem_req_uop;
    commit_signal_t core_commit;

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
        .RESET_PC(RESET_PC)
    ) frontend (
        .clk,
        .rst_n,
        .redirect_valid(core_redirect_valid),
        .redirect_pc(core_redirect_pc),
        .flush_valid(core_frontend_flush_valid),
        .branch_redirect_ftq_idx(core_redirect_ftq_idx),
        .branch_redirect_taken(core_redirect_taken),
        .branch_redirect_pc_lob(core_redirect_pc_lob),
        .branch_redirect_cfi_type(core_redirect_cfi_type),
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
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_req_mat(),
        .imem_req_cacheable(),
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_xcpt_valid(ifu_fetch_xcpt_valid),
        .fetch_xcpt_code(ifu_fetch_xcpt_code),
        .fetch_valid(ifu_fetch_valid),
        .fetch_insts(ifu_fetch_insts),
        .fetch_pc(ifu_fetch_pc),
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
        .flush(core_redirect_valid),
        .enq_valid(ifu_fetch_valid),
        .enq_pcs(ifu_fetch_pc),
        .enq_insts(ifu_fetch_insts),
        .enq_xcpt_valid(ifu_fetch_xcpt_valid),
        .enq_xcpt_code(ifu_fetch_xcpt_code),
        .enq_ftq_idx(ifu_fetch_ftq_idx),
        .enq_predicted_taken(ifu_fetch_predicted_taken),
        .enq_predicted_npc(ifu_fetch_predicted_npc),
        .deq_ftq_idx(buffer_deq_ftq_idx),
        .deq_predicted_taken(buffer_deq_predicted_taken),
        .deq_predicted_npc(buffer_deq_predicted_npc),
        .deq_xcpt_valid(buffer_deq_xcpt_valid),
        .deq_xcpt_code(buffer_deq_xcpt_code),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(buffer_deq_valid),
        .deq_pcs(buffer_deq_pc),
        .deq_insts(buffer_deq_insts),
        .deq_ready(buffer_deq_ready)
    );

    assign buffer_deq_ready = core_fe_ready;

    loom_core #(
        .RESET_PC(RESET_PC),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .FETCH_WIDTH(2),
        .CORE_WIDTH(2)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(buffer_deq_valid),
        .fe_insts(buffer_deq_insts),
        .fe_pcs(buffer_deq_pc),
        .fe_ftq_idx(buffer_deq_ftq_idx),
        .fe_predicted_taken(buffer_deq_predicted_taken),
        .fe_predicted_npc(buffer_deq_predicted_npc),
        .fe_xcpt_valid(buffer_deq_xcpt_valid),
        .fe_xcpt_code(buffer_deq_xcpt_code),
        .fe_ready(core_fe_ready),
        .fe_redirect_valid(core_redirect_valid),
        .fe_redirect_pc(core_redirect_pc),
        .fe_flush_valid(core_frontend_flush_valid),
        .fe_redirect_ftq_idx(core_redirect_ftq_idx),
        .fe_redirect_taken(core_redirect_taken),
        .fe_redirect_pc_lob(core_redirect_pc_lob),
        .fe_redirect_cfi_type(core_redirect_cfi_type),
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
        .dmem_req_uop,
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
        .ipi_irq,
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty(),
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
        .dis_fire_dbg(),
        .dis_unique_dbg(),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    always_comb begin
        commit_valid = core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_ldst = '0;
        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] = core_commit.uops[lane].pc[31:0];
            commit_inst[lane] = core_commit.uops[lane].inst;
            commit_ldst[lane] = core_commit.uops[lane].ldst;
        end
    end

    assign exception_valid = core.rob_com_xcpt_w.valid;
    assign exception_pc = core.rob_com_xcpt_w.pc;
    assign exception_inst = core.rob_com_xcpt_w.inst;
    assign exception_cause = core.rob_com_xcpt_w.cause;
    assign exception_badvaddr = core.rob_com_xcpt_w.badvaddr;
endmodule
