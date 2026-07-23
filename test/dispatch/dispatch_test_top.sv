import loom_params::*;
import loom_consts::*;
import loom_types::*;

module dispatch_test_top (
    input  logic [1:0] rn2_mask,
    input  logic [3:0] iq_type_0,
    input  logic [3:0] iq_type_1,
    input  logic [5:0] rob_idx_0,
    input  logic [5:0] rob_idx_1,
    input  logic       iq_mem_ready,
    input  logic       iq_alu_ready,
    input  logic       iq_unq_ready,

    output logic       iq_mem_dis_valid,
    output logic [5:0] iq_mem_rob_idx,
    output logic       iq_alu_dis_valid,
    output logic [5:0] iq_alu_rob_idx,
    output logic       iq_unq_dis_valid,
    output logic [5:0] iq_unq_rob_idx,
    output logic       dis_ready,
    output logic [1:0] dis_fire,
    output logic [5:0] dis_uop_rob_idx_0,
    output logic [5:0] dis_uop_rob_idx_1
);
    uop_t [1:0] rn2_uops;
    uop_t iq_mem_dis_uop;
    uop_t iq_alu_dis_uop;
    uop_t iq_unq_dis_uop;
    uop_t [1:0] dis_uops;

    always_comb begin
        rn2_uops = '0;
        rn2_uops[0].iq_type = iq_type_0;
        rn2_uops[0].rob_idx = rob_idx_0;
        rn2_uops[1].iq_type = iq_type_1;
        rn2_uops[1].rob_idx = rob_idx_1;
    end

    dispatch #(.CORE_WIDTH(2)) dut (
        .rn2_mask,
        .rn2_uops,
        .iq_mem_ready,
        .iq_alu_ready,
        .iq_unq_ready,
        .iq_mem_dis_valid,
        .iq_mem_dis_uop,
        .iq_alu_dis_valid,
        .iq_alu_dis_uop,
        .iq_unq_dis_valid,
        .iq_unq_dis_uop,
        .dis_ready,
        .dis_fire,
        .dis_uops
    );

    assign iq_mem_rob_idx = iq_mem_dis_uop.rob_idx;
    assign iq_alu_rob_idx = iq_alu_dis_uop.rob_idx;
    assign iq_unq_rob_idx = iq_unq_dis_uop.rob_idx;
    assign dis_uop_rob_idx_0 = dis_uops[0].rob_idx;
    assign dis_uop_rob_idx_1 = dis_uops[1].rob_idx;
endmodule
