import loom_params::*;
import loom_consts::*;
import loom_types::*;

module br_mask #(
    parameter int CORE_WIDTH = 2,
    parameter int MAX_BR_COUNT = 4
)(
    input logic clk,
    input logic rst_n,

    input logic [CORE_WIDTH-1:0] is_branch,
    input logic [CORE_WIDTH-1:0] will_fire,
    output logic [CORE_WIDTH-1:0] [$clog2(MAX_BR_COUNT)-1:0] br_tag,
    output logic [CORE_WIDTH-1:0] [MAX_BR_COUNT-1:0] br_mask,
    output logic [CORE_WIDTH-1:0] is_full,

    input br_update_info_t brupdate,
    input logic flush_pipeline
);

    localparam int BR_TAG_SZ = $clog2(MAX_BR_COUNT);

    logic [MAX_BR_COUNT-1:0] br_mask_q;

    logic [CORE_WIDTH-1:0] [BR_TAG_SZ-1:0] alloc_tag;
    logic [CORE_WIDTH-1:0] [MAX_BR_COUNT-1:0] alloc_mask;
    logic [MAX_BR_COUNT-1:0] allocate_accum;

    always_comb begin
        allocate_accum = br_mask_q;

        for(int w = 0; w < CORE_WIDTH; w++) begin
            alloc_tag[w] = '0;
            alloc_mask[w] = '0;
            for(int i = MAX_BR_COUNT-1; i >=0; i--) begin
                if(!allocate_accum[i]) begin
                    alloc_tag[w] = BR_TAG_SZ'(i);
                    alloc_mask[w] = (1 << i);
                    break;
                end
            end

            is_full[w] = (allocate_accum == {MAX_BR_COUNT{1'b1}} && is_branch[w]);

            if(is_branch[w]) allocate_accum |= alloc_mask[w];
        end
    end

    assign br_tag = alloc_tag;

    logic [MAX_BR_COUNT-1:0] resolved_mask;
    assign resolved_mask = br_mask_q & ~brupdate.b1.resolve_mask;

    logic [MAX_BR_COUNT-1:0] curr_mask;
    always_comb begin
        curr_mask = resolved_mask;
        for(int w = 0; w < CORE_WIDTH; w++) begin
            br_mask[w] = curr_mask;

            if(will_fire[w]) curr_mask |= alloc_mask[w];
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) br_mask_q <= '0;
        else if(flush_pipeline) br_mask_q <= '0;
        else begin
            if(brupdate.b2.mispredict) br_mask_q <= brupdate.b2.uop.br_mask & ~brupdate.b1.resolve_mask;
            else br_mask_q <= curr_mask;
        end
    end
endmodule