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
 * $brcm_Workfile: bchp_pri_arb_msa_regs.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:15p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:49 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_pri_arb_msa_regs.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:15p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_PRI_ARB_MSA_REGS_H__
#define BCHP_PRI_ARB_MSA_REGS_H__

/***************************************************************************
 *PRI_ARB_MSA_REGS - PRIMARY_ARB memory soft access client registers
 ***************************************************************************/
#define BCHP_PRI_ARB_MSA_REGS_STATUS             0x0040c800 /* Memory Controller MSA Status Register */
#define BCHP_PRI_ARB_MSA_REGS_CMD_TYPE           0x0040c804 /* Memory Controller SCB Command Type Register */
#define BCHP_PRI_ARB_MSA_REGS_CMD_ADDR           0x0040c808 /* Memory Controller SCB Address Register */

/***************************************************************************
 *STATUS - Memory Controller MSA Status Register
 ***************************************************************************/
/* PRI_ARB_MSA_REGS :: STATUS :: reserved0 [31:04] */
#define BCHP_PRI_ARB_MSA_REGS_STATUS_reserved0_MASK                0xfffffff0
#define BCHP_PRI_ARB_MSA_REGS_STATUS_reserved0_SHIFT               4

/* PRI_ARB_MSA_REGS :: STATUS :: FIFO_FULL [03:03] */
#define BCHP_PRI_ARB_MSA_REGS_STATUS_FIFO_FULL_MASK                0x00000008
#define BCHP_PRI_ARB_MSA_REGS_STATUS_FIFO_FULL_SHIFT               3

/* PRI_ARB_MSA_REGS :: STATUS :: FIFO_EMPTY [02:02] */
#define BCHP_PRI_ARB_MSA_REGS_STATUS_FIFO_EMPTY_MASK               0x00000004
#define BCHP_PRI_ARB_MSA_REGS_STATUS_FIFO_EMPTY_SHIFT              2

/* PRI_ARB_MSA_REGS :: STATUS :: T_LOCK [01:01] */
#define BCHP_PRI_ARB_MSA_REGS_STATUS_T_LOCK_MASK                   0x00000002
#define BCHP_PRI_ARB_MSA_REGS_STATUS_T_LOCK_SHIFT                  1

/* PRI_ARB_MSA_REGS :: STATUS :: BUSY [00:00] */
#define BCHP_PRI_ARB_MSA_REGS_STATUS_BUSY_MASK                     0x00000001
#define BCHP_PRI_ARB_MSA_REGS_STATUS_BUSY_SHIFT                    0

/***************************************************************************
 *CMD_TYPE - Memory Controller SCB Command Type Register
 ***************************************************************************/
/* PRI_ARB_MSA_REGS :: CMD_TYPE :: reserved0 [31:09] */
#define BCHP_PRI_ARB_MSA_REGS_CMD_TYPE_reserved0_MASK              0xfffffe00
#define BCHP_PRI_ARB_MSA_REGS_CMD_TYPE_reserved0_SHIFT             9

/* PRI_ARB_MSA_REGS :: CMD_TYPE :: REQ_TYPE [08:00] */
#define BCHP_PRI_ARB_MSA_REGS_CMD_TYPE_REQ_TYPE_MASK               0x000001ff
#define BCHP_PRI_ARB_MSA_REGS_CMD_TYPE_REQ_TYPE_SHIFT              0

/***************************************************************************
 *CMD_ADDR - Memory Controller SCB Address Register
 ***************************************************************************/
/* PRI_ARB_MSA_REGS :: CMD_ADDR :: reserved_for_eco0 [31:29] */
#define BCHP_PRI_ARB_MSA_REGS_CMD_ADDR_reserved_for_eco0_MASK      0xe0000000
#define BCHP_PRI_ARB_MSA_REGS_CMD_ADDR_reserved_for_eco0_SHIFT     29

/* PRI_ARB_MSA_REGS :: CMD_ADDR :: ADDR [28:00] */
#define BCHP_PRI_ARB_MSA_REGS_CMD_ADDR_ADDR_MASK                   0x1fffffff
#define BCHP_PRI_ARB_MSA_REGS_CMD_ADDR_ADDR_SHIFT                  0

/***************************************************************************
 *MSA_DATA%i - Memory Controller MSA Data Register
 ***************************************************************************/
#define BCHP_PRI_ARB_MSA_REGS_MSA_DATAi_ARRAY_BASE                 0x0040c810
#define BCHP_PRI_ARB_MSA_REGS_MSA_DATAi_ARRAY_START                0
#define BCHP_PRI_ARB_MSA_REGS_MSA_DATAi_ARRAY_END                  63
#define BCHP_PRI_ARB_MSA_REGS_MSA_DATAi_ARRAY_ELEMENT_SIZE         32

/***************************************************************************
 *MSA_DATA%i - Memory Controller MSA Data Register
 ***************************************************************************/
/* PRI_ARB_MSA_REGS :: MSA_DATAi :: Data [31:00] */
#define BCHP_PRI_ARB_MSA_REGS_MSA_DATAi_Data_MASK                  0xffffffff
#define BCHP_PRI_ARB_MSA_REGS_MSA_DATAi_Data_SHIFT                 0


/***************************************************************************
 *MSA_MASK%i - Memory Controller MSA Mask Data Register
 ***************************************************************************/
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_ARRAY_BASE                 0x0040c910
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_ARRAY_START                0
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_ARRAY_END                  63
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_ARRAY_ELEMENT_SIZE         32

/***************************************************************************
 *MSA_MASK%i - Memory Controller MSA Mask Data Register
 ***************************************************************************/
/* PRI_ARB_MSA_REGS :: MSA_MASKi :: reserved0 [31:04] */
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_reserved0_MASK             0xfffffff0
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_reserved0_SHIFT            4

/* PRI_ARB_MSA_REGS :: MSA_MASKi :: Mask [03:00] */
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_Mask_MASK                  0x0000000f
#define BCHP_PRI_ARB_MSA_REGS_MSA_MASKi_Mask_SHIFT                 0


#endif /* #ifndef BCHP_PRI_ARB_MSA_REGS_H__ */

/* End of File */
