// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_BD_bootrom_wrapper_0_0.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_BD_bootrom_wrapper_0_0) {
    VL_CELL(bootrom, Vrvfpgasim_wb_mem_wrapper);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_BD_bootrom_wrapper_0_0::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_BD_bootrom_wrapper_0_0::~Vrvfpgasim_BD_bootrom_wrapper_0_0() {
}

void Vrvfpgasim_BD_bootrom_wrapper_0_0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_BD_bootrom_wrapper_0_0::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst = VL_RAND_RESET_I(1);
    __PVT__i_wb_adr = VL_RAND_RESET_I(32);
    __PVT__i_wb_dat = VL_RAND_RESET_I(32);
    __PVT__i_wb_sel = VL_RAND_RESET_I(4);
    __PVT__i_wb_we = VL_RAND_RESET_I(1);
    __PVT__i_wb_cyc = VL_RAND_RESET_I(1);
    __PVT__i_wb_stb = VL_RAND_RESET_I(1);
    __PVT__o_wb_ack = VL_RAND_RESET_I(1);
    __PVT__o_wb_rdt = VL_RAND_RESET_I(32);
}
