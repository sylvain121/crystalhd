/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_clk.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 7:58p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:39 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_clk.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 7:58p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_CLK_H__
#define BCHP_CLK_H__

/***************************************************************************
 *CLK - CLOCK_GEN Registers
 ***************************************************************************/
#define BCHP_CLK_REVISION                        0x00070000 /* clock_gen Revision register */
#define BCHP_CLK_PM_CTRL                         0x00070004 /* Software power management control to turn off clocks */
#define BCHP_CLK_REGULATOR_2P5_VOLTS             0x0007003c /* 2.5V Regulator Voltage Adjustment */
#define BCHP_CLK_TEMP_MON_CTRL                   0x00070040 /* Temperature monitor control. */
#define BCHP_CLK_TEMP_MON_STATUS                 0x00070044 /* Temperature monitor status. */
#define BCHP_CLK_SCRATCH                         0x00070070 /* clock_gen  Scratch register */
#define BCHP_CLK_PLL0_ARM_DIV                    0x00070110 /* Main PLL0 channel 3 ARM clock divider settings */
#define BCHP_CLK_PLL0_LOCK_CNT                   0x0007011c /* Main PLL0 Lock Counter */
#define BCHP_CLK_PLL1_CTRL                       0x00070120 /* Main PLL1 reset, enable, powerdown, and control */
#define BCHP_CLK_PLL1_CTRL_LO                    0x00070124 /* Main PLL1 pll_ctrl low 32 bits */
#define BCHP_CLK_PLL1_AVD_DIV                    0x00070128 /* Main PLL1 divider settings for VCO and channel 1 AVD clock */
#define BCHP_CLK_PLL1_SPARE2_DIV                 0x0007012c /* Main PLL1 divider settings for channel 2 spare clock */
#define BCHP_CLK_PLL1_SPARE3_DIV                 0x00070130 /* Main PLL1 divider settings for channel 3 spare clock */
#define BCHP_CLK_PLL1_LOCK_CNT                   0x0007013c /* Main PLL1 Lock Counter */
#define BCHP_CLK_PLL_LOCK                        0x00070200 /* PLL lock status */
#define BCHP_CLK_PLL_LOCK_CNTR_RESET             0x00070204 /* PLL Lock Counter Resets */
#define BCHP_CLK_PLL_TEST_SEL                    0x00070208 /* PLL core test select */
#define BCHP_CLK_CLK_OBS_CTRL                    0x0007020c /* Clock observation logic select */
#define BCHP_CLK_GPIO_PAD_CTRL                   0x00070300 /* GPIO pad control */
#define BCHP_CLK_MISC_PAD_CTRL                   0x00070304 /* MISC pad control */

/***************************************************************************
 *REVISION - clock_gen Revision register
 ***************************************************************************/
/* CLK :: REVISION :: reserved0 [31:16] */
#define BCHP_CLK_REVISION_reserved0_MASK                           0xffff0000
#define BCHP_CLK_REVISION_reserved0_SHIFT                          16

/* CLK :: REVISION :: MAJOR [15:08] */
#define BCHP_CLK_REVISION_MAJOR_MASK                               0x0000ff00
#define BCHP_CLK_REVISION_MAJOR_SHIFT                              8

/* CLK :: REVISION :: MINOR [07:00] */
#define BCHP_CLK_REVISION_MINOR_MASK                               0x000000ff
#define BCHP_CLK_REVISION_MINOR_SHIFT                              0

/***************************************************************************
 *PM_CTRL - Software power management control to turn off clocks
 ***************************************************************************/
/* CLK :: PM_CTRL :: reserved_for_eco0 [31:26] */
#define BCHP_CLK_PM_CTRL_reserved_for_eco0_MASK                    0xfc000000
#define BCHP_CLK_PM_CTRL_reserved_for_eco0_SHIFT                   26

/* CLK :: PM_CTRL :: DIS_SUN_27_LOW_PWR [25:25] */
#define BCHP_CLK_PM_CTRL_DIS_SUN_27_LOW_PWR_MASK                   0x02000000
#define BCHP_CLK_PM_CTRL_DIS_SUN_27_LOW_PWR_SHIFT                  25

