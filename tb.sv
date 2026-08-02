`timescale 1ns / 1ps

module tb;
    import loom_params::*;
    import loom_consts::*;
    import loom_types::*;

    logic clk;
    logic rst_n;

    // ── 前端 ──
    logic [FETCH_WIDTH-1:0]         fe_valid;
    logic [FETCH_WIDTH-1:0][31:0]   fe_insts;
    logic                           fe_ready;

    // ── 测试存储器 ──
    logic                           dmem_req_valid;
    logic                           dmem_req_ready;
    logic                           dmem_req_is_store;
    logic [31:0]                    dmem_req_addr;
    logic [31:0]                    dmem_req_data;
    logic [3:0]                     dmem_req_mask;
    logic [1:0]                     dmem_req_size;
    logic [LSU_ADDR_SZ+1:0]         dmem_req_idx;
    uop_t                           dmem_req_uop;
    logic                           dmem_resp_valid;
    logic                           dmem_resp_is_store;
    logic [31:0]                    dmem_resp_data;
    logic [LSU_ADDR_SZ+1:0]         dmem_resp_idx;

    // ── CSR stub ──
    logic                           csr_req_valid;
    logic [13:0]                    csr_addr;
    logic [1:0]                     csr_cmd;
    logic [31:0]                    csr_wdata;
    logic [31:0]                    csr_rdata;

    // ── 提交 ──
    commit_signal_t                 commit;

    // ── 调试 ──
    logic                           rob_empty;
    logic [31:0]                    debug_pc;

    // ================================================================
    // DUT
    // ================================================================
    loom_core dut (
        .clk(clk), .rst_n(rst_n),
        .fe_valid, .fe_insts, .fe_pcs('0),
        .fe_ftq_idx('0), .fe_predicted_taken('0), .fe_ready,
        .fe_redirect_valid(), .fe_redirect_pc(),
        .dmem_req_valid, .dmem_req_ready, .dmem_req_is_store,
        .dmem_req_addr, .dmem_req_data, .dmem_req_mask,
        .dmem_req_size, .dmem_req_idx, .dmem_req_uop,
        .dmem_resp_valid, .dmem_resp_is_store,
        .dmem_resp_data, .dmem_resp_idx,
        .csr_req_valid, .csr_addr, .csr_cmd, .csr_wdata, .csr_rdata,
        .csr_xcpt_target('0), .csr_ertn_target('0),
        .commit,
        .rob_empty, .debug_pc
    );

    // ================================================================
    // 时钟
    // ================================================================
    initial clk = 0;
    always #5 clk = ~clk;   // 100 MHz

    // ================================================================
    // 复位
    // ================================================================
    initial begin
        rst_n = 0;
        fe_valid = '0;
        fe_insts = '0;
        dmem_req_ready = 1'b1;
        dmem_resp_valid = 1'b0;
        dmem_resp_is_store = 1'b0;
        dmem_resp_data = '0;
        dmem_resp_idx = '0;
        csr_rdata = '0;
        repeat (10) @(posedge clk);
        rst_n = 1;
        repeat (5) @(posedge clk);
        $display("[TB] Reset done, starting test");
    end

    // ================================================================
    // 简易指令存储器：LA32 指令 hex
    // 用户填入自己的指令编码
    // ================================================================
    localparam int PROG_SIZE = 16;
    logic [31:0] prog_mem [0:PROG_SIZE-1];

    initial begin
        // ── 程序：来自 test.s 反汇编的真实 LA32 指令 ──
        // addi.w $r12, $r0, -1   = 0x02bffc0c
        // addi.w $r13, $r13, 1   = 0x028005ad
        // add.w  $r25, $r0, $r0  = 0x00100019  (r25 = 0)
        // add.w  $r15, $r17, $r18= 0x00104a2f  (r15 = r17 + r18)
        // lu12i.w $r12, -524288  = 0x1500000c
        // andi   $r0, $r0, 0x0   = 0x03400000  (NOP)
        // ori    $r12, $r0, 0x1  = 0x0380040c
        // b      28               = 0x50001c00
        // syscall 0x11            = 0x002b0011
        prog_mem[0]  = 32'h03400000;  // andi r0, r0, 0 → NOP (warmup)
        prog_mem[1]  = 32'h028005ad;  // addi.w r13, r13, 1
        prog_mem[2]  = 32'h028005ad;  // addi.w r13, r13, 1
        prog_mem[3]  = 32'h00100019;  // add.w r25, r0, r0
        prog_mem[4]  = 32'h0380040c;  // ori r12, r0, 0x1
        prog_mem[5]  = 32'h03400000;  // NOP
        prog_mem[6]  = 32'h03400000;  // NOP
        prog_mem[7]  = 32'h03400000;  // NOP
        prog_mem[8]  = 32'h03400000;  // NOP
        prog_mem[9]  = 32'h03400000;  // NOP
        prog_mem[10] = 32'h03400000;  // NOP
        prog_mem[11] = 32'h03400000;  // NOP
        prog_mem[12] = 32'h03400000;  // NOP
        prog_mem[13] = 32'h03400000;  // NOP
        prog_mem[14] = 32'h03400000;  // NOP
        prog_mem[15] = 32'h03400000;  // NOP
    end

    // ================================================================
    // 前端：逐条喂指令
    // ================================================================
    int pc;
    initial begin
        pc = 0;
        @(posedge rst_n);         // 等复位释放
        repeat (2) @(posedge clk);

        while (pc < PROG_SIZE) begin
            @(posedge clk);
            if (fe_ready) begin
                fe_valid[0] <= 1'b1;
                fe_insts[0] <= prog_mem[pc];
                pc <= pc + 1;
                $display("[TB] Feed inst[%0d] = 0x%08h", pc, prog_mem[pc]);
            end else begin
                fe_valid[0] <= 1'b0;
            end
        end
        fe_valid[0] <= 1'b0;
    end

    // ================================================================
    // 测试存储器：请求握手后一拍返回，load 返回固定数据，store 返回 ack。
    // ================================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            dmem_resp_valid <= 1'b0;
            dmem_resp_is_store <= 1'b0;
            dmem_resp_data <= '0;
            dmem_resp_idx <= '0;
        end else begin
            dmem_resp_valid <= 1'b0;
            if (dmem_req_valid && dmem_req_ready) begin
                dmem_resp_valid <= 1'b1;
                dmem_resp_is_store <= dmem_req_is_store;
                dmem_resp_data <= dmem_req_is_store ?
                                  32'b0 : 32'hDEAD_BEEF;
                dmem_resp_idx <= dmem_req_idx;
                $display("[DMEM] %s addr=0x%08h data=0x%08h mask=0x%h",
                         dmem_req_is_store ? "store" : "load",
                         dmem_req_addr, dmem_req_data, dmem_req_mask);
            end
        end
    end

    // ================================================================
    // CSR stub：读返回 0，写不报错
    // ================================================================
    always_comb begin
        if (csr_req_valid) begin
            csr_rdata = 32'h0000_0000;
        end else begin
            csr_rdata = 32'h0000_0000;
        end
    end

    // ================================================================
    // 提交监控
    // ================================================================
    int commit_cnt;
    initial commit_cnt = 0;

    always_ff @(posedge clk) begin
        if (rst_n) begin
            for (int w = 0; w < CORE_WIDTH; w++) begin
                if (commit.arch_valids[w]) begin
                    commit_cnt <= commit_cnt + 1;
                    $display("[COMMIT] cnt=%0d  rob_idx=%0d  ldst=x%d  data=0x%08h  pc_lob=%0d",
                             commit_cnt,
                             commit.uops[w].rob_idx,
                             commit.uops[w].ldst,
                             commit.debug_wdata[w],
                             commit.uops[w].pc_lob);
                end
            end
        end
    end

    // ================================================================
    // 超时保护
    // ================================================================
    initial begin
        #1000000;   // 1 ms
        $display("[TB] TIMEOUT — pipeline hung");
        $finish;
    end

    // ================================================================
    // 完成检测：rob_empty && 最后一条指令已提交
    // ================================================================
    initial begin
        wait (rst_n);
        wait (commit_cnt >= PROG_SIZE && rob_empty);
        repeat (10) @(posedge clk);
        $display("[TB] All %0d instructions committed, ROB empty — PASS", commit_cnt);
        $finish;
    end

    // ================================================================
    // 波形输出（用你习惯的仿真器）
    // ================================================================
    initial begin
        $dumpfile("tb.vcd");
        $dumpvars(0, tb);
    end

endmodule
