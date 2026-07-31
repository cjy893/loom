import loom_params::*;
import loom_consts::*;
import loom_types::*;

module fetch_target_queue #(
    parameter int NUM_ENTRIES = FTQ_ENTRIES,
    parameter int FTQ_IDX_SZ = (NUM_ENTRIES <= 1) ? 1 : $clog2(NUM_ENTRIES)
)(
    input logic clk,
    input logic rst_n,

    input logic enq_valid,
    output logic enq_ready,
    input logic [31:0] enq_pc,
    input logic [31:0] enq_next_pc,
    input logic [FETCH_WIDTH-1:0] enq_br_mask,
    input logic enq_cfi_valid,
    input logic [$clog2(FETCH_WIDTH)-1:0] enq_cfi_idx,
    input logic [2:0] enq_cfi_type,
    input logic enq_cfi_is_call,
    input logic enq_cfi_is_ret,
    input logic enq_cfi_npc_plus4,
    input logic enq_cfi_taken,
    input logic [31:0] enq_ras_top,
    input logic [RAS_IDX_SZ-1:0] enq_ras_idx,
    input logic enq_start_bank,
    input global_history_t enq_ghist,
    input logic [NBANKS-1:0] [BPD_MAX_META_LENGTH-1:0] enq_meta,
    output logic [FTQ_IDX_SZ-1:0] enq_idx,

    input logic commit_valid,
    input logic [FTQ_IDX_SZ-1:0] commit_ftq_idx,

    input logic redirect_valid,
    input logic [FTQ_IDX_SZ-1:0] redirect_ftq_idx,

    input logic brupdate_b2_mispredict,
    input logic [FTQ_IDX_SZ-1:0] brupdate_b2_ftq_idx,
    input logic brupdate_b2_taken,
    input logic [31:0] brupdate_b2_target,
    input logic [FETCH_WIDTH-1:0] brupdate_b2_br_mask,
    input logic brupdate_b2_cfi_is_br,
    input logic brupdate_b2_cfi_is_call,
    input logic brupdate_b2_cfi_is_ret,

    output logic bpd_update_valid,
    output logic bpd_update_is_mispredict_update,
    output logic bpd_update_is_repair_update,
    output logic [31:0] bpd_update_pc,
    output logic [FETCH_WIDTH-1:0] bpd_update_br_mask,
    output logic bpd_update_cfi_valid,
    output logic [$clog2(FETCH_WIDTH)-1:0] bpd_update_cfi_idx,
    output logic bpd_update_cfi_taken,
    output logic bpd_update_cfi_mispredicted,
    output logic bpd_update_cfi_is_br,
    output logic bpd_update_cfi_is_b_bl,
    output logic bpd_update_cfi_is_jirl,
    output logic [31:0] bpd_update_target,
    output global_history_t bpd_update_ghist,
    output logic [NBANKS-1:0] [BPD_MAX_META_LENGTH-1:0] bpd_update_meta,

    output logic ghist_restore_valid,
    output global_history_t ghist_restore,

    output logic ras_repair_valid,
    output logic [RAS_IDX_SZ-1:0] ras_repair_idx,
    output logic [31:0] ras_repair_addr,

    input logic query_valid,
    input logic [FTQ_IDX_SZ-1:0] query_idx,
    output logic query_resp_valid,
    output logic [31:0] query_pc,
    output logic [FETCH_WIDTH-1:0] query_br_mask,
    output logic query_cfi_valid,
    output logic [$clog2(FETCH_WIDTH)-1:0] query_cfi_idx,
    output logic [2:0] query_cfi_type,
    output logic query_cfi_is_call,
    output logic query_cfi_is_ret,
    output logic query_cfi_npc_plus4,
    output logic query_cfi_taken,
    output logic [31:0] query_ras_top,
    output logic [RAS_IDX_SZ-1:0] query_ras_idx,
    output logic query_start_bank,
    output global_history_t query_ghist
);
    localparam int CFI_IDX_SZ = (FETCH_WIDTH <= 1) ? 1 : $clog2(FETCH_WIDTH);

    typedef struct packed {
        logic [31:0] pc;
        logic [31:0] next_pc;
        logic [FETCH_WIDTH-1:0] br_mask;
        logic cfi_valid;
        logic [CFI_IDX_SZ-1:0] cfi_idx;
        logic [2:0] cfi_type;
        logic cfi_is_call;
        logic cfi_is_ret;
        logic cfi_npc_plus4;
        logic cfi_taken;
        logic cfi_mispredicted;
        logic [31:0] ras_top;
        logic [RAS_IDX_SZ-1:0] ras_idx;
        logic start_bank;
        global_history_t ghist;
        logic [NBANKS-1:0] [BPD_MAX_META_LENGTH-1:0] meta;
    } ftq_storage_entry_t;

    ftq_storage_entry_t entries_q [NUM_ENTRIES-1:0];
    logic [NUM_ENTRIES-1:0] entry_valid_q;

    logic [FTQ_IDX_SZ-1:0] enq_ptr_q;
    logic [FTQ_IDX_SZ-1:0] commit_ptr_q, commit_end_q;
    logic [FTQ_IDX_SZ-1:0] repair_ptr_q, repair_end_q;
    logic commit_busy_q, repair_busy_q;

    logic bpd_update_valid_q;
    bpd_update_t bpd_update_q;
    bpd_update_t mispredict_update_d;
    bpd_update_t repair_update_d;
    ftq_storage_entry_t enq_entry_d;

    function automatic logic [FTQ_IDX_SZ-1:0] wrap_inc(input logic [FTQ_IDX_SZ-1:0] idx);
        return idx == (FTQ_IDX_SZ'(NUM_ENTRIES-1)) ? '0 : idx + 1'b1;
    endfunction

    function automatic logic [NUM_ENTRIES-1:0] make_kill_mask(
        input logic [FTQ_IDX_SZ-1:0] redirect_idx,
        input logic [FTQ_IDX_SZ-1:0] stop_exclusive
    );
        logic [NUM_ENTRIES-1:0] result;
        logic [FTQ_IDX_SZ-1:0] scan_idx;
        result = '0;
        scan_idx = wrap_inc(redirect_idx);
        for (int step = 0; step < NUM_ENTRIES; step++) begin
            if (scan_idx != stop_exclusive) begin
                result[scan_idx] = 1'b1;
                scan_idx = wrap_inc(scan_idx);
            end
        end
        make_kill_mask = result;
    endfunction

    function automatic logic [CFI_IDX_SZ-1:0] mask_to_idx(input logic [FETCH_WIDTH-1:0] mask);
        logic found;
        logic [CFI_IDX_SZ-1:0] result;
        found = 1'b0;
        result = '0;
        for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
            if (mask[lane] && !found) begin
                found = 1'b1;
                result = CFI_IDX_SZ'(lane);
            end
        end
        mask_to_idx = result;
    endfunction

    function automatic global_history_t corrected_ghist(
        input global_history_t snapshot,
        input logic taken,
        input logic is_br,
        input logic is_call,
        input logic is_ret
    );
        global_history_t result;
        result = snapshot;
        result.new_saw_branch_not_taken = 1'b0;
        result.new_saw_branch_taken = 1'b0;

        if (is_br) begin
            result.old_history = {snapshot.old_history[GLOBAL_HISTORY_LENGTH-2:0], taken};
            result.current_saw_branch_not_taken = !taken;
        end
        if (is_call) begin
            if (snapshot.ras_idx == RAS_IDX_SZ'(RAS_ENTRIES-1)) result.ras_idx = '0;
            else result.ras_idx = snapshot.ras_idx + 1'b1;
        end
        if (is_ret) begin
            if (snapshot.ras_idx == '0) result.ras_idx = RAS_IDX_SZ'(RAS_ENTRIES-1);
            else result.ras_idx = snapshot.ras_idx - 1'b1;
        end
        corrected_ghist = result;
    endfunction

    function automatic logic entry_needs_update(input ftq_storage_entry_t entry);
        entry_needs_update = entry.cfi_valid || |entry.br_mask;
    endfunction

    function automatic bpd_update_t entry_to_update(input ftq_storage_entry_t entry);
        bpd_update_t result;
        result = '0;
        result.pc = entry.pc;
        result.br_mask = entry.br_mask;
        result.cfi_valid = entry.cfi_valid;
        result.cfi_idx = entry.cfi_idx;
        result.cfi_taken = entry.cfi_taken;
        result.cfi_mispredicted = entry.cfi_mispredicted;
        result.cfi_is_br = entry.cfi_type == CFI_BR;
        result.cfi_is_b_bl = entry.cfi_type == CFI_B_BL;
        result.cfi_is_jirl = entry.cfi_type == CFI_JIRL;
        result.ghist = entry.ghist;
        result.target = entry.next_pc;
        result.meta = entry.meta;
        entry_to_update = result;
    endfunction

    always_comb begin
        enq_entry_d = '0;
        enq_entry_d.pc = enq_pc;
        enq_entry_d.next_pc = enq_next_pc;
        enq_entry_d.br_mask = enq_br_mask;
        enq_entry_d.cfi_valid = enq_cfi_valid;
        enq_entry_d.cfi_idx = enq_cfi_idx;
        enq_entry_d.cfi_type = enq_cfi_type;
        enq_entry_d.cfi_is_call = enq_cfi_is_call;
        enq_entry_d.cfi_is_ret = enq_cfi_is_ret;
        enq_entry_d.cfi_npc_plus4 = enq_cfi_npc_plus4;
        enq_entry_d.cfi_taken = enq_cfi_taken;
        enq_entry_d.ras_top = enq_ras_top;
        enq_entry_d.ras_idx = enq_ras_idx;
        enq_entry_d.start_bank = enq_start_bank;
        enq_entry_d.ghist = enq_ghist;
        enq_entry_d.meta = enq_meta;
    end

    always_comb begin
        mispredict_update_d = entry_to_update(entries_q[brupdate_b2_ftq_idx]);
        mispredict_update_d.is_mispredict_update = 1'b1;
        mispredict_update_d.br_mask = brupdate_b2_br_mask;
        mispredict_update_d.cfi_valid = 1'b1;
        if (|brupdate_b2_br_mask) mispredict_update_d.cfi_idx = mask_to_idx(brupdate_b2_br_mask);
        mispredict_update_d.cfi_taken = brupdate_b2_taken;
        mispredict_update_d.cfi_mispredicted = 1'b1;
        mispredict_update_d.cfi_is_br = brupdate_b2_cfi_is_br;
        mispredict_update_d.target = brupdate_b2_target;
    end

    always_comb begin
        repair_update_d = entry_to_update(entries_q[repair_ptr_q]);
        repair_update_d.is_repair_update = 1'b1;
    end

    assign enq_idx = enq_ptr_q;
    assign enq_ready = rst_n && !redirect_valid && !repair_busy_q && !entry_valid_q[enq_ptr_q];

    assign bpd_update_valid = bpd_update_valid_q;
    assign bpd_update_is_mispredict_update = bpd_update_q.is_mispredict_update;
    assign bpd_update_is_repair_update = bpd_update_q.is_repair_update;
    assign bpd_update_pc = bpd_update_q.pc;
    assign bpd_update_br_mask = bpd_update_q.br_mask;
    assign bpd_update_cfi_valid = bpd_update_q.cfi_valid;
    assign bpd_update_cfi_idx = bpd_update_q.cfi_idx;
    assign bpd_update_cfi_taken = bpd_update_q.cfi_taken;
    assign bpd_update_cfi_mispredicted = bpd_update_q.cfi_mispredicted;
    assign bpd_update_cfi_is_br = bpd_update_q.cfi_is_br;
    assign bpd_update_cfi_is_b_bl = bpd_update_q.cfi_is_b_bl;
    assign bpd_update_cfi_is_jirl = bpd_update_q.cfi_is_jirl;
    assign bpd_update_target = bpd_update_q.target;
    assign bpd_update_ghist = bpd_update_q.ghist;
    assign bpd_update_meta = bpd_update_q.meta;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            entry_valid_q <= '0;
            enq_ptr_q <= '0;
            commit_ptr_q <= '0;
            commit_end_q <= '0;
            repair_ptr_q <= '0;
            repair_end_q <= '0;
            commit_busy_q <= 1'b0;
            repair_busy_q <= 1'b0;

            bpd_update_valid_q <= 1'b0;
            ghist_restore_valid <= 1'b0;
            ras_repair_valid <= 1'b0;
            query_resp_valid <= 1'b0;

            query_pc <= '0;
            query_br_mask <= '0;
            query_cfi_valid <= 1'b0;
            query_cfi_idx <= '0;
            query_cfi_type <= '0;
            query_cfi_is_call <= 1'b0;
            query_cfi_is_ret <= 1'b0;
            query_cfi_npc_plus4 <= 1'b0;
            query_cfi_taken <= 1'b0;
            query_ras_top <= '0;
            query_ras_idx <= '0;
            query_start_bank <= 1'b0;
            query_ghist <= '0;
        end else begin
            bpd_update_valid_q <= 1'b0;
            ghist_restore_valid <= 1'b0;
            ras_repair_valid <= 1'b0;
            query_resp_valid <= 1'b0;

            if (query_valid && !redirect_valid &&
                int'(query_idx) < NUM_ENTRIES &&
                entry_valid_q[query_idx]) begin
                query_resp_valid <= 1'b1;
                query_pc <= entries_q[query_idx].pc;
                query_br_mask <= entries_q[query_idx].br_mask;
                query_cfi_valid <= entries_q[query_idx].cfi_valid;
                query_cfi_idx <= entries_q[query_idx].cfi_idx;
                query_cfi_type <= entries_q[query_idx].cfi_type;
                query_cfi_is_call <= entries_q[query_idx].cfi_is_call;
                query_cfi_is_ret <= entries_q[query_idx].cfi_is_ret;
                query_cfi_npc_plus4 <= entries_q[query_idx].cfi_npc_plus4;
                query_cfi_taken <= entries_q[query_idx].cfi_taken;
                query_ras_top <= entries_q[query_idx].ras_top;
                query_ras_idx <= entries_q[query_idx].ras_idx;
                query_start_bank <= entries_q[query_idx].start_bank;
                query_ghist <= entries_q[query_idx].ghist;
            end

            if (commit_valid) begin
                commit_end_q <= commit_ftq_idx;
                commit_busy_q <= 1'b1;
            end

            if (redirect_valid) begin
                entry_valid_q <= entry_valid_q & ~make_kill_mask(redirect_ftq_idx, enq_ptr_q);
                enq_ptr_q <= wrap_inc(redirect_ftq_idx);
                repair_busy_q <= 1'b0;

                if (entry_valid_q[redirect_ftq_idx]) begin
                    ghist_restore_valid <= 1'b1;
                    ghist_restore <= entries_q[redirect_ftq_idx].ghist;
                    ras_repair_valid <= 1'b1;
                    ras_repair_idx <= entries_q[redirect_ftq_idx].ras_idx;
                    ras_repair_addr <= entries_q[redirect_ftq_idx].ras_top;
                end

                if (brupdate_b2_mispredict &&
                    brupdate_b2_ftq_idx == redirect_ftq_idx &&
                    entry_valid_q[redirect_ftq_idx]) begin
                    bpd_update_valid_q <= 1'b1;
                    bpd_update_q <= mispredict_update_d;

                    ghist_restore_valid <= 1'b1;
                    ghist_restore <= corrected_ghist(
                        entries_q[redirect_ftq_idx].ghist,
                        brupdate_b2_taken,
                        brupdate_b2_cfi_is_br,
                        brupdate_b2_cfi_is_call,
                        brupdate_b2_cfi_is_ret
                    );

                    repair_ptr_q <= wrap_inc(redirect_ftq_idx);
                    repair_end_q <= enq_ptr_q;
                    repair_busy_q <= wrap_inc(redirect_ftq_idx) != enq_ptr_q;

                    entries_q[redirect_ftq_idx].next_pc <= brupdate_b2_target;
                    entries_q[redirect_ftq_idx].cfi_valid <= 1'b1;
                    if (|brupdate_b2_br_mask) entries_q[redirect_ftq_idx].cfi_idx <= mask_to_idx(brupdate_b2_br_mask);
                    entries_q[redirect_ftq_idx].cfi_taken <= brupdate_b2_taken;
                    entries_q[redirect_ftq_idx].cfi_mispredicted <= 1'b1;
                    entries_q[redirect_ftq_idx].cfi_is_call <= brupdate_b2_cfi_is_call;
                    entries_q[redirect_ftq_idx].cfi_is_ret <= brupdate_b2_cfi_is_ret;
                end
            end else begin
                if (repair_busy_q) begin
                    if (entry_needs_update(entries_q[repair_ptr_q])) begin
                        bpd_update_valid_q <= 1'b1;
                        bpd_update_q <= repair_update_d;
                    end

                    if (wrap_inc(repair_ptr_q) == repair_end_q) repair_busy_q <= 1'b0;
                    else repair_ptr_q <= wrap_inc(repair_ptr_q);
                end else if (commit_busy_q) begin
                    if (entry_valid_q[commit_ptr_q] &&
                        entry_needs_update(entries_q[commit_ptr_q])) begin
                        bpd_update_valid_q <= 1'b1;
                        bpd_update_q <= entry_to_update(entries_q[commit_ptr_q]);
                    end

                    entry_valid_q[commit_ptr_q] <= 1'b0;
                    commit_ptr_q <= wrap_inc(commit_ptr_q);

                    if (commit_ptr_q == (commit_valid ? commit_ftq_idx : commit_end_q)) commit_busy_q <= 1'b0;
                    else commit_busy_q <= 1'b1;
                end

                if (enq_valid && enq_ready) begin
                    entries_q[enq_ptr_q] <= enq_entry_d;
                    entry_valid_q[enq_ptr_q] <= 1'b1;
                    enq_ptr_q <= wrap_inc(enq_ptr_q);
                end
            end
        end
    end
endmodule