/* CLK :: PM_CTRL :: DIS_SUN_108_LOW_PWR [24:24] */
#define BCHP_CLK_PM_CTRL_DIS_SUN_108_LOW_PWR_MASK                  0x01000000
#define BCHP_CLK_PM_CTRL_DIS_SUN_108_LOW_PWR_SHIFT                 24

/* CLK :: PM_CTRL :: reserved1 [23:20] */
#define BCHP_CLK_PM_CTRL_reserved1_MASK                            0x00f00000
#define BCHP_CLK_PM_CTRL_reserved1_SHIFT                           20

/* CLK :: PM_CTRL :: DIS_MISC_OTP_9_CLK [19:19] */
#define BCHP_CLK_PM_CTRL_DIS_MISC_OTP_9_CLK_MASK                   0x00080000
#define BCHP_CLK_PM_CTRL_DIS_MISC_OTP_9_CLK_SHIFT                  19
#define BCHP_CLK_PM_CTRL_DIS_MISC_OTP_9_CLK_Enable                 0
#define BCHP_CLK_PM_CTRL_DIS_MISC_OTP_9_CLK_Disable                1

/* CLK :: PM_CTRL :: DIS_ARM_CLK [18:18] */
#define BCHP_CLK_PM_CTRL_DIS_ARM_CLK_MASK                          0x00040000
#define BCHP_CLK_PM_CTRL_DIS_ARM_CLK_SHIFT                         18
#define BCHP_CLK_PM_CTRL_DIS_ARM_CLK_Enable                        0
#define BCHP_CLK_PM_CTRL_DIS_ARM_CLK_Disable                       1

/* CLK :: PM_CTRL :: DIS_AVD_CLK [17:17] */
#define BCHP_CLK_PM_CTRL_DIS_AVD_CLK_MASK                          0x00020000
#define BCHP_CLK_PM_CTRL_DIS_AVD_CLK_SHIFT                         17
#define BCHP_CLK_PM_CTRL_DIS_AVD_CLK_Enable                        0
#define BCHP_CLK_PM_CTRL_DIS_AVD_CLK_Disable                       1

/* CLK :: PM_CTRL :: reserved2 [16:13] */
#define BCHP_CLK_PM_CTRL_reserved2_MASK                            0x0001e000
#define BCHP_CLK_PM_CTRL_reserved2_SHIFT                           13

/* CLK :: PM_CTRL :: DIS_BLINK_108_CLK [12:12] */
#define BCHP_CLK_PM_CTRL_DIS_BLINK_108_CLK_MASK                    0x00001000
#define BCHP_CLK_PM_CTRL_DIS_BLINK_108_CLK_SHIFT                   12
#define BCHP_CLK_PM_CTRL_DIS_BLINK_108_CLK_Enable                  0
#define BCHP_CLK_PM_CTRL_DIS_BLINK_108_CLK_Disable                 1

/* CLK :: PM_CTRL :: DIS_DDR_108_CLK [11:11] */
#define BCHP_CLK_PM_CTRL_DIS_DDR_108_CLK_MASK                      0x00000800
#define BCHP_CLK_PM_CTRL_DIS_DDR_108_CLK_SHIFT                     11
#define BCHP_CLK_PM_CTRL_DIS_DDR_108_CLK_Enable                    0
#define BCHP_CLK_PM_CTRL_DIS_DDR_108_CLK_Disable                   1

/* CLK :: PM_CTRL :: DIS_AVD_108_CLK [10:10] */
#define BCHP_CLK_PM_CTRL_DIS_AVD_108_CLK_MASK                      0x00000400
#define BCHP_CLK_PM_CTRL_DIS_AVD_108_CLK_SHIFT                     10
#define BCHP_CLK_PM_CTRL_DIS_AVD_108_CLK_Enable                    0
#define BCHP_CLK_PM_CTRL_DIS_AVD_108_CLK_Disable                   1

/* CLK :: PM_CTRL :: DIS_MISC_108_CLK [09:09] */
#define BCHP_CLK_PM_CTRL_DIS_MISC_108_CLK_MASK                     0x00000200
#define BCHP_CLK_PM_CTRL_DIS_MISC_108_CLK_SHIFT                    9
#define BCHP_CLK_PM_CTRL_DIS_MISC_108_CLK_Enable                   0
#define BCHP_CLK_PM_CTRL_DIS_MISC_108_CLK_Disable                  1

