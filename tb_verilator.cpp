#include "Vboom_core.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdint>

static constexpr int CORE_WIDTH = 2;

static Vboom_core* top;
static VerilatedVcdC* tfp;
static vluint64_t sim_time = 0;

static uint32_t prog_mem[] = {
    0x03400000,  // NOP (warmup)
    0x028005ad,  // addi.w r13, r13, 1
    0x028005ad,  // addi.w r13, r13, 1
    0x00100019,  // add.w r25, r0, r0
    0x0380040c,  // ori r12, r0, 0x1
    0x03400000,  // NOP
    0x0010018c,  // add.w r12, r12, r0
    0x03400000,  // NOP
};
static const int PROG_SIZE = sizeof(prog_mem) / sizeof(prog_mem[0]);

double sc_time_stamp() { return (double)sim_time; }

void tick() {
    top->clk = 0; top->eval(); tfp->dump(sim_time++);
    top->clk = 1; top->eval(); tfp->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    top = new Vboom_core;

    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb.vcd");

    // init
    top->clk   = 0;
    top->rst_n = 0;
    top->fe_valid = 0;
    top->fe_insts[0] = 0;
    top->fe_insts[1] = 0;
    top->lsu_resp_valid = 0;
    top->csr_rdata = 0;

    // reset
    for (int i = 0; i < 10; i++) tick();
    top->rst_n = 1;
    printf("[TB] Reset done @ %lu\n", (unsigned long)sim_time);

    // Frontend packets are kept stable until the scalar ready is asserted.
    int pc = 0;
    auto load_packet = [&]() {
        top->fe_valid = 0;
        for (int lane = 0; lane < CORE_WIDTH; lane++) {
            top->fe_insts[lane] = 0;
            if (pc + lane < PROG_SIZE) {
                top->fe_valid |= 1U << lane;
                top->fe_insts[lane] = prog_mem[pc + lane];
            }
        }
    };
    load_packet();

    int last_good = 0;
    int commit_count = 0;
    uint32_t arch_regs[32] = {};
    bool passed = false;
    bool saw_dual_dispatch = false;
    bool saw_dual_commit = false;
    for (int cycle = 0; cycle < 50000; cycle++) {
        tick();

        if (top->dis_fire_dbg == 0x3)
            saw_dual_dispatch = true;

        // Frontend
        if (top->fe_ready) {
            int accepted = 0;
            for (int lane = 0; lane < CORE_WIDTH; lane++) {
                if (top->fe_valid & (1U << lane)) {
                    printf("[%5d] Feed lane%d inst[%d] = 0x%08x\n",
                           cycle, lane, pc + lane, prog_mem[pc + lane]);
                    accepted++;
                }
            }
            pc += accepted;
            load_packet();
            last_good = cycle;
        }

        // LSU stub: 同周期返回
        top->lsu_resp_valid = top->lsu_agen_valid;

        // 提交监控
        if (top->rf_wr_en_dbg) {
            printf("[%5d] REGWR: r%d pdst=%d data=%d rs1=%d imm=%d imm_p=%x imm_s=%d\n", cycle,
                   top->rf_wr_ldst_dbg, top->rf_wr_pdst_dbg, top->rf_wr_data_dbg,
                   top->alu_rs1_dbg, top->alu_imm_dbg,
                   top->alu_imm_packed_dbg, top->alu_imm_sel_dbg);
            if (top->rf_wr_ldst_dbg != 0)
                arch_regs[top->rf_wr_ldst_dbg] = top->rf_wr_data_dbg;
        }
        if (top->commit_valids_dbg) {
            int committed = __builtin_popcount(
                static_cast<unsigned>(top->commit_valids_dbg));
            printf("[%5d] COMMIT: mask=0x%x r%d\n",
                   cycle, top->commit_valids_dbg, top->commit_ldst_dbg);
            commit_count += committed;
            if (committed == CORE_WIDTH)
                saw_dual_commit = true;
        }

        // DEBUG: 每 100 拍打印流水线状态
        if (cycle % 100 == 0) {
            printf("[%5d] DEBUG: fe_ready=%d rob_empty=%d rob_ready=%d ren_stalls=%d rn2_mask=%d dis_fire=%d alu_iss=%d alu_res=%d rob_wb=%d\n",
                   cycle,
                   top->fe_ready,
                   top->rob_empty,
                   top->rob_ready_dbg,
                   top->ren_stalls_dbg,
                   top->rn2_mask_dbg,
                   top->dis_fire_dbg,
                   top->alu_iss_valid_dbg,
                   top->alu_res_valid_dbg,
                   top->rob_wb_valid_dbg);
        }

        // 检测死锁
        if (cycle - last_good > 1000 && pc >= PROG_SIZE) {
            printf("[%5d] Pipeline idle for 1000 cycles — stopping\n", cycle);
            break;
        }

        if (top->rob_empty && pc >= PROG_SIZE) {
            passed = commit_count == PROG_SIZE &&
                     saw_dual_dispatch &&
                     saw_dual_commit &&
                     arch_regs[13] == 2 &&
                     arch_regs[25] == 0 &&
                     arch_regs[12] == 1;
            printf("[%5d] ROB empty: commits=%d dual_dis=%d dual_com=%d "
                   "r13=%u r25=%u r12=%u — %s\n",
                   cycle, commit_count, saw_dual_dispatch, saw_dual_commit,
                   arch_regs[13], arch_regs[25],
                   arch_regs[12], passed ? "PASS" : "FAIL");
            for (int k = 0; k < 10; k++) tick();
            break;
        }
    }

    printf("[TB] Sim complete @ %lu\n", (unsigned long)sim_time);
    tfp->close();
    delete top;
    delete tfp;
    return passed ? 0 : 1;
}
