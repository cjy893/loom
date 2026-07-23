#include "Vregfile_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

static void clear_inputs(Vregfile_test_top* dut) {
    dut->clk = 0;
    dut->read_en = 7;
    dut->read_addr_0 = 0;
    dut->read_addr_1 = 0;
    dut->read_addr_2 = 0;
    dut->write_en = 0;
    dut->write_addr_0 = 0;
    dut->write_addr_1 = 0;
    dut->write_data_0 = 0;
    dut->write_data_1 = 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vregfile_test_top;
    clear_inputs(dut);
    dut->eval();

    dut->write_en = 3;
    dut->write_addr_0 = 1;
    dut->write_addr_1 = 2;
    dut->write_data_0 = 0x11111111;
    dut->write_data_1 = 0x22222222;
    dut->read_addr_0 = 1;
    dut->read_addr_1 = 2;
    dut->eval();
    expect_eq("write port 0 bypass", dut->read_data_0, 0x11111111);
    expect_eq("write port 1 bypass", dut->read_data_1, 0x22222222);
    eval_cycle(dut);
    dut->write_en = 0;
    dut->eval();
    expect_eq("write port 0 stored", dut->read_data_0, 0x11111111);
    expect_eq("write port 1 stored", dut->read_data_1, 0x22222222);

    dut->write_en = 1;
    dut->write_addr_0 = 0;
    dut->write_data_0 = 0xffffffff;
    dut->read_addr_0 = 0;
    dut->eval();
    expect_eq("p0 bypass stays zero", dut->read_data_0, 0);
    eval_cycle(dut);
    dut->write_en = 0;
    dut->eval();
    expect_eq("p0 stored value stays zero", dut->read_data_0, 0);

    dut->write_en = 3;
    dut->write_addr_0 = 3;
    dut->write_addr_1 = 3;
    dut->write_data_0 = 0xaaaaaaaa;
    dut->write_data_1 = 0x55555555;
    dut->read_addr_0 = 3;
    dut->eval();
    expect_eq("higher write port wins bypass conflict", dut->read_data_0, 0x55555555);
    eval_cycle(dut);
    dut->write_en = 0;
    dut->eval();
    expect_eq("higher write port wins stored conflict", dut->read_data_0, 0x55555555);

    dut->read_addr_0 = 1;
    dut->read_addr_1 = 2;
    dut->read_addr_2 = 3;
    dut->eval();
    expect_eq("three simultaneous reads port 0", dut->read_data_0, 0x11111111);
    expect_eq("three simultaneous reads port 1", dut->read_data_1, 0x22222222);
    expect_eq("three simultaneous reads port 2", dut->read_data_2, 0x55555555);

    pass("regfile");
    delete dut;
    return 0;
}
