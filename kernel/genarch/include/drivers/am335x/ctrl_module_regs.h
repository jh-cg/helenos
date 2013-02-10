/*
 * Copyright (c) 2013 Maurizio Lombardi
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - The name of the author may not be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** @addtogroup genarch
 * @{
 */
/**
 * @file
 * @brief Texas Instruments AM335x control module registers.
 */

#ifndef _KERN_AM335X_CTRL_MODULE_REGS_H_
#define _KERN_AM335X_CTRL_MODULE_REGS_H_

#define AM335x_CTRL_MODULE_REG_ADDR(base, name) \
	    ((ioport32_t *)(AM335x_CTRL_MODULE_##name##_OFFSET + \
	    ((ioport8_t *) base)))

#define AM335x_CTRL_MODULE_CONTROL_REVISION_OFFSET          0x00
#define AM335x_CTRL_MODULE_CONTROL_HWINFO_OFFSET            0x04
#define AM335x_CTRL_MODULE_CONTROL_SYSCONFIG_OFFSET         0x10
#define AM335x_CTRL_MODULE_CONTROL_STATUS_OFFSET            0x40
#define AM335x_CTRL_MODULE_CONTROL_EMIF_SDRAM_CONFIG_OFFSET 0x110
#define AM335x_CTRL_MODULE_CORTEX_VBBLDO_CTRL_OFFSET        0x41C
#define AM335x_CTRL_MODULE_CORE_SLDO_CTRL_OFFSET            0x428
#define AM335x_CTRL_MODULE_MPU_SLDO_CTRL_OFFSET             0x42C
#define AM335x_CTRL_MODULE_CLK32KDIVRATIO_CTRL_OFFSET       0x444
#define AM335x_CTRL_MODULE_BANDGAP_CTRL_OFFSET              0x448
#define AM335x_CTRL_MODULE_BANDGAP_TRIM_OFFSET              0x44C
#define AM335x_CTRL_MODULE_PLL_CLKINPULOW_CTRL_OFFSET       0x458
#define AM335x_CTRL_MODULE_MOSC_CTRL_OFFSET                 0x468
#define AM335x_CTRL_MODULE_ROSC_CTRL_OFFSET                 0x46C
#define AM335x_CTRL_MODULE_DEEPSLEEP_CTRL_OFFSET            0x470
#define AM335x_CTRL_MODULE_DEVICE_ID_OFFSET                 0x600
#define AM335x_CTRL_MODULE_DEV_FEATURE_OFFSET               0x604
#define AM335x_CTRL_MODULE_INIT_PRIORITY_0_OFFSET           0x608
#define AM335x_CTRL_MODULE_INIT_PRIORITY_1_OFFSET           0x60C
#define AM335x_CTRL_MODULE_MMU_CFG_OFFSET                   0x610
#define AM335x_CTRL_MODULE_TPTC_CFG_OFFSET                  0x614
#define AM335x_CTRL_MODULE_USB_CTRL0_OFFSET                 0x620
#define AM335x_CTRL_MODULE_USB_STS0_OFFSET                  0x624
#define AM335x_CTRL_MODULE_USB_CTRL1_OFFSET                 0x628
#define AM335x_CTRL_MODULE_USB_STS1_OFFSET                  0x62C
#define AM335x_CTRL_MODULE_MAC_ID0_LO_OFFSET                0x630
#define AM335x_CTRL_MODULE_MAC_ID0_HI_OFFSET                0x634
#define AM335x_CTRL_MODULE_MAC_ID1_LO_OFFSET                0x638
#define AM335x_CTRL_MODULE_MAC_ID1_HI_OFFSET                0x63C
#define AM335x_CTRL_MODULE_DCAN_RAMINIT_OFFSET              0x644
#define AM335x_CTRL_MODULE_USB_WKUP_CTRL_OFFSET             0x648
#define AM335x_CTRL_MODULE_GMII_SEL_OFFSET                  0x650
#define AM335x_CTRL_MODULE_PWMSS_CTRL_OFFSET                0x664
#define AM335x_CTRL_MODULE_MREQPRIO_0_OFFSET                0x670
#define AM335x_CTRL_MODULE_MREQPRIO_1_OFFSET                0x674
#define AM335x_CTRL_MODULE_HW_EVENT_SEL_GRP1_OFFSET         0x690
#define AM335x_CTRL_MODULE_HW_EVENT_SEL_GRP2_OFFSET         0x694
#define AM335x_CTRL_MODULE_HW_EVENT_SEL_GRP3_OFFSET         0x698
#define AM335x_CTRL_MODULE_HW_EVENT_SEL_GRP4_OFFSET         0x69C
#define AM335x_CTRL_MODULE_SMRT_CTRL_OFFSET                 0x6A0
#define AM335x_CTRL_MODULE_MPUSS_HW_DEBUG_SEL_OFFSET        0x6A4
#define AM335x_CTRL_MODULE_MPUSS_HW_DBG_INFO_OFFSET         0x6A8
#define AM335x_CTRL_MODULE_VDD_MPU_OPP_050_OFFSET           0x770
#define AM335x_CTRL_MODULE_VDD_MPU_OPP_100_OFFSET           0x774
#define AM335x_CTRL_MODULE_VDD_MPU_OPP_120_OFFSET           0x778
#define AM335x_CTRL_MODULE_VDD_MPU_OPP_TURBO_OFFSET         0x77C
#define AM335x_CTRL_MODULE_VDD_CORE_OPP_050_OFFSET          0x7B8
#define AM335x_CTRL_MODULE_VDD_CORE_OPP_100_OFFSET          0x7BC
#define AM335x_CTRL_MODULE_BB_SCALE_OFFSET                  0x7D0
#define AM335x_CTRL_MODULE_USB_VID_PID_OFFSET               0x7F4
#define AM335x_CTRL_MODULE_CONF_GPMC_AD0_OFFSET             0x800
#define AM335x_CTRL_MODULE_CONF_GPMC_AD1_OFFSET             0x804
#define AM335x_CTRL_MODULE_CONF_GPMC_AD2_OFFSET             0x808
#define AM335x_CTRL_MODULE_CONF_GPMC_AD3_OFFSET             0x80C
#define AM335x_CTRL_MODULE_CONF_GPMC_AD4_OFFSET             0x810
#define AM335x_CTRL_MODULE_CONF_GPMC_AD5_OFFSET             0x814
#define AM335x_CTRL_MODULE_CONF_GPMC_AD6_OFFSET             0x818
#define AM335x_CTRL_MODULE_CONF_GPMC_AD7_OFFSET             0x81C
#define AM335x_CTRL_MODULE_CONF_GPMC_AD8_OFFSET             0x820
#define AM335x_CTRL_MODULE_CONF_GPMC_AD9_OFFSET             0x824
#define AM335x_CTRL_MODULE_CONF_GPMC_AD10_OFFSET            0x828
#define AM335x_CTRL_MODULE_CONF_GPMC_AD11_OFFSET            0x82C
#define AM335x_CTRL_MODULE_CONF_GPMC_AD12_OFFSET            0x830
#define AM335x_CTRL_MODULE_CONF_GPMC_AD13_OFFSET            0x834
#define AM335x_CTRL_MODULE_CONF_GPMC_AD14_OFFSET            0x838
#define AM335x_CTRL_MODULE_CONF_GPMC_AD15_OFFSET            0x83C
#define AM335x_CTRL_MODULE_CONF_GPMC_A0_OFFSET              0x840
#define AM335x_CTRL_MODULE_CONF_GPMC_A1_OFFSET              0x844
#define AM335x_CTRL_MODULE_CONF_GPMC_A2_OFFSET              0x848
#define AM335x_CTRL_MODULE_CONF_GPMC_A3_OFFSET              0x84C
#define AM335x_CTRL_MODULE_CONF_GPMC_A4_OFFSET              0x850
#define AM335x_CTRL_MODULE_CONF_GPMC_A5_OFFSET              0x854
#define AM335x_CTRL_MODULE_CONF_GPMC_A6_OFFSET              0x858
#define AM335x_CTRL_MODULE_CONF_GPMC_A7_OFFSET              0x85C
#define AM335x_CTRL_MODULE_CONF_GPMC_A8_OFFSET              0x860
#define AM335x_CTRL_MODULE_CONF_GPMC_A9_OFFSET              0x864
#define AM335x_CTRL_MODULE_CONF_GPMC_A10_OFFSET             0x868
#define AM335x_CTRL_MODULE_CONF_GPMC_A11_OFFSET             0x86C
#define AM335x_CTRL_MODULE_CONF_GPMC_WAIT0_OFFSET           0x870
#define AM335x_CTRL_MODULE_CONF_GPMC_WPN_OFFSET             0x874
#define AM335x_CTRL_MODULE_CONF_GPMC_BEN1_OFFSET            0x878
#define AM335x_CTRL_MODULE_CONF_GPMC_CSN0_OFFSET            0x87C
#define AM335x_CTRL_MODULE_CONF_GPMC_CSN1_OFFSET            0x880
#define AM335x_CTRL_MODULE_CONF_GPMC_CSN2_OFFSET            0x884
#define AM335x_CTRL_MODULE_CONF_GPMC_CSN3_OFFSET            0x888
#define AM335x_CTRL_MODULE_CONF_GPMC_CLK_OFFSET             0x88C
#define AM335x_CTRL_MODULE_CONF_GPMC_ADVN_ALE_OFFSET        0x890
#define AM335x_CTRL_MODULE_CONF_GPMC_OEN_REN_OFFSET         0x894
#define AM335x_CTRL_MODULE_CONF_GPMC_WEN_OFFSET             0x898
#define AM335x_CTRL_MODULE_CONF_GPMC_BEN0_CLE_OFFSET        0x89C
#define AM335x_CTRL_MODULE_CONF_LCD_DATA0_OFFSET            0x8A0
#define AM335x_CTRL_MODULE_CONF_LCD_DATA1_OFFSET            0x8A4
#define AM335x_CTRL_MODULE_CONF_LCD_DATA2_OFFSET            0x8A8
#define AM335x_CTRL_MODULE_CONF_LCD_DATA3_OFFSET            0x8AC
#define AM335x_CTRL_MODULE_CONF_LCD_DATA4_OFFSET            0x8B0
#define AM335x_CTRL_MODULE_CONF_LCD_DATA5_OFFSET            0x8B4
#define AM335x_CTRL_MODULE_CONF_LCD_DATA6_OFFSET            0x8B8
#define AM335x_CTRL_MODULE_CONF_LCD_DATA7_OFFSET            0x8BC
#define AM335x_CTRL_MODULE_CONF_LCD_DATA8_OFFSET            0x8C0
#define AM335x_CTRL_MODULE_CONF_LCD_DATA9_OFFSET            0x8C4
#define AM335x_CTRL_MODULE_CONF_LCD_DATA10_OFFSET           0x8C8
#define AM335x_CTRL_MODULE_CONF_LCD_DATA11_OFFSET           0x8CC
#define AM335x_CTRL_MODULE_CONF_LCD_DATA12_OFFSET           0x8D0
#define AM335x_CTRL_MODULE_CONF_LCD_DATA13_OFFSET           0x8D4
#define AM335x_CTRL_MODULE_CONF_LCD_DATA14_OFFSET           0x8D8
#define AM335x_CTRL_MODULE_CONF_LCD_DATA15_OFFSET           0x8DC
#define AM335x_CTRL_MODULE_CONF_LCD_VSYNC_OFFSET            0x8E0
#define AM335x_CTRL_MODULE_CONF_LCD_HSYNC_OFFSET            0x8E4
#define AM335x_CTRL_MODULE_CONF_LCD_PCLK_OFFSET             0x8E8
#define AM335x_CTRL_MODULE_CONF_LCD_AC_BIAS_EN_OFFSET       0x8EC
#define AM335x_CTRL_MODULE_CONF_MMC0_DAT3_OFFSET            0x8F0
#define AM335x_CTRL_MODULE_CONF_MMC0_DAT2_OFFSET            0x8F4
#define AM335x_CTRL_MODULE_CONF_MMC0_DAT1_OFFSET            0x8F8
#define AM335x_CTRL_MODULE_CONF_MMC0_DAT0_OFFSET            0x8FC
#define AM335x_CTRL_MODULE_CONF_MMC0_CLK_OFFSET             0x900
#define AM335x_CTRL_MODULE_CONF_MMC0_CMD_OFFSET             0x904
#define AM335x_CTRL_MODULE_CONF_MII1_COL_OFFSET             0x908
#define AM335x_CTRL_MODULE_CONF_MII1_CRS_OFFSET             0x90C
#define AM335x_CTRL_MODULE_CONF_MII1_RX_ER_OFFSET           0x910
#define AM335x_CTRL_MODULE_CONF_MII1_TX_EN_OFFSET           0x914
#define AM335x_CTRL_MODULE_CONF_MII1_RX_DV_OFFSET           0x918
#define AM335x_CTRL_MODULE_CONF_MII1_TXD3_OFFSET            0x91C
#define AM335x_CTRL_MODULE_CONF_MII1_TXD2_OFFSET            0x920
#define AM335x_CTRL_MODULE_CONF_MII1_TXD1_OFFSET            0x924
#define AM335x_CTRL_MODULE_CONF_MII1_TXD0_OFFSET            0x928
#define AM335x_CTRL_MODULE_CONF_MII1_TX_CLK_OFFSET          0x92C
#define AM335x_CTRL_MODULE_CONF_MII1_RX_CLK_OFFSET          0x930
#define AM335x_CTRL_MODULE_CONF_MII1_RXD3_OFFSET            0x934
#define AM335x_CTRL_MODULE_CONF_MII1_RXD2_OFFSET            0x938
#define AM335x_CTRL_MODULE_CONF_MII1_RXD1_OFFSET            0x93C
#define AM335x_CTRL_MODULE_CONF_MII1_RXD0_OFFSET            0x940
#define AM335x_CTRL_MODULE_CONF_RMII1_REF_CLK_OFFSET        0x944
#define AM335x_CTRL_MODULE_CONF_MDIO_OFFSET                 0x948
#define AM335x_CTRL_MODULE_CONF_MDC_OFFSET                  0x94C
#define AM335x_CTRL_MODULE_CONF_SPI0_SCLK_OFFSET            0x950
#define AM335x_CTRL_MODULE_CONF_SPI0_D0_OFFSET              0x954
#define AM335x_CTRL_MODULE_CONF_SPI0_D1_OFFSET              0x958
#define AM335x_CTRL_MODULE_CONF_SPI0_CS0_OFFSET             0x95C
#define AM335x_CTRL_MODULE_CONF_SPI0_CS1_OFFSET             0x960
#define AM335x_CTRL_MODULE_CONF_ECAP0_IN_PWM0_OUT_OFFSET    0x964
#define AM335x_CTRL_MODULE_CONF_UART0_CTSN_OFFSET           0x968
#define AM335x_CTRL_MODULE_CONF_UART0_RTSN_OFFSET           0x96C
#define AM335x_CTRL_MODULE_CONF_UART0_RXD_OFFSET            0x970
#define AM335x_CTRL_MODULE_CONF_UART0_TXD_OFFSET            0x974
#define AM335x_CTRL_MODULE_CONF_UART1_CTSN_OFFSET           0x978
#define AM335x_CTRL_MODULE_CONF_UART1_RTSN_OFFSET           0x97C
#define AM335x_CTRL_MODULE_CONF_UART1_RXD_OFFSET            0x980
#define AM335x_CTRL_MODULE_CONF_UART1_TXD_OFFSET            0x984
#define AM335x_CTRL_MODULE_CONF_I2C0_SDA_OFFSET             0x988
#define AM335x_CTRL_MODULE_CONF_I2C0_SCL_OFFSET             0x98C
#define AM335x_CTRL_MODULE_CONF_MCASP0_ACLKX_OFFSET         0x990
#define AM335x_CTRL_MODULE_CONF_MCASP0_FSX_OFFSET           0x994
#define AM335x_CTRL_MODULE_CONF_MCASP0_AXR0_OFFSET          0x998
#define AM335x_CTRL_MODULE_CONF_MCASP0_AHCLKR_OFFSET        0x99C
#define AM335x_CTRL_MODULE_CONF_MCASP0_ACLKR_OFFSET         0x9A0
#define AM335x_CTRL_MODULE_CONF_MCASP0_FSR_OFFSET           0x9A4
#define AM335x_CTRL_MODULE_CONF_MCASP0_AXR1_OFFSET          0x9A8
#define AM335x_CTRL_MODULE_CONF_MCASP0_AHCLKX_OFFSET        0x9AC
#define AM335x_CTRL_MODULE_CONF_XDMA_EVENT_INTR0_OFFSET     0x9B0
#define AM335x_CTRL_MODULE_CONF_XDMA_EVENT_INTR1_OFFSET     0x9B4
#define AM335x_CTRL_MODULE_CONF_WARMRSTN_OFFSET             0x9B8
#define AM335x_CTRL_MODULE_CONF_PWRONRSTN_OFFSET            0x9BC
#define AM335x_CTRL_MODULE_CONF_NNMI_OFFSET                 0x9C0
#define AM335x_CTRL_MODULE_CONF_XTALIN_OFFSET               0x9C4
#define AM335x_CTRL_MODULE_CONF_XTALOUT_OFFSET              0x9C8
#define AM335x_CTRL_MODULE_CONF_TMS_OFFSET                  0x9D0
#define AM335x_CTRL_MODULE_CONF_TDI_OFFSET                  0x9D4
#define AM335x_CTRL_MODULE_CONF_TDO_OFFSET                  0x9D8
#define AM335x_CTRL_MODULE_CONF_TCK_OFFSET                  0x9DC
#define AM335x_CTRL_MODULE_CONF_TRSTN_OFFSET                0x9E0
#define AM335x_CTRL_MODULE_CONF_EMU0_OFFSET                 0x9E4
#define AM335x_CTRL_MODULE_CONF_EMU1_OFFSET                 0x9E8
#define AM335x_CTRL_MODULE_CONF_RTC_XTALIN_OFFSET           0x9EC
#define AM335x_CTRL_MODULE_CONF_RTC_XTALOUT_OFFSET          0x9F0
#define AM335x_CTRL_MODULE_CONF_RTC_PWRONRSTN_OFFSET        0x9F8
#define AM335x_CTRL_MODULE_CONF_PMIC_POWER_EN_OFFSET        0x9FC
#define AM335x_CTRL_MODULE_CONF_EXT_WAKEUP_OFFSET           0xA00
#define AM335x_CTRL_MODULE_CONF_RTC_KALDO_ENN_OFFSET        0xA04
#define AM335x_CTRL_MODULE_CONF_USB0_DM_OFFSET              0xA08
#define AM335x_CTRL_MODULE_CONF_USB0_DP_OFFSET              0xA0C
#define AM335x_CTRL_MODULE_CONF_USB0_CE_OFFSET              0xA10
#define AM335x_CTRL_MODULE_CONF_USB0_ID_OFFSET              0xA14
#define AM335x_CTRL_MODULE_CONF_USB0_VBUS_OFFSET            0xA18
#define AM335x_CTRL_MODULE_CONF_USB0_DRVVBUS_OFFSET         0xA1C
#define AM335x_CTRL_MODULE_CONF_USB1_DM_OFFSET              0xA20
#define AM335x_CTRL_MODULE_CONF_USB1_DP_OFFSET              0xA24
#define AM335x_CTRL_MODULE_CONF_USB1_CE_OFFSET              0xA28
#define AM335x_CTRL_MODULE_CONF_USB1_ID_OFFSET              0xA2C
#define AM335x_CTRL_MODULE_CONF_USB1_VBUS_OFFSET            0xA30
#define AM335x_CTRL_MODULE_CONF_USB1_DRVVBUS_OFFSET         0xA34
#define AM335x_CTRL_MODULE_CQDETECT_STATUS_OFFSET           0xE00
#define AM335x_CTRL_MODULE_DDR_IO_CTRL_OFFSET               0xE04
#define AM335x_CTRL_MODULE_VTP_CTRL_OFFSET                  0xE0C
#define AM335x_CTRL_MODULE_VREF_CTRL_OFFSET                 0xE14
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_0_3_OFFSET          0xF90
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_4_7_OFFSET          0xF94
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_8_11_OFFSET         0xF98
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_12_15_OFFSET        0xF9C
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_16_19_OFFSET        0xFA0
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_20_23_OFFSET        0xFA4
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_24_27_OFFSET        0xFA8
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_28_31_OFFSET        0xFAC
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_32_35_OFFSET        0xFB0
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_36_39_OFFSET        0xFB4
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_40_43_OFFSET        0xFB8
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_44_47_OFFSET        0xFBC
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_48_51_OFFSET        0xFC0
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_52_55_OFFSET        0xFC4
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_56_59_OFFSET        0xFC8
#define AM335x_CTRL_MODULE_TPCC_EVT_MUX_60_63_OFFSET        0xFCC
#define AM335x_CTRL_MODULE_TIMER_EVT_CAPT_OFFSET            0xFD0
#define AM335x_CTRL_MODULE_ECAP_EVT_CAPT_OFFSET             0xFD4
#define AM335x_CTRL_MODULE_ADC_EVT_CAPT_OFFSET              0xFD8
#define AM335x_CTRL_MODULE_RESET_ISO_OFFSET                 0x1000
#define AM335x_CTRL_MODULE_DDR_CKE_CTRL_OFFSET              0x131C
#define AM335x_CTRL_MODULE_SMA2_OFFSET                      0x1320
#define AM335x_CTRL_MODULE_M3_TXEV_EOI_OFFSET               0x1324
#define AM335x_CTRL_MODULE_IPC_MSG_REG0_OFFSET              0x1328
#define AM335x_CTRL_MODULE_IPC_MSG_REG1_OFFSET              0x132C
#define AM335x_CTRL_MODULE_IPC_MSG_REG2_OFFSET              0x1330
#define AM335x_CTRL_MODULE_IPC_MSG_REG3_OFFSET              0x1334
#define AM335x_CTRL_MODULE_IPC_MSG_REG4_OFFSET              0x1338
#define AM335x_CTRL_MODULE_IPC_MSG_REG5_OFFSET              0x133C
#define AM335x_CTRL_MODULE_IPC_MSG_REG6_OFFSET              0x1340
#define AM335x_CTRL_MODULE_IPC_MSG_REG7_OFFSET              0x1344
#define AM335x_CTRL_MODULE_DDR_CMD0_IOCTRL_OFFSET           0x1404
#define AM335x_CTRL_MODULE_DDR_CMD1_IOCTRL_OFFSET           0x1408
#define AM335x_CTRL_MODULE_DDR_CMD2_IOCTRL_OFFSET           0x140C
#define AM335x_CTRL_MODULE_DDR_DATA0_IOCTRL_OFFSET          0x1440
#define AM335x_CTRL_MODULE_DDR_DATA1_IOCTRL_OFFSET          0x1444

#endif

/**
 * @}
 */
