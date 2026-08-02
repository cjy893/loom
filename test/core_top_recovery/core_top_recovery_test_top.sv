import loom_params::*;
import loom_types::*;

module core_top_recovery_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic [7:0]                   intrpt,

    output logic [3:0]                   arid,
    output logic [31:0]                  araddr,
    output logic [3:0]                   arlen,
    output logic [2:0]                   arsize,
    output logic [1:0]                   arburst,
    output logic [1:0]                   arlock,
    output logic [3:0]                   arcache,
    output logic [2:0]                   arprot,
    output logic                         arvalid,
    input  logic                         arready,

    input  logic [3:0]                   rid,
    input  logic [31:0]                  rdata,
    input  logic [1:0]                   rresp,
    input  logic                         rlast,
    input  logic                         rvalid,
    output logic                         rready,

    output logic [3:0]                   awid,
    output logic [31:0]                  awaddr,
    output logic [3:0]                   awlen,
    output logic [2:0]                   awsize,
    output logic [1:0]                   awburst,
    output logic [1:0]                   awlock,
    output logic [3:0]                   awcache,
    output logic [2:0]                   awprot,
    output logic                         awvalid,
    input  logic                         awready,

    output logic [3:0]                   wid,
    output logic [31:0]                  wdata,
    output logic [3:0]                   wstrb,
    output logic                         wlast,
    output logic                         wvalid,
    input  logic                         wready,

    input  logic [3:0]                   bid,
    input  logic [1:0]                   bresp,
    input  logic                         bvalid,
    output logic                         bready,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][4:0]              commit_ldst,
    output logic [1:0][ROB_ADDR_SZ-1:0]  commit_rob_idx,
    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic                         frontend_flush_valid,
    output logic                         exception_valid,
    output logic [31:0]                  exception_pc,
    output logic [5:0]                   exception_cause,
    output logic                         rob_empty,
    output logic [4:0]                   fetch_buffer_count,
    output logic [4:0]                   ftq_valid_count,
    output logic                         ghist_nonzero,
    output logic [1:0]                   axi_read_state,
    output logic                         dmem_outstanding
);
    commit_signal_t core_commit;

    core_top #(
        .ENABLE_SINGLE_DEBUG_COMMIT(1'b0)
    ) dut (
        .aclk(clk),
        .aresetn(rst_n),
        .intrpt,
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

    assign core_commit = dut.core_commit;

    always_comb begin
        commit_valid = core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_ldst = '0;
        commit_rob_idx = '0;

        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] = core_commit.uops[lane].pc[31:0];
            commit_inst[lane] = core_commit.uops[lane].inst;
            commit_ldst[lane] = core_commit.uops[lane].ldst;
            commit_rob_idx[lane] = core_commit.uops[lane].rob_idx;
        end
    end

    assign redirect_valid = dut.core_redirect_valid;
    assign redirect_pc = dut.core_redirect_pc;
    assign frontend_flush_valid = dut.core_frontend_flush_valid;
    assign exception_valid = dut.core_inst.rob_com_xcpt_w.valid;
    assign exception_pc = dut.core_inst.rob_com_xcpt_w.pc;
    assign exception_cause = dut.core_inst.rob_com_xcpt_w.cause;
    assign rob_empty = dut.core_inst.rob_empty;
    assign fetch_buffer_count = dut.fetch_buffer_inst.count_q;
    assign ftq_valid_count =
        5'($countones(dut.ifu_inst.ftq_inst.entry_valid_q));
    assign ghist_nonzero = dut.ifu_inst.current_ghist != '0;
    assign axi_read_state = dut.read_state_q;
    assign dmem_outstanding =
        rst_n && !dut.dmem_req_ready && !dut.dmem_resp_valid;
endmodule