/* CLK :: PM_CTRL :: reserved3 [08:05] */
#define BCHP_CLK_PM_CTRL_reserved3_MASK                            0x000001e0
#define BCHP_CLK_PM_CTRL_reserved3_SHIFT                           5

/* CLK :: PM_CTRL :: DIS_BLINK_216_CLK [04:04] */
#define BCHP_CLK_PM_CTRL_DIS_BLINK_216_CLK_MASK                    0x00000010
#define BCHP_CLK_PM_CTRL_DIS_BLINK_216_CLK_SHIFT                   4
#define BCHP_CLK_PM_CTRL_DIS_BLINK_216_CLK_Enable                  0
#define BCHP_CLK_PM_CTRL_DIS_BLINK_216_CLK_Disable                 1

/* CLK :: PM_CTRL :: DIS_DDR_216_CLK [03:03] */
#define BCHP_CLK_PM_CTRL_DIS_DDR_216_CLK_MASK                      0x00000008
#define BCHP_CLK_PM_CTRL_DIS_DDR_216_CLK_SHIFT                     3
#define BCHP_CLK_PM_CTRL_DIS_DDR_216_CLK_Enable                    0
#define BCHP_CLK_PM_CTRL_DIS_DDR_216_CLK_Disable                   1

/* CLK :: PM_CTRL :: DIS_AVD_216_CLK [02:02] */
#define BCHP_CLK_PM_CTRL_DIS_AVD_216_CLK_MASK                      0x00000004
#define BCHP_CLK_PM_CTRL_DIS_AVD_216_CLK_SHIFT                     2
#define BCHP_CLK_PM_CTRL_DIS_AVD_216_CLK_Enable                    0
#define BCHP_CLK_PM_CTRL_DIS_AVD_216_CLK_Disable                   1

/* CLK :: PM_CTRL :: DIS_MISC_216_CLK [01:01] */
#define BCHP_CLK_PM_CTRL_DIS_MISC_216_CLK_MASK                     0x00000002
#define BCHP_CLK_PM_CTRL_DIS_MISC_216_CLK_SHIFT                    1
#define BCHP_CLK_PM_CTRL_DIS_MISC_216_CLK_Enable                   0
#define BCHP_CLK_PM_CTRL_DIS_MISC_216_CLK_Disable                  1

/* CLK :: PM_CTRL :: DIS_SUN_216_CLK [00:00] */
#define BCHP_CLK_PM_CTRL_DIS_SUN_216_CLK_MASK                      0x00000001
#define BCHP_CLK_PM_CTRL_DIS_SUN_216_CLK_SHIFT                     0
#define BCHP_CLK_PM_CTRL_DIS_SUN_216_CLK_Enable                    0
#define BCHP_CLK_PM_CTRL_DIS_SUN_216_CLK_Disable                   1

/***************************************************************************
 *REGULATOR_2P5_VOLTS - 2.5V Regulator Voltage Adjustment
 ***************************************************************************/
/* CLK :: REGULATOR_2P5_VOLTS :: reserved0 [31:04] */
#define BCHP_CLK_REGULATOR_2P5_VOLTS_reserved0_MASK                0xfffffff0
#define BCHP_CLK_REGULATOR_2P5_VOLTS_reserved0_SHIFT               4

/* CLK :: REGULATOR_2P5_VOLTS :: ADJUST [03:00] */
#define BCHP_CLK_REGULATOR_2P5_VOLTS_ADJUST_MASK                   0x0000000f
#define BCHP_CLK_REGULATOR_2P5_VOLTS_ADJUST_SHIFT                  0

/***************************************************************************
 *TEMP_MON_CTRL - Temperature monitor control.
 ***************************************************************************/
/* CLK :: TEMP_MON_CTRL :: reserved0 [31:10] */
#define BCHP_CLK_TEMP_MON_CTRL_reserved0_MASK                      0xfffffc00
#define BCHP_CLK_TEMP_MON_CTRL_reserved0_SHIFT                     10

/* CLK :: TEMP_MON_CTRL :: RESETB [09:09] */
#define BCHP_CLK_TEMP_MON_CTRL_RESETB_MASK                         0x00000200
#define BCHP_CLK_TEMP_MON_CTRL_RESETB_SHIFT                        9
#define BCHP_CLK_TEMP_MON_CTRL_RESETB_Reset                        0
#define BCHP_CLK_TEMP_MON_CTRL_RESETB_Normal                       1

