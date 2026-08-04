# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmem_issue_test_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0
# VPI enabled?  0/1 (from --vpi)
VM_VPI = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vmem_issue_test_top \
  Vmem_issue_test_top___024root__0 \
  Vmem_issue_test_top___024root__1 \
  Vmem_issue_test_top___024root__2 \
  Vmem_issue_test_top___024root__3 \
  Vmem_issue_test_top___024root__4 \
  Vmem_issue_test_top___024root__5 \
  Vmem_issue_test_top___024root__6 \
  Vmem_issue_test_top___024root__7 \
  Vmem_issue_test_top___024root__8 \
  Vmem_issue_test_top___024root__9 \
  Vmem_issue_test_top___024root__10 \
  Vmem_issue_test_top___024root__11 \
  Vmem_issue_test_top___024root__12 \
  Vmem_issue_test_top___024root__13 \
  Vmem_issue_test_top___024root__14 \
  Vmem_issue_test_top___024root__15 \
  Vmem_issue_test_top___024root__16 \
  Vmem_issue_test_top___024root__17 \
  Vmem_issue_test_top___024root__18 \
  Vmem_issue_test_top___024root__19 \
  Vmem_issue_test_top___024root__20 \
  Vmem_issue_test_top___024root__21 \
  Vmem_issue_test_top___024root__22 \
  Vmem_issue_test_top___024root__23 \
  Vmem_issue_test_top___024root__24 \
  Vmem_issue_test_top___024root__25 \
  Vmem_issue_test_top___024root__26 \
  Vmem_issue_test_top___024root__27 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vmem_issue_test_top__ConstPool__0__Slow \
  Vmem_issue_test_top___024root__Slow \
  Vmem_issue_test_top___024root__0__Slow \
  Vmem_issue_test_top___024root__1__Slow \
  Vmem_issue_test_top___024root__2__Slow \
  Vmem_issue_test_top___024root__3__Slow \
  Vmem_issue_test_top___024root__4__Slow \
  Vmem_issue_test_top___024root__5__Slow \
  Vmem_issue_test_top___024root__6__Slow \
  Vmem_issue_test_top___024root__7__Slow \
  Vmem_issue_test_top___024root__8__Slow \
  Vmem_issue_test_top___024root__9__Slow \
  Vmem_issue_test_top___024root__10__Slow \
  Vmem_issue_test_top___024root__11__Slow \
  Vmem_issue_test_top___024root__12__Slow \
  Vmem_issue_test_top___024root__13__Slow \
  Vmem_issue_test_top___024root__14__Slow \
  Vmem_issue_test_top___024root__15__Slow \
  Vmem_issue_test_top___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vmem_issue_test_top__Syms__ctor__0__Slow \
  Vmem_issue_test_top__Syms__dtor__0__Slow \
  Vmem_issue_test_top__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
