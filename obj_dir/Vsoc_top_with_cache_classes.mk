# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsoc_top_with_cache.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsoc_top_with_cache \
	Vsoc_top_with_cache___024root \
	Vsoc_top_with_cache___024root__1 \
	Vsoc_top_with_cache___024root__2 \
	Vsoc_top_with_cache___024unit \
	Vsoc_top_with_cache_cv32e40x_if_xif \
	Vsoc_top_with_cache_cv32e40x_if_c_obi \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsoc_top_with_cache__ConstPool_0 \
	Vsoc_top_with_cache___024root__Slow \
	Vsoc_top_with_cache___024root__1__Slow \
	Vsoc_top_with_cache___024root__2__Slow \
	Vsoc_top_with_cache___024unit__Slow \
	Vsoc_top_with_cache_cv32e40x_if_xif__Slow \
	Vsoc_top_with_cache_cv32e40x_if_c_obi__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsoc_top_with_cache__Dpi \
	Vsoc_top_with_cache__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsoc_top_with_cache__Syms \
	Vsoc_top_with_cache__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