/* CLK :: TEMP_MON_CTRL :: PWRDN [08:08] */
#define BCHP_CLK_TEMP_MON_CTRL_PWRDN_MASK                          0x00000100
#define BCHP_CLK_TEMP_MON_CTRL_PWRDN_SHIFT                         8
#define BCHP_CLK_TEMP_MON_CTRL_PWRDN_Powered_Up                    0
#define BCHP_CLK_TEMP_MON_CTRL_PWRDN_Powered_Down                  1

/* union - case Combined [07:00] */
/* CLK :: TEMP_MON_CTRL :: Combined :: CTRL [07:00] */
#define BCHP_CLK_TEMP_MON_CTRL_Combined_CTRL_MASK                  0x000000ff
#define BCHP_CLK_TEMP_MON_CTRL_Combined_CTRL_SHIFT                 0

/* union - case Separate [07:00] */
/* CLK :: TEMP_MON_CTRL :: Separate :: BIAS_ADJUST [07:02] */
#define BCHP_CLK_TEMP_MON_CTRL_Separate_BIAS_ADJUST_MASK           0x000000fc
#define BCHP_CLK_TEMP_MON_CTRL_Separate_BIAS_ADJUST_SHIFT          2

/* CLK :: TEMP_MON_CTRL :: Separate :: REF_PWRDN [01:01] */
#define BCHP_CLK_TEMP_MON_CTRL_Separate_REF_PWRDN_MASK             0x00000002
#define BCHP_CLK_TEMP_MON_CTRL_Separate_REF_PWRDN_SHIFT            1
#define BCHP_CLK_TEMP_MON_CTRL_Separate_REF_PWRDN_Powered_Up       0
#define BCHP_CLK_TEMP_MON_CTRL_Separate_REF_PWRDN_Powered_Down     1

/* CLK :: TEMP_MON_CTRL :: Separate :: BGAP_PWRDN [00:00] */
#define BCHP_CLK_TEMP_MON_CTRL_Separate_BGAP_PWRDN_MASK            0x00000001
#define BCHP_CLK_TEMP_MON_CTRL_Separate_BGAP_PWRDN_SHIFT           0
#define BCHP_CLK_TEMP_MON_CTRL_Separate_BGAP_PWRDN_Powered_Up      0
#define BCHP_CLK_TEMP_MON_CTRL_Separate_BGAP_PWRDN_Powered_Down    1

/***************************************************************************
 *TEMP_MON_STATUS - Temperature monitor status.
 ***************************************************************************/
/* CLK :: TEMP_MON_STATUS :: CLK25K [31:31] */
#define BCHP_CLK_TEMP_MON_STATUS_CLK25K_MASK                       0x80000000
#define BCHP_CLK_TEMP_MON_STATUS_CLK25K_SHIFT                      31

/* CLK :: TEMP_MON_STATUS :: reserved0 [30:24] */
#define BCHP_CLK_TEMP_MON_STATUS_reserved0_MASK                    0x7f000000
#define BCHP_CLK_TEMP_MON_STATUS_reserved0_SHIFT                   24

/* CLK :: TEMP_MON_STATUS :: STROBE_COUNT [23:16] */
#define BCHP_CLK_TEMP_MON_STATUS_STROBE_COUNT_MASK                 0x00ff0000
#define BCHP_CLK_TEMP_MON_STATUS_STROBE_COUNT_SHIFT                16

/* CLK :: TEMP_MON_STATUS :: reserved1 [15:09] */
#define BCHP_CLK_TEMP_MON_STATUS_reserved1_MASK                    0x0000fe00
#define BCHP_CLK_TEMP_MON_STATUS_reserved1_SHIFT                   9

/* CLK :: TEMP_MON_STATUS :: DATA [08:00] */
#define BCHP_CLK_TEMP_MON_STATUS_DATA_MASK                         0x000001ff
#define BCHP_CLK_TEMP_MON_STATUS_DATA_SHIFT                        0

/***************************************************************************
 *SCRATCH - clock_gen  Scratch register
 ***************************************************************************/
/* CLK :: SCRATCH :: VALUE [31:00] */
#define BCHP_CLK_SCRATCH_VALUE_MASK                                0xffffffff
#define BCHP_CLK_SCRATCH_VALUE_SHIFT                               0

