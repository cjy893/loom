import loom_params::*;
import loom_consts::*;
import loom_types::*;

module boom_core #(
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
    parameter int NUM_REGF_WRITES= 5    // ALU(3)+LSU(1)+UNQ(1)=5
)(
    input  logic clk,
    input  logic rst_n,

    // ── 前端接口（raw 32 位指令） ──
    input  logic [FETCH_WIDTH-1:0]       fe_valid,
    input  logic [FETCH_WIDTH-1:0][31:0] fe_insts,
    output logic                         fe_ready,

    // ── LSU 接口（stub） ──
    output logic                         lsu_agen_valid,
    output logic [31:0]                  lsu_agen_addr,
    output uop_t                         lsu_agen_uop,
    output logic                         lsu_dgen_valid,
    output logic [31:0]                  lsu_dgen_data,
    output uop_t                         lsu_dgen_uop,
    input  logic                         lsu_resp_valid,
    input  exe_unit_resp_t               lsu_resp,

    // ── CSR 接口（stub） ──
    output logic                         csr_req_valid,
    output logic [13:0]                  csr_addr,
    output logic [1:0]                   csr_cmd,
    output logic [31:0]                  csr_wdata,
    output logic [31:0]                  csr_wmask,
    input  logic [31:0]                  csr_rdata,

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
    output logic [31:0]                  alu_rs1_dbg,
    output logic [31:0]                  alu_imm_dbg,
    output logic [25:0]                  alu_imm_packed_dbg,
    output logic [2:0]                   alu_imm_sel_dbg,
    output logic                         rob_ready_dbg,
    output logic [CORE_WIDTH-1:0]        ren_stalls_dbg,
    output logic [CORE_WIDTH-1:0]        rn2_mask_dbg,
    output logic [CORE_WIDTH-1:0]        dis_fire_dbg,
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
    logic [CORE_WIDTH-1:0][31:0] dec_pcs;
    logic [$clog2(CORE_WIDTH+1)-1:0] accepted_insts;
    logic                        pre_dispatch_ready;

    logic [CORE_WIDTH-1:0] iq_mem_dis_valid;
    logic [CORE_WIDTH-1:0] iq_alu_dis_valid;
    logic [CORE_WIDTH-1:0] iq_unq_dis_valid;
    uop_t [CORE_WIDTH-1:0] iq_mem_dis_uop;
    uop_t [CORE_WIDTH-1:0] iq_alu_dis_uop;
    uop_t [CORE_WIDTH-1:0] iq_unq_dis_uop;
    logic [CORE_WIDTH-1:0] alu_iq_dis_ready;
    logic [CORE_WIDTH-1:0] mem_iq_dis_ready;
    logic [CORE_WIDTH-1:0] unq_iq_dis_ready;

    always_comb begin
        logic [$clog2(CORE_WIDTH+1)-1:0] slot_offset;

        accepted_insts = '0;
        dec_pcs = '0;
        slot_offset = '0;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            dec_pcs[w] = fetch_pc + (32'(slot_offset) << 2);
            if (dec_valids[w])
                slot_offset += 1'b1;
            accepted_insts += dec_fire[w];
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            fetch_pc <= 32'h1c00_0000;
        else if (|dec_fire)
            fetch_pc <= fetch_pc + (32'(accepted_insts) << 2);
    end

    // 前端 fetch packet → decode: 取 CORE_WIDTH 条有效指令
    for (genvar w = 0; w < CORE_WIDTH; w++) begin : gen_decode
        logic dec_valid;
        assign dec_valid = (w < FETCH_WIDTH) ? fe_valid[w] : 1'b0;

        decode decode_inst (
            .inst       (fe_insts[w]),
            .pc         (dec_pcs[w]),
            .status_prv (2'b00),
            .uop        (dec_uops_raw[w])
        );

        assign dec_valids[w] = dec_valid;
    end

    assign dec_fire  = dec_valids & {CORE_WIDTH{dec_ready}};
    assign fe_ready  = dec_ready;
    assign dec_ready = pre_dispatch_ready && !(|rn_stalls);

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

    // The temporary harness has no registered rename2 stage. Determine whether
    // the complete decode packet can be accepted without depending on dec_fire,
    // so the frontend ready path remains acyclic.
    always_comb begin
        int alu_count;
        int mem_count;
        int unq_count;

        alu_count = 0;
        mem_count = 0;
        unq_count = 0;
        pre_dispatch_ready = rob_ready_w;

        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (dec_valids[w]) begin
                if (bm_is_full[w])
                    pre_dispatch_ready = 1'b0;

                if (!dec_uops_raw[w].exception) begin
                    unique case (dec_uops_raw[w].iq_type)
                        IQ_ALU: begin
                            if (alu_count >= CORE_WIDTH ||
                                !alu_iq_dis_ready[alu_count])
                                pre_dispatch_ready = 1'b0;
                            alu_count++;
                        end
                        IQ_MEM: begin
                            if (mem_count >= CORE_WIDTH ||
                                !mem_iq_dis_ready[mem_count])
                                pre_dispatch_ready = 1'b0;
                            mem_count++;
                        end
                        IQ_UNQ: begin
                            if (unq_count >= CORE_WIDTH ||
                                !unq_iq_dis_ready[unq_count])
                                pre_dispatch_ready = 1'b0;
                            unq_count++;
                        end
                        default: pre_dispatch_ready = 1'b0;
                    endcase
                end
            end
        end
    end

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
    logic [CORE_WIDTH-1:0]       rn_stalls;
    logic [CORE_WIDTH-1:0]       rn2_mask;
    uop_t [CORE_WIDTH-1:0]       rn2_uops_raw;
    uop_t [CORE_WIDTH-1:0]       rn2_uops;

    wakeup_t [NUM_WAKEUPS-1:0]   wakeups;
    logic                         dis_ready_w;

    rename_stage #(.CORE_WIDTH(CORE_WIDTH), .PHYSICAL_REGS(PHYSICAL_REGS),
                   .WAKEUP_PORTS(NUM_WAKEUPS), .IS_FP(0))
    rename (
        .clk(clk), .rst_n(rst_n),
        .dec_valids(dec_valids),
        .dec_fire  (dec_fire),
        .dec_uops  (dec_uops),
        .wakeups   (wakeups),
        .brupdate  (brupdate_w),
        .kill      (1'b0),
        .commit_valids(commit.valids),
        .commit_uops  (commit.uops),
        .rollback  (rob_rollback_w),
        .dis_ready (dis_ready_w),
        .rn_stalls (rn_stalls),
        .rn2_mask  (rn2_mask),
        .rn2_uops  (rn2_uops_raw),
        .child_rebusys('0)
    );

    // BOOM assigns the ROB index before dispatch so every copy of the uop,
    // including the one sent to the issue queue, carries the same identity.
    always_comb begin
        rn2_uops = rn2_uops_raw;
        for (int w = 0; w < CORE_WIDTH; w++) begin
            rn2_uops[w].rob_idx = rob_tail_idx_w + ROB_ADDR_SZ'(w);
            rn2_uops[w].starts_bsy = rn2_mask[w] && !rn2_uops_raw[w].exception;
        end
    end

    // ================================================================
    // Dispatch
    // ================================================================
    logic [CORE_WIDTH-1:0] dis_fire;
    uop_t [CORE_WIDTH-1:0] dis_uops_w;
    assign dis_ready_w = pre_dispatch_ready;

    // Pack each IQ independently. Exceptions bypass all issue queues but still
    // fire into the ROB so they can be observed at the commit boundary.
    always_comb begin
        int alu_count;
        int mem_count;
        int unq_count;

        alu_count = 0;
        mem_count = 0;
        unq_count = 0;
        iq_alu_dis_valid = '0;
        iq_mem_dis_valid = '0;
        iq_unq_dis_valid = '0;
        iq_alu_dis_uop = '0;
        iq_mem_dis_uop = '0;
        iq_unq_dis_uop = '0;
        dis_fire = rn2_mask;
        dis_uops_w = rn2_uops;

        for (int w = 0; w < CORE_WIDTH; w++) begin
            if (rn2_mask[w] && !rn2_uops[w].exception) begin
                unique case (rn2_uops[w].iq_type)
                    IQ_ALU: begin
                        iq_alu_dis_valid[alu_count] = 1'b1;
                        iq_alu_dis_uop[alu_count] = rn2_uops[w];
                        alu_count++;
                    end
                    IQ_MEM: begin
                        iq_mem_dis_valid[mem_count] = 1'b1;
                        iq_mem_dis_uop[mem_count] = rn2_uops[w];
                        mem_count++;
                    end
                    IQ_UNQ: begin
                        iq_unq_dis_valid[unq_count] = 1'b1;
                        iq_unq_dis_uop[unq_count] = rn2_uops[w];
                        unq_count++;
                    end
                    default: dis_fire[w] = 1'b0;
                endcase
            end
        end
    end

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
            IS_I:  expand_imm = {{20{in_uop.imm_packed[11]}}, in_uop.imm_packed[11:0]};
            IS_Z:  expand_imm = {20'b0, in_uop.imm_packed[11:0]};
            IS_B:  expand_imm = {{14{in_uop.imm_packed[15]}}, in_uop.imm_packed[15:0], 2'b00};
            IS_U:  expand_imm = {in_uop.imm_packed[19:0], 12'b0};
            IS_J:  expand_imm = {{4{in_uop.imm_packed[25]}}, in_uop.imm_packed[25:0], 2'b00};
            IS_SH: expand_imm = {27'b0, in_uop.imm_packed[4:0]};
            IS_F3: expand_imm = {18'b0, in_uop.imm_packed[13:0]};
            default: expand_imm = '0;
        endcase
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
        // prs1 → rf port i*2+0, prs2 → rf port i*2+1
        assign rf_read_en[i*2+0]   = alu_iss_valid[i];
        assign rf_read_addr[i*2+0] = alu_iss_uop[i].prs1;
        assign rf_read_en[i*2+1]   = alu_iss_valid[i];
        assign rf_read_addr[i*2+1] = alu_iss_uop[i].prs2;

        logic [31:0] alu_imm_data;
        assign alu_imm_data = expand_imm(alu_iss_uop[i]);

        alu alu_inst (.clk(clk), .rst_n(rst_n),
            .iss_valid(alu_iss_valid[i]), .iss_uop(alu_iss_uop[i]),
            .rs1_data(bypass_mux(alu_iss_uop[i].prs1, rf_read_data[i*2+0])),
            .rs2_data(bypass_mux(alu_iss_uop[i].prs2, rf_read_data[i*2+1])),
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

    for (genvar i = 0; i < MEM_WIDTH; i++) begin : gen_mem
        logic [31:0] mem_rs1_data;
        logic [31:0] mem_rs2_data;
        logic [31:0] mem_imm_data;

        assign rf_read_en[MEM_RF_BASE + i*2]     = mem_iss_valid[i];
        assign rf_read_addr[MEM_RF_BASE + i*2]   = mem_iss_uop[i].prs1;
        assign rf_read_en[MEM_RF_BASE + i*2 + 1] = mem_iss_valid[i];
        assign rf_read_addr[MEM_RF_BASE + i*2 + 1] = mem_iss_uop[i].prs2;

        assign mem_rs1_data = bypass_mux(mem_iss_uop[i].prs1,
                                         rf_read_data[MEM_RF_BASE + i*2]);
        assign mem_rs2_data = bypass_mux(mem_iss_uop[i].prs2,
                                         rf_read_data[MEM_RF_BASE + i*2 + 1]);
        assign mem_imm_data = expand_imm(mem_iss_uop[i]);

        mem #(.HAS_AGEN(i == 0), .HAS_DGEN(i == 0)) mem_inst (
            .clk(clk), .rst_n(rst_n),
            .iss_valid(mem_iss_valid[i]), .iss_uop(mem_iss_uop[i]),
            .rs1_data(mem_rs1_data),
            .rs2_data(mem_rs2_data),
            .imm_data(mem_imm_data),
            .agen_valid(mem_agen_valid[i]), .agen_addr(mem_agen_addr[i]), .agen_uop(mem_agen_uop[i]),
            .dgen_valid(mem_dgen_valid[i]), .dgen_data(mem_dgen_data[i]), .dgen_uop(mem_dgen_uop[i]),
            .brupdate(brupdate_w), .kill(bm_flush));
    end

    // 当前测试顶层只有一个 LSU 请求通道，MEM 端口 0 同时承担 AGEN/DGEN。
    assign lsu_agen_valid = mem_agen_valid[0];
    assign lsu_agen_addr  = mem_agen_addr[0];
    assign lsu_agen_uop   = mem_agen_uop[0];
    assign lsu_dgen_valid = mem_dgen_valid[0];
    assign lsu_dgen_data  = mem_dgen_data[0];
    assign lsu_dgen_uop   = mem_dgen_uop[0];

    // ================================================================
    // 执行单元——UNQ
    // ================================================================
    logic unq_res_valid;
    logic unq_exec_ready;
    exe_unit_resp_t unq_res;

    assign rf_read_en[UNQ_RF_BASE] = unq_iss_valid;
    assign rf_read_addr[UNQ_RF_BASE] = unq_iss_uop.prs1;
    assign rf_read_en[UNQ_RF_BASE + 1] = unq_iss_valid;
    assign rf_read_addr[UNQ_RF_BASE + 1] = unq_iss_uop.prs2;

    unq unq_inst (.clk(clk), .rst_n(rst_n),
        .iss_valid(unq_iss_valid), .iss_uop(unq_iss_uop),
        .iss_ready(unq_exec_ready),
        .rs1_data(bypass_mux(unq_iss_uop.prs1, rf_read_data[UNQ_RF_BASE])),
        .rs2_data(bypass_mux(unq_iss_uop.prs2, rf_read_data[UNQ_RF_BASE + 1])),
        .csr_req_valid, .csr_addr, .csr_cmd, .csr_wdata, .csr_wmask, .csr_rdata,
        .res_valid(unq_res_valid), .res(unq_res),
        .brupdate(brupdate_w), .kill(bm_flush));

    // ================================================================
    // 唤醒信号收集
    // ================================================================
    exe_unit_resp_t lsu_resp_w;

    always_comb begin
        lsu_resp_w       = lsu_resp;
        lsu_resp_w.valid = lsu_resp_valid;
    end

    for (genvar i = 0; i < ALU_WIDTH; i++) begin
        assign wakeups[i].valid = alu_wakeup_valid[i];
        assign wakeups[i].uop   = alu_wakeup[i].uop;
        assign wakeup_valid_w[i] = alu_wakeup_valid[i];
        assign wakeup_pdst_w[i] = alu_wakeup[i].uop.pdst;
    end
    assign wakeups[ALU_WIDTH].valid = lsu_resp_valid;
    assign wakeups[ALU_WIDTH].uop   = lsu_resp_w.uop;
    assign wakeup_valid_w[ALU_WIDTH] = lsu_resp_valid;
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
    localparam int NUM_BYPASS = ALU_WIDTH + 1 + 1;  // ALU + LSU + UNQ
    logic [NUM_BYPASS-1:0]               bp_valid;
    logic [NUM_BYPASS-1:0][$clog2(PHYSICAL_REGS)-1:0] bp_pdst;
    logic [NUM_BYPASS-1:0][31:0]        bp_data;

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

    // bypass 命中判断函数：prs 匹配任意 bypass 源 → 返回旁路数据，否则返回 regfile 数据
    function automatic logic [31:0] bypass_mux(
        logic [$clog2(PHYSICAL_REGS)-1:0] prs,
        logic [31:0] rf_data
    );
        bypass_mux = rf_data;
        for (int j = NUM_BYPASS-1; j >= 0; j--) begin  // 高优先级源靠后覆盖
            if (bp_valid[j] && (bp_pdst[j] == prs) && (prs != '0))
                bypass_mux = bp_data[j];
        end
    endfunction

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

    // ================================================================
    // ROB
    // ================================================================
    logic [CORE_WIDTH-1:0]             rob_enq_valids;
    uop_t [CORE_WIDTH-1:0]             rob_enq_uops;
    logic [ROB_ADDR_SZ-1:0]            rob_tail_idx_w;
    logic [ROB_ADDR_SZ-1:0]            rob_head_idx_w;
    exe_unit_resp_t [NUM_WAKEUPS-1:0]  rob_wb_resps;
    logic                               rob_rollback_w;
    logic                               rob_ready_w;

    assign rob_enq_valids = dis_fire;
    assign rob_enq_uops = dis_uops_w;

    for (genvar i = 0; i < ALU_WIDTH; i++)
        assign rob_wb_resps[i] = alu_res[i];
    assign rob_wb_resps[ALU_WIDTH]   = lsu_resp_w;
    assign rob_wb_resps[ALU_WIDTH+1] = unq_res;
    for (genvar i = ALU_WIDTH + 2; i < NUM_WAKEUPS; i++) begin : gen_unused_rob_wb
        assign rob_wb_resps[i] = '0;
    end

    rob #(.NUM_ENTRIES(ROB_ENTRIES), .CORE_WIDTH(CORE_WIDTH),
          .NUM_WAKEUP_PORTS(NUM_WAKEUPS)) rob_inst (
        .clk(clk), .rst_n(rst_n),
        .enq_valids (rob_enq_valids),
        .enq_uops   (rob_enq_uops),
        .enq_partial_stall(1'b0),
        .rob_tail_idx(rob_tail_idx_w),
        .wb_resps   (rob_wb_resps),
        .lsu_clr_bsy_valid('0),
        .lsu_clr_bsy_addr('0),
        .brupdate   (brupdate_w),
        .lxcpt      ('0),
        .csr_replay ('0),
        .csr_stall  (1'b0),
        .commit     (commit),
        .com_xcpt   (),
        .flush      (),
        .empty      (rob_empty),
        .ready      (rob_ready_w),
        .rollback   (rob_rollback_w),
        .flush_frontend(),
        .rob_head_idx(rob_head_idx_w),
        .rob_pnr_idx()
    );

    assign bm_flush = rob_rollback_w;

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
    assign alu_rs1_dbg = rf_read_data[0];
    assign alu_imm_dbg = gen_alu[0].alu_imm_data;
    assign alu_imm_packed_dbg = alu_iss_uop[0].imm_packed;
    assign alu_imm_sel_dbg = alu_iss_uop[0].imm_sel;
    assign rob_ready_dbg = rob_ready_w;
    assign ren_stalls_dbg = rn_stalls;
    assign rn2_mask_dbg = rn2_mask;
    assign dis_fire_dbg = dis_fire;
    assign alu_iss_valid_dbg = alu_iss_valid;
    assign alu_res_valid_dbg = alu_res_valid;
    for (genvar d = 0; d < NUM_WAKEUPS; d++)
        assign rob_wb_valid_dbg[d] = rob_wb_resps[d].valid;

endmodule
