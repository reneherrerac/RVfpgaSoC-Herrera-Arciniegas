# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrvfpgasim.mk for the caller.

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
	Vrvfpgasim \
	Vrvfpgasim_rvfpgasim \
	Vrvfpgasim___024unit \
	Vrvfpgasim_BD \
	Vrvfpgasim_BD__1 \
	Vrvfpgasim_BD__2 \
	Vrvfpgasim_BD__3 \
	Vrvfpgasim_BD__4 \
	Vrvfpgasim_BD__5 \
	Vrvfpgasim_BD__6 \
	Vrvfpgasim_BD__7 \
	Vrvfpgasim_BD__8 \
	Vrvfpgasim_BD__9 \
	Vrvfpgasim_BD__10 \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000 \
	Vrvfpgasim_BD_bootrom_wrapper_0_0 \
	Vrvfpgasim_wb_mem_wrapper \
	Vrvfpgasim_dpram64__S1000_MBz1 \
	Vrvfpgasim_dpram64__S10000_MBz1 \
	Vrvfpgasim_axi_demux__pi2 \
	Vrvfpgasim_axi_mux__pi4 \
	Vrvfpgasim_axi_demux_id_counters__pi5 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrvfpgasim__Slow \
	Vrvfpgasim_rvfpgasim__Slow \
	Vrvfpgasim___024unit__Slow \
	Vrvfpgasim_BD__Slow \
	Vrvfpgasim_BD__1__Slow \
	Vrvfpgasim_BD__2__Slow \
	Vrvfpgasim_BD__3__Slow \
	Vrvfpgasim_BD__4__Slow \
	Vrvfpgasim_BD__5__Slow \
	Vrvfpgasim_BD__6__Slow \
	Vrvfpgasim_BD__7__Slow \
	Vrvfpgasim_BD__8__Slow \
	Vrvfpgasim_BD__9__Slow \
	Vrvfpgasim_axi_mem_wrapper__I6_M10000__Slow \
	Vrvfpgasim_BD_bootrom_wrapper_0_0__Slow \
	Vrvfpgasim_wb_mem_wrapper__Slow \
	Vrvfpgasim_dpram64__S1000_MBz1__Slow \
	Vrvfpgasim_dpram64__S10000_MBz1__Slow \
	Vrvfpgasim_axi_demux__pi2__Slow \
	Vrvfpgasim_axi_mux__pi4__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi5__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrvfpgasim__Dpi \
	Vrvfpgasim__Trace \
	Vrvfpgasim__Trace__1 \
	Vrvfpgasim__Trace__2 \
	Vrvfpgasim__Trace__3 \
	Vrvfpgasim__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrvfpgasim__Syms \
	Vrvfpgasim__Trace__Slow \
	Vrvfpgasim__Trace__1__Slow \
	Vrvfpgasim__Trace__2__Slow \
	Vrvfpgasim__Trace__3__Slow \
	Vrvfpgasim__Trace__4__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
