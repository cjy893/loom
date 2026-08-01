import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_elf_test_top (
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
    output logic [31:0]                  dmem_req_pc,
    output logic [31:0]                  dmem_req_inst,
    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic                         rob_empty,
    output logic                         ldq_empty,
    output logic                         stq_empty,
    output logic [3:0]                   fetch_buffer_count,
    output logic                         core_fe_ready,
    output logic [1:0]                   core_dis_fire,
    output logic [1:0]                   core_ren_stalls,
    output logic [2:0]                   core_alu_issue,
    output logic                         core_mem_issue,
    output logic [5:0]                   core_rob_wb,
    output logic [4:0]                   mem_iq_valid_count,
    output logic [4:0]                   mem_iq_ready_count,
    output logic [31:0]                  mem_iq_oldest_pc,
    output logic [2:0]                   mem_iq_oldest_busy,
    output logic [31:0]                  mem_iq_second_pc,
    output logic [2:0]                   mem_iq_second_busy,
    output logic [5:0]                   mem_iq_oldest_psrc1,
    output logic [5:0]                   mem_iq_oldest_psrc2,
    output logic [5:0]                   mem_iq_oldest_pdst,
    output logic [5:0]                   mem_iq_second_psrc1,
    output logic [5:0]                   mem_iq_second_psrc2,
    output logic [5:0]                   mem_iq_second_pdst,
    output logic                         mem_iq_oldest_bt_busy,
    output logic                         mem_iq_second_bt_busy,
    output logic [4:0]                   ldq_valid_count,
    output logic [4:0]                   stq_valid_count,
    output logic [4:0]                   stq_commit_count,
    output logic [4:0]                   ldq_dfcc_state,
    output logic [4:0]                   ldq_dfd0_state,
    output logic [4:0]                   ldq_dfd4_state,
    output logic [4:0]                   ldq_dfd8_state,
    output logic [5:0]                   ldq_dfcc_pdst,
    output logic [5:0]                   ldq_dfd0_pdst,
    output logic [5:0]                   ldq_dfd4_pdst,
    output logic [5:0]                   ldq_dfd8_pdst,
    output logic [5:0]                   core_wakeup_valid,
    output logic [5:0][5:0]              core_wakeup_pdst,
    output logic                         ld_query_valid_dbg,
    output logic                         ld_query_block_dbg,
    output logic                         ld_query_forward_dbg,
    output logic                         ld_query_unresolved_dbg,
    output logic [4:0]                   ld_query_overlap_count_dbg,
    output logic [31:0]                  ld_query_pc_dbg,
    output logic [31:0]                  ld_query_addr_dbg,
    output logic [ROB_ADDR_SZ-1:0]       ld_query_rob_idx_dbg,
    output logic [3:0]                   ld_query_slot_dbg,
    output logic [31:0]                  stq_first_pc,
    output logic [6:0]                   stq_first_state,
    output logic [ROB_ADDR_SZ-1:0]       stq_first_rob_idx,
    output logic [31:0]                  stq_second_pc,
    output logic [6:0]                   stq_second_state,
    output logic [ROB_ADDR_SZ-1:0]       stq_second_rob_idx,
    output logic [31:0]                  stq_third_pc,
    output logic [6:0]                   stq_third_state,
    output logic [ROB_ADDR_SZ-1:0]       stq_third_rob_idx,
    output logic [31:0]                  stq_fourth_pc,
    output logic [6:0]                   stq_fourth_state,
    output logic [ROB_ADDR_SZ-1:0]       stq_fourth_rob_idx,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][4:0]              commit_ldst,
    output logic [1:0][31:0]             commit_wdata,
    output logic [1:0][ROB_ADDR_SZ-1:0]  commit_rob_idx,

    output logic                         exception_valid,
    output logic [31:0]                  exception_pc,
    output logic [31:0]                  exception_inst,
    output logic [31:0]                  exception_cause,
    output logic [31:0]                  exception_badvaddr,

    output logic                         csr_req_valid,
    output logic [13:0]                  csr_addr,
    output logic [1:0]                   csr_cmd
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    logic [3:0] ifu_fetch_valid;
    logic [3:0][31:0] ifu_fetch_pcs;
    logic [3:0][31:0] ifu_fetch_insts;
    logic [3:0] ifu_fetch_xcpt_valid;
    logic [3:0][5:0] ifu_fetch_xcpt_code;
    logic [31:0] ifu_xlate_req_vaddr;
    logic ifu_fetch_ready;

    logic [1:0] buffer_deq_valid;
    logic [1:0][31:0] buffer_deq_pcs;
    logic [1:0][31:0] buffer_deq_insts;
    logic [1:0] buffer_deq_xcpt_valid;
    logic [1:0][5:0] buffer_deq_xcpt_code;
    logic buffer_deq_ready;

    logic [1:0] core_fe_valid;
    logic [1:0][31:0] core_fe_pcs;
    logic [1:0][31:0] core_fe_insts;
    logic [1:0] commit_valid_int;
    logic [1:0] core_ren_stalls_int;
    logic [2:0] core_alu_issue_int;
    logic [5:0] core_rob_wb_int;
    logic [31:0] csr_wdata;
    logic [31:0] csr_wmask;
    uop_t dmem_req_uop;
    commit_signal_t core_commit;

    assign core_fe_valid = buffer_deq_valid;
    assign core_fe_pcs = buffer_deq_pcs;
    assign core_fe_insts = buffer_deq_insts;
    assign buffer_deq_ready = core_fe_ready;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(RESET_PC)
    ) frontend (
        .clk,
        .rst_n,
        .redirect_valid,
        .redirect_pc,
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
        .enq_pcs(ifu_fetch_pcs),
        .enq_insts(ifu_fetch_insts),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(buffer_deq_valid),
        .deq_xcpt_valid(buffer_deq_xcpt_valid),
        .deq_xcpt_code(buffer_deq_xcpt_code),
        .deq_pcs(buffer_deq_pcs),
        .deq_insts(buffer_deq_insts),
        .deq_ready(buffer_deq_ready)
    );

    loom_core #(
        .RESET_PC(RESET_PC),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .FETCH_WIDTH(2),
        .CORE_WIDTH(2)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(core_fe_valid),
        .fe_insts(core_fe_insts),
        .fe_pcs(core_fe_pcs),
        .fe_xcpt_valid(buffer_deq_xcpt_valid),
        .fe_xcpt_code(buffer_deq_xcpt_code),
        .fe_ready(core_fe_ready),
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
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
        .hw_irq('0),
        .ipi_irq(1'b0),
        .csr_req_valid,
        .csr_addr,
        .csr_cmd,
        .csr_wdata,
        .csr_wmask,
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
        .ren_stalls_dbg(core_ren_stalls_int),
        .rn2_mask_dbg(),
        .dis_fire_dbg(core_dis_fire),
        .dis_unique_dbg(),
        .alu_iss_valid_dbg(core_alu_issue_int),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg(core_rob_wb_int)
    );

    assign dmem_req_pc = dmem_req_uop.pc[31:0];
    assign dmem_req_inst = dmem_req_uop.inst;
    assign ldq_empty = core.lsu_ldq_empty;
    assign stq_empty = core.lsu_stq_empty;
    assign fetch_buffer_count = fetch_buffer.count_q;
    assign core_ren_stalls = core_ren_stalls_int;
    assign core_alu_issue = core_alu_issue_int;
    assign core_mem_issue = core.mem_iss_valid[0];
    assign core_rob_wb = core_rob_wb_int;
    assign core_wakeup_valid = core.wakeup_valid_w;
    assign core_wakeup_pdst = core.wakeup_pdst_w;
    assign ld_query_valid_dbg = core.lsu_inst.ld_query_valid;
    assign ld_query_block_dbg = core.lsu_inst.ld_query_block;
    assign ld_query_forward_dbg =
        core.lsu_inst.ld_query_forward_valid;
    assign ld_query_unresolved_dbg =
        core.lsu_inst.store_queue_i.query_unresolved_older;
    assign ld_query_overlap_count_dbg =
        core.lsu_inst.store_queue_i.query_overlap_count;
    assign ld_query_pc_dbg =
        core.lsu_inst.load_queue_i.req_candidate_uop.pc[31:0];
    assign ld_query_addr_dbg = core.lsu_inst.ld_query_addr;
    assign ld_query_rob_idx_dbg =
        core.lsu_inst.load_queue_i.req_candidate_uop.rob_idx;
    assign ld_query_slot_dbg =
        core.lsu_inst.load_queue_i.req_candidate_slot;

    always_comb begin
        logic found_first_mem_uop;
        logic found_second_mem_uop;
        int unsigned stq_observed;

        mem_iq_valid_count = '0;
        mem_iq_ready_count = '0;
        mem_iq_oldest_pc = '0;
        mem_iq_oldest_busy = '0;
        mem_iq_second_pc = '0;
        mem_iq_second_busy = '0;
        mem_iq_oldest_psrc1 = '0;
        mem_iq_oldest_psrc2 = '0;
        mem_iq_oldest_pdst = '0;
        mem_iq_second_psrc1 = '0;
        mem_iq_second_psrc2 = '0;
        mem_iq_second_pdst = '0;
        mem_iq_oldest_bt_busy = 1'b0;
        mem_iq_second_bt_busy = 1'b0;
        ldq_valid_count = '0;
        stq_valid_count = '0;
        ldq_dfcc_state = '0;
        ldq_dfd0_state = '0;
        ldq_dfd4_state = '0;
        ldq_dfd8_state = '0;
        ldq_dfcc_pdst = '0;
        ldq_dfd0_pdst = '0;
        ldq_dfd4_pdst = '0;
        ldq_dfd8_pdst = '0;
        stq_first_pc = '0;
        stq_first_state = '0;
        stq_first_rob_idx = '0;
        stq_second_pc = '0;
        stq_second_state = '0;
        stq_second_rob_idx = '0;
        stq_third_pc = '0;
        stq_third_state = '0;
        stq_third_rob_idx = '0;
        stq_fourth_pc = '0;
        stq_fourth_state = '0;
        stq_fourth_rob_idx = '0;
        found_first_mem_uop = 1'b0;
        found_second_mem_uop = 1'b0;
        stq_observed = 0;

        for (int entry = 0; entry < 16; entry++) begin
            if (core.mem_iq.slot_valid[entry]) begin
                mem_iq_valid_count++;
                if (core.mem_iq.slot_ready[entry])
                    mem_iq_ready_count++;
                if (!found_first_mem_uop) begin
                    found_first_mem_uop = 1'b1;
                    mem_iq_oldest_pc =
                        core.mem_iq.slot_uop[entry].pc[31:0];
                    mem_iq_oldest_busy = {
                        core.mem_iq.slot_uop[entry].psrc3_busy,
                        core.mem_iq.slot_uop[entry].psrc2_busy,
                        core.mem_iq.slot_uop[entry].psrc1_busy
                    };
                    mem_iq_oldest_psrc1 =
                        core.mem_iq.slot_uop[entry].psrc1;
                    mem_iq_oldest_psrc2 =
                        core.mem_iq.slot_uop[entry].psrc2;
                    mem_iq_oldest_pdst =
                        core.mem_iq.slot_uop[entry].pdst;
                    mem_iq_oldest_bt_busy =
                        core.rename.busytable.busy_vec[
                            core.mem_iq.slot_uop[entry].psrc1
                        ];
                end else if (!found_second_mem_uop) begin
                    found_second_mem_uop = 1'b1;
                    mem_iq_second_pc =
                        core.mem_iq.slot_uop[entry].pc[31:0];
                    mem_iq_second_busy = {
                        core.mem_iq.slot_uop[entry].psrc3_busy,
                        core.mem_iq.slot_uop[entry].psrc2_busy,
                        core.mem_iq.slot_uop[entry].psrc1_busy
                    };
                    mem_iq_second_psrc1 =
                        core.mem_iq.slot_uop[entry].psrc1;
                    mem_iq_second_psrc2 =
                        core.mem_iq.slot_uop[entry].psrc2;
                    mem_iq_second_pdst =
                        core.mem_iq.slot_uop[entry].pdst;
                    mem_iq_second_bt_busy =
                        core.rename.busytable.busy_vec[
                            core.mem_iq.slot_uop[entry].psrc1
                        ];
                end
            end

            if (core.lsu_inst.load_queue_i.entries[entry].valid) begin
                ldq_valid_count++;
                case (core.lsu_inst.load_queue_i.entries[entry].uop.pc[31:0])
                    32'h1c06_dfcc: begin
                        ldq_dfcc_state = {
                            core.lsu_inst.load_queue_i.entries[entry].valid,
                            core.lsu_inst.load_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.load_queue_i.entries[entry].requested,
                            core.lsu_inst.load_queue_i.entries[entry].completed,
                            core.lsu_inst.load_queue_i.entries[entry].forward_pending
                        };
                        ldq_dfcc_pdst =
                            core.lsu_inst.load_queue_i.entries[entry].uop.pdst;
                    end
                    32'h1c06_dfd0: begin
                        ldq_dfd0_state = {
                            core.lsu_inst.load_queue_i.entries[entry].valid,
                            core.lsu_inst.load_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.load_queue_i.entries[entry].requested,
                            core.lsu_inst.load_queue_i.entries[entry].completed,
                            core.lsu_inst.load_queue_i.entries[entry].forward_pending
                        };
                        ldq_dfd0_pdst =
                            core.lsu_inst.load_queue_i.entries[entry].uop.pdst;
                    end
                    32'h1c06_dfd4: begin
                        ldq_dfd4_state = {
                            core.lsu_inst.load_queue_i.entries[entry].valid,
                            core.lsu_inst.load_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.load_queue_i.entries[entry].requested,
                            core.lsu_inst.load_queue_i.entries[entry].completed,
                            core.lsu_inst.load_queue_i.entries[entry].forward_pending
                        };
                        ldq_dfd4_pdst =
                            core.lsu_inst.load_queue_i.entries[entry].uop.pdst;
                    end
                    32'h1c06_dfd8: begin
                        ldq_dfd8_state = {
                            core.lsu_inst.load_queue_i.entries[entry].valid,
                            core.lsu_inst.load_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.load_queue_i.entries[entry].requested,
                            core.lsu_inst.load_queue_i.entries[entry].completed,
                            core.lsu_inst.load_queue_i.entries[entry].forward_pending
                        };
                        ldq_dfd8_pdst =
                            core.lsu_inst.load_queue_i.entries[entry].uop.pdst;
                    end
                    default: ;
                endcase
            end
            if (core.lsu_inst.store_queue_i.entries[entry].valid) begin
                stq_valid_count++;
                case (stq_observed)
                    0: begin
                        stq_first_pc =
                            core.lsu_inst.store_queue_i.entries[entry].uop.pc[31:0];
                        stq_first_state = {
                            core.lsu_inst.store_queue_i.entries[entry].valid,
                            core.lsu_inst.store_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.store_queue_i.entries[entry].data_valid,
                            core.lsu_inst.store_queue_i.entries[entry].committed,
                            core.lsu_inst.store_queue_i.entries[entry].requested,
                            core.lsu_inst.store_queue_i.entries[entry].completed,
                            core.lsu_inst.store_queue_i.entries[entry].cleared
                        };
                        stq_first_rob_idx =
                            core.lsu_inst.store_queue_i.entries[entry].uop.rob_idx;
                    end
                    1: begin
                        stq_second_pc =
                            core.lsu_inst.store_queue_i.entries[entry].uop.pc[31:0];
                        stq_second_state = {
                            core.lsu_inst.store_queue_i.entries[entry].valid,
                            core.lsu_inst.store_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.store_queue_i.entries[entry].data_valid,
                            core.lsu_inst.store_queue_i.entries[entry].committed,
                            core.lsu_inst.store_queue_i.entries[entry].requested,
                            core.lsu_inst.store_queue_i.entries[entry].completed,
                            core.lsu_inst.store_queue_i.entries[entry].cleared
                        };
                        stq_second_rob_idx =
                            core.lsu_inst.store_queue_i.entries[entry].uop.rob_idx;
                    end
                    2: begin
                        stq_third_pc =
                            core.lsu_inst.store_queue_i.entries[entry].uop.pc[31:0];
                        stq_third_state = {
                            core.lsu_inst.store_queue_i.entries[entry].valid,
                            core.lsu_inst.store_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.store_queue_i.entries[entry].data_valid,
                            core.lsu_inst.store_queue_i.entries[entry].committed,
                            core.lsu_inst.store_queue_i.entries[entry].requested,
                            core.lsu_inst.store_queue_i.entries[entry].completed,
                            core.lsu_inst.store_queue_i.entries[entry].cleared
                        };
                        stq_third_rob_idx =
                            core.lsu_inst.store_queue_i.entries[entry].uop.rob_idx;
                    end
                    3: begin
                        stq_fourth_pc =
                            core.lsu_inst.store_queue_i.entries[entry].uop.pc[31:0];
                        stq_fourth_state = {
                            core.lsu_inst.store_queue_i.entries[entry].valid,
                            core.lsu_inst.store_queue_i.entries[entry].addr_valid,
                            core.lsu_inst.store_queue_i.entries[entry].data_valid,
                            core.lsu_inst.store_queue_i.entries[entry].committed,
                            core.lsu_inst.store_queue_i.entries[entry].requested,
                            core.lsu_inst.store_queue_i.entries[entry].completed,
                            core.lsu_inst.store_queue_i.entries[entry].cleared
                        };
                        stq_fourth_rob_idx =
                            core.lsu_inst.store_queue_i.entries[entry].uop.rob_idx;
                    end
                    default: ;
                endcase
                stq_observed++;
            end
        end
    end

    assign stq_commit_count =
        core.lsu_inst.store_queue_i.cq_count;

    always_comb begin
        commit_valid_int = core_commit.arch_valids;
        commit_valid = commit_valid_int;
        commit_pc = '0;
        commit_inst = '0;
        commit_ldst = '0;
        commit_wdata = '0;
        commit_rob_idx = '0;
        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] = core_commit.uops[lane].pc[31:0];
            commit_inst[lane] = core_commit.uops[lane].inst;
            commit_ldst[lane] = core_commit.uops[lane].ldst;
            commit_wdata[lane] = core_commit.debug_wdata[lane*32 +: 32];
            commit_rob_idx[lane] = core_commit.uops[lane].rob_idx;
        end
    end

    assign exception_valid = core.rob_com_xcpt_w.valid;
    assign exception_pc = core.rob_com_xcpt_w.pc;
    assign exception_inst = core.rob_com_xcpt_w.inst;
    assign exception_cause = core.rob_com_xcpt_w.cause;
    assign exception_badvaddr = core.rob_com_xcpt_w.badvaddr;
endmodule
