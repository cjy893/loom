package loom_types;
    import loom_params::*;
    import loom_consts::*;

    typedef struct packed {
        logic is_fp;
        logic [1:0] fmt;
        logic [3:0] op;
        logic [2:0] rm;
        logic is_dp;
    } fp_ctrl_t;

    typedef struct packed {
        logic [31:0] inst;
        logic [VADDR_BITS:0] pc;
        logic [31:0] debug_inst;
        logic [VADDR_BITS:0] debug_pc;

        logic [3:0] iq_type;
        logic [9:0] fu_code;

        logic iw_issued;
        logic iw_issued_partial_agen;
        logic iw_issued_partial_dgen;
        logic [ALU_WIDTH-1:0] iw_p1_speculative_child;
        logic [ALU_WIDTH-1:0] iw_p2_speculative_child;
        logic iw_p1_bypass;
        logic iw_p2_bypass;
        logic iw_p3_bypass;
        logic [DECODE_WIDTH-1:0] dis_col_sel;

        logic [MAX_BR_COUNT-1:0] br_mask;
        logic [BR_TAG_SZ-1:0] br_tag;
        logic allocate_brtag;

        logic [3:0] br_type;
        logic is_sfb;
        logic taken;
        logic [1:0] pc_sel;

        logic is_dbar;
        logic is_ibar;
        logic is_invtlb;
        logic is_llsc;
        logic is_ertn;
        logic is_sys_pc2era;
        logic is_coprocessor;
        logic is_mov;
        logic is_br;
        logic is_b_bl;
        logic is_jirl;
        logic is_rdcnt;

        logic [FTQ_ADDR_SZ-1:0] ftq_idx;
        logic edge_inst;
        logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] pc_lob;

        logic imm_rename;
        logic [2:0] imm_sel;
        logic [IMM_PREG_SZ-1:0] pimm;
        logic [25:0] imm_packed;

        logic [1:0] op1_sel;
        logic [2:0] op2_sel;

        fp_ctrl_t fp_ctrl;

        logic [ROB_ADDR_SZ-1:0] rob_idx;
        logic [LDQ_ADDR_SZ+1:0] ldq_idx;
        logic [STQ_ADDR_SZ+1:0] stq_idx;
        logic [$clog2(RXQ_ENTRIES)-1:0] rxq_idx;

        logic [MAX_PREG_SZ-1:0] pdst;
        logic [MAX_PREG_SZ-1:0] psrc1;
        logic [MAX_PREG_SZ-1:0] psrc2;
        logic [MAX_PREG_SZ-1:0] psrc3;
        logic [$clog2(FTQ_ENTRIES)-1:0] ppred;

        logic psrc1_busy;
        logic psrc2_busy;
        logic psrc3_busy;
        logic ppred_busy;

        logic [MAX_PREG_SZ-1:0] stale_pdst;

        logic exception;
        logic [XLEN-1:0] exc_cause;

        logic [4:0] mem_cmd;
        logic [1:0] mem_size;
        logic mem_signed;
        logic uses_ldq;
        logic uses_stq;
        logic is_unique;
        logic flush_on_commit;

        logic starts_unsafe;
        logic starts_bsy;
        logic predicated;

        logic [2:0] csr_cmd;
        logic [2:0] tlb_cmd;

        logic ldst_is_src1;

        logic [LREG_SZ-1:0] ldst;
        logic [LREG_SZ-1:0] lsrc1;
        logic [LREG_SZ-1:0] lsrc2;
        logic [LREG_SZ-1:0] lsrc3;

        logic [1:0] dst_rtype;
        logic [1:0] lsrc1_rtype;
        logic [1:0] lsrc2_rtype;
        logic fsrc3_en;

        logic fcn_dw;
        logic [3:0] fcn_op;

        logic fp_val;
        logic [2:0] fp_rm;
        logic [1:0] fp_typ;

        logic exc_pif;
        logic exc_adef;
        logic exc_adef_misaligned;
        logic bp_debug_if;
        logic bp_xcpt_if;

        logic [2:0] debug_fsrc;
        logic [2:0] debug_tsrc;
    } uop_t;


    typedef struct packed {
        logic        valid;
        uop_t        uop;
        logic [XLEN-1:0] data;
        logic        predicated;
        struct packed {
            logic valid;
            logic [4:0] bits;
        } fp_flags;
    } exe_unit_resp_t;

    typedef struct packed {
        logic        valid;
        uop_t        uop;
        logic [MAX_BR_COUNT-1:0] speculative_mask;
        logic rebusy;
        logic bypassable;
    } wakeup_t;

    typedef struct packed {
        uop_t uop;
        logic mispredict;
        logic [2:0] cfi_type;
        logic taken;
        logic [1:0] pc_sel;
        logic [VADDR_BITS:0] jirl_target;
        logic [VADDR_BITS:0] target_offset;
    } br_resolution_info_t;

    typedef struct packed {
        logic [MAX_BR_COUNT-1:0] resolve_mask;
        logic [MAX_BR_COUNT-1:0] mispredict_mask;
    } br_update_masks_t;

    typedef struct packed {
        br_update_masks_t b1;
        br_resolution_info_t b2;
    } br_update_info_t;

    typedef struct packed {
        logic [GLOBAL_HISTORY_LENGTH-1:0] old_history;
        logic current_saw_branch_not_taken;
        logic new_saw_branch_not_taken;
        logic new_saw_branch_taken;
        logic [RAS_IDX_SZ-1:0] ras_idx;
    } global_history_t;

    typedef struct packed {
        logic [LDQ_ADDR_SZ+1:0] ldq_idx;
        logic [STQ_ADDR_SZ+1:0] stq_idx;
        logic [$clog2(RXQ_ENTRIES)-1:0] rxq_idx;
    } br_info_bundle_t;

    typedef struct {
        logic [DECODE_WIDTH-1:0] valids;
        logic [DECODE_WIDTH-1:0] arch_valids;
        uop_t [DECODE_WIDTH-1:0] uops;
        struct packed {
            logic valid;
            logic [4:0] bits;
        }fp_flags;
        logic [DECODE_WIDTH*32-1:0] debug_insts;
        logic [DECODE_WIDTH*XLEN-1:0] debug_wdata;
    } commit_signal_t;
    
    typedef struct packed {
        logic valid;
        logic [XLEN-1:0] pc;
        logic [XLEN-1:0] inst;

        logic [FTQ_ADDR_SZ-1:0] ftq_idx;
        logic edge_inst;
        logic is_16bit;
        logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] pc_lob;
        logic [XLEN-1:0] cause;
        logic [XLEN-1:0] badvaddr;
        logic [2:0] flush_typ;
    } commit_exception_signals_t;

    typedef struct packed {
        logic valid;
        uop_t uop;
        logic [$clog2(64)-1:0] cause;
        logic [VADDR_BITS:0] badvaddr;
    } exception_t;

    typedef struct packed {
        uop_t uop;
        logic [VADDR_BITS:0] addr;
        logic [DCACHE_ROW_BITS-1:0] data;
        logic is_hella;
    } dcache_req_t;

    typedef struct packed {
        uop_t uop;
        logic [DCACHE_ROW_BITS-1:0] data;
        logic is_hella;
    } dcache_resp_t;

    typedef struct packed {
        logic [VADDR_BITS:0] pc;
        logic [FETCH_WIDTH-1:0] br_mask;
        logic [1:0] cfi_idx;
        logic [2:0] cfi_type;
        logic cfi_is_call;
        logic cfi_is_ret;
        logic start_bank;
        logic [RAS_IDX_SZ-1:0] ras_idx;
        global_history_t ghist;

        logic cfi_taken;
        logic cfi_mispredicted;
        logic cfi_npc_plus4;
        logic [31:0] ras_top;
    } ftq_entry_t;

    typedef struct {
        logic [FETCH_WIDTH-1:0] valid;
        uop_t [FETCH_WIDTH-1:0] uops;
    } fetch_packet_t;

    typedef struct {
        logic valid;
        fetch_packet_t bits;
        logic ready;
    } fetch_packet_if_t;

    typedef struct packed {
        logic [7:0] dispatch_width;
        logic [7:0] issue_width;
        logic [7:0] num_entries;
        logic [3:0] iq_type;
        logic use_matrix_issue;
    } issue_params_t;

    typedef struct packed {
        logic taken;
        logic is_br;
        logic is_b_bl;
        logic is_jirl;
        logic [31:0] predicted_pc;
    } branch_prediction_t;

    typedef struct packed {
        logic [31:0] pc;
        branch_prediction_t [FETCH_WIDTH-1:0] preds;
        logic [NBANKS-1:0] [BPD_MAX_META_LENGTH-1:0] meta;
        logic [NBANKS-1:0] [LOCAL_HISTORY_LENGTH-1:0] lhist;
    } branch_prediction_bundle_t;

    typedef struct packed {
        logic [31:0] pc;
        global_history_t ghist;
    } bpd_request_t;

    typedef struct packed {
        logic is_mispredict_update;
        logic is_repair_update;
        logic [FETCH_WIDTH/NBANKS-1:0] btb_mispredicts;

        logic [31:0] pc;
        logic [FETCH_WIDTH/NBANKS-1:0] br_mask;
        logic cfi_valid;
        logic [$clog2(FETCH_WIDTH/NBANKS)-1:0] cfi_idx;
        logic cfi_taken;
        logic cfi_mispredicted;
        logic cfi_is_br;
        logic cfi_is_b_bl;
        logic cfi_is_jirl;

        logic [GLOBAL_HISTORY_LENGTH-1:0] ghist;
        logic [LOCAL_HISTORY_LENGTH-1:0] lhist;
        logic [31:0] target;
        logic [BPD_MAX_META_LENGTH-1:0] meta;
    } bpd_bank_update_t;

    typedef struct packed {
        logic is_mispredict_update;
        logic is_repair_update;
        logic [FETCH_WIDTH-1:0] btb_mispredicts;

        logic [31:0] pc;
        logic [FETCH_WIDTH-1:0] br_mask;
        logic cfi_valid;
        logic [$clog2(FETCH_WIDTH)-1:0] cfi_idx;
        logic cfi_taken;
        logic cfi_mispredicted;
        logic cfi_is_br;
        logic cfi_is_b_bl;
        logic cfi_is_jirl;

        global_history_t ghist;
        logic [NBANKS-1:0] [LOCAL_HISTORY_LENGTH-1:0] lhist;
        logic [31:0] target;
        logic [NBANKS-1:0] [BPD_MAX_META_LENGTH-1:0] meta;
    } bpd_update_t;
endpackage
