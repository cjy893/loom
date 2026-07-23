import loom_params::*;
import loom_consts::*;
import loom_types::*;

module br_mask_test_top (
    input  logic       clk,
    input  logic       rst_n,
    input  logic [1:0] is_branch,
    input  logic [1:0] will_fire,
    input  logic [3:0] resolve_mask,
    input  logic [3:0] mispredict_mask,
    input  logic       mispredict,
    input  logic [3:0] mispredict_uop_mask,
    input  logic       flush_pipeline,

    output logic [1:0] br_tag_0,
    output logic [1:0] br_tag_1,
    output logic [3:0] br_mask_0,
    output logic [3:0] br_mask_1,
    output logic [1:0] is_full
);
    logic [1:0][1:0] br_tag;
    logic [1:0][3:0] br_mask;
    br_update_info_t brupdate;

    always_comb begin
        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = mispredict;
        brupdate.b2.uop.br_mask = mispredict_uop_mask;
    end

    br_mask #(
        .CORE_WIDTH(2),
        .MAX_BR_COUNT(4)
    ) dut (
        .clk,
        .rst_n,
        .is_branch,
        .will_fire,
        .br_tag,
        .br_mask,
        .is_full,
        .brupdate,
        .flush_pipeline
    );

    assign br_tag_0 = br_tag[0];
    assign br_tag_1 = br_tag[1];
    assign br_mask_0 = br_mask[0];
    assign br_mask_1 = br_mask[1];
endmodule
