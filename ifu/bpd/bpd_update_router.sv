import loom_params::*;
import loom_consts::*;
import loom_types::*;

module bpd_update_router (
    input  logic update_valid,
    input  bpd_update_t update,

    output logic [NBANKS-1:0] bank_update_valid,
    output bpd_bank_update_t bank_update [NBANKS-1:0]
);
    localparam int BANK_ALIGN_BITS = $clog2(BANK_BYTES);
    localparam int BLOCK_OFFSET_BITS = $clog2(ICACHE_BLOCK_BYTES);
    localparam int NUM_BANK_CHUNKS = ICACHE_BLOCK_BYTES / BANK_BYTES;
    localparam int BANK_CFI_IDX_SZ = (BANK_WIDTH <= 1) ? 1 : $clog2(BANK_WIDTH);

    logic first_bank;
    logic second_bank;
    logic last_bank_in_block;
    logic [31:0] second_bank_pc;
    logic [GLOBAL_HISTORY_LENGTH-1:0] second_bank_history;

    always_comb begin
        first_bank = update.pc[BANK_ALIGN_BITS];
        second_bank = ~first_bank;
        last_bank_in_block = update.pc[BLOCK_OFFSET_BITS-1:BANK_ALIGN_BITS] == (BLOCK_OFFSET_BITS-BANK_ALIGN_BITS)'(NUM_BANK_CHUNKS-1);
        second_bank_pc = {update.pc[31:BANK_ALIGN_BITS], {BANK_ALIGN_BITS{1'b0}}} + 32'(BANK_BYTES);

        if (update.ghist.new_saw_branch_taken) begin
            second_bank_history = {update.ghist.old_history[GLOBAL_HISTORY_LENGTH-2:0], 1'b1};
        end else if (update.ghist.new_saw_branch_not_taken) begin
            second_bank_history = {update.ghist.old_history[GLOBAL_HISTORY_LENGTH-2:0], 1'b0};
        end else begin
            second_bank_history = update.ghist.old_history;
        end

        bank_update_valid = '0;
        for (int bank = 0; bank < NBANKS; bank++) begin
            bank_update[bank] = '0;
            bank_update[bank].is_mispredict_update = update.is_mispredict_update;
            bank_update[bank].is_repair_update = update.is_repair_update;
            bank_update[bank].cfi_taken = update.cfi_taken;
            bank_update[bank].cfi_mispredicted = update.cfi_mispredicted;
            bank_update[bank].cfi_is_br = update.cfi_is_br;
            bank_update[bank].cfi_is_b_bl = update.cfi_is_b_bl;
            bank_update[bank].cfi_is_jirl = update.cfi_is_jirl;
            bank_update[bank].target = update.target;
            bank_update[bank].lhist = update.lhist[bank];
            bank_update[bank].meta = update.meta[bank];
            bank_update[bank].cfi_idx = update.cfi_idx[BANK_CFI_IDX_SZ-1:0];
        end

        bank_update_valid[first_bank] = update_valid;
        bank_update[first_bank].pc = update.pc;
        bank_update[first_bank].br_mask = update.br_mask[BANK_WIDTH-1:0];
        bank_update[first_bank].btb_mispredicts = update.btb_mispredicts[BANK_WIDTH-1:0];
        bank_update[first_bank].cfi_valid = update.cfi_valid && int'(update.cfi_idx) < BANK_WIDTH;
        bank_update[first_bank].ghist = update.ghist.old_history;

        bank_update_valid[second_bank] = update_valid && !last_bank_in_block && (!update.cfi_valid || int'(update.cfi_idx) >= BANK_WIDTH);
        bank_update[second_bank].pc = second_bank_pc;
        bank_update[second_bank].br_mask = update.br_mask[FETCH_WIDTH-1:BANK_WIDTH];
        bank_update[second_bank].btb_mispredicts = update.btb_mispredicts[FETCH_WIDTH-1:BANK_WIDTH];
        bank_update[second_bank].cfi_valid = update.cfi_valid && int'(update.cfi_idx) >= BANK_WIDTH;
        bank_update[second_bank].ghist = second_bank_history;
    end
endmodule
