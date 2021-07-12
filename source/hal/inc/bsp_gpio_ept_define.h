/* Copyright Statement:
 *
 * (C) 2017  Airoha Technology Corp. All rights reserved.
 *
 * This software/firmware and related documentation ("Airoha Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to Airoha Technology Corp. ("Airoha") and/or its licensors.
 * Without the prior written permission of Airoha and/or its licensors,
 * any reproduction, modification, use or disclosure of Airoha Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) Airoha Software
 * if you have agreed to and been bound by the applicable license agreement with
 * Airoha ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of Airoha Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT AIROHA SOFTWARE RECEIVED FROM AIROHA AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. AIROHA EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES AIROHA PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH AIROHA SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN AIROHA SOFTWARE. AIROHA SHALL ALSO NOT BE RESPONSIBLE FOR ANY AIROHA
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND AIROHA'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO AIROHA SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT AIROHA'S OPTION, TO REVISE OR REPLACE AIROHA SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * AIROHA FOR SUCH AIROHA SOFTWARE AT ISSUE.
 */

/* joint together the MACROs generated by EPT to 32-bits data as a result of the GPIO register is 32-bit,
   the data will be written to corresponding register after jointed.
*/
#define GPIO_HWORD_REG_VAL(name, port0, port1, port2, port3, port4, port5, port6, port7, port8, port9, port10, \
                                port11, port12, port13, port14, port15, port16, port17, port18, port19, port20, port21, \
                               port22, port23, port24, port25, port26, port27, port28, port29, port30, port31)      \
		((GPIO_PORT##port0##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*0) & 0x1f)) | \
		(GPIO_PORT##port1##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*1) & 0x1f)) | \
		(GPIO_PORT##port2##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*2) & 0x1f)) | \
		(GPIO_PORT##port3##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*3) & 0x1f)) | \
		(GPIO_PORT##port4##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*4) & 0x1f)) | \
		(GPIO_PORT##port5##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*5) & 0x1f)) | \
		(GPIO_PORT##port6##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*6) & 0x1f)) | \
		(GPIO_PORT##port7##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*7) & 0x1f)) | \
		(GPIO_PORT##port8##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*8) & 0x1f)) | \
		(GPIO_PORT##port9##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*9) & 0x1f)) | \
		(GPIO_PORT##port10##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*10) & 0x1f)) |\
		(GPIO_PORT##port11##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*11) & 0x1f)) |  \
		(GPIO_PORT##port12##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*12) & 0x1f)) | \
		(GPIO_PORT##port13##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*13) & 0x1f)) | \
		(GPIO_PORT##port14##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*14) & 0x1f)) | \
		(GPIO_PORT##port15##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*15) & 0x1f)) | \
		(GPIO_PORT##port16##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*16) & 0x1f)) | \
		(GPIO_PORT##port17##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*17) & 0x1f)) |  \
		(GPIO_PORT##port18##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*18) & 0x1f)) |  \
		(GPIO_PORT##port19##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*19) & 0x1f)) |  \
		(GPIO_PORT##port20##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*20) & 0x1f)) | \
		(GPIO_PORT##port21##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*21) & 0x1f)) | \
		(GPIO_PORT##port22##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*22) & 0x1f)) | \
		(GPIO_PORT##port23##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*23) & 0x1f)) | \
		(GPIO_PORT##port24##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*24) & 0x1f)) | \
		(GPIO_PORT##port25##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*25) & 0x1f)) |  \
		(GPIO_PORT##port26##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*26) & 0x1f)) |  \
		(GPIO_PORT##port27##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*27) & 0x1f)) |  \
		(GPIO_PORT##port28##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*28) & 0x1f)) | \
		(GPIO_PORT##port29##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*29) & 0x1f)) | \
		(GPIO_PORT##port30##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*30) & 0x1f)) | \
		(GPIO_PORT##port31##_##name<<((GPIO_##name##_##ONE_CONTROL_BITS*31) & 0x1f)))

#define EPT_GPIO_PORTNULL_REG_MASK(x)   0

#define	EPT_GPIO_PORT0_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>0)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT1_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>1)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT2_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>2)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT3_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>3)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT4_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>4)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT5_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>5)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT6_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>6)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT7_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>7)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT8_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>8)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT9_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>9)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT10_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>10)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT11_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>11)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT12_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>12)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT13_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>13)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT14_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>14)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT15_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>15)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT16_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>16)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT17_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>17)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT18_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>18)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT19_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>19)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT20_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>20)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT21_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>21)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT22_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>22)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT23_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>23)&0x1)*(GPIO_##name##_BITW_MASK))
#define	EPT_GPIO_PORT24_REG_MASK(name)	(((EPT_GPIO_PIN_MASK_0>>24)&0x1)*(GPIO_##name##_BITW_MASK))



#define GPIO_HWORD_REG_MASK(name, port0, port1, port2, port3, port4, port5, port6, port7, port8, port9, port10, \
                                port11, port12, port13, port14, port15, port16, port17, port18, port19, port20, port21, \
                                port22, port23, port24, port25, port26, port27, port28, port29, port30, port31)      \
		((EPT_GPIO_PORT##port0##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*0) & 0x1f)) | \
		(EPT_GPIO_PORT##port1##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*1) & 0x1f)) | \
		(EPT_GPIO_PORT##port2##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*2) & 0x1f)) | \
		(EPT_GPIO_PORT##port3##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*3) & 0x1f)) | \
		(EPT_GPIO_PORT##port4##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*4) & 0x1f)) | \
		(EPT_GPIO_PORT##port5##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*5) & 0x1f)) | \
		(EPT_GPIO_PORT##port6##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*6) & 0x1f)) | \
		(EPT_GPIO_PORT##port7##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*7) & 0x1f)) | \
		(EPT_GPIO_PORT##port8##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*8) & 0x1f)) | \
		(EPT_GPIO_PORT##port9##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*9) & 0x1f)) | \
		(EPT_GPIO_PORT##port10##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*10) & 0x1f)) |\
		(EPT_GPIO_PORT##port11##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*11) & 0x1f)) |  \
		(EPT_GPIO_PORT##port12##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*12) & 0x1f)) | \
		(EPT_GPIO_PORT##port13##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*13) & 0x1f)) | \
		(EPT_GPIO_PORT##port14##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*14) & 0x1f)) | \
		(EPT_GPIO_PORT##port15##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*15) & 0x1f)) | \
		(EPT_GPIO_PORT##port16##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*16) & 0x1f)) | \
		(EPT_GPIO_PORT##port17##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*17) & 0x1f)) |  \
		(EPT_GPIO_PORT##port18##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*18) & 0x1f)) |  \
		(EPT_GPIO_PORT##port19##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*19) & 0x1f)) |  \
		(EPT_GPIO_PORT##port20##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*20) & 0x1f)) | \
		(EPT_GPIO_PORT##port21##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*21) & 0x1f)) | \
		(EPT_GPIO_PORT##port22##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*22) & 0x1f)) | \
		(EPT_GPIO_PORT##port23##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*23) & 0x1f)) | \
		(EPT_GPIO_PORT##port24##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*24) & 0x1f)) |	\
		(EPT_GPIO_PORT##port25##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*25) & 0x1f)) |  \
		(EPT_GPIO_PORT##port26##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*26) & 0x1f)) |  \
		(EPT_GPIO_PORT##port27##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*27) & 0x1f)) |  \
		(EPT_GPIO_PORT##port28##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*28) & 0x1f)) | \
		(EPT_GPIO_PORT##port29##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*29) & 0x1f)) | \
		(EPT_GPIO_PORT##port30##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*30) & 0x1f)) | \
		(EPT_GPIO_PORT##port31##_REG_MASK(name)<<((GPIO_##name##_##ONE_CONTROL_BITS*31) & 0x1f)))


//pinmux mode
#define    GPIO_MODE_REG_MAX_NUM                    4  /* maximam index number of mode register */
#define    GPIO_MODE_ONE_CONTROL_BITS               4   /* number of bits to control the mode of one pin */
#define    GPIO_MODE_ONE_REG_CONTROL_NUM            8   /* number of pins can be controled in one register */
#define    GPIO_MODE_REG0    GPIO_HWORD_REG_VAL(MODE, 0,  1,  2,  3,  4,  5,  6,    7, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_MODE_REG1    GPIO_HWORD_REG_VAL(MODE, 8,  9,  10, 11, 12, 13, 14,  15, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_MODE_REG2    GPIO_HWORD_REG_VAL(MODE, 16, 17, 18, 19, 20, 21, 22,  23, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_MODE_REG3    GPIO_HWORD_REG_VAL(MODE, 24, 	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_MODE_ALL_VALUE     GPIO_MODE_REG0,GPIO_MODE_REG1,GPIO_MODE_REG2,GPIO_MODE_REG3

//direction
#define    GPIO_DIR_REG_MAX_NUM                     1   /* maximam index number of direction register */
#define    GPIO_DIR_ONE_CONTROL_BITS                1   /* number of bits to control the direction of one pin */
#define    GPIO_DIR_ONE_REG_CONTROL_NUM            24   /* number of pins can be controled in one register */
#define    GPIO_DIR_REG0    GPIO_HWORD_REG_VAL(DIR, 0,   1,   2,   3,   4,   5,     6,     7,     8,     9,     10,    11,    12,    13,    14,    15,   16,   17,   18,   19,   20,   21,   22,   23,   24, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_DIR_ALL_VALUE     GPIO_DIR_REG0

//pull up
#define    GPIO_PU_REG_MAX_NUM                    2   /* maximam index number of pullen register */
#define    GPIO_PU_ONE_CONTROL_BITS               1   /* number of bits to control the pullen of one pin */
#define    GPIO_PU_ONE_REG_CONTROL_NUM            24  /* number of pins can be controled in one register */
#define    GPIO_PU_REG0    GPIO_HWORD_REG_VAL(PU, 0,   1,   2,   3,   4,   5,     6,     7,     8,     9,     10,    11,    12,    13,    14,    15,   16,   17,   18,   19,   20,   21,   22,   23,   24, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_PU_REG1    GPIO_HWORD_REG_VAL(PU, NULL, 	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_PU_ALL_VALUE     GPIO_PU_REG0,GPIO_PU_REG1

//pull down
#define    GPIO_PD_REG_MAX_NUM                    2   /* maximam index number of pullen register */
#define    GPIO_PD_ONE_CONTROL_BITS               1   /* number of bits to control the pullen of one pin */
#define    GPIO_PD_ONE_REG_CONTROL_NUM            24  /* number of pins can be controled in one register */
#define    GPIO_PD_REG0    GPIO_HWORD_REG_VAL(PD, 0,   1,   2,   3,   4,   5,     6,     7,     8,     9,     10,    11,    12,    13,    14,    15,   16,   17,   18,   19,   20,   21,   22,   23,   24, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_PD_REG1    GPIO_HWORD_REG_VAL(PD, NULL, 	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_PD_ALL_VALUE     GPIO_PD_REG0,GPIO_PD_REG1

//pu and pd reg bit mask
#define    GPIO_PU_PD_ONE_CONTROL_BITS            1   /* number of bits to control the pullen of one pin */
#define    GPIO_PU_PD_BITW_MASK					  0x1 /*bit wise*/
#define    GPIO_PU_PD_REG0_MASK    GPIO_HWORD_REG_MASK(PU_PD, 0,   1,   2,   3,   4,   5,     6,     7,     8,     9,     10,    11,    12,    13,    14,    15,   16,   17,   18,   19,   20,   21,   22,   23,   24, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_PU_PD_REG1_MASK    GPIO_HWORD_REG_MASK(PU_PD, NULL, 	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_PU_PD_ALL_MASK     GPIO_PU_PD_REG0_MASK,GPIO_PU_PD_REG1_MASK


//output value
#define    GPIO_OUTPUT_LEVEL_REG_MAX_NUM            1   /* maximam index number of output data register */
#define    GPIO_OUTPUT_LEVEL_ONE_CONTROL_BITS       1   /* number of bits to control the output data of one pin */
#define    GPIO_OUTPUT_LEVEL_ONE_REG_CONTROL_NUM    24  /* number of pins can be controled in one register */
#define    GPIO_OUTPUT_LEVEL_REG0    GPIO_HWORD_REG_VAL(OUTPUT_LEVEL, 0,   1,   2,   3,   4,   5,     6,     7,     8,     9,     10,    11,    12,    13,    14,    15,   16,   17,   18,   19,   20,   21,   22,   23,   24, NULL, NULL, NULL, NULL, NULL, NULL, NULL)
#define    GPIO_OUTPUT_LEVEL_ALL_VALUE     GPIO_OUTPUT_LEVEL_REG0

