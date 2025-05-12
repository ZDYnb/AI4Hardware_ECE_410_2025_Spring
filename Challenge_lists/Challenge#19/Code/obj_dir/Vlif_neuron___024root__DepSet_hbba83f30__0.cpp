// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlif_neuron.h for the primary calling header

#include "Vlif_neuron__pch.h"
#include "Vlif_neuron__Syms.h"
#include "Vlif_neuron___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlif_neuron___024root___dump_triggers__ico(Vlif_neuron___024root* vlSelf);
#endif  // VL_DEBUG

void Vlif_neuron___024root___eval_triggers__ico(Vlif_neuron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlif_neuron___024root___eval_triggers__ico\n"); );
    Vlif_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlif_neuron___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlif_neuron___024root___dump_triggers__act(Vlif_neuron___024root* vlSelf);
#endif  // VL_DEBUG

void Vlif_neuron___024root___eval_triggers__act(Vlif_neuron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlif_neuron___024root___eval_triggers__act\n"); );
    Vlif_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlif_neuron___024root___dump_triggers__act(vlSelf);
    }
#endif
}
