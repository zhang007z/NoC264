/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_1' in SOPC Builder design 'nios_system'
 * SOPC Builder design path: ../../nios_system.sopcinfo
 *
 * Generated: Sat Mar 11 16:51:24 CST 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00000820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 200000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1f
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x40000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 200000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 1
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1f
#define ALT_CPU_NAME "nios2_gen2_1"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x40000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00000820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 200000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1f
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x40000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 1
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1f
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x40000000


/*
 * DDR2_Controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_DDR2_Controller_0 altera_mem_if_ddr2_emif
#define DDR2_CONTROLLER_0_BASE 0x40000000
#define DDR2_CONTROLLER_0_IRQ -1
#define DDR2_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DDR2_CONTROLLER_0_NAME "/dev/DDR2_Controller_0"
#define DDR2_CONTROLLER_0_SPAN 1073741824
#define DDR2_CONTROLLER_0_TYPE "altera_mem_if_ddr2_emif"


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_PIO
#define __ALTERA_MEM_IF_DDR2_EMIF
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Stratix IV"
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x3560
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x3560
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x3560
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_system"


/*
 * cpu_1_noc_ctrl configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_noc_ctrl altera_avalon_pio
#define CPU_1_NOC_CTRL_BASE 0x10f0
#define CPU_1_NOC_CTRL_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_NOC_CTRL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_NOC_CTRL_CAPTURE 0
#define CPU_1_NOC_CTRL_DATA_WIDTH 32
#define CPU_1_NOC_CTRL_DO_TEST_BENCH_WIRING 0
#define CPU_1_NOC_CTRL_DRIVEN_SIM_VALUE 0
#define CPU_1_NOC_CTRL_EDGE_TYPE "NONE"
#define CPU_1_NOC_CTRL_FREQ 200000000
#define CPU_1_NOC_CTRL_HAS_IN 0
#define CPU_1_NOC_CTRL_HAS_OUT 1
#define CPU_1_NOC_CTRL_HAS_TRI 0
#define CPU_1_NOC_CTRL_IRQ -1
#define CPU_1_NOC_CTRL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_NOC_CTRL_IRQ_TYPE "NONE"
#define CPU_1_NOC_CTRL_NAME "/dev/cpu_1_noc_ctrl"
#define CPU_1_NOC_CTRL_RESET_VALUE 0
#define CPU_1_NOC_CTRL_SPAN 16
#define CPU_1_NOC_CTRL_TYPE "altera_avalon_pio"


/*
 * cpu_1_noc_sts configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_noc_sts altera_avalon_pio
#define CPU_1_NOC_STS_BASE 0x10c0
#define CPU_1_NOC_STS_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_NOC_STS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_NOC_STS_CAPTURE 0
#define CPU_1_NOC_STS_DATA_WIDTH 32
#define CPU_1_NOC_STS_DO_TEST_BENCH_WIRING 0
#define CPU_1_NOC_STS_DRIVEN_SIM_VALUE 0
#define CPU_1_NOC_STS_EDGE_TYPE "NONE"
#define CPU_1_NOC_STS_FREQ 200000000
#define CPU_1_NOC_STS_HAS_IN 1
#define CPU_1_NOC_STS_HAS_OUT 0
#define CPU_1_NOC_STS_HAS_TRI 0
#define CPU_1_NOC_STS_IRQ -1
#define CPU_1_NOC_STS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_NOC_STS_IRQ_TYPE "NONE"
#define CPU_1_NOC_STS_NAME "/dev/cpu_1_noc_sts"
#define CPU_1_NOC_STS_RESET_VALUE 0
#define CPU_1_NOC_STS_SPAN 16
#define CPU_1_NOC_STS_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_0 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_0 altera_avalon_pio
#define CPU_1_RX_0_BASE 0x10e0
#define CPU_1_RX_0_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_0_CAPTURE 0
#define CPU_1_RX_0_DATA_WIDTH 32
#define CPU_1_RX_0_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_0_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_0_EDGE_TYPE "NONE"
#define CPU_1_RX_0_FREQ 200000000
#define CPU_1_RX_0_HAS_IN 1
#define CPU_1_RX_0_HAS_OUT 0
#define CPU_1_RX_0_HAS_TRI 0
#define CPU_1_RX_0_IRQ -1
#define CPU_1_RX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_0_IRQ_TYPE "NONE"
#define CPU_1_RX_0_NAME "/dev/cpu_1_rx_0"
#define CPU_1_RX_0_RESET_VALUE 0
#define CPU_1_RX_0_SPAN 16
#define CPU_1_RX_0_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_1 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_1 altera_avalon_pio
#define CPU_1_RX_1_BASE 0x10d0
#define CPU_1_RX_1_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_1_CAPTURE 0
#define CPU_1_RX_1_DATA_WIDTH 32
#define CPU_1_RX_1_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_1_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_1_EDGE_TYPE "NONE"
#define CPU_1_RX_1_FREQ 200000000
#define CPU_1_RX_1_HAS_IN 1
#define CPU_1_RX_1_HAS_OUT 0
#define CPU_1_RX_1_HAS_TRI 0
#define CPU_1_RX_1_IRQ -1
#define CPU_1_RX_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_1_IRQ_TYPE "NONE"
#define CPU_1_RX_1_NAME "/dev/cpu_1_rx_1"
#define CPU_1_RX_1_RESET_VALUE 0
#define CPU_1_RX_1_SPAN 16
#define CPU_1_RX_1_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_2 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_2 altera_avalon_pio
#define CPU_1_RX_2_BASE 0x1050
#define CPU_1_RX_2_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_2_CAPTURE 0
#define CPU_1_RX_2_DATA_WIDTH 32
#define CPU_1_RX_2_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_2_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_2_EDGE_TYPE "NONE"
#define CPU_1_RX_2_FREQ 200000000
#define CPU_1_RX_2_HAS_IN 1
#define CPU_1_RX_2_HAS_OUT 0
#define CPU_1_RX_2_HAS_TRI 0
#define CPU_1_RX_2_IRQ -1
#define CPU_1_RX_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_2_IRQ_TYPE "NONE"
#define CPU_1_RX_2_NAME "/dev/cpu_1_rx_2"
#define CPU_1_RX_2_RESET_VALUE 0
#define CPU_1_RX_2_SPAN 16
#define CPU_1_RX_2_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_3 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_3 altera_avalon_pio
#define CPU_1_RX_3_BASE 0x1040
#define CPU_1_RX_3_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_3_CAPTURE 0
#define CPU_1_RX_3_DATA_WIDTH 32
#define CPU_1_RX_3_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_3_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_3_EDGE_TYPE "NONE"
#define CPU_1_RX_3_FREQ 200000000
#define CPU_1_RX_3_HAS_IN 1
#define CPU_1_RX_3_HAS_OUT 0
#define CPU_1_RX_3_HAS_TRI 0
#define CPU_1_RX_3_IRQ -1
#define CPU_1_RX_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_3_IRQ_TYPE "NONE"
#define CPU_1_RX_3_NAME "/dev/cpu_1_rx_3"
#define CPU_1_RX_3_RESET_VALUE 0
#define CPU_1_RX_3_SPAN 16
#define CPU_1_RX_3_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_4 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_4 altera_avalon_pio
#define CPU_1_RX_4_BASE 0x1030
#define CPU_1_RX_4_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_4_CAPTURE 0
#define CPU_1_RX_4_DATA_WIDTH 32
#define CPU_1_RX_4_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_4_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_4_EDGE_TYPE "NONE"
#define CPU_1_RX_4_FREQ 200000000
#define CPU_1_RX_4_HAS_IN 1
#define CPU_1_RX_4_HAS_OUT 0
#define CPU_1_RX_4_HAS_TRI 0
#define CPU_1_RX_4_IRQ -1
#define CPU_1_RX_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_4_IRQ_TYPE "NONE"
#define CPU_1_RX_4_NAME "/dev/cpu_1_rx_4"
#define CPU_1_RX_4_RESET_VALUE 0
#define CPU_1_RX_4_SPAN 16
#define CPU_1_RX_4_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_5 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_5 altera_avalon_pio
#define CPU_1_RX_5_BASE 0x1020
#define CPU_1_RX_5_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_5_CAPTURE 0
#define CPU_1_RX_5_DATA_WIDTH 32
#define CPU_1_RX_5_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_5_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_5_EDGE_TYPE "NONE"
#define CPU_1_RX_5_FREQ 200000000
#define CPU_1_RX_5_HAS_IN 1
#define CPU_1_RX_5_HAS_OUT 0
#define CPU_1_RX_5_HAS_TRI 0
#define CPU_1_RX_5_IRQ -1
#define CPU_1_RX_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_5_IRQ_TYPE "NONE"
#define CPU_1_RX_5_NAME "/dev/cpu_1_rx_5"
#define CPU_1_RX_5_RESET_VALUE 0
#define CPU_1_RX_5_SPAN 16
#define CPU_1_RX_5_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_6 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_6 altera_avalon_pio
#define CPU_1_RX_6_BASE 0x1010
#define CPU_1_RX_6_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_6_CAPTURE 0
#define CPU_1_RX_6_DATA_WIDTH 32
#define CPU_1_RX_6_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_6_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_6_EDGE_TYPE "NONE"
#define CPU_1_RX_6_FREQ 200000000
#define CPU_1_RX_6_HAS_IN 1
#define CPU_1_RX_6_HAS_OUT 0
#define CPU_1_RX_6_HAS_TRI 0
#define CPU_1_RX_6_IRQ -1
#define CPU_1_RX_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_6_IRQ_TYPE "NONE"
#define CPU_1_RX_6_NAME "/dev/cpu_1_rx_6"
#define CPU_1_RX_6_RESET_VALUE 0
#define CPU_1_RX_6_SPAN 16
#define CPU_1_RX_6_TYPE "altera_avalon_pio"


/*
 * cpu_1_rx_7 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_rx_7 altera_avalon_pio
#define CPU_1_RX_7_BASE 0x1000
#define CPU_1_RX_7_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_RX_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_RX_7_CAPTURE 0
#define CPU_1_RX_7_DATA_WIDTH 32
#define CPU_1_RX_7_DO_TEST_BENCH_WIRING 0
#define CPU_1_RX_7_DRIVEN_SIM_VALUE 0
#define CPU_1_RX_7_EDGE_TYPE "NONE"
#define CPU_1_RX_7_FREQ 200000000
#define CPU_1_RX_7_HAS_IN 1
#define CPU_1_RX_7_HAS_OUT 0
#define CPU_1_RX_7_HAS_TRI 0
#define CPU_1_RX_7_IRQ -1
#define CPU_1_RX_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_RX_7_IRQ_TYPE "NONE"
#define CPU_1_RX_7_NAME "/dev/cpu_1_rx_7"
#define CPU_1_RX_7_RESET_VALUE 0
#define CPU_1_RX_7_SPAN 16
#define CPU_1_RX_7_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_0 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_0 altera_avalon_pio
#define CPU_1_TX_0_BASE 0x1110
#define CPU_1_TX_0_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_0_CAPTURE 0
#define CPU_1_TX_0_DATA_WIDTH 32
#define CPU_1_TX_0_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_0_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_0_EDGE_TYPE "NONE"
#define CPU_1_TX_0_FREQ 200000000
#define CPU_1_TX_0_HAS_IN 0
#define CPU_1_TX_0_HAS_OUT 1
#define CPU_1_TX_0_HAS_TRI 0
#define CPU_1_TX_0_IRQ -1
#define CPU_1_TX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_0_IRQ_TYPE "NONE"
#define CPU_1_TX_0_NAME "/dev/cpu_1_tx_0"
#define CPU_1_TX_0_RESET_VALUE 0
#define CPU_1_TX_0_SPAN 16
#define CPU_1_TX_0_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_1 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_1 altera_avalon_pio
#define CPU_1_TX_1_BASE 0x1100
#define CPU_1_TX_1_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_1_CAPTURE 0
#define CPU_1_TX_1_DATA_WIDTH 32
#define CPU_1_TX_1_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_1_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_1_EDGE_TYPE "NONE"
#define CPU_1_TX_1_FREQ 200000000
#define CPU_1_TX_1_HAS_IN 0
#define CPU_1_TX_1_HAS_OUT 1
#define CPU_1_TX_1_HAS_TRI 0
#define CPU_1_TX_1_IRQ -1
#define CPU_1_TX_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_1_IRQ_TYPE "NONE"
#define CPU_1_TX_1_NAME "/dev/cpu_1_tx_1"
#define CPU_1_TX_1_RESET_VALUE 0
#define CPU_1_TX_1_SPAN 16
#define CPU_1_TX_1_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_2 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_2 altera_avalon_pio
#define CPU_1_TX_2_BASE 0x10b0
#define CPU_1_TX_2_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_2_CAPTURE 0
#define CPU_1_TX_2_DATA_WIDTH 32
#define CPU_1_TX_2_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_2_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_2_EDGE_TYPE "NONE"
#define CPU_1_TX_2_FREQ 200000000
#define CPU_1_TX_2_HAS_IN 0
#define CPU_1_TX_2_HAS_OUT 1
#define CPU_1_TX_2_HAS_TRI 0
#define CPU_1_TX_2_IRQ -1
#define CPU_1_TX_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_2_IRQ_TYPE "NONE"
#define CPU_1_TX_2_NAME "/dev/cpu_1_tx_2"
#define CPU_1_TX_2_RESET_VALUE 0
#define CPU_1_TX_2_SPAN 16
#define CPU_1_TX_2_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_3 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_3 altera_avalon_pio
#define CPU_1_TX_3_BASE 0x10a0
#define CPU_1_TX_3_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_3_CAPTURE 0
#define CPU_1_TX_3_DATA_WIDTH 32
#define CPU_1_TX_3_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_3_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_3_EDGE_TYPE "NONE"
#define CPU_1_TX_3_FREQ 200000000
#define CPU_1_TX_3_HAS_IN 0
#define CPU_1_TX_3_HAS_OUT 1
#define CPU_1_TX_3_HAS_TRI 0
#define CPU_1_TX_3_IRQ -1
#define CPU_1_TX_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_3_IRQ_TYPE "NONE"
#define CPU_1_TX_3_NAME "/dev/cpu_1_tx_3"
#define CPU_1_TX_3_RESET_VALUE 0
#define CPU_1_TX_3_SPAN 16
#define CPU_1_TX_3_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_4 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_4 altera_avalon_pio
#define CPU_1_TX_4_BASE 0x1090
#define CPU_1_TX_4_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_4_CAPTURE 0
#define CPU_1_TX_4_DATA_WIDTH 32
#define CPU_1_TX_4_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_4_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_4_EDGE_TYPE "NONE"
#define CPU_1_TX_4_FREQ 200000000
#define CPU_1_TX_4_HAS_IN 0
#define CPU_1_TX_4_HAS_OUT 1
#define CPU_1_TX_4_HAS_TRI 0
#define CPU_1_TX_4_IRQ -1
#define CPU_1_TX_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_4_IRQ_TYPE "NONE"
#define CPU_1_TX_4_NAME "/dev/cpu_1_tx_4"
#define CPU_1_TX_4_RESET_VALUE 0
#define CPU_1_TX_4_SPAN 16
#define CPU_1_TX_4_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_5 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_5 altera_avalon_pio
#define CPU_1_TX_5_BASE 0x1080
#define CPU_1_TX_5_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_5_CAPTURE 0
#define CPU_1_TX_5_DATA_WIDTH 32
#define CPU_1_TX_5_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_5_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_5_EDGE_TYPE "NONE"
#define CPU_1_TX_5_FREQ 200000000
#define CPU_1_TX_5_HAS_IN 0
#define CPU_1_TX_5_HAS_OUT 1
#define CPU_1_TX_5_HAS_TRI 0
#define CPU_1_TX_5_IRQ -1
#define CPU_1_TX_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_5_IRQ_TYPE "NONE"
#define CPU_1_TX_5_NAME "/dev/cpu_1_tx_5"
#define CPU_1_TX_5_RESET_VALUE 0
#define CPU_1_TX_5_SPAN 16
#define CPU_1_TX_5_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_6 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_6 altera_avalon_pio
#define CPU_1_TX_6_BASE 0x1070
#define CPU_1_TX_6_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_6_CAPTURE 0
#define CPU_1_TX_6_DATA_WIDTH 32
#define CPU_1_TX_6_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_6_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_6_EDGE_TYPE "NONE"
#define CPU_1_TX_6_FREQ 200000000
#define CPU_1_TX_6_HAS_IN 0
#define CPU_1_TX_6_HAS_OUT 1
#define CPU_1_TX_6_HAS_TRI 0
#define CPU_1_TX_6_IRQ -1
#define CPU_1_TX_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_6_IRQ_TYPE "NONE"
#define CPU_1_TX_6_NAME "/dev/cpu_1_tx_6"
#define CPU_1_TX_6_RESET_VALUE 0
#define CPU_1_TX_6_SPAN 16
#define CPU_1_TX_6_TYPE "altera_avalon_pio"


/*
 * cpu_1_tx_7 configuration
 *
 */

