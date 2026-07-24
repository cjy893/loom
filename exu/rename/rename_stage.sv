import loom_params::*;
import loom_consts::*;
import loom_types::*;

module rename_stage #(
    parameter int CORE_WIDTH = 2,
    parameter int PHYSICAL_REGS = 48,
    parameter int WAKEUP_PORTS = 6,
    parameter int IS_FP = 0,
    parameter int MAX_BR_COUNT = 4
)(
    input logic clk,
    input logic rst_n,

    input logic [CORE_WIDTH-1:0] dec_valids,
    input logic [CORE_WIDTH-1:0] dec_fire,
    input uop_t [CORE_WIDTH-1:0] dec_uops,

    input logic [CORE_WIDTH-1:0] dis_fire,
    input logic dis_ready,

    input wakeup_t [WAKEUP_PORTS-1:0] wakeups,

    input br_update_info_t brupdate,
    input logic kill,

    input logic [CORE_WIDTH-1:0] commit_valids,
    input uop_t [CORE_WIDTH-1:0] commit_uops,
    input logic rollback,

    output logic [CORE_WIDTH-1:0] rn_stalls,
    output logic [CORE_WIDTH-1:0] rn2_mask,
    output uop_t [CORE_WIDTH-1:0] rn2_uops,

    input logic [CORE_WIDTH-1:0] child_rebusys
);

    localparam int LOGICAL_REGS = IS_FP ? 64 : 32;
    localparam int LREG_SZ = $clog2(LOGICAL_REGS);
    localparam int PREG_SZ = $clog2(PHYSICAL_REGS);
    localparam int NUM_READS = 3 * CORE_WIDTH;
    localparam int ALLOC_COUNT_W = $clog2(CORE_WIDTH+1);

    logic [NUM_READS-1:0] mt_read_en;
    logic [NUM_READS-1:0] [LREG_SZ-1:0] mt_lreg;
    logic [NUM_READS-1:0] [PREG_SZ-1:0] mt_preg;
    logic [CORE_WIDTH-1:0] mt_write_en;
    logic [CORE_WIDTH-1:0] [LREG_SZ-1:0] mt_write_lreg;
    logic [CORE_WIDTH-1:0] [PREG_SZ-1:0] mt_write_preg;
    logic [CORE_WIDTH-1:0] mt_commit_en;
    logic [CORE_WIDTH-1:0] [LREG_SZ-1:0] mt_commit_lreg;
    logic [CORE_WIDTH-1:0] [PREG_SZ-1:0] mt_commit_preg;
    logic [PHYSICAL_REGS-1:0] mt_arch_busy_vec;

    logic [CORE_WIDTH-1:0] br_snapshot_en;
    logic [CORE_WIDTH-1:0] [$clog2(MAX_BR_COUNT)-1:0] br_snapshot_tag;

    logic [CORE_WIDTH-1:0] fl_alloc_en;
    logic [CORE_WIDTH-1:0] [PREG_SZ-1:0] fl_alloc_preg;
    logic [CORE_WIDTH-1:0] fl_free_en;
    logic [CORE_WIDTH-1:0] [PREG_SZ-1:0] fl_free_preg;
    logic [ALLOC_COUNT_W-1:0] alloc_need;
    logic [ALLOC_COUNT_W-1:0] fl_free_count;
    logic fl_busy;

    logic [NUM_READS-1:0] bt_read_en;
    logic [NUM_READS-1:0] [PREG_SZ-1:0] bt_read_preg;
    logic [NUM_READS-1:0] bt_busy;
    logic [CORE_WIDTH-1:0] bt_write_en;
    logic [CORE_WIDTH-1:0] [PREG_SZ-1:0] bt_write_preg;
    logic [WAKEUP_PORTS-1:0] bt_wakeup_en;
    logic [WAKEUP_PORTS-1:0] [PREG_SZ-1:0] bt_wakeup_preg;

    function automatic logic needs_pdst(input uop_t uop);
        return (uop.ldst != '0) && (uop.dst_rtype != RT_X);
    endfunction

    rename_maptable #(
        .LOGICAL_REGS(LOGICAL_REGS),
        .PHYSICAL_REGS(PHYSICAL_REGS),
        .READ_PORTS(NUM_READS),
        .WRITE_PORTS(CORE_WIDTH),
        .COMMIT_PORTS(CORE_WIDTH),
        .MAX_BR_COUNT(MAX_BR_COUNT)
    ) maptable(
        .clk(clk),
        .rst_n(rst_n),
        .read_en(mt_read_en),
        .lreg(mt_lreg),
        .preg(mt_preg),
        .write_en(mt_write_en),
        .write_lreg(mt_write_lreg),
        .write_preg(mt_write_preg),
        .commit_en(mt_commit_en),
        .commit_lreg(mt_commit_lreg),
        .commit_preg(mt_commit_preg),
        .br_snapshot_en(br_snapshot_en),
        .br_snapshot_tag(br_snapshot_tag),
        .br_mispredict(brupdate.b2.mispredict),
        .br_mispredict_tag(brupdate.b2.uop.br_tag),
        .rollback(rollback),
        .arch_busy_vec(mt_arch_busy_vec)
    );

    rename_freelist #(
        .PHYSICAL_REGS(PHYSICAL_REGS),
        .ALLOC_PORTS(CORE_WIDTH),
        .FREE_PORTS(CORE_WIDTH),
        .MAX_BR_COUNT(MAX_BR_COUNT)
    ) freelist(
        .clk(clk),
        .rst_n(rst_n),
        .alloc_en(fl_alloc_en),
        .alloc_preg(fl_alloc_preg),
        .free_en(fl_free_en),
        .free_preg(fl_free_preg),
        .br_snapshot_en(br_snapshot_en),
        .br_snapshot_tag(br_snapshot_tag),
        .br_mispredict(brupdate.b2.mispredict),
        .br_mispredict_tag(brupdate.b2.uop.br_tag),
        .rollback(rollback),
        .rollback_busy_vec(mt_arch_busy_vec),
        .free_count(fl_free_count),
        .busy(fl_busy)
    );

    rename_busytable #(
        .PHYSICAL_REGS(PHYSICAL_REGS),
        .READ_PORTS(NUM_READS),
        .WRITE_PORTS(CORE_WIDTH),
        .WAKEUP_PORTS(WAKEUP_PORTS)
    ) busytable(
        .clk(clk),
        .rst_n(rst_n),
        .read_en(bt_read_en),
        .read_preg(bt_read_preg),
        .busy(bt_busy),
        .write_en(bt_write_en),
        .write_preg(bt_write_preg),
        .wakeup_en(bt_wakeup_en),
        .wakeup_preg(bt_wakeup_preg),
        .rollback(rollback)
    );

    always_comb begin
        alloc_need = '0;
        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(rn2_mask_q[w] && needs_pdst(rn2_uops_q[w])) alloc_need = alloc_need + ALLOC_COUNT_W'(1);
        end
    end

    logic [CORE_WIDTH-1:0] rn2_mask_q, rn2_mask_next;
    uop_t [CORE_WIDTH-1:0] rn2_uops_q, rn2_uops_next;

    always_comb begin
        mt_read_en = '0; mt_lreg = '0;
        mt_write_en = '0; mt_write_lreg = '0; mt_write_preg = '0;
        mt_commit_en = '0; mt_commit_lreg = '0; mt_commit_preg = '0;
        fl_alloc_en = '0;
        fl_free_en = '0; fl_free_preg = '0;
        bt_read_en = '0; bt_read_preg = '0;
        bt_write_en = '0; bt_write_preg = '0;
        bt_wakeup_en = '0; bt_wakeup_preg = '0;
        br_snapshot_en = '0; br_snapshot_tag = '0;
        rn2_mask = rn2_mask_q;
        rn2_uops = rn2_uops_q;

        for(int i = 0; i < WAKEUP_PORTS; i++) begin
            bt_wakeup_en[i] = wakeups[i].valid;
            bt_wakeup_preg[i] = wakeups[i].uop.pdst;
        end

        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(!rn2_mask_q[w]) continue;

            mt_read_en[3*w+0] = rn2_uops_q[w].lrs1_rtype == RT_FIX;
            mt_lreg[3*w+0] = rn2_uops_q[w].lrs1;
            mt_read_en[3*w+1] = rn2_uops_q[w].lrs2_rtype == RT_FIX;
            mt_lreg[3*w+1] = rn2_uops_q[w].lrs2;
            mt_read_en[3*w+2] = needs_pdst(rn2_uops_q[w]);
            mt_lreg[3*w+2] = rn2_uops_q[w].ldst;

            fl_alloc_en[w] = dis_fire[w] && rn2_mask[w] && needs_pdst(rn2_uops_q[w]) && !kill && !rollback;

            mt_write_en[w] = fl_alloc_en[w];
            mt_write_lreg[w] = rn2_uops_q[w].ldst;
            mt_write_preg[w] = fl_alloc_preg[w];

            br_snapshot_en[w] = dis_fire[w] && rn2_mask_q[w] && rn2_uops_q[w].allocate_brtag && !kill && !rollback;
            br_snapshot_tag[w] = rn2_uops_q[w].br_tag;

            bt_read_en[3*w+0] = 1'b1;
            bt_read_preg[3*w+0] = mt_preg[3*w+0];
            bt_read_en[3*w+1] = 1'b1;
            bt_read_preg[3*w+1] = mt_preg[3*w+1];

            bt_write_en[w] = fl_alloc_en[w];
            bt_write_preg[w] = fl_alloc_preg[w];

            rn2_uops[w].prs1 = mt_preg[3*w+0];
            rn2_uops[w].prs2 = mt_preg[3*w+1];
            rn2_uops[w].pdst = needs_pdst(rn2_uops_q[w]) ? fl_alloc_preg[w] : '0;
            rn2_uops[w].stale_pdst = mt_preg[3*w+2];
            rn2_uops[w].prs1_busy = rn2_uops_q[w].lrs1_rtype == RT_FIX ? bt_busy[3*w+0] : 1'b0;
            rn2_uops[w].prs2_busy = rn2_uops_q[w].lrs2_rtype == RT_FIX ? bt_busy[3*w+1] : 1'b0;
            rn2_mask[w] = 1'b1;
        end
    
        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(commit_valids[w] && (commit_uops[w].ldst != '0) && (commit_uops[w].dst_rtype != RT_X)) begin
                mt_commit_en[w] = 1'b1;
                mt_commit_lreg[w] = commit_uops[w].ldst;
                mt_commit_preg[w] = commit_uops[w].pdst;

                fl_free_en[w] = (commit_uops[w].stale_pdst != '0);
                fl_free_preg[w] = commit_uops[w].stale_pdst;
            end
        end
    end

    always_comb begin
        rn2_mask_next = rn2_mask_q;
        rn2_uops_next = rn2_uops_q;
        if(dis_ready) begin
            rn2_mask_next = dec_fire;
            rn2_uops_next = dec_uops;
        end else begin
            rn2_mask_next = rn2_mask & ~dis_fire;
        end

        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(|(rn2_uops_next[w].br_mask & brupdate.b1.mispredict_mask)) rn2_mask_next[w] = 1'b0;

            rn2_uops_next[w].br_mask &= ~brupdate.b1.resolve_mask;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            rn2_mask_q <= '0;
            rn2_uops_q <= '0;
        end else if(kill || rollback) begin
            rn2_mask_q <= '0;
            rn2_uops_q <= '0;
        end else begin
            rn2_mask_q <= rn2_mask_next;
            rn2_uops_q <= rn2_uops_next;
        end
    end
    // Stall is a resource condition; the caller combines it with instruction
    // valid to form fire. Keeping it independent avoids a ready/fire loop.
    assign rn_stalls = {CORE_WIDTH{alloc_need > fl_free_count}};
endmodule
