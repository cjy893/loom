import loom_params::*;
import loom_consts::*;
import loom_types::*;

module rob_test_top (
    input  logic clk,
    input  logic rst_n,

    input  logic [1:0] enq_valid,
    input  logic [5:0] enq_rob_idx_0,
    input  logic [5:0] enq_rob_idx_1,
    input  logic [4:0] enq_ldst_0,
    input  logic [4:0] enq_ldst_1,
    input  logic       enq_busy_0,
    input  logic       enq_busy_1,

    input  logic [1:0] wb_valid,
    input  logic [5:0] wb_rob_idx_0,
    input  logic [5:0] wb_rob_idx_1,

    input  logic [1:0] lsu_clr_bsy_valid,
    input  logic [2:0] lsu_clr_bsy_addr_0,
    input  logic [2:0] lsu_clr_bsy_addr_1,

    output logic [5:0] tail_idx,
    output logic [5:0] head_idx,
    output logic       ready,
    output logic       empty,
    output logic [1:0] commit_valid,
    output logic [4:0] commit_ldst_0,
    output logic [4:0] commit_ldst_1
);
    uop_t [1:0] enq_uops;
    exe_unit_resp_t [1:0] wb_resps;
    logic [1:0][2:0] lsu_clr_bsy_addr;
    commit_signal_t commit;
    br_update_info_t brupdate;

    always_comb begin
        enq_uops = '0;
        enq_uops[0].rob_idx = enq_rob_idx_0;
        enq_uops[0].ldst = enq_ldst_0;
        enq_uops[0].starts_bsy = enq_busy_0;
        enq_uops[0].dst_rtype = RT_FIX;
        enq_uops[1].rob_idx = enq_rob_idx_1;
        enq_uops[1].ldst = enq_ldst_1;
        enq_uops[1].starts_bsy = enq_busy_1;
        enq_uops[1].dst_rtype = RT_FIX;

        wb_resps = '0;
        wb_resps[0].valid = wb_valid[0];
        wb_resps[0].uop.rob_idx = wb_rob_idx_0;
        wb_resps[1].valid = wb_valid[1];
        wb_resps[1].uop.rob_idx = wb_rob_idx_1;
        lsu_clr_bsy_addr[0] = lsu_clr_bsy_addr_0;
        lsu_clr_bsy_addr[1] = lsu_clr_bsy_addr_1;
        brupdate = '0;
    end

    rob #(
        .NUM_ENTRIES(8),
        .CORE_WIDTH(2),
        .NUM_ROWS(4),
        .ROB_ADDR_SZ(3),
        .NUM_WAKEUP_PORTS(2)
    ) dut (
        .clk,
        .rst_n,
        .enq_valids(enq_valid),
        .enq_uops,
        .enq_partial_stall(1'b0),
        .rob_tail_idx(tail_idx),
        .wb_resps,
        .lsu_clr_bsy_valid,
        .lsu_clr_bsy_addr,
        .brupdate,
        .lxcpt('0),
        .csr_replay('0),
        .csr_stall(1'b0),
        .commit,
        .com_xcpt(),
        .flush(),
        .empty,
        .ready,
        .rollback(),
        .flush_frontend(),
        .rob_head_idx(head_idx),
        .rob_pnr_idx()
    );

    assign commit_valid = commit.valids;
    assign commit_ldst_0 = commit.uops[0].ldst;
    assign commit_ldst_1 = commit.uops[1].ldst;
endmodule
