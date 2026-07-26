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
    output logic        dmem_outstanding
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
    assign dmem_outstanding = dut.dmem_outstanding_q;
endmodule