/***************************************************************************
 *PLL0_ARM_DIV - Main PLL0 channel 3 ARM clock divider settings
 ***************************************************************************/
/* CLK :: PLL0_ARM_DIV :: reserved0 [31:08] */
#define BCHP_CLK_PLL0_ARM_DIV_reserved0_MASK                       0xffffff00
#define BCHP_CLK_PLL0_ARM_DIV_reserved0_SHIFT                      8

/* CLK :: PLL0_ARM_DIV :: M3DIV [07:00] */
#define BCHP_CLK_PLL0_ARM_DIV_M3DIV_MASK                           0x000000ff
#define BCHP_CLK_PLL0_ARM_DIV_M3DIV_SHIFT                          0

/***************************************************************************
 *PLL0_LOCK_CNT - Main PLL0 Lock Counter
 ***************************************************************************/
/* CLK :: PLL0_LOCK_CNT :: reserved0 [31:12] */
#define BCHP_CLK_PLL0_LOCK_CNT_reserved0_MASK                      0xfffff000
#define BCHP_CLK_PLL0_LOCK_CNT_reserved0_SHIFT                     12

/* CLK :: PLL0_LOCK_CNT :: COUNT [11:00] */
#define BCHP_CLK_PLL0_LOCK_CNT_COUNT_MASK                          0x00000fff
#define BCHP_CLK_PLL0_LOCK_CNT_COUNT_SHIFT                         0

/***************************************************************************
 *PLL1_CTRL - Main PLL1 reset, enable, powerdown, and control
 ***************************************************************************/
/* CLK :: PLL1_CTRL :: CTRL_BITS_37_32 [31:26] */
#define BCHP_CLK_PLL1_CTRL_CTRL_BITS_37_32_MASK                    0xfc000000
#define BCHP_CLK_PLL1_CTRL_CTRL_BITS_37_32_SHIFT                   26

/* CLK :: PLL1_CTRL :: reserved0 [25:04] */
#define BCHP_CLK_PLL1_CTRL_reserved0_MASK                          0x03fffff0
#define BCHP_CLK_PLL1_CTRL_reserved0_SHIFT                         4

/* CLK :: PLL1_CTRL :: POWERDOWN [03:03] */
#define BCHP_CLK_PLL1_CTRL_POWERDOWN_MASK                          0x00000008
#define BCHP_CLK_PLL1_CTRL_POWERDOWN_SHIFT                         3
#define BCHP_CLK_PLL1_CTRL_POWERDOWN_Powerdown                     1
#define BCHP_CLK_PLL1_CTRL_POWERDOWN_Normal                        0

/* CLK :: PLL1_CTRL :: CLOCK_ENA [02:02] */
#define BCHP_CLK_PLL1_CTRL_CLOCK_ENA_MASK                          0x00000004
#define BCHP_CLK_PLL1_CTRL_CLOCK_ENA_SHIFT                         2
#define BCHP_CLK_PLL1_CTRL_CLOCK_ENA_Enable                        1
#define BCHP_CLK_PLL1_CTRL_CLOCK_ENA_Disable                       0

/* CLK :: PLL1_CTRL :: RESET [01:01] */
#define BCHP_CLK_PLL1_CTRL_RESET_MASK                              0x00000002
#define BCHP_CLK_PLL1_CTRL_RESET_SHIFT                             1
#define BCHP_CLK_PLL1_CTRL_RESET_Reset                             1
#define BCHP_CLK_PLL1_CTRL_RESET_Normal                            0

/* CLK :: PLL1_CTRL :: reserved1 [00:00] */
#define BCHP_CLK_PLL1_CTRL_reserved1_MASK                          0x00000001
#define BCHP_CLK_PLL1_CTRL_reserved1_SHIFT                         0

/***************************************************************************
 *PLL1_CTRL_LO - Main PLL1 pll_ctrl low 32 bits
 ***************************************************************************/
/* CLK :: PLL1_CTRL_LO :: CTRL_BITS_31_0 [31:00] */
#define BCHP_CLK_PLL1_CTRL_LO_CTRL_BITS_31_0_MASK                  0xffffffff
#define BCHP_CLK_PLL1_CTRL_LO_CTRL_BITS_31_0_SHIFT                 0
#define BCHP_CLK_PLL1_CTRL_LO_CTRL_BITS_31_0_VCO_Range0            536872384
#define BCHP_CLK_PLL1_CTRL_LO_CTRL_BITS_31_0_VCO_Range1            939525888