#define ALT_MODULE_CLASS_cpu_1_tx_7 altera_avalon_pio
#define CPU_1_TX_7_BASE 0x1060
#define CPU_1_TX_7_BIT_CLEARING_EDGE_REGISTER 0
#define CPU_1_TX_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CPU_1_TX_7_CAPTURE 0
#define CPU_1_TX_7_DATA_WIDTH 32
#define CPU_1_TX_7_DO_TEST_BENCH_WIRING 0
#define CPU_1_TX_7_DRIVEN_SIM_VALUE 0
#define CPU_1_TX_7_EDGE_TYPE "NONE"
#define CPU_1_TX_7_FREQ 200000000
#define CPU_1_TX_7_HAS_IN 0
#define CPU_1_TX_7_HAS_OUT 1
#define CPU_1_TX_7_HAS_TRI 0
#define CPU_1_TX_7_IRQ -1
#define CPU_1_TX_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CPU_1_TX_7_IRQ_TYPE "NONE"
#define CPU_1_TX_7_NAME "/dev/cpu_1_tx_7"
#define CPU_1_TX_7_RESET_VALUE 0
#define CPU_1_TX_7_SPAN 16
#define CPU_1_TX_7_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x3560
#define JTAG_UART_0_IRQ -1
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8

#endif /* __SYSTEM_H_ */
