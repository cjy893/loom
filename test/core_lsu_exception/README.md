# Core LSU address-alignment exception tests

This suite drives misaligned LA32 load/store instructions through the complete
temporary core and expects a precise `ALE` exception.

Coverage:

- odd-address `ld.h` and `st.h`;
- non-word-aligned `ld.w` and `st.w`;
- `ECODE_ALE`, ERA, BADV, and BADI;
- older commit preservation and younger commit suppression;
- no DMem request or store side effect from the faulting instruction;
- no destination-register writeback from a faulting load.

Run:

```bash
./test/core_lsu_exception/run.sh
```

The suite is included in `test/run_all.sh`.