/***************************************************************************
 *PLL1_AVD_DIV - Main PLL1 divider settings for VCO and channel 1 AVD clock
 ***************************************************************************/
/* CLK :: PLL1_AVD_DIV :: reserved0 [31:26] */
#define BCHP_CLK_PLL1_AVD_DIV_reserved0_MASK                       0xfc000000
#define BCHP_CLK_PLL1_AVD_DIV_reserved0_SHIFT                      26

/* CLK :: PLL1_AVD_DIV :: VCORNG [25:24] */
#define BCHP_CLK_PLL1_AVD_DIV_VCORNG_MASK                          0x03000000
#define BCHP_CLK_PLL1_AVD_DIV_VCORNG_SHIFT                         24

/* CLK :: PLL1_AVD_DIV :: reserved1 [23:17] */
#define BCHP_CLK_PLL1_AVD_DIV_reserved1_MASK                       0x00fe0000
#define BCHP_CLK_PLL1_AVD_DIV_reserved1_SHIFT                      17

/* CLK :: PLL1_AVD_DIV :: NDIV_INT [16:08] */
#define BCHP_CLK_PLL1_AVD_DIV_NDIV_INT_MASK                        0x0001ff00
#define BCHP_CLK_PLL1_AVD_DIV_NDIV_INT_SHIFT                       8

/* CLK :: PLL1_AVD_DIV :: M1DIV [07:00] */
#define BCHP_CLK_PLL1_AVD_DIV_M1DIV_MASK                           0x000000ff
#define BCHP_CLK_PLL1_AVD_DIV_M1DIV_SHIFT                          0

/***************************************************************************
 *PLL1_SPARE2_DIV - Main PLL1 divider settings for channel 2 spare clock
 ***************************************************************************/
/* CLK :: PLL1_SPARE2_DIV :: reserved0 [31:08] */
#define BCHP_CLK_PLL1_SPARE2_DIV_reserved0_MASK                    0xffffff00
#define BCHP_CLK_PLL1_SPARE2_DIV_reserved0_SHIFT                   8

/* CLK :: PLL1_SPARE2_DIV :: M2DIV [07:00] */
#define BCHP_CLK_PLL1_SPARE2_DIV_M2DIV_MASK                        0x000000ff
#define BCHP_CLK_PLL1_SPARE2_DIV_M2DIV_SHIFT                       0

/***************************************************************************
 *PLL1_SPARE3_DIV - Main PLL1 divider settings for channel 3 spare clock
 ***************************************************************************/
/* CLK :: PLL1_SPARE3_DIV :: reserved0 [31:08] */
#define BCHP_CLK_PLL1_SPARE3_DIV_reserved0_MASK                    0xffffff00
#define BCHP_CLK_PLL1_SPARE3_DIV_reserved0_SHIFT                   8

/* CLK :: PLL1_SPARE3_DIV :: M3DIV [07:00] */
#define BCHP_CLK_PLL1_SPARE3_DIV_M3DIV_MASK                        0x000000ff
#define BCHP_CLK_PLL1_SPARE3_DIV_M3DIV_SHIFT                       0

/***************************************************************************
 *PLL1_LOCK_CNT - Main PLL1 Lock Counter
 ***************************************************************************/
/* CLK :: PLL1_LOCK_CNT :: reserved0 [31:12] */
#define BCHP_CLK_PLL1_LOCK_CNT_reserved0_MASK                      0xfffff000
#define BCHP_CLK_PLL1_LOCK_CNT_reserved0_SHIFT                     12

/* CLK :: PLL1_LOCK_CNT :: COUNT [11:00] */
#define BCHP_CLK_PLL1_LOCK_CNT_COUNT_MASK                          0x00000fff
#define BCHP_CLK_PLL1_LOCK_CNT_COUNT_SHIFT                         0

/***************************************************************************
 *PLL_LOCK - PLL lock status
 ***************************************************************************/
/* CLK :: PLL_LOCK :: reserved0 [31:02] */
#define BCHP_CLK_PLL_LOCK_reserved0_MASK                           0xfffffffc
#define BCHP_CLK_PLL_LOCK_reserved0_SHIFT                          2

