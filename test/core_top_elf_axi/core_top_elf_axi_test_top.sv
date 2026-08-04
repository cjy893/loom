import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_top_elf_axi_test_top #(
    parameter bit ENABLE_SINGLE_DEBUG_COMMIT = 1'b1
) (
    input  logic        clk,
    input  logic        rst_n,

    output logic [3:0]  arid,
    output logic [31:0] araddr,
    output logic [3:0]  arlen,
    output logic [2:0]  arsize,
    output logic [1:0]  arburst,
    output logic [1:0]  arlock,
    output logic [3:0]  arcache,
    output logic [2:0]  arprot,
    output logic        arvalid,
    input  logic        arready,

    input  logic [3:0]  rid,
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rlast,
    input  logic        rvalid,
    output logic        rready,

    output logic [3:0]  awid,
    output logic [31:0] awaddr,
    output logic [3:0]  awlen,
    output logic [2:0]  awsize,
    output logic [1:0]  awburst,
    output logic [1:0]  awlock,
    output logic [3:0]  awcache,
    output logic [2:0]  awprot,
    output logic        awvalid,
    input  logic        awready,

    output logic [3:0]  wid,
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wlast,
    output logic        wvalid,
    input  logic        wready,

    input  logic [3:0]  bid,
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready,

    output logic [1:0]                  commit_valid,
    output logic [1:0][31:0]            commit_pc,
    output logic [1:0][31:0]            commit_inst,
    output logic [1:0][4:0]             commit_ldst,
    output logic [1:0][ROB_ADDR_SZ-1:0] commit_rob_idx,

    output logic        redirect_valid,
    output logic [31:0] redirect_pc,
    output logic        exception_valid,
    output logic [31:0] exception_pc,
    output logic [31:0] exception_inst,
    output logic [31:0] exception_cause,
    output logic [31:0] exception_badvaddr,

    output logic        rob_empty,
    output logic [4:0]  fetch_buffer_count,
    output logic        core_fe_ready,
    output logic        core_dmem_req_valid,
    output logic        core_dmem_req_ready,
    output logic        core_dmem_req_is_store,
    output logic [1:0]  axi_read_state,
    output logic [1:0]  axi_write_state,
    output logic        dmem_outstanding,

    output logic [2:0] ifu_state,
    output logic [1:0] immu_state,
    output logic [2:0] icache_state,
    output logic [1:0] dmmu_state,
    output logic [3:0] dcache_state,
    output logic       ifu_packet_fire,
    output logic       ifu_xlate_req_valid,
    output logic       ifu_xlate_req_ready,
    output logic       icache_req_valid,
    output logic       icache_req_ready,
    output logic       icache_lookup_cacheable,
    output logic       icache_lookup_hit,
    output logic       lsu_xlate_req_valid,
    output logic       lsu_xlate_req_ready,
    output logic       dmmu_req_valid,
    output logic       dmmu_req_ready,
    output logic       dcache_lookup_cacheable,
    output logic       dcache_lookup_hit,
    output logic       mem_issue_valid,
    output logic       load_wb_valid,
    output logic       ld_query_valid,
    output logic       ld_query_block,
    output logic       ld_query_forward_valid,
    output logic       ld_query_unresolved_older,
    output logic [4:0] ld_query_overlap_count,
    output logic       ldq_empty,
    output logic       stq_empty,
    output logic [1:0] rename_stalls,
    output logic [1:0] dispatch_valid,
    output logic [1:0] dispatch_fire,
    output logic [1:0] rename_alloc_need,
    output logic [1:0] rename_free_count,
    output logic       dispatch_enable,
    output logic       unique_dispatch_ready,
    output logic       dispatch_flush_block,
    output logic       dispatch_core_idle,
    output logic       dispatch_branch_block,
    output logic [1:0] dispatch_unique,
    output logic [1:0] dispatch_exception,
    output logic [7:0] dispatch_iq_type_detail,
    output logic [19:0] dispatch_fu_code_detail,
    output logic [63:0] dispatch_inst_detail,
    output logic [1:0] dispatch_lsu_ready,
    output logic [1:0] dispatch_uses_ldq,
    output logic [1:0] dispatch_uses_stq,
    output logic [1:0] alu_iq_ready_detail,
    output logic [1:0] mem_iq_ready_detail,
    output logic [1:0] unq_iq_ready_detail,
    output logic [3:0] unq_state,
    output logic       unq_issue_valid,
    output logic       unq_exec_ready,
    output logic       branch_alloc_ready,
    output logic       rob_ready,
    output logic       alu_iq_full,
    output logic       mem_iq_full,
    output logic       unq_iq_full,
    output logic [MAX_BR_COUNT-1:0] branch_resolve_mask,
    output logic [ALU_WIDTH-1:0]    branch_resolve_valid_detail,
    output logic [ALU_WIDTH*32-1:0] branch_resolve_pc_detail,
    output logic [ALU_WIDTH*3-1:0]  branch_resolve_cfi_type_detail,
    output logic [ALU_WIDTH-1:0]    branch_resolve_predicted_taken_detail,
    output logic [ALU_WIDTH-1:0]    branch_resolve_actual_taken_detail,
    output logic [ALU_WIDTH-1:0]    branch_resolve_mispredict_detail,
    output logic                    branch_mispredict,
    output logic [31:0]             branch_mispredict_pc,
    output logic [2:0]              branch_mispredict_cfi_type,
    output logic                    branch_mispredict_predicted_taken,
    output logic                    branch_mispredict_actual_taken,
    output logic                    frontend_flush
);
    core_top #(
        .ENABLE_SINGLE_DEBUG_COMMIT(ENABLE_SINGLE_DEBUG_COMMIT)
    ) dut (
        .aclk(clk),
        .aresetn(rst_n),
        .intrpt('0),

        .arid,
        .araddr,
        .arlen,
        .arsize,
        .arburst,
        .arlock,
        .arcache,
        .arprot,
        .arvalid,
        .arready,

        .rid,
        .rdata,
        .rresp,
        .rlast,
        .rvalid,
        .rready,

        .awid,
        .awaddr,
        .awlen,
        .awsize,
        .awburst,
        .awlock,
        .awcache,
        .awprot,
        .awvalid,
        .awready,

        .wid,
        .wdata,
        .wstrb,
        .wlast,
        .wvalid,
        .wready,

        .bid,
        .bresp,
        .bvalid,
        .bready,

        .break_point(1'b0),
        .infor_flag(1'b0),
        .reg_num('0),
        .ws_valid(),
        .rf_rdata(),
        .debug0_wb_pc(),
        .debug0_wb_rf_wen(),
        .debug0_wb_rf_wnum(),
        .debug0_wb_rf_wdata()
    );

    always_comb begin
        commit_valid = dut.core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_ldst = '0;
        commit_rob_idx = '0;

        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] = dut.core_commit.uops[lane].pc[31:0];
            commit_inst[lane] = dut.core_commit.uops[lane].inst;
            commit_ldst[lane] = dut.core_commit.uops[lane].ldst;
            commit_rob_idx[lane] =
                dut.core_commit.uops[lane].rob_idx;
        end
    end

    assign redirect_valid = dut.core_redirect_valid;
    assign redirect_pc = dut.core_redirect_pc;
    assign exception_valid = dut.core_inst.rob_com_xcpt_w.valid;
    assign exception_pc = dut.core_inst.rob_com_xcpt_w.pc;
    assign exception_inst = dut.core_inst.rob_com_xcpt_w.inst;
    assign exception_cause = dut.core_inst.rob_com_xcpt_w.cause;
    assign exception_badvaddr =
        dut.core_inst.rob_com_xcpt_w.badvaddr;

    assign rob_empty = dut.core_inst.rob_empty;
    assign fetch_buffer_count = dut.fetch_buffer_inst.count_q;
    assign core_fe_ready = dut.buffer_deq_ready;
    assign core_dmem_req_valid = dut.dmem_req_valid;
    assign core_dmem_req_ready = dut.dmem_req_ready;
    assign core_dmem_req_is_store = dut.dmem_req_is_store;
    assign axi_read_state = dut.read_state_q;
    assign axi_write_state = dut.write_state_q;
    assign dmem_outstanding =
        rst_n && !dut.dmem_req_ready && !dut.dmem_resp_valid;

    assign ifu_state = dut.ifu_inst.state_q;
    assign immu_state = dut.core_inst.immu_inst.state;
    assign icache_state = dut.icache_inst.state_q;
    assign dmmu_state = dut.core_inst.dmmu_inst.state;
    assign dcache_state = dut.dcache_inst.state_q;

    assign ifu_packet_fire = dut.ifu_inst.packet_fire;
    assign ifu_xlate_req_valid = dut.ifu_xlate_req_valid;
    assign ifu_xlate_req_ready = dut.ifu_xlate_req_ready;
    assign icache_req_valid = dut.imem_req_valid;
    assign icache_req_ready = dut.imem_req_ready;
    assign icache_lookup_cacheable =
        dut.icache_inst.state_q == 3'd1 &&
        dut.icache_inst.req_cacheable_q;
    assign icache_lookup_hit =
        icache_lookup_cacheable && dut.icache_inst.lookup_hit;

    assign lsu_xlate_req_valid = dut.core_inst.lsu_dmmu_req_valid;
    assign lsu_xlate_req_ready = dut.core_inst.lsu_dmmu_req_ready;
    assign dmmu_req_valid = dut.core_inst.dmmu_req_valid;
    assign dmmu_req_ready = dut.core_inst.dmmu_req_ready;
    assign dcache_lookup_cacheable =
        dut.dcache_inst.state_q == 4'd1 &&
        dut.dcache_inst.req_cacheable_q;
    assign dcache_lookup_hit =
        dcache_lookup_cacheable && dut.dcache_inst.lookup_hit;

    assign mem_issue_valid = dut.core_inst.mem_iss_valid[0];
    assign load_wb_valid = dut.core_inst.lsu_load_wb_valid;
    assign ld_query_valid = dut.core_inst.lsu_inst.ld_query_valid;
    assign ld_query_block = dut.core_inst.lsu_inst.ld_query_block;
    assign ld_query_forward_valid =
        dut.core_inst.lsu_inst.ld_query_forward_valid;
    assign ld_query_unresolved_older =
        dut.core_inst.lsu_inst.store_queue_i.query_unresolved_older;
    assign ld_query_overlap_count =
        dut.core_inst.lsu_inst.store_queue_i.query_overlap_count;
    assign ldq_empty = dut.core_inst.lsu_ldq_empty;
    assign stq_empty = dut.core_inst.lsu_stq_empty;

    assign rename_stalls = dut.core_inst.rn_stalls;
    assign dispatch_valid = dut.core_inst.rn2_mask;
    assign dispatch_fire = dut.core_inst.dis_fire;
    assign rename_alloc_need = dut.core_inst.rename.alloc_need;
    assign rename_free_count = dut.core_inst.rename.fl_free_count;
    assign dispatch_enable = dut.core_inst.dispatch_enable;
    assign unique_dispatch_ready = dut.core_inst.unique_dispatch_ready;
    assign dispatch_flush_block = dut.core_inst.rob_flush_frontend_w;
    assign dispatch_core_idle = dut.core_inst.core_idle_q;
    assign dispatch_branch_block =
        (|dut.core_inst.brupdate_w.b1.mispredict_mask) ||
        dut.core_inst.brupdate_w.b2.mispredict;
    assign dispatch_unique = dut.core_inst.rn2_unique_q;
    assign dispatch_exception = dut.core_inst.rn2_exception_q;
    assign dispatch_lsu_ready = dut.core_inst.lsu_dis_ready;
    assign dispatch_uses_ldq = dut.core_inst.rn2_uses_ldq_q;
    assign dispatch_uses_stq = dut.core_inst.rn2_uses_stq_q;
    assign alu_iq_ready_detail = dut.core_inst.alu_iq_dis_ready;
    assign mem_iq_ready_detail = dut.core_inst.mem_iq_dis_ready;
    assign unq_iq_ready_detail = dut.core_inst.unq_iq_dis_ready;
    assign unq_state = dut.core_inst.unq_inst.state;
    assign unq_issue_valid = dut.core_inst.unq_iss_valid;
    assign unq_exec_ready = dut.core_inst.unq_exec_ready;
    always_comb begin
        dispatch_iq_type_detail = '0;
        dispatch_fu_code_detail = '0;
        dispatch_inst_detail = '0;
        for (int lane = 0; lane < 2; lane++) begin
            dispatch_iq_type_detail[lane * 4 +: 4] =
                dut.core_inst.rn2_iq_type_q[lane];
            dispatch_fu_code_detail[lane * 10 +: 10] =
                dut.core_inst.rn2_uops_raw[lane].fu_code;
            dispatch_inst_detail[lane * 32 +: 32] =
                dut.core_inst.rn2_uops_raw[lane].inst;
        end
    end
    assign branch_alloc_ready = dut.core_inst.branch_alloc_ready;
    assign rob_ready = dut.core_inst.rob_ready_w;
    assign alu_iq_full = !(|dut.core_inst.alu_iq_dis_ready);
    assign mem_iq_full = !(|dut.core_inst.mem_iq_dis_ready);
    assign unq_iq_full = !(|dut.core_inst.unq_iq_dis_ready);
    assign branch_resolve_mask =
        dut.core_inst.brupdate_w.b1.resolve_mask;
    always_comb begin
        branch_resolve_valid_detail = dut.core_inst.alu_brinfo_valid_q;
        branch_resolve_pc_detail = '0;
        branch_resolve_cfi_type_detail = '0;
        branch_resolve_predicted_taken_detail = '0;
        branch_resolve_actual_taken_detail = '0;
        branch_resolve_mispredict_detail = '0;

        for (int port = 0; port < ALU_WIDTH; port++) begin
            branch_resolve_pc_detail[port * 32 +: 32] =
                dut.core_inst.alu_brinfo_q[port].uop.pc;
            branch_resolve_cfi_type_detail[port * 3 +: 3] =
                dut.core_inst.alu_brinfo_q[port].cfi_type;
            branch_resolve_predicted_taken_detail[port] =
                dut.core_inst.alu_brinfo_q[port].uop.taken;
            branch_resolve_actual_taken_detail[port] =
                dut.core_inst.alu_brinfo_q[port].taken;
            branch_resolve_mispredict_detail[port] =
                dut.core_inst.alu_brinfo_q[port].mispredict;
        end
    end
    assign branch_mispredict =
        dut.core_inst.brupdate_w.b2.mispredict;
    assign branch_mispredict_pc =
        dut.core_inst.brupdate_w.b2.uop.pc;
    assign branch_mispredict_cfi_type =
        dut.core_inst.brupdate_w.b2.cfi_type;
    assign branch_mispredict_predicted_taken =
        dut.core_inst.brupdate_w.b2.uop.taken;
    assign branch_mispredict_actual_taken =
        dut.core_inst.brupdate_w.b2.taken;
    assign frontend_flush = dut.core_frontend_flush_valid;
endmodule
