/*
 * Copyright (c) 2018, UNISOC Incorporated
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __BT_CONFIGURE_H__
#define __BT_CONFIGURE_H__
#include <zephyr/types.h>

typedef struct {
	uint32_t  device_class;
	uint8_t  feature_set[16];
	uint8_t  device_addr[6];
	uint16_t  comp_id;
	uint8_t g_sys_uart0_communication_supported;
	uint8_t cp2_log_mode;
	uint8_t LogLevel;
	uint8_t g_central_or_perpheral;
	uint16_t Log_BitMask;
	uint8_t super_ssp_enable;
	uint8_t common_rfu_b3;
	uint32_t common_rfu_w[2];
	uint32_t le_rfu_w[2];
	uint32_t lmp_rfu_w[2];
	uint32_t lc_rfu_w[2];
	uint16_t g_wbs_nv_117;
	uint16_t g_wbs_nv_118;
	uint16_t g_nbv_nv_117;
	uint16_t g_nbv_nv_118;
	uint8_t g_sys_sco_transmit_mode;
	uint8_t audio_rfu_b1;
	uint8_t audio_rfu_b2;
	uint8_t audio_rfu_b3;
	uint32_t audio_rfu_w[2];
	uint8_t g_sys_sleep_in_standby_supported;
	uint8_t g_sys_sleep_master_supported;
	uint8_t g_sys_sleep_slave_supported;
	uint8_t power_rfu_b1;
	uint32_t power_rfu_w[2];
	uint32_t win_ext;
	uint8_t edr_tx_edr_delay;
	uint8_t edr_rx_edr_delay;
	uint8_t tx_delay;
	uint8_t rx_delay;
	uint32_t bb_rfu_w[2];
	uint8_t agc_mode;
	uint8_t diff_or_eq;
	uint8_t ramp_mode;
	uint8_t modem_rfu_b1;
	uint32_t modem_rfu_w[2];
	uint32_t BQB_BitMask_1;
	uint32_t BQB_BitMask_2;
	uint16_t bt_coex_threshold[8];
	uint32_t other_rfu_w[2];
} pskey_config_t;

static pskey_config_t marlin3_pskey = {
	.device_class = 0x001F00,
	.feature_set = { 0xFF, 0xFF, 0x8D, 0xFE, 0xDB, 0x7D, 0x7B, 0x83, 0xFF, 0xA7, 0xFF, 0x7F, 0x00, 0xE0, 0xF7, 0x3E},
	.device_addr = { 0x6D, 0x6D, 0x8E, 0x8E, 0x8F, 0x8F},
	.comp_id = 0x01EC,
	.g_sys_uart0_communication_supported = 1,
	.cp2_log_mode = 1,
	.LogLevel = 0xFF,
	.g_central_or_perpheral = 0,
	.Log_BitMask = 0xFFFF,
	.super_ssp_enable = 0,
	.common_rfu_b3 = 0,
	.common_rfu_w = { 0x00000000, 0x00000000},
	.le_rfu_w = { 0x00000000, 0x000000000},
	.lmp_rfu_w = { 0x00000000, 0x000000000},
	.lc_rfu_w = { 0x00000000, 0x000000000},
	.g_wbs_nv_117 = 0x004D,
	.g_wbs_nv_118 = 0x0076,
	.g_nbv_nv_117 = 0x009B,
	.g_nbv_nv_118 = 0x0A55,
	.g_sys_sco_transmit_mode = 0,
	.audio_rfu_b1 = 0,
	.audio_rfu_b2 = 0,
	.audio_rfu_b3 = 0,
	.audio_rfu_w = { 0x00000000, 0x00000000},
	.g_sys_sleep_in_standby_supported = 1,
	.g_sys_sleep_master_supported = 1,
	.g_sys_sleep_slave_supported = 1,
	.power_rfu_b1 = 0,
	.power_rfu_w = { 0x00000000, 0x00000000},
	.win_ext = 40,
	.edr_tx_edr_delay = 6,
	.edr_rx_edr_delay = 8,
	.tx_delay = 12,
	.rx_delay = 34,
	.bb_rfu_w = { 0x00000000, 0x00000000},
	.agc_mode = 0,
	.diff_or_eq = 0,
	.ramp_mode = 0,
	.modem_rfu_b1 = 0,
	.modem_rfu_w = { 0x00000000, 0x00000000},
	.BQB_BitMask_1 = 0x00000000,
	.BQB_BitMask_2 = 0x00000000,
	.bt_coex_threshold = { 0x04E2, 0x1F40, 0x0020, 0x00C8, 0x0006, 0x0000, 0x0000, 0x0000},
	.other_rfu_w = { 0x00000000, 0x00000000},
};

typedef struct {
	uint16_t g_GainValue_A[6];
	uint16_t g_ClassicPowerValue_A[10];
	uint16_t g_LEPowerValue_A[16];
	uint16_t g_BRChannelpwrvalue_A[8];
	uint16_t g_EDRChannelpwrvalue_A[8];
	uint16_t g_LEChannelpwrvalue_A[8];
	uint16_t g_GainValue_B[6];
	uint16_t g_ClassicPowerValue_B[10];
	uint16_t g_LEPowerValue_B[16];
	uint16_t g_BRChannelpwrvalue_B[8];
	uint16_t g_EDRChannelpwrvalue_B[8];
	uint16_t g_LEChannelpwrvalue_B[8];
	uint16_t LE_fix_powerword;
	uint8_t Classic_pc_by_channel;
	uint8_t LE_pc_by_channel;
	uint8_t RF_switch_mode;
	uint8_t Data_Capture_Mode;
	uint8_t Analog_IQ_Debug_Mode;
	uint8_t RF_common_rfu_b3;
	uint32_t RF_common_rfu_w[5];
}rf_config_t;

static rf_config_t marlin3_rf_config = {
	.g_GainValue_A = { 0xE000, 0xE000, 0xE000, 0xE000, 0xE000, 0xE000},
	.g_ClassicPowerValue_A = { 0x4115, 0x3A15, 0x3415, 0x2E15, 0x2715, 0x2115, 0x1715, 0x1115, 0x0B15, 0x0715},
	.g_LEPowerValue_A = { 0x3B15, 0x3715, 0x3315, 0x2F15, 0x2B15, 0x2715, 0x2315, 0x1F15, 0x1B15, 0x1715, 0x1315, 0x0F15, 0x0B15, 0x0815, 0x0415, 0x0015},
	.g_BRChannelpwrvalue_A = { 0x0615, 0x0615, 0x0615, 0x0815, 0x0615, 0x0915, 0x0915, 0x0915},
	.g_EDRChannelpwrvalue_A = { 0x0615, 0x0615, 0x0615, 0x0815, 0x0615, 0x0915, 0x0915, 0x0915},
	.g_LEChannelpwrvalue_A = { 0x0C15,0x0C15,0x0C15,0x0C15,0x0C15, 0x0C15, 0x0C15, 0x0C15},
	.g_GainValue_B = { 0xE000, 0xE000, 0xE000, 0xE000, 0xE000, 0xE000},
	.g_ClassicPowerValue_B = { 0x4815,0x4215,0x3C15, 0x3415, 0x2C15, 0x2615, 0x2115,0x1B15,0x1615,0x0915},
	.g_LEPowerValue_B = { 0x4A15, 0x4515, 0x4015, 0x3C15, 0x3815, 0x3215, 0x2E15, 0x2915, 0x2515, 0x2115, 0x1C15, 0x1915, 0x1515, 0x1115, 0x0D15, 0x0915},
	.g_BRChannelpwrvalue_B = { 0x1015, 0x1015, 0x0915, 0x1115, 0x1115, 0x1115, 0x1115, 0x1115},
	.g_EDRChannelpwrvalue_B = { 0x1015, 0x1015, 0x0915, 0x1115, 0x1115, 0x1115, 0x1115, 0x1115},
	.g_LEChannelpwrvalue_B = { 0x1515, 0x1515,0x1615, 0x1715, 0x1715, 0x1715, 0x1815, 0x1815},
	.LE_fix_powerword = 0x00,
	.Classic_pc_by_channel = 0xFF,
	.LE_pc_by_channel = 0xFF,
	.RF_switch_mode = 0x02,
	.Data_Capture_Mode = 0x00,
	.Analog_IQ_Debug_Mode = 0x00,
	.RF_common_rfu_b3 = 0x55,
	.RF_common_rfu_w = { 0x55555050, 0x55555555, 0x55555555, 0x55555555, 0x55555555},
};

#endif /* __BT_CONFIGURE_H__ */