/* CLK :: PLL_LOCK :: PLL1 [01:01] */
#define BCHP_CLK_PLL_LOCK_PLL1_MASK                                0x00000002
#define BCHP_CLK_PLL_LOCK_PLL1_SHIFT                               1

/* CLK :: PLL_LOCK :: PLL0 [00:00] */
#define BCHP_CLK_PLL_LOCK_PLL0_MASK                                0x00000001
#define BCHP_CLK_PLL_LOCK_PLL0_SHIFT                               0

/***************************************************************************
 *PLL_LOCK_CNTR_RESET - PLL Lock Counter Resets
 ***************************************************************************/
/* CLK :: PLL_LOCK_CNTR_RESET :: reserved0 [31:02] */
#define BCHP_CLK_PLL_LOCK_CNTR_RESET_reserved0_MASK                0xfffffffc
#define BCHP_CLK_PLL_LOCK_CNTR_RESET_reserved0_SHIFT               2

/* CLK :: PLL_LOCK_CNTR_RESET :: PLL1 [01:01] */
#define BCHP_CLK_PLL_LOCK_CNTR_RESET_PLL1_MASK                     0x00000002
#define BCHP_CLK_PLL_LOCK_CNTR_RESET_PLL1_SHIFT                    1

/* CLK :: PLL_LOCK_CNTR_RESET :: PLL0 [00:00] */
#define BCHP_CLK_PLL_LOCK_CNTR_RESET_PLL0_MASK                     0x00000001
#define BCHP_CLK_PLL_LOCK_CNTR_RESET_PLL0_SHIFT                    0

/***************************************************************************
 *PLL_TEST_SEL - PLL core test select
 ***************************************************************************/
/* CLK :: PLL_TEST_SEL :: reserved0 [31:08] */
#define BCHP_CLK_PLL_TEST_SEL_reserved0_MASK                       0xffffff00
#define BCHP_CLK_PLL_TEST_SEL_reserved0_SHIFT                      8

/* CLK :: PLL_TEST_SEL :: PLL_SEL [07:04] */
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_MASK                         0x000000f0
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_SHIFT                        4
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_None                         0
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_MAIN_PLL0                    1
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_MAIN_PLL1                    2
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_3                   3
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_4                   4
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_5                   5
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_6                   6
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_7                   7
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_8                   8
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_9                   9
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_10                  10
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_11                  11
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_12                  12
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_13                  13
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_14                  14
#define BCHP_CLK_PLL_TEST_SEL_PLL_SEL_Reserved_15                  15

/* CLK :: PLL_TEST_SEL :: SUB_SEL [03:00] */
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_MASK                         0x0000000f
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_SHIFT                        0
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_VCO_Vcontrol                 0
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_VCO_div_8                    1
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Frefi                        2
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Fdbki                        3
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Watchdog                     4
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Clkout_1                     5
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Clkout_2                     6
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Clkout_3                     7
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_1                   8
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_2                   9
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_3                   10
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_4                   11
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_5                   12
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_6                   13
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_7                   14
#define BCHP_CLK_PLL_TEST_SEL_SUB_SEL_Reserved_8                   15

/***************************************************************************
 *CLK_OBS_CTRL - Clock observation logic select
 ***************************************************************************/
/* CLK :: CLK_OBS_CTRL :: reserved0 [31:05] */
#define BCHP_CLK_CLK_OBS_CTRL_reserved0_MASK                       0xffffffe0
#define BCHP_CLK_CLK_OBS_CTRL_reserved0_SHIFT                      5

/* CLK :: CLK_OBS_CTRL :: DIV_SEL [04:03] */
#define BCHP_CLK_CLK_OBS_CTRL_DIV_SEL_MASK                         0x00000018
#define BCHP_CLK_CLK_OBS_CTRL_DIV_SEL_SHIFT                        3
#define BCHP_CLK_CLK_OBS_CTRL_DIV_SEL_Dont_divide                  0
#define BCHP_CLK_CLK_OBS_CTRL_DIV_SEL_Divide_by_2                  1
#define BCHP_CLK_CLK_OBS_CTRL_DIV_SEL_Divide_by_4                  2
#define BCHP_CLK_CLK_OBS_CTRL_DIV_SEL_Reserved_3                   3

