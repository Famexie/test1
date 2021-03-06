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

#ifndef _PM_PROFILE_ID_H_
#define _PM_PROFILE_ID_H_

/**************************************************************************************************
* Enum
**************************************************************************************************/
enum
{
	SCN_HEADSET = 0x01,
	SCN_HANDSFREE = 0x02,
	SCN_SERIAL_PORT = 0x03,
	SCN_LCIF = 0x04,
	SCN_IAP2 = 0x05,
	SCN_SONGPAL_ANDROID = 0x06,
	SCN_SONGPAL_IAP2 = 0x07,
	SCN_OBJECT_PUSH = 0x08,
	SCN_SIM_ACCESS = 0x09,
	SCN_PHONEBOOK_ACCESS = 0x0A,
	SCN_MESSAGE_ACCESS = 0x0B,
	SCN_MESSAGE_NOTIFICATION = 0x0C,
	SCN_AIR_APP = 0x0D,
	SCN_TRSPX = 0x0E,
	SCN_XIAOAI = 0x0F,
	SCN_OPPO = 0x10,//Owen
};

enum
{
	//MMI Profile Descriptor
	PROFILE_HEADSET = SCN_HEADSET,
	PROFILE_HANDSFREE = SCN_HANDSFREE,
	PROFILE_SERIAL_PORT = SCN_SERIAL_PORT,
	PROFILE_LCIF = SCN_LCIF,
	PROFILE_IAP2 = SCN_IAP2,
	PROFILE_SONGPAL_ANDROID = SCN_SONGPAL_ANDROID,
	PROFILE_SONGPAL_IAP2 = SCN_SONGPAL_IAP2,
	PROFILE_OBJECT_PUSH = SCN_OBJECT_PUSH,
	PROFILE_SIM_ACCESS = SCN_SIM_ACCESS,
	PROFILE_PHONEBOOK_ACCESS = SCN_PHONEBOOK_ACCESS,
	PROFILE_MESSAGE_ACCESS = SCN_MESSAGE_ACCESS,
	PROFILE_MESSAGE_NOTIFICATION = SCN_MESSAGE_NOTIFICATION,
	PROFILE_AIR_APP = SCN_AIR_APP,
	PROFILE_XIAOAI = SCN_XIAOAI,
	PROFILE_OPPO = SCN_OPPO,//Owen
	PROFILE_SDAP = 0x21,
	PROFILE_A2DP = 0x22,
	PROFILE_AVRCP = 0x23,
	PROFILE_HID = 0x24,
	PROFILE_MCSYNC = 0x25,
	PROFILE_PNP = 0x30,
	PROFILE_A2DP_SOURCE = 0x31,
	PROFILE_A2DP_SINK = 0x32,
	PROFILE_AVRCP_TG = 0x33,
	PROFILE_AVRCP_CT = 0x34,
	PROFILE_MPS = 0x35,
	PROFILE_AMA = 0x36,
	PROFILE_BISTO_CTRL = 0x37,
	PROFILE_BISTO_AUDIO = 0x38,
	PROFILE_GFP = 0x39,
<<<<<<< HEAD
=======
	PROFILE_ATT_EDR = 0x3A,
>>>>>>> db20e11 (second commit)
};


enum
{
	PM_REGISTER_HEADSET,
	PM_REGISTER_HANDSFREE,
	PM_REGISTER_SERIAL_PORT,
	PM_REGISTER_LCIF,
	PM_REGISTER_IAP2,
	PM_REGISTER_SONGPAL_ANDROID,
	PM_REGISTER_SONGPAL_IAP2,
	PM_REGISTER_OBJECT_PUSH,
	PM_REGISTER_SIM_ACCESS,
	PM_REGISTER_PHONEBOOK_ACCESS,
	PM_REGISTER_MESSAGE_ACCESS,
	PM_REGISTER_MESSAGE_NOTIFICATION,
	PM_REGISTER_AIR_APP,        /* include GATT service */
	PM_REGISTER_SDAP,
	PM_REGISTER_A2DP,
	PM_REGISTER_AVRCP,
	PM_REGISTER_HID,
	PM_REGISTER_MCSYNC,
	PM_REGISTER_PNP,
	PM_REGISTER_A2DP_SOURCE,
	PM_REGISTER_A2DP_SINK,
	PM_REGISTER_AVRCP_TG,
	PM_REGISTER_AVRCP_CT,
	PM_REGISTER_MPS,
	PM_REGISTER_AMA,            /* include GATT service */
	PM_REGISTER_BISTO_CTRL,
	PM_REGISTER_BISTO_AUDIO,
	PM_REGISTER_GFP,
	PM_REGISTER_XIAOAI,
	PM_REGISTER_OPPO,
};

#endif //_PM_PROFILE_ID_H_
