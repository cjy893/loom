import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ifu #(
    parameter int FETCH_WIDTH = 4,
    parameter int EXEC_QUERY_WIDTH = ALU_WIDTH,
    parameter logic [31:0] RESET_PC = 32'h1c00_0000
)(
    input logic clk,
    input logic rst_n,

    input logic redirect_valid,
    input logic flush_valid,
    input logic [31:0] redirect_pc,
    input logic [FTQ_ADDR_SZ-1:0] branch_redirect_ftq_idx,
    input logic branch_redirect_taken,
    input logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] branch_redirect_pc_lob,
    input logic [2:0] branch_redirect_cfi_type,

    input logic ftq_commit_valid,
    input logic [FTQ_ADDR_SZ-1:0] ftq_commit_idx,

    input logic [EXEC_QUERY_WIDTH-1:0] exec_query_valid,
    input logic [EXEC_QUERY_WIDTH-1:0][FTQ_ADDR_SZ-1:0] exec_query_idx,
    input logic [EXEC_QUERY_WIDTH-1:0][31:0] exec_query_pc,
    output logic [EXEC_QUERY_WIDTH-1:0] exec_query_resp_valid,
    output logic [EXEC_QUERY_WIDTH-1:0][31:0] exec_query_next_pc,
    output logic [EXEC_QUERY_WIDTH-1:0] exec_query_cfi_match,

    output logic        xlate_req_valid,
    input  logic        xlate_req_ready,
    output logic [31:0] xlate_req_vaddr,
    input  logic        xlate_resp_valid,
    output logic        xlate_resp_ready,
    input  logic [31:0] xlate_resp_vaddr,
    input  logic [31:0] xlate_resp_paddr,
    input  logic [1:0]  xlate_resp_mat,
    input  logic        xlate_resp_cacheable,
    input  logic        xlate_resp_xcpt_valid,
    input  logic [5:0]  xlate_resp_xcpt_code,

    output logic [1:0]  imem_req_mat,
    output logic        imem_req_cacheable,

    output logic [FETCH_WIDTH-1:0]      fetch_xcpt_valid,
    output logic [FETCH_WIDTH-1:0][5:0] fetch_xcpt_code,

    output logic imem_req_valid,
    input logic imem_req_ready,
    output logic [31:0] imem_req_addr,

    input logic imem_resp_valid,
    output logic imem_resp_ready,
    input logic [FETCH_WIDTH-1:0][31:0] imem_resp_insts,

    output logic [FETCH_WIDTH-1:0]       fetch_valid,
    output logic [FETCH_WIDTH-1:0][31:0] fetch_insts,
    output logic [FETCH_WIDTH-1:0][31:0] fetch_pc,
    output logic [FETCH_WIDTH-1:0][FTQ_ADDR_SZ-1:0] fetch_ftq_idx,
    output logic [FETCH_WIDTH-1:0]       fetch_predicted_taken,
    input logic fetch_ready,
    output logic [FETCH_WIDTH-1:0][31:0] fetch_predicted_npc
);
    localparam int FETCH_BYTES = FETCH_WIDTH * 4;
    localparam int FETCH_ALIGN_BITS = $clog2(FETCH_BYTES);
    localparam int FETCH_LANE_BITS = (FETCH_WIDTH > 1) ? $clog2(FETCH_WIDTH) : 1;
    localparam int CFI_IDX_SZ = (FETCH_WIDTH > 1) ? $clog2(FETCH_WIDTH) : 1;
    localparam int BANK_ALIGN_BITS = $clog2(BANK_BYTES);
    localparam int BLOCK_OFFSET_BITS = $clog2(ICACHE_BLOCK_BYTES);
    localparam int NUM_BANK_CHUNKS = ICACHE_BLOCK_BYTES / BANK_BYTES;
    localparam int BANK_LANE_BITS = (BANK_WIDTH > 1) ? $clog2(BANK_WIDTH) : 1;

    typedef enum logic [2:0] {
        S_XLATE_REQ,
        S_XLATE_RESP,
        S_MEM_REQ,
        S_MEM_RESP,
        S_FETCH,
        S_FAULT
    } state_t;

    state_t state_q;
    logic [31:0] request_pc_q;
    logic request_stale_q;
    logic [31:0] redirect_pc_q;
    logic [FETCH_WIDTH-1:0] fetch_valid_q;
    logic [FETCH_WIDTH-1:0][31:0] fetch_pc_q;
    logic [FETCH_WIDTH-1:0][31:0] fetch_insts_q;
    logic [FETCH_LANE_BITS-1:0] request_lane;
    logic [BANK_LANE_BITS-1:0] request_bank_lane;
    logic request_adef;

    logic [31:0] request_paddr_q;
    logic [1:0] request_mat_q;
    logic request_cacheable_q;
    logic [FETCH_WIDTH-1:0] fetch_xcpt_valid_q;
    logic [FETCH_WIDTH-1:0][5:0] fetch_xcpt_code_q;

    logic branch_redirect_valid;
    logic packet_available;
    logic packet_fire;
    logic ftq_enq_valid;
    logic ftq_enq_ready;
    logic [FTQ_ADDR_SZ-1:0] ftq_enq_idx;

    logic [FETCH_WIDTH-1:0] packet_valid_d;
    logic [FETCH_WIDTH-1:0] packet_predicted_taken_d;
    logic [FETCH_WIDTH-1:0][31:0] packet_predicted_npc_d;
    logic [FETCH_WIDTH-1:0] packet_br_mask_d;
    logic packet_cfi_valid_d;
    logic [CFI_IDX_SZ-1:0] packet_cfi_idx_d;
    logic [2:0] packet_cfi_type_d;
    logic packet_cfi_is_call_d;
    logic packet_cfi_is_ret_d;
    logic packet_cfi_npc_plus4_d;
    logic [31:0] packet_next_pc_d;
    logic [31:0] packet_return_addr_d;

    logic [FETCH_WIDTH-1:0][2:0] predecode_cfi_type;
    logic [FETCH_WIDTH-1:0] predecode_is_call;
    logic [FETCH_WIDTH-1:0] predecode_is_ret;
    logic [FETCH_WIDTH-1:0] predecode_direct_target_valid;
    logic [FETCH_WIDTH-1:0][31:0] predecode_direct_target;
    logic [FETCH_WIDTH-1:0][31:0] predecode_return_addr;
    logic [FETCH_WIDTH-1:0] predecode_npc_plus4;

    logic bpd_ready;
    logic bpd_f0_valid;
    logic bpd_f1_valid_q, bpd_f2_valid_q, bpd_f3_valid_q;
    logic bpd_f1_first_bank_q, bpd_f2_first_bank_q, bpd_f3_first_bank_q;
    logic bpd_f1_second_valid_q, bpd_f2_second_valid_q, bpd_f3_second_valid_q;
    logic bpd_f1_epoch_q, bpd_f2_epoch_q, bpd_f3_epoch_q;
    logic frontend_epoch_q;
    logic bpd_requested_q;
    logic bpd_result_valid_q;

    logic bpd_first_bank;
    logic bpd_second_bank;
    logic bpd_last_bank_in_block;
    logic [31:0] bpd_first_bank_pc;
    logic [31:0] bpd_second_bank_pc;
    logic [NBANKS-1:0] bank_f0_valid;
    logic [NBANKS-1:0][31:0] bank_f0_pc;
    logic [NBANKS-1:0] bank_ready;
    branch_prediction_t [BANK_WIDTH-1:0] bank_f3_preds [NBANKS-1:0];
    logic [BPD_MAX_META_LENGTH-1:0] bank_f3_meta [NBANKS-1:0];
    branch_prediction_t [FETCH_WIDTH-1:0] bpd_f3_preds;
    branch_prediction_t [FETCH_WIDTH-1:0] bpd_f3_preds_q;
    logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] bpd_f3_meta;
    logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] bpd_f3_meta_q;

    logic [NBANKS-1:0] bank_update_valid;
    bpd_bank_update_t bank_update [NBANKS-1:0];
    bpd_update_t ftq_bpd_update;
    logic ftq_bpd_update_valid;
    logic ftq_bpd_update_is_mispredict_update;
    logic ftq_bpd_update_is_repair_update;
    logic [31:0] ftq_bpd_update_pc;
    logic [FETCH_WIDTH-1:0] ftq_bpd_update_br_mask;
    logic ftq_bpd_update_cfi_valid;
    logic [CFI_IDX_SZ-1:0] ftq_bpd_update_cfi_idx;
    logic ftq_bpd_update_cfi_taken;
    logic ftq_bpd_update_cfi_mispredicted;
    logic ftq_bpd_update_cfi_is_br;
    logic ftq_bpd_update_cfi_is_b_bl;
    logic ftq_bpd_update_cfi_is_jirl;
    logic [31:0] ftq_bpd_update_target;
    global_history_t ftq_bpd_update_ghist;
    logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] ftq_bpd_update_meta;

    global_history_t current_ghist;
    global_history_t ftq_ghist_restore;
    global_history_t ghist_restore_mux;
    logic ftq_ghist_restore_valid;
    logic ftq_ras_repair_valid;
    logic [RAS_IDX_SZ-1:0] ftq_ras_repair_idx;
    logic [31:0] ftq_ras_repair_addr;
    logic [RAS_IDX_SZ-1:0] ras_write_idx;
    logic [31:0] ras_read_addr;
    logic ras_write_valid;

    function automatic logic [31:0] align_bundle(input logic [31:0] pc);
        align_bundle = (pc >> FETCH_ALIGN_BITS) << FETCH_ALIGN_BITS;
    endfunction

    function automatic logic [RAS_IDX_SZ-1:0] ras_inc(
        input logic [RAS_IDX_SZ-1:0] idx
    );
        if (idx == RAS_IDX_SZ'(RAS_ENTRIES - 1)) ras_inc = '0;
        else ras_inc = idx + 1'b1;
    endfunction

    assign request_adef = |request_pc_q[1:0];
    assign request_bank_lane = BANK_LANE_BITS'(request_pc_q >> 2);
    assign branch_redirect_valid = redirect_valid && !flush_valid;

    assign bpd_first_bank = request_pc_q[BANK_ALIGN_BITS];
    assign bpd_second_bank = ~bpd_first_bank;
    assign bpd_first_bank_pc =
        {request_pc_q[31:BANK_ALIGN_BITS], {BANK_ALIGN_BITS{1'b0}}};
    assign bpd_second_bank_pc = bpd_first_bank_pc + 32'(BANK_BYTES);
    assign bpd_last_bank_in_block =
        request_pc_q[BLOCK_OFFSET_BITS-1:BANK_ALIGN_BITS] ==
        (BLOCK_OFFSET_BITS-BANK_ALIGN_BITS)'(NUM_BANK_CHUNKS - 1);
    assign bpd_ready = &bank_ready;
    assign bpd_f0_valid = state_q == S_XLATE_REQ && !redirect_valid &&
                          !request_adef && !bpd_requested_q && bpd_ready;

    always_comb begin
        bank_f0_valid = '0;
        bank_f0_pc = '0;
        bank_f0_valid[bpd_first_bank] = bpd_f0_valid;
        bank_f0_pc[bpd_first_bank] = bpd_first_bank_pc;

        if (!bpd_last_bank_in_block) begin
            bank_f0_valid[bpd_second_bank] = bpd_f0_valid;
            bank_f0_pc[bpd_second_bank] = bpd_second_bank_pc;
        end
    end

    always_comb begin
        bpd_f3_preds = '0;
        bpd_f3_meta = '0;

        if (bpd_f3_valid_q) begin
            for (int lane = 0; lane < BANK_WIDTH; lane++) begin
                bpd_f3_preds[lane] =
                    bank_f3_preds[bpd_f3_first_bank_q][lane];
                if (bpd_f3_second_valid_q)
                    bpd_f3_preds[BANK_WIDTH + lane] =
                        bank_f3_preds[~bpd_f3_first_bank_q][lane];
            end

            for (int bank = 0; bank < NBANKS; bank++)
                bpd_f3_meta[bank] = bank_f3_meta[bank];
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bpd_f1_valid_q <= 1'b0;
            bpd_f2_valid_q <= 1'b0;
            bpd_f3_valid_q <= 1'b0;
            bpd_f1_first_bank_q <= 1'b0;
            bpd_f2_first_bank_q <= 1'b0;
            bpd_f3_first_bank_q <= 1'b0;
            bpd_f1_second_valid_q <= 1'b0;
            bpd_f2_second_valid_q <= 1'b0;
            bpd_f3_second_valid_q <= 1'b0;
            bpd_f1_epoch_q <= 1'b0;
            bpd_f2_epoch_q <= 1'b0;
            bpd_f3_epoch_q <= 1'b0;
        end else if (redirect_valid) begin
            bpd_f1_valid_q <= 1'b0;
            bpd_f2_valid_q <= 1'b0;
            bpd_f3_valid_q <= 1'b0;
        end else begin
            bpd_f1_valid_q <= bpd_f0_valid;
            bpd_f2_valid_q <= bpd_f1_valid_q;
            bpd_f3_valid_q <= bpd_f2_valid_q;

            if (bpd_f0_valid) begin
                bpd_f1_first_bank_q <= bpd_first_bank;
                bpd_f1_second_valid_q <= !bpd_last_bank_in_block;
                bpd_f1_epoch_q <= frontend_epoch_q;
            end
            if (bpd_f1_valid_q) begin
                bpd_f2_first_bank_q <= bpd_f1_first_bank_q;
                bpd_f2_second_valid_q <= bpd_f1_second_valid_q;
                bpd_f2_epoch_q <= bpd_f1_epoch_q;
            end
            if (bpd_f2_valid_q) begin
                bpd_f3_first_bank_q <= bpd_f2_first_bank_q;
                bpd_f3_second_valid_q <= bpd_f2_second_valid_q;
                bpd_f3_epoch_q <= bpd_f2_epoch_q;
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            frontend_epoch_q <= 1'b0;
            bpd_requested_q <= 1'b0;
            bpd_result_valid_q <= 1'b0;
            bpd_f3_preds_q <= '0;
            bpd_f3_meta_q <= '0;
        end else if (redirect_valid) begin
            frontend_epoch_q <= ~frontend_epoch_q;
            bpd_requested_q <= 1'b0;
            bpd_result_valid_q <= 1'b0;
        end else begin
            if (packet_fire) begin
                bpd_requested_q <= 1'b0;
                bpd_result_valid_q <= 1'b0;
            end
            if (bpd_f0_valid)
                bpd_requested_q <= 1'b1;
            if (bpd_f3_valid_q && bpd_f3_epoch_q == frontend_epoch_q) begin
                bpd_f3_preds_q <= bpd_f3_preds;
                bpd_f3_meta_q <= bpd_f3_meta;
                bpd_result_valid_q <= 1'b1;
            end
        end
    end

    always_comb begin
        ftq_bpd_update = '0;
        ftq_bpd_update.is_mispredict_update =
            ftq_bpd_update_is_mispredict_update;
        ftq_bpd_update.is_repair_update = ftq_bpd_update_is_repair_update;
        ftq_bpd_update.pc = ftq_bpd_update_pc;
        ftq_bpd_update.br_mask = ftq_bpd_update_br_mask;
        ftq_bpd_update.cfi_valid = ftq_bpd_update_cfi_valid;
        ftq_bpd_update.cfi_idx = ftq_bpd_update_cfi_idx;
        ftq_bpd_update.cfi_taken = ftq_bpd_update_cfi_taken;
        ftq_bpd_update.cfi_mispredicted = ftq_bpd_update_cfi_mispredicted;
        ftq_bpd_update.cfi_is_br = ftq_bpd_update_cfi_is_br;
        ftq_bpd_update.cfi_is_b_bl = ftq_bpd_update_cfi_is_b_bl;
        ftq_bpd_update.cfi_is_jirl = ftq_bpd_update_cfi_is_jirl;
        ftq_bpd_update.target = ftq_bpd_update_target;
        ftq_bpd_update.ghist = ftq_bpd_update_ghist;
        ftq_bpd_update.meta = ftq_bpd_update_meta;
    end

    bpd_update_router update_router (
        .update_valid(ftq_bpd_update_valid),
        .update(ftq_bpd_update),
        .bank_update_valid,
        .bank_update
    );

    for (genvar bank = 0; bank < NBANKS; bank++) begin : gen_composer
        composer #(.BANK_WIDTH(BANK_WIDTH)) composer_inst (
            .clk,
            .rst_n,
            .f0_valid(bank_f0_valid[bank]),
            .f0_pc(bank_f0_pc[bank]),
            .f1_preds(),
            .f2_preds(),
            .f3_preds(bank_f3_preds[bank]),
            .f2_meta(),
            .f3_meta(bank_f3_meta[bank]),
            .ready(bank_ready[bank]),
            .update_valid(bank_update_valid[bank]),
            .update(bank_update[bank])
        );
    end

    for (genvar lane = 0; lane < FETCH_WIDTH; lane++) begin : gen_predecode
        f3_predecode predecode_inst (
            .inst(fetch_insts_q[lane]),
            .pc(fetch_pc_q[lane]),
            .cfi_type(predecode_cfi_type[lane]),
            .is_call(predecode_is_call[lane]),
            .is_ret(predecode_is_ret[lane]),
            .direct_target_valid(predecode_direct_target_valid[lane]),
            .direct_target(predecode_direct_target[lane]),
            .return_addr(predecode_return_addr[lane]),
            .npc_plus4(predecode_npc_plus4[lane])
        );
    end

    always_comb begin
        logic selected;
        logic lane_take;
        logic [31:0] lane_target;
        int predictor_lane;

        packet_valid_d = '0;
        packet_predicted_taken_d = '0;
        packet_predicted_npc_d = '0;
        packet_br_mask_d = '0;
        packet_cfi_valid_d = 1'b0;
        packet_cfi_idx_d = '0;
        packet_cfi_type_d = CFI_X;
        packet_cfi_is_call_d = 1'b0;
        packet_cfi_is_ret_d = 1'b0;
        packet_cfi_npc_plus4_d = 1'b1;
        packet_next_pc_d = align_bundle(request_pc_q) + FETCH_BYTES;
        packet_return_addr_d = '0;
        selected = 1'b0;

        for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
            lane_take = 1'b0;
            lane_target = '0;
            predictor_lane = lane + int'(request_bank_lane);

            if (fetch_valid_q[lane] && !selected) begin
                packet_valid_d[lane] = 1'b1;
                packet_predicted_npc_d[lane] = fetch_pc_q[lane] + 32'd4;

                unique case (predecode_cfi_type[lane])
                    CFI_BR: begin
                        packet_br_mask_d[lane] = 1'b1;
                        lane_target = predecode_direct_target[lane];
                        if (bpd_result_valid_q && predictor_lane < FETCH_WIDTH) begin
                            lane_take = bpd_f3_preds_q[predictor_lane].is_br && bpd_f3_preds_q[predictor_lane].taken;
                        end
                    end
                    CFI_B_BL: begin
                        lane_take = predecode_direct_target_valid[lane];
                        lane_target = predecode_direct_target[lane];
                    end
                    CFI_JIRL: begin
                        if (predecode_is_ret[lane]) begin
                            lane_take = 1'b1;
                            lane_target = ras_read_addr;
                        end else if(bpd_result_valid_q && predictor_lane < FETCH_WIDTH) begin
                            lane_take = bpd_f3_preds_q[predictor_lane].is_jirl && bpd_f3_preds_q[predictor_lane].taken;
                            lane_target = bpd_f3_preds_q[predictor_lane].predicted_pc;
                        end
                    end
                    default: begin
                    end
                endcase

                if (lane_take) begin
                    selected = 1'b1;
                    packet_predicted_taken_d[lane] = 1'b1;
                    packet_predicted_npc_d[lane] = lane_target;
                    packet_cfi_valid_d = 1'b1;
                    packet_cfi_idx_d = CFI_IDX_SZ'(lane);
                    packet_cfi_type_d = predecode_cfi_type[lane];
                    packet_cfi_is_call_d = predecode_is_call[lane];
                    packet_cfi_is_ret_d = predecode_is_ret[lane];
                    packet_cfi_npc_plus4_d = predecode_npc_plus4[lane];
                    packet_next_pc_d = lane_target;
                    packet_return_addr_d = predecode_return_addr[lane];
                end
            end
        end
    end

    assign packet_available = state_q == S_FETCH && !redirect_valid &&
                              |fetch_valid_q &&
                              (!bpd_requested_q || bpd_result_valid_q);
    assign ftq_enq_valid = packet_available && fetch_ready;
    assign packet_fire = packet_available && fetch_ready && ftq_enq_ready;

    always_comb begin
        ghist_restore_mux = ftq_ghist_restore;
        if (flush_valid)
            ghist_restore_mux = '0;
    end

    ghist ghist_inst (
        .clk,
        .rst_n,
        .update_valid(packet_fire),
        .update_pc(request_pc_q),
        .update_br_mask(packet_br_mask_d),
        .update_cfi_valid(packet_cfi_valid_d),
        .update_cfi_idx(packet_cfi_idx_d),
        .update_cfi_taken(packet_cfi_valid_d),
        .update_cfi_is_br(packet_cfi_type_d == CFI_BR),
        .update_cfi_is_call(packet_cfi_is_call_d),
        .update_cfi_is_ret(packet_cfi_is_ret_d),
        .current_ghist,
        .restore_valid(flush_valid || ftq_ghist_restore_valid),
        .restore_ghist(ghist_restore_mux)
    );

    assign ras_write_valid = packet_fire && packet_cfi_valid_d &&
                             packet_cfi_is_call_d;
    assign ras_write_idx = ras_inc(current_ghist.ras_idx);

    ras ras_inst (
        .clk,
        .rst_n,
        .write_valid(ras_write_valid),
        .write_idx(ras_write_idx),
        .write_addr(packet_return_addr_d),
        .read_idx(current_ghist.ras_idx),
        .read_addr(ras_read_addr),
        .repair_valid(ftq_ras_repair_valid),
        .repair_idx(ftq_ras_repair_idx),
        .repair_addr(ftq_ras_repair_addr)
    );

    fetch_target_queue #(
        .NUM_ENTRIES(FTQ_ENTRIES),
        .FTQ_IDX_SZ(FTQ_ADDR_SZ),
        .EXEC_QUERY_WIDTH(EXEC_QUERY_WIDTH)
    ) ftq_inst (
        .clk,
        .rst_n,
        .enq_valid(ftq_enq_valid),
        .enq_ready(ftq_enq_ready),
        .enq_pc(request_pc_q),
        .enq_next_pc(packet_next_pc_d),
        .enq_br_mask(packet_br_mask_d),
        .enq_cfi_valid(packet_cfi_valid_d),
        .enq_cfi_idx(packet_cfi_idx_d),
        .enq_cfi_type(packet_cfi_type_d),
        .enq_cfi_is_call(packet_cfi_is_call_d),
        .enq_cfi_is_ret(packet_cfi_is_ret_d),
        .enq_cfi_npc_plus4(packet_cfi_npc_plus4_d),
        .enq_cfi_taken(packet_cfi_valid_d),
        .enq_ras_top(ras_read_addr),
        .enq_ras_idx(current_ghist.ras_idx),
        .enq_start_bank(request_pc_q[BANK_ALIGN_BITS]),
        .enq_ghist(current_ghist),
        .enq_meta(bpd_result_valid_q ? bpd_f3_meta_q : '0),
        .enq_idx(ftq_enq_idx),
        .commit_valid(ftq_commit_valid),
        .commit_ftq_idx(ftq_commit_idx),
        .redirect_valid(branch_redirect_valid),
        .redirect_ftq_idx(branch_redirect_ftq_idx),
        .brupdate_b2_mispredict(branch_redirect_valid),
        .brupdate_b2_ftq_idx(branch_redirect_ftq_idx),
        .brupdate_b2_taken(branch_redirect_taken),
        .brupdate_b2_target(redirect_pc),
        .brupdate_b2_pc_lob(branch_redirect_pc_lob),
        .brupdate_b2_cfi_type(branch_redirect_cfi_type),
        .bpd_update_valid(ftq_bpd_update_valid),
        .bpd_update_is_mispredict_update(ftq_bpd_update_is_mispredict_update),
        .bpd_update_is_repair_update(ftq_bpd_update_is_repair_update),
        .bpd_update_pc(ftq_bpd_update_pc),
        .bpd_update_br_mask(ftq_bpd_update_br_mask),
        .bpd_update_cfi_valid(ftq_bpd_update_cfi_valid),
        .bpd_update_cfi_idx(ftq_bpd_update_cfi_idx),
        .bpd_update_cfi_taken(ftq_bpd_update_cfi_taken),
        .bpd_update_cfi_mispredicted(ftq_bpd_update_cfi_mispredicted),
        .bpd_update_cfi_is_br(ftq_bpd_update_cfi_is_br),
        .bpd_update_cfi_is_b_bl(ftq_bpd_update_cfi_is_b_bl),
        .bpd_update_cfi_is_jirl(ftq_bpd_update_cfi_is_jirl),
        .bpd_update_target(ftq_bpd_update_target),
        .bpd_update_ghist(ftq_bpd_update_ghist),
        .bpd_update_meta(ftq_bpd_update_meta),
        .ghist_restore_valid(ftq_ghist_restore_valid),
        .ghist_restore(ftq_ghist_restore),
        .ras_repair_valid(ftq_ras_repair_valid),
        .ras_repair_idx(ftq_ras_repair_idx),
        .ras_repair_addr(ftq_ras_repair_addr),
        .query_valid(1'b0),
        .query_idx('0),
        .query_resp_valid(),
        .query_pc(),
        .query_next_pc(),
        .query_br_mask(),
        .query_cfi_valid(),
        .query_cfi_idx(),
        .query_cfi_type(),
        .query_cfi_is_call(),
        .query_cfi_is_ret(),
        .query_cfi_npc_plus4(),
        .query_cfi_taken(),
        .query_ras_top(),
        .query_ras_idx(),
        .query_start_bank(),
        .query_ghist(),
        .exec_query_valid,
        .exec_query_idx,
        .exec_query_pc,
        .exec_query_resp_valid,
        .exec_query_next_pc,
        .exec_query_cfi_match,
        .flush_valid(flush_valid)
    );

    always_comb begin
        request_lane = FETCH_LANE_BITS'(request_pc_q >> 2);

        xlate_req_valid = state_q == S_XLATE_REQ && !request_adef &&
                          !redirect_valid;
        xlate_req_vaddr = request_pc_q;
        xlate_resp_ready = state_q == S_XLATE_RESP && !redirect_valid;

        imem_req_valid = state_q == S_MEM_REQ && !redirect_valid;
        imem_req_addr = align_bundle(request_paddr_q);
        imem_req_mat = request_mat_q;
        imem_req_cacheable = request_cacheable_q;
        imem_resp_ready = state_q == S_MEM_RESP;

        fetch_valid = '0;
        fetch_xcpt_valid = '0;
        fetch_pc = fetch_pc_q;
        fetch_insts = fetch_insts_q;
        fetch_xcpt_code = fetch_xcpt_code_q;
        fetch_ftq_idx = '0;
        fetch_predicted_taken = '0;
        fetch_predicted_npc = '0;

        if (packet_available && ftq_enq_ready) begin
            fetch_valid = packet_valid_d;
            fetch_xcpt_valid = fetch_xcpt_valid_q & packet_valid_d;
            fetch_predicted_taken = packet_predicted_taken_d;
            fetch_predicted_npc = packet_predicted_npc_d;
            for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                if (packet_valid_d[lane])
                    fetch_ftq_idx[lane] = ftq_enq_idx;
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= S_XLATE_REQ;
            request_pc_q <= RESET_PC;
            request_stale_q <= 1'b0;
            redirect_pc_q <= '0;
            fetch_valid_q <= '0;
            fetch_pc_q <= '0;
            fetch_insts_q <= '0;
            fetch_xcpt_valid_q <= '0;
            fetch_xcpt_code_q <= '0;
            request_paddr_q <= '0;
            request_mat_q <= '0;
            request_cacheable_q <= 1'b0;
        end else begin
            case (state_q)
                S_XLATE_REQ: begin
                    if (redirect_valid) begin
                        request_pc_q <= redirect_pc;
                        fetch_valid_q <= '0;
                        fetch_xcpt_valid_q <= '0;
                    end else if (request_adef) begin
                        state_q <= S_FETCH;
                        fetch_valid_q <= '0;
                        fetch_pc_q <= '0;
                        fetch_insts_q <= '0;
                        fetch_xcpt_valid_q <= '0;
                        fetch_xcpt_code_q <= '0;

                        fetch_valid_q[0] <= 1'b1;
                        fetch_pc_q[0] <= request_pc_q;
                        fetch_xcpt_valid_q[0] <= 1'b1;
                        fetch_xcpt_code_q[0] <= ECODE_ADE;
                    end else if (xlate_req_valid && xlate_req_ready) begin
                        state_q <= S_XLATE_RESP;
                    end
                end

                S_XLATE_RESP: begin
                    if (redirect_valid) begin
                        state_q <= S_XLATE_REQ;
                        request_pc_q <= redirect_pc;
                    end else if (xlate_resp_valid && xlate_resp_ready) begin
                        if (xlate_resp_xcpt_valid) begin
                            state_q <= S_FETCH;
                            fetch_valid_q <= '0;
                            fetch_pc_q <= '0;
                            fetch_insts_q <= '0;
                            fetch_xcpt_valid_q <= '0;
                            fetch_xcpt_code_q <= '0;

                            fetch_valid_q[0] <= 1'b1;
                            fetch_pc_q[0] <= request_pc_q;
                            fetch_xcpt_valid_q[0] <= 1'b1;
                            fetch_xcpt_code_q[0] <= xlate_resp_xcpt_code;
                        end else begin
                            request_paddr_q <= xlate_resp_paddr;
                            request_mat_q <= xlate_resp_mat;
                            request_cacheable_q <= xlate_resp_cacheable;
                            state_q <= S_MEM_REQ;
                        end
                    end
                end

                S_MEM_REQ: begin
                    if (redirect_valid) begin
                        state_q <= S_XLATE_REQ;
                        request_pc_q <= redirect_pc;
                    end else if (imem_req_valid && imem_req_ready) begin
                        state_q <= S_MEM_RESP;
                        request_stale_q <= 1'b0;
                    end
                end

                S_MEM_RESP: begin
                    if (redirect_valid) begin
                        request_stale_q <= 1'b1;
                        redirect_pc_q <= redirect_pc;
                    end

                    if (imem_resp_valid && imem_resp_ready) begin
                        if (request_stale_q || redirect_valid) begin
                            state_q <= S_XLATE_REQ;
                            request_pc_q <= redirect_valid ? redirect_pc :
                                                           redirect_pc_q;
                            request_stale_q <= 1'b0;
                        end else begin
                            state_q <= S_FETCH;
                            fetch_valid_q <= '0;
                            fetch_xcpt_valid_q <= '0;

                            for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                                if (lane + int'(request_lane) < FETCH_WIDTH) begin
                                    fetch_valid_q[lane] <= 1'b1;
                                    fetch_pc_q[lane] <= request_pc_q + lane * 4;
                                    fetch_insts_q[lane] <=
                                        imem_resp_insts[lane + int'(request_lane)];
                                end else begin
                                    fetch_pc_q[lane] <= '0;
                                    fetch_insts_q[lane] <= '0;
                                end
                            end
                        end
                    end
                end

                S_FETCH: begin
                    if (redirect_valid) begin
                        state_q <= S_XLATE_REQ;
                        request_pc_q <= redirect_pc;
                        fetch_valid_q <= '0;
                        fetch_xcpt_valid_q <= '0;
                    end else if (packet_fire) begin
                        fetch_valid_q <= '0;

                        if (|fetch_xcpt_valid_q) begin
                            state_q <= S_FAULT;
                        end else begin
                            state_q <= S_XLATE_REQ;
                            request_pc_q <= packet_next_pc_d;
                        end
                        fetch_xcpt_valid_q <= '0;
                    end
                end

                S_FAULT: begin
                    if (redirect_valid) begin
                        state_q <= S_XLATE_REQ;
                        request_pc_q <= redirect_pc;
                        fetch_valid_q <= '0;
                        fetch_xcpt_valid_q <= '0;
                    end
                end

                default: begin
                    state_q <= S_XLATE_REQ;
                    request_pc_q <= RESET_PC;
                    fetch_valid_q <= '0;
                    fetch_xcpt_valid_q <= '0;
                end
            endcase
        end
    end
endmodule
