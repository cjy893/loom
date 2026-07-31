#include "Vras_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kEntries = 32;

void clear_inputs(Vras_test_top* dut) {
    dut->write_valid  = 0;
    dut->write_idx    = 0;
    dut->write_addr   = 0;
    dut->read_idx     = 0;
    dut->repair_valid = 0;
    dut->repair_idx   = 0;
    dut->repair_addr  = 0;
}

uint32_t read_ras(Vras_test_top* dut, int idx) {
    dut->read_idx = idx;
    dut->eval();
    return dut->read_addr;
}

void do_write(Vras_test_top* dut, int idx, uint32_t addr) {
    dut->write_valid = 1;
    dut->write_idx   = idx;
    dut->write_addr  = addr;
    eval_cycle(dut);
    dut->write_valid = 0;
}

void do_repair(Vras_test_top* dut, int idx, uint32_t addr) {
    dut->repair_valid = 1;
    dut->repair_idx   = idx;
    dut->repair_addr  = addr;
    eval_cycle(dut);
    dut->repair_valid = 0;
}

// ============================================================
// 测试
// ============================================================

void test_reset(Vras_test_top* dut) {
    expect_eq("reset: read 0", read_ras(dut, 0), 0U);
    expect_eq("reset: read 15", read_ras(dut, 15), 0U);
}

void test_write_read(Vras_test_top* dut) {
    do_write(dut, 3, 0x1c008000);
    expect_eq("wr: idx 3", read_ras(dut, 3), 0x1c008000U);
    // 其他 idx 不变
    expect_eq("wr: idx 0 unchanged", read_ras(dut, 0), 0U);
}

void test_multiple_writes(Vras_test_top* dut) {
    do_write(dut, 0, 0xaaaa0000);
    do_write(dut, 1, 0xbbbb0000);
    do_write(dut, 31, 0xcccc0000);

    expect_eq("multi: idx 0",  read_ras(dut, 0),  0xaaaa0000U);
    expect_eq("multi: idx 1",  read_ras(dut, 1),  0xbbbb0000U);
    expect_eq("multi: idx 31", read_ras(dut, 31), 0xcccc0000U);
}

void test_overwrite(Vras_test_top* dut) {
    do_write(dut, 5, 0x11110000);
    do_write(dut, 5, 0x22220000);
    expect_eq("overwrite: latest", read_ras(dut, 5), 0x22220000U);
}

void test_repair(Vras_test_top* dut) {
    do_write(dut, 7, 0xdeadbeef);
    do_repair(dut, 7, 0xcafebabe);
    expect_eq("repair: overwrites", read_ras(dut, 7), 0xcafebabeU);
}

void test_repair_no_write(Vras_test_top* dut) {
    // repair 不需要先 write
    do_repair(dut, 10, 0xf00d0000);
    expect_eq("repair_only", read_ras(dut, 10), 0xf00d0000U);
}

void test_combinational_read(Vras_test_top* dut) {
    // 写后下一拍, 组合读立即看到
    do_write(dut, 2, 0xabcd0000);
    eval_cycle(dut);  // 过一个空拍
    expect_eq("comb: next cycle", read_ras(dut, 2), 0xabcd0000U);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vras_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    test_reset(dut);
    test_write_read(dut);
    test_multiple_writes(dut);
    test_overwrite(dut);
    test_repair(dut);
    test_repair_no_write(dut);
    test_combinational_read(dut);

    pass("ras");
    delete dut;
    return 0;
}
