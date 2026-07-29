import loom_params::*;
import loom_consts::*;
import loom_types::*;

module dispatch_test_top (
    input  logic [1:0] rn2_mask,
    input  logic [3:0] iq_type_0,
    input  logic [3:0] iq_type_1,
    input  logic [5:0] rob_idx_0,
    input  logic [5:0] rob_idx_1,
    input  logic       exception_0,
    input  logic       exception_1,
    input  logic       dispatch_enable,
    input  logic [1:0] lane_ready,
    input  logic [1:0] iq_mem_ready,
    input  logic [1:0] iq_alu_ready,
    input  logic [1:0] iq_unq_ready,

    output logic [1:0] iq_mem_dis_valid,
    output logic [5:0] iq_mem_rob_idx_0,
    output logic [5:0] iq_mem_rob_idx_1,
    output logic [1:0] iq_alu_dis_valid,
    output logic [5:0] iq_alu_rob_idx_0,
    output logic [5:0] iq_alu_rob_idx_1,
    output logic [1:0] iq_unq_dis_valid,
    output logic [5:0] iq_unq_rob_idx_0,
    output logic [5:0] iq_unq_rob_idx_1,
    output logic       dis_ready,
    output logic [1:0] dis_fire,
    output logic [5:0] dis_uop_rob_idx_0,
    output logic [5:0] dis_uop_rob_idx_1
);
    uop_t [1:0] rn2_uops;
    uop_t [1:0] iq_mem_dis_uop;
    uop_t [1:0] iq_alu_dis_uop;
    uop_t [1:0] iq_unq_dis_uop;
    uop_t [1:0] dis_uops;
    logic [1:0][3:0] rn2_iq_type;
    logic [1:0] rn2_exception;

    always_comb begin
        rn2_uops = '0;
        rn2_iq_type = '0;
        rn2_exception = '0;
        rn2_uops[0].iq_type = iq_type_0;
        rn2_uops[0].rob_idx = rob_idx_0;
        rn2_uops[0].exception = exception_0;
        rn2_iq_type[0] = iq_type_0;
        rn2_exception[0] = exception_0;
        rn2_uops[1].iq_type = iq_type_1;
        rn2_uops[1].rob_idx = rob_idx_1;
        rn2_uops[1].exception = exception_1;
        rn2_iq_type[1] = iq_type_1;
        rn2_exception[1] = exception_1;
    end

    dispatch #(.CORE_WIDTH(2)) dut (
        .rn2_mask,
        .rn2_uops,
        .dispatch_enable,
        .lane_ready,
        .rn2_iq_type,
        .rn2_exception,
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

    assign iq_mem_rob_idx_0 = iq_mem_dis_uop[0].rob_idx;
    assign iq_mem_rob_idx_1 = iq_mem_dis_uop[1].rob_idx;
    assign iq_alu_rob_idx_0 = iq_alu_dis_uop[0].rob_idx;
    assign iq_alu_rob_idx_1 = iq_alu_dis_uop[1].rob_idx;
    assign iq_unq_rob_idx_0 = iq_unq_dis_uop[0].rob_idx;
    assign iq_unq_rob_idx_1 = iq_unq_dis_uop[1].rob_idx;
    assign dis_uop_rob_idx_0 = dis_uops[0].rob_idx;
    assign dis_uop_rob_idx_1 = dis_uops[1].rob_idx;
endmodule
