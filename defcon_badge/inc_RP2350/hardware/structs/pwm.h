// THIS HEADER FILE IS AUTOMATICALLY GENERATED -- DO NOT EDIT

/*
 * Copyright (c) 2021 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _HARDWARE_STRUCTS_PWM_H
#define _HARDWARE_STRUCTS_PWM_H

#include "hardware/address_mapped.h"
#include "hardware/regs/pwm.h"

// Reference to datasheet: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf#tab-registerlist_pwm
//
// The _REG_ macro is intended to help make the register navigable in your IDE (for example, using the "Go to Definition" feature)
// _REG_(x) will link to the corresponding register in hardware/regs/pwm.h.
//
// Bit-field descriptions are of the form:
// BITMASK [BITRANGE]: FIELDNAME (RESETVALUE): DESCRIPTION

typedef struct pwm_slice_hw {
    _REG_(PWM_CH0_CSR_OFFSET) // PWM_CH0_CSR
    // Control and status register
    // 0x00000080 [7]     : PH_ADV (0): Advance the phase of the counter by 1 count, while it is running
    // 0x00000040 [6]     : PH_RET (0): Retard the phase of the counter by 1 count, while it is running
    // 0x00000030 [5:4]   : DIVMODE (0)
    // 0x00000008 [3]     : B_INV (0): Invert output B
    // 0x00000004 [2]     : A_INV (0): Invert output A
    // 0x00000002 [1]     : PH_CORRECT (0): 1: Enable phase-correct modulation
    // 0x00000001 [0]     : EN (0): Enable the PWM channel
    io_rw_32 csr;

    _REG_(PWM_CH0_DIV_OFFSET) // PWM_CH0_DIV
    // INT and FRAC form a fixed-point fractional number
    // 0x00000ff0 [11:4]  : INT (1)
    // 0x0000000f [3:0]   : FRAC (0)
    io_rw_32 div;

    _REG_(PWM_CH0_CTR_OFFSET) // PWM_CH0_CTR
    // Direct access to the PWM counter
    // 0x0000ffff [15:0]  : CH0_CTR (0)
    io_rw_32 ctr;

    _REG_(PWM_CH0_CC_OFFSET) // PWM_CH0_CC
    // Counter compare values
    // 0xffff0000 [31:16] : B (0)
    // 0x0000ffff [15:0]  : A (0)
    io_rw_32 cc;

    _REG_(PWM_CH0_TOP_OFFSET) // PWM_CH0_TOP
    // Counter wrap value
    // 0x0000ffff [15:0]  : CH0_TOP (0xffff)
    io_rw_32 top;
} pwm_slice_hw_t;

typedef struct {
    pwm_slice_hw_t slice[NUM_PWM_SLICES]; // 8

    _REG_(PWM_CH8_CSR_OFFSET) // PWM_CH8_CSR
    // Control and status register
    // 0x00000080 [7]     : PH_ADV (0): Advance the phase of the counter by 1 count, while it is running
    // 0x00000040 [6]     : PH_RET (0): Retard the phase of the counter by 1 count, while it is running
    // 0x00000030 [5:4]   : DIVMODE (0)
    // 0x00000008 [3]     : B_INV (0): Invert output B
    // 0x00000004 [2]     : A_INV (0): Invert output A
    // 0x00000002 [1]     : PH_CORRECT (0): 1: Enable phase-correct modulation
    // 0x00000001 [0]     : EN (0): Enable the PWM channel
    io_rw_32 ch8_csr;

    _REG_(PWM_CH8_DIV_OFFSET) // PWM_CH8_DIV
    // INT and FRAC form a fixed-point fractional number
    // 0x00000ff0 [11:4]  : INT (1)
    // 0x0000000f [3:0]   : FRAC (0)
    io_rw_32 ch8_div;

    _REG_(PWM_CH8_CTR_OFFSET) // PWM_CH8_CTR
    // Direct access to the PWM counter
    // 0x0000ffff [15:0]  : CH8_CTR (0)
    io_rw_32 ch8_ctr;

    _REG_(PWM_CH8_CC_OFFSET) // PWM_CH8_CC
    // Counter compare values
    // 0xffff0000 [31:16] : B (0)
    // 0x0000ffff [15:0]  : A (0)
    io_rw_32 ch8_cc;

    _REG_(PWM_CH8_TOP_OFFSET) // PWM_CH8_TOP
    // Counter wrap value
    // 0x0000ffff [15:0]  : CH8_TOP (0xffff)
    io_rw_32 ch8_top;

    _REG_(PWM_CH9_CSR_OFFSET) // PWM_CH9_CSR
    // Control and status register
    // 0x00000080 [7]     : PH_ADV (0): Advance the phase of the counter by 1 count, while it is running
    // 0x00000040 [6]     : PH_RET (0): Retard the phase of the counter by 1 count, while it is running
    // 0x00000030 [5:4]   : DIVMODE (0)
    // 0x00000008 [3]     : B_INV (0): Invert output B
    // 0x00000004 [2]     : A_INV (0): Invert output A
    // 0x00000002 [1]     : PH_CORRECT (0): 1: Enable phase-correct modulation
    // 0x00000001 [0]     : EN (0): Enable the PWM channel
    io_rw_32 ch9_csr;

    _REG_(PWM_CH9_DIV_OFFSET) // PWM_CH9_DIV
    // INT and FRAC form a fixed-point fractional number
    // 0x00000ff0 [11:4]  : INT (1)
    // 0x0000000f [3:0]   : FRAC (0)
    io_rw_32 ch9_div;

    _REG_(PWM_CH9_CTR_OFFSET) // PWM_CH9_CTR
    // Direct access to the PWM counter
    // 0x0000ffff [15:0]  : CH9_CTR (0)
    io_rw_32 ch9_ctr;

    _REG_(PWM_CH9_CC_OFFSET) // PWM_CH9_CC
    // Counter compare values
    // 0xffff0000 [31:16] : B (0)
    // 0x0000ffff [15:0]  : A (0)
    io_rw_32 ch9_cc;

    _REG_(PWM_CH9_TOP_OFFSET) // PWM_CH9_TOP
    // Counter wrap value
    // 0x0000ffff [15:0]  : CH9_TOP (0xffff)
    io_rw_32 ch9_top;

    _REG_(PWM_CH10_CSR_OFFSET) // PWM_CH10_CSR
    // Control and status register
    // 0x00000080 [7]     : PH_ADV (0): Advance the phase of the counter by 1 count, while it is running
    // 0x00000040 [6]     : PH_RET (0): Retard the phase of the counter by 1 count, while it is running
    // 0x00000030 [5:4]   : DIVMODE (0)
    // 0x00000008 [3]     : B_INV (0): Invert output B
    // 0x00000004 [2]     : A_INV (0): Invert output A
    // 0x00000002 [1]     : PH_CORRECT (0): 1: Enable phase-correct modulation
    // 0x00000001 [0]     : EN (0): Enable the PWM channel
    io_rw_32 ch10_csr;

    _REG_(PWM_CH10_DIV_OFFSET) // PWM_CH10_DIV
    // INT and FRAC form a fixed-point fractional number
    // 0x00000ff0 [11:4]  : INT (1)
    // 0x0000000f [3:0]   : FRAC (0)
    io_rw_32 ch10_div;

    _REG_(PWM_CH10_CTR_OFFSET) // PWM_CH10_CTR
    // Direct access to the PWM counter
    // 0x0000ffff [15:0]  : CH10_CTR (0)
    io_rw_32 ch10_ctr;

    _REG_(PWM_CH10_CC_OFFSET) // PWM_CH10_CC
    // Counter compare values
    // 0xffff0000 [31:16] : B (0)
    // 0x0000ffff [15:0]  : A (0)
    io_rw_32 ch10_cc;

    _REG_(PWM_CH10_TOP_OFFSET) // PWM_CH10_TOP
    // Counter wrap value
    // 0x0000ffff [15:0]  : CH10_TOP (0xffff)
    io_rw_32 ch10_top;

    _REG_(PWM_CH11_CSR_OFFSET) // PWM_CH11_CSR
    // Control and status register
    // 0x00000080 [7]     : PH_ADV (0): Advance the phase of the counter by 1 count, while it is running
    // 0x00000040 [6]     : PH_RET (0): Retard the phase of the counter by 1 count, while it is running
    // 0x00000030 [5:4]   : DIVMODE (0)
    // 0x00000008 [3]     : B_INV (0): Invert output B
    // 0x00000004 [2]     : A_INV (0): Invert output A
    // 0x00000002 [1]     : PH_CORRECT (0): 1: Enable phase-correct modulation
    // 0x00000001 [0]     : EN (0): Enable the PWM channel
    io_rw_32 ch11_csr;

    _REG_(PWM_CH11_DIV_OFFSET) // PWM_CH11_DIV
    // INT and FRAC form a fixed-point fractional number
    // 0x00000ff0 [11:4]  : INT (1)
    // 0x0000000f [3:0]   : FRAC (0)
    io_rw_32 ch11_div;

    _REG_(PWM_CH11_CTR_OFFSET) // PWM_CH11_CTR
    // Direct access to the PWM counter
    // 0x0000ffff [15:0]  : CH11_CTR (0)
    io_rw_32 ch11_ctr;

    _REG_(PWM_CH11_CC_OFFSET) // PWM_CH11_CC
    // Counter compare values
    // 0xffff0000 [31:16] : B (0)
    // 0x0000ffff [15:0]  : A (0)
    io_rw_32 ch11_cc;

    _REG_(PWM_CH11_TOP_OFFSET) // PWM_CH11_TOP
    // Counter wrap value
    // 0x0000ffff [15:0]  : CH11_TOP (0xffff)
    io_rw_32 ch11_top;

    _REG_(PWM_EN_OFFSET) // PWM_EN
    // This register aliases the CSR_EN bits for all channels
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_rw_32 en;

    _REG_(PWM_INTR_OFFSET) // PWM_INTR
    // Raw Interrupts
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_rw_32 intr;

    _REG_(PWM_IRQ0_INTE_OFFSET) // PWM_IRQ0_INTE
    // Interrupt Enable for irq0
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_rw_32 inte0;

    _REG_(PWM_IRQ0_INTF_OFFSET) // PWM_IRQ0_INTF
    // Interrupt Force for irq0
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_rw_32 intf0;

    _REG_(PWM_IRQ0_INTS_OFFSET) // PWM_IRQ0_INTS
    // Interrupt status after masking & forcing for irq0
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_ro_32 ints0;

    _REG_(PWM_IRQ1_INTE_OFFSET) // PWM_IRQ1_INTE
    // Interrupt Enable for irq1
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_rw_32 inte1;

    _REG_(PWM_IRQ1_INTF_OFFSET) // PWM_IRQ1_INTF
    // Interrupt Force for irq1
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_rw_32 intf1;

    _REG_(PWM_IRQ1_INTS_OFFSET) // PWM_IRQ1_INTS
    // Interrupt status after masking & forcing for irq1
    // 0x00000800 [11]    : CH11 (0)
    // 0x00000400 [10]    : CH10 (0)
    // 0x00000200 [9]     : CH9 (0)
    // 0x00000100 [8]     : CH8 (0)
    // 0x00000080 [7]     : CH7 (0)
    // 0x00000040 [6]     : CH6 (0)
    // 0x00000020 [5]     : CH5 (0)
    // 0x00000010 [4]     : CH4 (0)
    // 0x00000008 [3]     : CH3 (0)
    // 0x00000004 [2]     : CH2 (0)
    // 0x00000002 [1]     : CH1 (0)
    // 0x00000001 [0]     : CH0 (0)
    io_ro_32 ints1;
} pwm_hw_t;

#define pwm_hw ((pwm_hw_t *)PWM_BASE)

static_assert( NUM_PWM_SLICES == 8, "");

#endif
