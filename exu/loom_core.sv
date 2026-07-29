import loom_params::*;
import loom_consts::*;
import loom_types::*;

module loom_core #(
    parameter logic [31:0] RESET_PC = 32'h1c00_0000,
    parameter bit USE_EXTERNAL_FE_PCS = 1'b0,
    parameter int CORE_WIDTH     = 2,
    parameter int FETCH_WIDTH    = 4,
    parameter int ALU_WIDTH      = 3,
    parameter int MEM_WIDTH      = 2,
    parameter int LSU_WIDTH      = 1,
    parameter int PHYSICAL_REGS  = 48,
    parameter int ROB_ENTRIES    = 64,
    parameter int ALU_IQ_ENTRIES = 16,
    parameter int MEM_IQ_ENTRIES = 16,
    parameter int UNQ_IQ_ENTRIES = 12,
    parameter int NUM_WAKEUPS    = 6,   // ALU(3)+LSU(1)+UNQ(1)+FP(0)+extra(1)=6
    parameter int NUM_REGF_READS = ALU_WIDTH * 2 + MEM_WIDTH * 2 + 2,
    parameter int NUM_REGF_WRITES= 5,   // ALU(3)+LSU(1)+UNQ(1)=5
    parameter logic [31:0] CORE_ID = 32'd0,
    parameter bit ENABLE_SINGLE_DEBUG_COMMIT = 1'b1
)(
    input  logic clk,
    input  logic rst_n,

    // ── 前端接口（raw 32 位指令） ──
    input  logic [FETCH_WIDTH-1:0]       fe_valid,
    input  logic [FETCH_WIDTH-1:0][31:0] fe_insts,
    input  logic [FETCH_WIDTH-1:0][31:0] fe_pcs,
    output logic                         fe_ready,
    output logic                         fe_redirect_valid,
    output logic [31:0]                  fe_redirect_pc,

    // ── 测试存储器接口 ──
    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic                         dmem_req_is_store,
    output logic [31:0]                  dmem_req_addr,
    output logic [31:0]                  dmem_req_data,
    output logic [3:0]                   dmem_req_mask,
    output logic [1:0]                   dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dmem_req_idx,
    output uop_t                         dmem_req_uop,
    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    // ── 中断输入 ──
    input  logic [7:0]                   hw_irq,
    input  logic                         ipi_irq,

    // ── CSR 请求调试输出 ──
    output logic                         csr_req_valid,
    output logic [13:0]                  csr_addr,
    output logic [1:0]                   csr_cmd,
    output logic [31:0]                  csr_wdata,
    output logic [31:0]                  csr_wmask,

    // ── 提交输出 ──
    output commit_signal_t               commit,

    // ── 调试 ──
    output logic                         rob_empty,
    output logic [31:0]                  debug_pc,
    output logic                         commit_valid_dbg,
    output logic [CORE_WIDTH-1:0]        commit_valids_dbg,
    output logic [4:0]                   commit_ldst_dbg,
    output logic                         rf_wr_en_dbg,
    output logic [$clog2(PHYSICAL_REGS)-1:0] rf_wr_pdst_dbg,
    output logic [4:0]                   rf_wr_ldst_dbg,
    output logic [31:0]                  rf_wr_data_dbg,
    output logic [31:0]                  alu_src1_dbg,
    output logic [31:0]                  alu_imm_dbg,
    output logic [25:0]                  alu_imm_packed_dbg,
    output logic [2:0]                   alu_imm_sel_dbg,
    output logic                         rob_ready_dbg,
    output logic [CORE_WIDTH-1:0]        ren_stalls_dbg,
    output logic [CORE_WIDTH-1:0]        rn2_mask_dbg,
    output logic [CORE_WIDTH-1:0]        dis_fire_dbg,
    output logic                         dis_unique_dbg,
    output logic [ALU_WIDTH-1:0]         alu_iss_valid_dbg,
    output logic [ALU_WIDTH-1:0]         alu_res_valid_dbg,
    output logic [NUM_WAKEUPS-1:0]       rob_wb_valid_dbg
);

    // ================================================================
    // Decode
    // ================================================================
    logic [CORE_WIDTH-1:0]       dec_fire;
    uop_t [CORE_WIDTH-1:0]       dec_uops_raw;
    uop_t [CORE_WIDTH-1:0]       dec_uops;
    logic [CORE_WIDTH-1:0]       dec_valids;
    logic                        dec_ready;
    logic [CORE_WIDTH-1:0]       dec_xcpts;
    logic [31:0]                 fetch_pc;
    logic [31:0]                 next_decode_pc_q;
    logic [31:0]                 next_decode_pc_d;
    logic [CORE_WIDTH-1:0][31:0] dec_pcs;
    logic [CORE_WIDTH-1:0]       dec_lane_eligible;
    logic                        dispatch_enable;
    logic                        unique_dispatch_ready;
    logic                        branch_alloc_ready;
    localparam int FE_IDX_WIDTH =
        (FETCH_WIDTH > 1) ? $clog2(FETCH_WIDTH) : 1;
    logic [CORE_WIDTH-1:0][31:0] dec_insts;
    logic [CORE_WIDTH-1:0][FE_IDX_WIDTH-1:0] dec_fe_idx;
    logic [FETCH_WIDTH-1:0]       fe_finished_q;
    logic [FETCH_WIDTH-1:0]       fe_completed;
    logic [$clog2(FETCH_WIDTH+1)-1:0] fe_count;
    logic                        fe_packet_done;
    logic                        fe_accept;

    logic [CORE_WIDTH-1:0] iq_mem_dis_valid;
    logic [CORE_WIDTH-1:0] iq_alu_dis_valid;
    logic [CORE_WIDTH-1:0] iq_unq_dis_valid;
    uop_t [CORE_WIDTH-1:0] iq_mem_dis_uop;
    uop_t [CORE_WIDTH-1:0] iq_alu_dis_uop;
    uop_t [CORE_WIDTH-1:0] iq_unq_dis_uop;
    logic [CORE_WIDTH-1:0] alu_iq_dis_ready;
    logic [CORE_WIDTH-1:0] mem_iq_dis_ready;
    logic [CORE_WIDTH-1:0] unq_iq_dis_ready;

    logic [CORE_WIDTH-1:0]       rn_stalls;
    logic [CORE_WIDTH-1:0]       rn2_mask;
    uop_t [CORE_WIDTH-1:0]       rn2_uops_raw;
    uop_t [CORE_WIDTH-1:0]       rn2_uops;
    logic [CORE_WIDTH-1:0]       dis_fire;
    logic [CORE_WIDTH-1:0][3:0]  rn2_iq_type_q;
    logic [CORE_WIDTH-1:0]       rn2_exception_q;
    logic [CORE_WIDTH-1:0]       rn2_unique_q;
    logic [CORE_WIDTH-1:0]       rn2_uses_ldq_q;
    logic [CORE_WIDTH-1:0]       rn2_uses_stq_q;
    logic [CORE_WIDTH-1:0][31:0] rn2_pc_q;

    logic                        csr_req_ready_w;
    logic                        csr_resp_valid_w;
    logic [ROB_ADDR_SZ-1:0]      csr_resp_rob_idx_w;
    logic [31:0]                 csr_rdata_w;
    logic                        csr_commit_valid_w;
    logic [ROB_ADDR_SZ-1:0]      csr_commit_rob_idx_w;
    logic                        csr_ertn_valid_w;
    logic                        csr_interrupt_pending_w;
    logic [12:0]                 csr_interrupt_pending_bits_w;
    logic [1:0]                  csr_current_plv_w;
    logic                        csr_current_ie_w;
    logic [31:0]                 csr_xcpt_target_w;
    logic [31:0]                 csr_ertn_target_w;
    logic [63:0]                 csr_counter_value_w;
    logic [31:0]                 csr_tid_value_w;

    // The frontend owns the packet until every valid lane has entered Decode.
    // Only a completion mask is retained here; instruction data stays at the
    // ready/valid boundary and can therefore flow through without an extra
    // buffering cycle.
    always_comb begin
        int dec_slot;
        int valid_offset;

        dec_valids = '0;
        dec_insts = '0;
        dec_pcs = '0;
        dec_fe_idx = '0;
        fe_count = '0;
        dec_slot = 0;
        valid_offset = 0;

        for (int w = 0; w < FETCH_WIDTH; w++) begin
            if (fe_valid[w]) begin
                fe_count += 1'b1;
                if (!fe_finished_q[w] && dec_slot < CORE_WIDTH) begin
                    dec_valids[dec_slot] = 1'b1;
                    dec_insts[dec_slot] = fe_insts[w];
                    dec_fe_idx[dec_slot] = FE_IDX_WIDTH'(w);
                    if (USE_EXTERNAL_FE_PCS)
                        dec_pcs[dec_slot] = fe_pcs[w];
                    else
                        dec_pcs[dec_slot] =
                            fetch_pc + (32'(valid_offset) << 2);
                    dec_slot++;
                end
                valid_offset++;
            end
        end
    end

    always_comb begin
        fe_completed = '0;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (dec_fire[w])
                fe_completed[dec_fe_idx[w]] = 1'b1;
        end
    end

    assign fe_packet_done =
        &(~fe_valid | fe_finished_q | fe_completed);
    assign fe_ready = fe_packet_done &&
                      !rob_flush_frontend_w &&
                      !brupdate_w.b2.mispredict;
    assign fe_accept = fe_ready && (|fe_valid);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fetch_pc <= RESET_PC;
            fe_finished_q <= '0;
        end else if (fe_redirect_valid) begin
            fe_finished_q <= '0;
            fetch_pc <= fe_redirect_pc;
        end else begin
            if (fe_ready)
                fe_finished_q <= '0;
            else
                fe_finished_q <= fe_finished_q | fe_completed;

            if (fe_accept) begin
                fetch_pc <= fetch_pc + (32'(fe_count) << 2);
            end
        end
    end

    always_comb begin
        next_decode_pc_d = next_decode_pc_q;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (dec_fire[w])
                next_decode_pc_d = dec_pcs[w] + 32'd4;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            next_decode_pc_q <= RESET_PC;
        else if (fe_redirect_valid)
            next_decode_pc_q <= fe_redirect_pc;
        else
            next_decode_pc_q <= next_decode_pc_d;
    end

    // Decode the oldest unfinished lanes from the current frontend packet.
    for (genvar w = 0; w < CORE_WIDTH; w++) begin : gen_decode
        decode decode_inst (
            .inst       (dec_insts[w]),
            .pc         (dec_pcs[w]),
            .status_prv (csr_current_plv_w),
            .uop        (dec_uops_raw[w])
        );
    end

    // A unique uop waits for an empty ROB and cannot share a dispatch cycle
    // with an older or younger valid lane.
    always_comb begin
        logic prior_valid;
        logic prior_unique;

        dec_lane_eligible = '0;
        prior_valid = 1'b0;
        prior_unique = 1'b0;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (dec_valids[w]) begin
                if (!prior_unique &&
                    (!dec_uops_raw[w].is_unique ||
                     (rob_empty && !prior_valid)))
                    dec_lane_eligible[w] = 1'b1;

                prior_valid |= dec_valids[w];
                prior_unique |= dec_uops_raw[w].is_unique;
            end
        end
    end

    always_comb begin
        branch_alloc_ready = 1'b1;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (dec_valids[w] && dec_lane_eligible[w] && bm_is_full[w])
                branch_alloc_ready = 1'b0;
        end
    end

    assign dec_fire  = dec_valids & dec_lane_eligible &
                       {CORE_WIDTH{dec_ready}};
    assign dec_ready = dis_ready_w && branch_alloc_ready;

    // ================================================================
    // Branch Mask Logic
    // ================================================================
    logic [CORE_WIDTH-1:0]               bm_is_branch;
    logic [CORE_WIDTH-1:0]               bm_will_fire;
    logic [CORE_WIDTH-1:0][$clog2(MAX_BR_COUNT)-1:0] bm_br_tag;
    logic [CORE_WIDTH-1:0][MAX_BR_COUNT-1:0]         bm_br_mask;
    logic [CORE_WIDTH-1:0]               bm_is_full;
    logic                                bm_flush;

    for (genvar w = 0; w < CORE_WIDTH; w++) begin : gen_branch_inputs
        assign bm_is_branch[w] = dec_valids[w] && dec_uops_raw[w].allocate_brtag;
        assign bm_will_fire[w] = dec_fire[w] && dec_uops_raw[w].allocate_brtag;
    end

    br_mask #(.CORE_WIDTH(CORE_WIDTH), .MAX_BR_COUNT(MAX_BR_COUNT)) brmask (
        .clk(clk), .rst_n(rst_n),
        .is_branch(bm_is_branch),
        .will_fire(bm_will_fire),
        .br_tag  (bm_br_tag),
        .br_mask (bm_br_mask),
        .is_full (bm_is_full),
        .brupdate(brupdate_w),
        .flush_pipeline(bm_flush)
    );

    // Unique uops must enter an empty ROB by themselves. Other resource
    // decisions are handled by the dispatcher in program order.
    always_comb begin
        int valid_count;
        logic has_unique;

        valid_count = 0;
        has_unique = 1'b0;

        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (rn2_mask[w]) begin
                valid_count++;
                has_unique |= rn2_unique_q[w];
            end
        end

        // Decode isolates a unique uop into its own Rename2 packet. Recheck
        // ROB emptiness here because an older Rename2 packet may have entered
        // the ROB after the unique uop passed the Decode-stage check.
        unique_dispatch_ready =
            !has_unique || (rob_empty && (valid_count == 1));
    end

    assign dispatch_enable =
        rob_ready_w &&
        !rob_flush_frontend_w &&
        !(|rn_stalls) &&
        !(|brupdate_w.b1.mispredict_mask) &&
        !brupdate_w.b2.mispredict &&
        unique_dispatch_ready;

    // ── 灌入 dec_uops ──
    always_comb begin
        dec_uops = dec_uops_raw;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            dec_uops[w].br_tag  = bm_br_tag[w];
            dec_uops[w].br_mask = bm_br_mask[w];
        end
    end

    // ================================================================
    // Rename Stage
    // ================================================================
    wakeup_t [NUM_WAKEUPS-1:0]   wakeups;
    logic                         dis_ready_w;

    // Keep the fields used by dispatch-ready calculation independent from the
    // physical rename result, which itself legitimately depends on dis_fire.
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rn2_iq_type_q <= '0;
            rn2_exception_q <= '0;
            rn2_unique_q <= '0;
            rn2_uses_ldq_q <= '0;
            rn2_uses_stq_q <= '0;
            rn2_pc_q <= '0;
        end else if(bm_flush || rob_rollback_w) begin
            rn2_iq_type_q <= '0;
            rn2_exception_q <= '0;
            rn2_unique_q <= '0;
            rn2_uses_ldq_q <= '0;
            rn2_uses_stq_q <= '0;
            rn2_pc_q <= '0;
        end else if (dis_ready_w) begin
            for (int w = 0; w < CORE_WIDTH; w++) begin
                rn2_iq_type_q[w] <= dec_uops[w].iq_type;
                rn2_exception_q[w] <= dec_uops[w].exception;
                rn2_unique_q[w] <= dec_uops[w].is_unique;
                rn2_uses_ldq_q[w] <= dec_uops[w].uses_ldq;
                rn2_uses_stq_q[w] <= dec_uops[w].uses_stq;
                rn2_pc_q[w] <= dec_uops[w].pc[31:0];
            end
        end else begin
            for (int w = 0; w < CORE_WIDTH; w++) begin
                if (dis_fire[w]) begin
                    rn2_iq_type_q[w] <= '0;
                    rn2_exception_q[w] <= 1'b0;
                    rn2_unique_q[w] <= 1'b0;
                    rn2_uses_ldq_q[w] <= 1'b0;
                    rn2_uses_stq_q[w] <= 1'b0;
                    rn2_pc_q[w] <= '0;
                end
            end
        end
    end

    rename_stage #(.CORE_WIDTH(CORE_WIDTH), .PHYSICAL_REGS(PHYSICAL_REGS),
                   .WAKEUP_PORTS(NUM_WAKEUPS), .IS_FP(0))
    rename (
        .clk(clk), .rst_n(rst_n),
        .dec_valids(dec_valids),
        .dec_fire  (dec_fire),
        .dec_uops  (dec_uops),
        .dis_fire  (dis_fire),
        .wakeups   (wakeups),
        .brupdate  (brupdate_w),
        .kill      (bm_flush),
        .commit_valids(commit.valids),
        .commit_uops  (commit.uops),
        .rollback  (rob_rollback_w),
        .dis_ready (dis_ready_w),
        .rn_stalls (rn_stalls),
        .rn2_mask  (rn2_mask),
        .rn2_uops  (rn2_uops_raw),
        .child_rebusys('0)
    );

    // Assign the ROB index before dispatch so every copy of the uop,
    // including the issue-queue copy, carries the same identity.
    always_comb begin
        int rob_offset;

        rn2_uops = rn2_uops_raw;
        rob_offset = 0;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            rn2_uops[w].starts_bsy = 1'b0;
            if (rn2_mask[w]) begin
                rn2_uops[w].rob_idx =
                    rob_tail_idx_w + ROB_ADDR_SZ'(rob_offset);
                rn2_uops[w].starts_bsy = !rn2_uops_raw[w].exception;
                rob_offset++;
            end
        end
    end

    // ================================================================
    // Dispatch
    // ================================================================
    uop_t [CORE_WIDTH-1:0] dispatch_in_uops;
    uop_t [CORE_WIDTH-1:0] dis_uops_w;
    logic [CORE_WIDTH-1:0] lsu_dis_ready;
    logic [CORE_WIDTH-1:0][LDQ_ADDR_SZ+1:0] lsu_dis_ldq_idx;
    logic [CORE_WIDTH-1:0][STQ_ADDR_SZ+1:0] lsu_dis_stq_idx;
    logic lsu_dispatch_ready;

    always_comb begin
        dispatch_in_uops = rn2_uops;

        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (rn2_uops[w].uses_ldq)
                dispatch_in_uops[w].ldq_idx = lsu_dis_ldq_idx[w];
            if (rn2_uops[w].uses_stq)
                dispatch_in_uops[w].stq_idx = lsu_dis_stq_idx[w];
        end
    end

    assign lsu_dispatch_ready = &(~rn2_mask | lsu_dis_ready);

    dispatch #(.CORE_WIDTH(CORE_WIDTH)) dispatch_inst (
        .rn2_mask,
        .rn2_uops(dispatch_in_uops),
        .dispatch_enable,
        .lane_ready(lsu_dis_ready),
        .rn2_iq_type(rn2_iq_type_q),
        .rn2_exception(rn2_exception_q),
        .iq_mem_ready(mem_iq_dis_ready),
        .iq_alu_ready(alu_iq_dis_ready),
        .iq_unq_ready(unq_iq_dis_ready),
        .iq_mem_dis_valid,
        .iq_mem_dis_uop,
        .iq_alu_dis_valid,
        .iq_alu_dis_uop,
        .iq_unq_dis_valid,
        .iq_unq_dis_uop,
        .dis_ready(dis_ready_w),
        .dis_fire,
        .dis_uops(dis_uops_w)
    );

    // ================================================================
    // Issue Units
    // ================================================================
    logic [ALU_WIDTH-1:0]                alu_iss_valid;
    uop_t [ALU_WIDTH-1:0]                alu_iss_uop;
    logic [MEM_WIDTH-1:0]                mem_iss_valid;
    uop_t [MEM_WIDTH-1:0]                mem_iss_uop;
    logic                                unq_iss_valid;
    uop_t                                unq_iss_uop;

    logic [ALU_WIDTH-1:0]                alu_slot_grant;
    logic [MEM_WIDTH-1:0]                mem_slot_grant;
    logic                                unq_slot_grant;

    logic [ALU_IQ_ENTRIES-1:0]           alu_slot_request;
    logic [MEM_IQ_ENTRIES-1:0]           mem_slot_request;
    logic [UNQ_IQ_ENTRIES-1:0]           unq_slot_request;

    // wakeup 信号
    logic [NUM_WAKEUPS-1:0]              wakeup_valid_w;
    logic [NUM_WAKEUPS-1:0][$clog2(PHYSICAL_REGS)-1:0] wakeup_pdst_w;

    // ALU IQ
    issue_unit_collapsing #(.NUM_ENTRIES(ALU_IQ_ENTRIES), .ISSUE_WIDTH(ALU_WIDTH),
                            .DISPATCH_WIDTH(CORE_WIDTH), .NUM_WAKEUP_PORTS(NUM_WAKEUPS),
                            .PREG_SZ($clog2(PHYSICAL_REGS)), .IS_MEM(0))
    alu_iq (.clk(clk), .rst_n(rst_n),
        .dis_valid(iq_alu_dis_valid), .dis_uop(iq_alu_dis_uop), .dis_ready(alu_iq_dis_ready),
        .iss_valid(alu_iss_valid), .iss_uop(alu_iss_uop),
        .wakeup_valid(wakeup_valid_w), .wakeup_pdst(wakeup_pdst_w),
        .brupdate(brupdate_w), .flush_pipeline(bm_flush), .squash_grant(1'b0));

    // MEM IQ
    issue_unit_collapsing #(.NUM_ENTRIES(MEM_IQ_ENTRIES), .ISSUE_WIDTH(1),
                            .DISPATCH_WIDTH(CORE_WIDTH), .NUM_WAKEUP_PORTS(NUM_WAKEUPS),
                            .PREG_SZ($clog2(PHYSICAL_REGS)), .IS_MEM(1))
    mem_iq (.clk(clk), .rst_n(rst_n),
        .dis_valid(iq_mem_dis_valid), .dis_uop(iq_mem_dis_uop), .dis_ready(mem_iq_dis_ready),
        .iss_valid(mem_iss_valid[0]), .iss_uop(mem_iss_uop[0]),
        .wakeup_valid(wakeup_valid_w), .wakeup_pdst(wakeup_pdst_w),
        .brupdate(brupdate_w), .flush_pipeline(bm_flush), .squash_grant(1'b0));
    for (genvar i = 1; i < MEM_WIDTH; i++) begin : gen_unused_mem_issue
        assign mem_iss_valid[i] = 1'b0;
        assign mem_iss_uop[i] = '0;
    end

    // UNQ IQ
    issue_unit_collapsing #(.NUM_ENTRIES(UNQ_IQ_ENTRIES), .ISSUE_WIDTH(1),
                            .DISPATCH_WIDTH(CORE_WIDTH), .NUM_WAKEUP_PORTS(NUM_WAKEUPS),
                            .PREG_SZ($clog2(PHYSICAL_REGS)), .IS_MEM(0))
    unq_iq (.clk(clk), .rst_n(rst_n),
        .dis_valid(iq_unq_dis_valid), .dis_uop(iq_unq_dis_uop), .dis_ready(unq_iq_dis_ready),
        .iss_valid(unq_iss_valid), .iss_uop(unq_iss_uop),
        .wakeup_valid(wakeup_valid_w), .wakeup_pdst(wakeup_pdst_w),
        .brupdate(brupdate_w), .flush_pipeline(bm_flush), .squash_grant(!unq_exec_ready));

    // ================================================================
    // 物理寄存器文件
    // ================================================================
    logic [NUM_REGF_READS-1:0]                         rf_read_en;
    logic [NUM_REGF_READS-1:0][$clog2(PHYSICAL_REGS)-1:0] rf_read_addr;
    logic [NUM_REGF_READS-1:0][31:0]                    rf_read_data;
    logic [NUM_REGF_WRITES-1:0]                          rf_write_en;
    logic [NUM_REGF_WRITES-1:0][$clog2(PHYSICAL_REGS)-1:0] rf_write_addr;
    logic [NUM_REGF_WRITES-1:0][31:0]                     rf_write_data;

    localparam int MEM_RF_BASE = ALU_WIDTH * 2;
    localparam int UNQ_RF_BASE = MEM_RF_BASE + MEM_WIDTH * 2;

    regfile #(.NUM_ENTRIES(PHYSICAL_REGS), .NUM_READ_PORTS(NUM_REGF_READS),
              .NUM_WRITE_PORTS(NUM_REGF_WRITES), .DATA_WIDTH(32))
    iregfile (.clk(clk),
        .read_en(rf_read_en), .read_addr(rf_read_addr), .read_data(rf_read_data),
        .write_en(rf_write_en), .write_addr(rf_write_addr), .write_data(rf_write_data));

    function automatic logic [31:0] expand_imm(input uop_t in_uop);
        expand_imm = '0;
        unique case (in_uop.imm_sel)
            IMM_I12:  expand_imm = {{20{in_uop.imm_packed[11]}}, in_uop.imm_packed[11:0]};
            IMM_U12:  expand_imm = {20'b0, in_uop.imm_packed[11:0]};
            IMM_I16_S2:  expand_imm = {{14{in_uop.imm_packed[15]}}, in_uop.imm_packed[15:0], 2'b00};
            IMM_U20_S12:  expand_imm = {in_uop.imm_packed[19:0], 12'b0};
            IMM_I26_S2:  expand_imm = {{4{in_uop.imm_packed[25]}}, in_uop.imm_packed[25:0], 2'b00};
            IMM_U5: expand_imm = {27'b0, in_uop.imm_packed[4:0]};
            IMM_U14: expand_imm = {18'b0, in_uop.imm_packed[13:0]};
            default: expand_imm = '0;
        endcase
    endfunction

    // Keep every bypass dependency explicit and declare the function before
    // generated execution-unit scopes call it. This avoids simulator-specific
    // implicit hierarchical names and stale function evaluation.
    localparam int NUM_BYPASS = ALU_WIDTH + 1 + 1;  // ALU + LSU + UNQ
    logic [NUM_BYPASS-1:0]                                  bp_valid;
    logic [NUM_BYPASS-1:0][$clog2(PHYSICAL_REGS)-1:0]       bp_pdst;
    logic [NUM_BYPASS-1:0][31:0]                            bp_data;

    function automatic logic [31:0] bypass_mux(
        input logic [$clog2(PHYSICAL_REGS)-1:0] prs,
        input logic [31:0] rf_data,
        input logic [NUM_BYPASS-1:0] valid,
        input logic [NUM_BYPASS-1:0][$clog2(PHYSICAL_REGS)-1:0] pdst,
        input logic [NUM_BYPASS-1:0][31:0] data
    );
        bypass_mux = rf_data;
        for (int j = NUM_BYPASS-1; j >= 0; j--) begin
            if (valid[j] && (pdst[j] == prs) && (prs != '0))
                bypass_mux = data[j];
        end
    endfunction

    // ================================================================
    // 执行单元——ALU
    // ================================================================
    exe_unit_resp_t [ALU_WIDTH-1:0]     alu_res;
    logic [ALU_WIDTH-1:0]               alu_res_valid;
    logic [ALU_WIDTH-1:0]               alu_wakeup_valid;
    wakeup_t [ALU_WIDTH-1:0]            alu_wakeup;
    logic [ALU_WIDTH-1:0]               alu_brinfo_valid;
    br_resolution_info_t [ALU_WIDTH-1:0] alu_brinfo;

    for (genvar i = 0; i < ALU_WIDTH; i++) begin : gen_alu
        // 读寄存器和 bypass 数据
        // psrc1 → rf port i*2+0, psrc2 → rf port i*2+1
        assign rf_read_en[i*2+0]   = alu_iss_valid[i];
        assign rf_read_addr[i*2+0] = alu_iss_uop[i].psrc1;
        assign rf_read_en[i*2+1]   = alu_iss_valid[i];
        assign rf_read_addr[i*2+1] = alu_iss_uop[i].psrc2;

        logic [31:0] alu_imm_data;
        assign alu_imm_data = expand_imm(alu_iss_uop[i]);

        alu alu_inst (.clk(clk), .rst_n(rst_n),
            .iss_valid(alu_iss_valid[i]), .iss_uop(alu_iss_uop[i]),
            .src1_data(bypass_mux(alu_iss_uop[i].psrc1, rf_read_data[i*2+0], bp_valid, bp_pdst, bp_data)),
            .src2_data(bypass_mux(alu_iss_uop[i].psrc2, rf_read_data[i*2+1], bp_valid, bp_pdst, bp_data)),
            .imm_data(alu_imm_data),
            .res_valid(alu_res_valid[i]), .res(alu_res[i]),
            .wakeup_valid(alu_wakeup_valid[i]), .wakeup(alu_wakeup[i]),
            .brinfo_valid(alu_brinfo_valid[i]), .brinfo(alu_brinfo[i]),
            .brupdate(brupdate_w), .kill(bm_flush));
    end

    // ================================================================
    // 执行单元——MEM
    // ================================================================
    logic [MEM_WIDTH-1:0]   mem_agen_valid;
    logic [MEM_WIDTH-1:0][31:0] mem_agen_addr;
    uop_t [MEM_WIDTH-1:0]   mem_agen_uop;
    logic [MEM_WIDTH-1:0]   mem_dgen_valid;
    logic [MEM_WIDTH-1:0][31:0] mem_dgen_data;
    uop_t [MEM_WIDTH-1:0]   mem_dgen_uop;
    exception_t [MEM_WIDTH-1:0] mem_xcpt;

    for (genvar i = 0; i < MEM_WIDTH; i++) begin : gen_mem
        logic [31:0] mem_src1_data;
        logic [31:0] mem_src2_data;
        logic [31:0] mem_imm_data;

        assign rf_read_en[MEM_RF_BASE + i*2]     = mem_iss_valid[i];
        assign rf_read_addr[MEM_RF_BASE + i*2]   = mem_iss_uop[i].psrc1;
        assign rf_read_en[MEM_RF_BASE + i*2 + 1] = mem_iss_valid[i];
        assign rf_read_addr[MEM_RF_BASE + i*2 + 1] = mem_iss_uop[i].psrc2;

        assign mem_src1_data = bypass_mux(mem_iss_uop[i].psrc1,
                                         rf_read_data[MEM_RF_BASE + i*2],
                                         bp_valid, bp_pdst, bp_data);
        assign mem_src2_data = bypass_mux(mem_iss_uop[i].psrc2,
                                         rf_read_data[MEM_RF_BASE + i*2 + 1],
                                         bp_valid, bp_pdst, bp_data);
        assign mem_imm_data = expand_imm(mem_iss_uop[i]);

        mem #(.HAS_AGEN(i == 0), .HAS_DGEN(i == 0)) mem_inst (
            .clk(clk), .rst_n(rst_n),
            .iss_valid(mem_iss_valid[i]), .iss_uop(mem_iss_uop[i]),
            .src1_data(mem_src1_data),
            .src2_data(mem_src2_data),
            .imm_data(mem_imm_data),
            .agen_valid(mem_agen_valid[i]), .agen_addr(mem_agen_addr[i]), .agen_uop(mem_agen_uop[i]),
            .dgen_valid(mem_dgen_valid[i]), .dgen_data(mem_dgen_data[i]), .dgen_uop(mem_dgen_uop[i]),
            .xcpt(mem_xcpt[i]),
            .brupdate(brupdate_w), .kill(bm_flush));
    end

    logic [CORE_WIDTH-1:0] lsu_clr_bsy_valid;
    logic [CORE_WIDTH-1:0][ROB_ADDR_SZ-1:0] lsu_clr_bsy_rob_idx;
    logic lsu_load_wb_valid;
    exe_unit_resp_t lsu_load_wb_resp;
    logic lsu_ldq_empty;
    logic lsu_stq_empty;

    lsu #(
        .DISPATCH_WIDTH(CORE_WIDTH),
        .AGEN_WIDTH(MEM_WIDTH),
        .DGEN_WIDTH(MEM_WIDTH),
        .COMMIT_WIDTH(CORE_WIDTH),
        .CLR_WIDTH(CORE_WIDTH)
    ) lsu_inst (
        .clk,
        .rst_n,
        .dis_valid(rn2_mask),
        .dis_uops(rn2_uops),
        .dis_uses_ldq(rn2_uses_ldq_q),
        .dis_uses_stq(rn2_uses_stq_q),
        .dis_lsq_ready(lsu_dis_ready),
        .dis_ldq_idx(lsu_dis_ldq_idx),
        .dis_stq_idx(lsu_dis_stq_idx),
        .dis_fire,
        .agen_valid(mem_agen_valid),
        .agen_uops(mem_agen_uop),
        .agen_addr(mem_agen_addr),
        .dgen_valid(mem_dgen_valid),
        .dgen_uops(mem_dgen_uop),
        .dgen_data(mem_dgen_data),
        .commit_valid(commit.valids),
        .commit_uops(commit.uops),
        .rob_head_idx(rob_head_idx_w),
        .clr_bsy_valid(lsu_clr_bsy_valid),
        .clr_bsy_rob_idx(lsu_clr_bsy_rob_idx),
        .load_wb_valid(lsu_load_wb_valid),
        .load_wb_resp(lsu_load_wb_resp),
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
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
        .brupdate(brupdate_w),
        .flush_pipeline(bm_flush),
        .ldq_empty(lsu_ldq_empty),
        .stq_empty(lsu_stq_empty)
    );

    // ================================================================
    // 执行单元——UNQ
    // ================================================================
    logic unq_res_valid;
    logic unq_exec_ready;
    exe_unit_resp_t unq_res;

    assign rf_read_en[UNQ_RF_BASE] = unq_iss_valid;
    assign rf_read_addr[UNQ_RF_BASE] = unq_iss_uop.psrc1;
    assign rf_read_en[UNQ_RF_BASE + 1] = unq_iss_valid;
    assign rf_read_addr[UNQ_RF_BASE + 1] = unq_iss_uop.psrc2;

    unq unq_inst (.clk(clk), .rst_n(rst_n),
        .iss_valid(unq_iss_valid), .iss_uop(unq_iss_uop),
        .iss_ready(unq_exec_ready),
        .src1_data(bypass_mux(unq_iss_uop.psrc1, rf_read_data[UNQ_RF_BASE], bp_valid, bp_pdst, bp_data)),
        .src2_data(bypass_mux(unq_iss_uop.psrc2, rf_read_data[UNQ_RF_BASE + 1], bp_valid, bp_pdst, bp_data)),
        .csr_req_valid, .csr_addr, .csr_cmd, .csr_wdata, .csr_wmask,
        .csr_rdata(csr_rdata_w),
        .counter_value(csr_counter_value_w),
        .counter_id_value(csr_tid_value_w),
        .res_valid(unq_res_valid), .res(unq_res),
        .brupdate(brupdate_w), .kill(bm_flush));

    // ================================================================
    // 唤醒信号收集
    // ================================================================
    exe_unit_resp_t lsu_resp_w;

    always_comb begin
        lsu_resp_w       = lsu_load_wb_resp;
        lsu_resp_w.valid = lsu_load_wb_valid;
    end

    for (genvar i = 0; i < ALU_WIDTH; i++) begin
        assign wakeups[i].valid = alu_wakeup_valid[i];
        assign wakeups[i].uop   = alu_wakeup[i].uop;
        assign wakeup_valid_w[i] = alu_wakeup_valid[i];
        assign wakeup_pdst_w[i] = alu_wakeup[i].uop.pdst;
    end
    assign wakeups[ALU_WIDTH].valid = lsu_resp_w.valid;
    assign wakeups[ALU_WIDTH].uop   = lsu_resp_w.uop;
    assign wakeup_valid_w[ALU_WIDTH] = lsu_resp_w.valid;
    assign wakeup_pdst_w[ALU_WIDTH] = lsu_resp_w.uop.pdst;
    // UNQ wakeup from res_valid
    assign wakeups[ALU_WIDTH+1].valid = unq_res_valid;
    assign wakeups[ALU_WIDTH+1].uop   = unq_res.uop;
    assign wakeup_valid_w[ALU_WIDTH+1] = unq_res_valid;
    assign wakeup_pdst_w[ALU_WIDTH+1] = unq_res.uop.pdst;
    for (genvar i = ALU_WIDTH + 2; i < NUM_WAKEUPS; i++) begin : gen_unused_wakeup
        assign wakeups[i] = '0;
        assign wakeup_valid_w[i] = 1'b0;
        assign wakeup_pdst_w[i] = '0;
    end

    // ================================================================
    // Bypass 网络
    // 收集所有本周期写回的结果（ALU fast wakeup + LSU resp + UNQ resp）
    // 供各执行单元的读端口做组合逻辑旁路
    // ================================================================
    for (genvar i = 0; i < ALU_WIDTH; i++) begin
        assign bp_valid[i] = alu_res_valid[i] && (alu_res[i].uop.dst_rtype == RT_FIX);
        assign bp_pdst[i]  = alu_res[i].uop.pdst;
        assign bp_data[i]  = alu_res[i].data;
    end
    assign bp_valid[ALU_WIDTH]   = lsu_resp_w.valid && (lsu_resp_w.uop.dst_rtype == RT_FIX);
    assign bp_pdst[ALU_WIDTH]    = lsu_resp_w.uop.pdst;
    assign bp_data[ALU_WIDTH]    = lsu_resp_w.data;
    assign bp_valid[ALU_WIDTH+1] = unq_res_valid && (unq_res.uop.dst_rtype == RT_FIX);
    assign bp_pdst[ALU_WIDTH+1]  = unq_res.uop.pdst;
    assign bp_data[ALU_WIDTH+1]  = unq_res.data;

    // ================================================================
    // Regfile 写端口: ALU(3) + LSU(1) + UNQ(1)
    // ================================================================
    for (genvar i = 0; i < ALU_WIDTH; i++) begin
        assign rf_write_en[i]   = alu_res_valid[i] && (alu_res[i].uop.dst_rtype == RT_FIX);
        assign rf_write_addr[i] = alu_res[i].uop.pdst;
        assign rf_write_data[i] = alu_res[i].data;
    end
    assign rf_write_en[ALU_WIDTH]   = lsu_resp_w.valid && (lsu_resp_w.uop.dst_rtype == RT_FIX);
    assign rf_write_addr[ALU_WIDTH] = lsu_resp_w.uop.pdst;
    assign rf_write_data[ALU_WIDTH] = lsu_resp_w.data;
    assign rf_write_en[ALU_WIDTH+1]   = unq_res_valid && (unq_res.uop.dst_rtype == RT_FIX);
    assign rf_write_addr[ALU_WIDTH+1] = unq_res.uop.pdst;
    assign rf_write_data[ALU_WIDTH+1] = unq_res.data;

    `ifndef SYNTHESIS
        always_ff @(posedge clk) begin
            if(rst_n) begin
                for (int i = 0; i < NUM_REGF_WRITES; i++) begin
                    for(int j = i+1; j < NUM_REGF_WRITES; j++) begin
                        if(rf_write_en[i] && rf_write_en[j] && rf_write_addr[i] != '0 && rf_write_addr[i] == rf_write_addr[j]) begin
                            $fatal(1, "Regfile write port conflict: ports %0d and %0d both write p%0d", i, j, rf_write_addr[i]);
                        end
                    end
                end
            end
        end
    `endif

    // ================================================================
    // ROB
    // ================================================================
    logic [CORE_WIDTH-1:0]             rob_enq_valids;
    uop_t [CORE_WIDTH-1:0]             rob_enq_uops;
    logic [ROB_ADDR_SZ-1:0]            rob_tail_idx_w;
    logic [ROB_ADDR_SZ-1:0]            rob_head_idx_w;
    exe_unit_resp_t [NUM_WAKEUPS-1:0]  rob_wb_resps;
    commit_exception_signals_t          rob_com_xcpt_w;
    commit_exception_signals_t          rob_flush_w;
    logic                               rob_rollback_w;
    logic                               rob_flush_frontend_w;
    logic                               rob_ready_w;
    logic [31:0]                        rob_interrupt_next_pc_w;

    assign rob_enq_valids = dis_fire;
    assign rob_enq_uops = dis_uops_w;

    // If the ROB is empty, the interrupt boundary may still precede a packet
    // held in Rename2 or Decode. Preserve that oldest uncommitted PC as ERA.
    always_comb begin
        logic found_rn2;

        rob_interrupt_next_pc_w = next_decode_pc_q;
        found_rn2 = 1'b0;

        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (!found_rn2 && rn2_mask[w]) begin
                rob_interrupt_next_pc_w = rn2_pc_q[w];
                found_rn2 = 1'b1;
            end
        end

    end

    for (genvar i = 0; i < ALU_WIDTH; i++)
        assign rob_wb_resps[i] = alu_res[i];
    assign rob_wb_resps[ALU_WIDTH]   = lsu_resp_w;
    assign rob_wb_resps[ALU_WIDTH+1] = unq_res;
    for (genvar i = ALU_WIDTH + 2; i < NUM_WAKEUPS; i++) begin : gen_unused_rob_wb
        assign rob_wb_resps[i] = '0;
    end

    rob #(.NUM_ENTRIES(ROB_ENTRIES), .CORE_WIDTH(CORE_WIDTH),
          .NUM_WAKEUP_PORTS(NUM_WAKEUPS),
          .ENABLE_SINGLE_DEBUG_COMMIT(ENABLE_SINGLE_DEBUG_COMMIT)) rob_inst (
        .clk(clk), .rst_n(rst_n),
        .enq_valids (rob_enq_valids),
        .enq_uops   (rob_enq_uops),
        .enq_partial_stall((|dis_fire) && !dis_ready_w),
        .rob_tail_idx(rob_tail_idx_w),
        .wb_resps   (rob_wb_resps),
        .lsu_clr_bsy_valid(lsu_clr_bsy_valid),
        .lsu_clr_bsy_addr(lsu_clr_bsy_rob_idx),
        .brupdate   (brupdate_w),
        .interrupt_pending(csr_interrupt_pending_w),
        .interrupt_next_pc(rob_interrupt_next_pc_w),
        .interrupt_taken(),
        .lxcpt      (mem_xcpt[0]),
        .csr_replay ('0),
        .csr_stall  (1'b0),
        .commit     (commit),
        .com_xcpt   (rob_com_xcpt_w),
        .flush      (rob_flush_w),
        .empty      (rob_empty),
        .ready      (rob_ready_w),
        .rollback   (rob_rollback_w),
        .flush_frontend(rob_flush_frontend_w),
        .rob_head_idx(rob_head_idx_w),
        .rob_pnr_idx()
    );

    assign bm_flush = rob_rollback_w || rob_flush_w.valid;

    // ================================================================
    // CSR file
    // ================================================================
    always_comb begin
        csr_commit_valid_w = 1'b0;
        csr_commit_rob_idx_w = '0;
        csr_ertn_valid_w = 1'b0;

        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (!csr_commit_valid_w &&
                commit.valids[w] &&
                commit.uops[w].fu_code[FC_CSR]) begin
                csr_commit_valid_w = 1'b1;
                csr_commit_rob_idx_w = commit.uops[w].rob_idx;
            end

            csr_ertn_valid_w |=
                commit.valids[w] && commit.uops[w].is_ertn;
        end
    end

    csr_file #(
        .CSR_ADDR_WIDTH(14),
        .ROB_IDX_WIDTH(ROB_ADDR_SZ),
        .NUM_HW_IRQS(8),
        .CORE_ID(CORE_ID)
    ) csr_file_inst (
        .clk,
        .rst_n,
        .csr_req_valid,
        .csr_req_ready(csr_req_ready_w),
        .csr_req_rob_idx(unq_iss_uop.rob_idx),
        .csr_req_addr(csr_addr),
        .csr_cmd,
        .csr_wdata,
        .csr_wmask,
        .csr_resp_valid(csr_resp_valid_w),
        .csr_resp_ready(1'b1),
        .csr_resp_rob_idx(csr_resp_rob_idx_w),
        .csr_rdata(csr_rdata_w),
        .csr_commit_valid(csr_commit_valid_w),
        .csr_commit_rob_idx(csr_commit_rob_idx_w),
        .csr_flush_pending(bm_flush),
        .xcpt_valid(rob_com_xcpt_w.valid),
        .xcpt_inst(rob_com_xcpt_w.inst),
        .xcpt_pc(rob_com_xcpt_w.pc),
        .xcpt_code(rob_com_xcpt_w.cause[5:0]),
        .xcpt_esubcode('0),
        .xcpt_badvaddr(rob_com_xcpt_w.badvaddr),
        .ertn_valid(csr_ertn_valid_w),
        .hw_irq,
        .ipi_irq,
        .interrupt_pending(csr_interrupt_pending_w),
        .interrupt_pending_bits(csr_interrupt_pending_bits_w),
        .current_plv(csr_current_plv_w),
        .current_ie(csr_current_ie_w),
        .xcpt_target(csr_xcpt_target_w),
        .ertn_target(csr_ertn_target_w),
        .crmd_value(),
        .asid_value(),
        .dmw0_value(),
        .dmw1_value(),
        .era_value(),
        .eentry_value(),
        .tlbrentry_value(),
        .counter_value(csr_counter_value_w),
        .tid_value(csr_tid_value_w)
    );

    // ================================================================
    // 分支更新
    // ================================================================
    br_update_info_t brupdate_w;
    logic [MAX_BR_COUNT-1:0] resolve_mask;
    logic [MAX_BR_COUNT-1:0] mispredict_mask;

    always_comb begin
        resolve_mask    = '0;
        mispredict_mask = '0;
        for (int i = 0; i < ALU_WIDTH; i++) begin
            if (alu_brinfo_valid[i]) begin
                resolve_mask[alu_brinfo[i].uop.br_tag] = 1'b1;
                if (alu_brinfo[i].mispredict)
                    mispredict_mask[alu_brinfo[i].uop.br_tag] = 1'b1;
            end
        end
    end

    assign brupdate_w.b1.resolve_mask    = resolve_mask;
    assign brupdate_w.b1.mispredict_mask = mispredict_mask;

    function automatic logic rob_idx_is_older(
        input logic [ROB_ADDR_SZ-1:0] lhs,
        input logic [ROB_ADDR_SZ-1:0] rhs
    );
        logic [ROB_ADDR_SZ-1:0] lhs_distance;
        logic [ROB_ADDR_SZ-1:0] rhs_distance;
        lhs_distance = lhs - rob_head_idx_w;
        rhs_distance = rhs - rob_head_idx_w;
        return lhs_distance < rhs_distance;
    endfunction

    // b2 carries the oldest misprediction, independent of ALU port order.
    always_comb begin
        logic found_mispredict;

        brupdate_w.b2 = '0;
        found_mispredict = 1'b0;
        for (int i = 0; i < ALU_WIDTH; i++) begin
            if (alu_brinfo_valid[i] && alu_brinfo[i].mispredict &&
                (!found_mispredict ||
                 rob_idx_is_older(alu_brinfo[i].uop.rob_idx,
                                  brupdate_w.b2.uop.rob_idx))) begin
                brupdate_w.b2 = alu_brinfo[i];
                found_mispredict = 1'b1;
            end
        end
    end

    // ROB redirects are older than execute-stage branch redirects and
    // therefore take priority when both are visible in the same cycle.
    always_comb begin
        fe_redirect_valid = 1'b0;
        fe_redirect_pc = '0;

        if (rob_flush_w.valid) begin
            fe_redirect_valid = 1'b1;
            unique case (rob_flush_w.flush_typ)
                FT_XCPT:    fe_redirect_pc = csr_xcpt_target_w;
                FT_ERTN:    fe_redirect_pc = csr_ertn_target_w;
                FT_REFETCH: fe_redirect_pc = rob_flush_w.pc + 32'd4;
                default:    fe_redirect_pc = rob_flush_w.pc + 32'd4;
            endcase
        end else if (brupdate_w.b2.mispredict) begin
            fe_redirect_valid = 1'b1;
            unique case (brupdate_w.b2.pc_sel)
                PC_PLUS4:
                    fe_redirect_pc =
                        brupdate_w.b2.uop.pc[31:0] + 32'd4;
                PC_BRANCH:
                    fe_redirect_pc =
                        brupdate_w.b2.uop.pc[31:0] +
                        brupdate_w.b2.target_offset[31:0];
                PC_JIRL:
                    fe_redirect_pc =
                        brupdate_w.b2.jirl_target[31:0];
                default:
                    fe_redirect_pc =
                        brupdate_w.b2.uop.pc[31:0] + 32'd4;
            endcase
        end
    end

    // ================================================================
    // 调试
    // ================================================================
    assign debug_pc = fetch_pc;
    assign commit_valid_dbg = |commit.arch_valids;
    assign commit_valids_dbg = commit.arch_valids;
    assign commit_ldst_dbg = commit.arch_valids[0] ? commit.uops[0].ldst :
                             commit.uops[CORE_WIDTH-1].ldst;
    assign rf_wr_en_dbg = |rf_write_en;
    assign rf_wr_pdst_dbg = rf_write_en[0] ? rf_write_addr[0] :
                            rf_write_addr[NUM_REGF_WRITES-1];
    assign rf_wr_ldst_dbg = rf_write_en[0] ? alu_res[0].uop.ldst :
                            unq_res.uop.ldst;
    assign rf_wr_data_dbg = rf_write_en[0] ? rf_write_data[0] :
                            rf_write_data[NUM_REGF_WRITES-1];
    assign alu_src1_dbg = rf_read_data[0];
    assign alu_imm_dbg = gen_alu[0].alu_imm_data;
    assign alu_imm_packed_dbg = alu_iss_uop[0].imm_packed;
    assign alu_imm_sel_dbg = alu_iss_uop[0].imm_sel;
    assign rob_ready_dbg = rob_ready_w;
    assign ren_stalls_dbg = rn_stalls;
    assign rn2_mask_dbg = rn2_mask;
    assign dis_fire_dbg = dis_fire;
    always_comb begin
        dis_unique_dbg = 1'b0;
        for (int w = 0; w < CORE_WIDTH; w++)
            dis_unique_dbg |= dis_fire[w] && dis_uops_w[w].is_unique;
    end
    assign alu_iss_valid_dbg = alu_iss_valid;
    assign alu_res_valid_dbg = alu_res_valid;
    for (genvar d = 0; d < NUM_WAKEUPS; d++)
        assign rob_wb_valid_dbg[d] = rob_wb_resps[d].valid;

endmodule