/* CLK :: CLK_OBS_CTRL :: CLK_SEL [02:00] */
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_MASK                         0x00000007
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_SHIFT                        0
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Zero                         0
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Clk_216_pll                  1
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Clk_arm_pll                  2
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Clk_avd_pll                  3
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Clk_serdes_pll               4
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Reserved_5                   5
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Reserved_6                   6
#define BCHP_CLK_CLK_OBS_CTRL_CLK_SEL_Reserved_7                   7

/***************************************************************************
 *GPIO_PAD_CTRL - GPIO pad control
 ***************************************************************************/
/* CLK :: GPIO_PAD_CTRL :: reserved0 [31:07] */
#define BCHP_CLK_GPIO_PAD_CTRL_reserved0_MASK                      0xffffff80
#define BCHP_CLK_GPIO_PAD_CTRL_reserved0_SHIFT                     7

/* CLK :: GPIO_PAD_CTRL :: GPIO_PDN [06:06] */
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PDN_MASK                       0x00000040
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PDN_SHIFT                      6
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PDN_Disable                    0
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PDN_Enable                     1

/* CLK :: GPIO_PAD_CTRL :: GPIO_PUP [05:05] */
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PUP_MASK                       0x00000020
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PUP_SHIFT                      5
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PUP_Disable                    0
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_PUP_Enable                     1

/* CLK :: GPIO_PAD_CTRL :: GPIO_HYS_EN [04:04] */
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_HYS_EN_MASK                    0x00000010
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_HYS_EN_SHIFT                   4
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_HYS_EN_TTL_input               0
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_HYS_EN_Schmitt_trigger_input   1

/* CLK :: GPIO_PAD_CTRL :: GPIO_SEL [03:01] */
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_MASK                       0x0000000e
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_SHIFT                      1
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_Tri_State            0
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_2_mA                 1
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_4_mA                 2
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_6_mA                 4
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_8_mA                 5
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_10_mA                6
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SEL_Drive_12_mA                7

/* CLK :: GPIO_PAD_CTRL :: GPIO_SLEW [00:00] */
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SLEW_MASK                      0x00000001
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SLEW_SHIFT                     0
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SLEW_High_Speed                0
#define BCHP_CLK_GPIO_PAD_CTRL_GPIO_SLEW_Normal                    1

/***************************************************************************
 *MISC_PAD_CTRL - MISC pad control
 ***************************************************************************/
/* CLK :: MISC_PAD_CTRL :: reserved0 [31:07] */
#define BCHP_CLK_MISC_PAD_CTRL_reserved0_MASK                      0xffffff80
#define BCHP_CLK_MISC_PAD_CTRL_reserved0_SHIFT                     7

/* CLK :: MISC_PAD_CTRL :: MISC_PDN [06:06] */
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PDN_MASK                       0x00000040
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PDN_SHIFT                      6
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PDN_Disable                    0
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PDN_Enable                     1

/* CLK :: MISC_PAD_CTRL :: MISC_PUP [05:05] */
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PUP_MASK                       0x00000020
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PUP_SHIFT                      5
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PUP_Disable                    0
#define BCHP_CLK_MISC_PAD_CTRL_MISC_PUP_Enable                     1

/* CLK :: MISC_PAD_CTRL :: MISC_HYS_EN [04:04] */
#define BCHP_CLK_MISC_PAD_CTRL_MISC_HYS_EN_MASK                    0x00000010
#define BCHP_CLK_MISC_PAD_CTRL_MISC_HYS_EN_SHIFT                   4
#define BCHP_CLK_MISC_PAD_CTRL_MISC_HYS_EN_TTL_input               0
#define BCHP_CLK_MISC_PAD_CTRL_MISC_HYS_EN_Schmitt_trigger_input   1

/* CLK :: MISC_PAD_CTRL :: MISC_SEL [03:01] */
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_MASK                       0x0000000e
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_SHIFT                      1
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_Tri_State            0
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_2_mA                 1
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_4_mA                 2
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_6_mA                 4
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_8_mA                 5
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_10_mA                6
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SEL_Drive_12_mA                7

/* CLK :: MISC_PAD_CTRL :: MISC_SLEW [00:00] */
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SLEW_MASK                      0x00000001
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SLEW_SHIFT                     0
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SLEW_High_Speed                0
#define BCHP_CLK_MISC_PAD_CTRL_MISC_SLEW_Normal                    1

#endif /* #ifndef BCHP_CLK_H__ */

/* End of File */
