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
 
 
#ifndef __HFP_INTERFACE_HH_
#define __HFP_INTERFACE_HH_


#include "PM_Message.h"


#define PROFILE_BIT_HFP		0x01
#define PROFILE_BIT_HSP		0x02

#define CALLER_ID_DIGIT_NO	16

enum
{
	HFP_CMD_CPL_STATUS_OK,
	HFP_CMD_CPL_STATUS_ERROR,
	HFP_CMD_STATUS_REMOTE_INDICATION,
	HFP_CMD_BVRA_TIMEOUT,
};

enum
{ 
	HFP_NO_COMMAND,
	HFP_ATCMD_INIT_VOICE_DIAL,
	HFP_ATCMD_CANCEL_VOICE_DIAL,
	HFP_ATCMD_LAST_NUMBER_REDIAL,
	HFP_ATCMD_CANCEL_OUTGOING_CALL,
	HFP_ATCMD_REJECT_CALL,
	HFP_ATCMD_END_CALL,
	HFP_ATCMD_ACCEPT_CALL,
	HFP_ATCMD_ADJUST_VOLUME,	 
	HFP_ATCMD_ADJUST_MIC_GAIN,					
	HFP_ATCMD_SET_NREC,
	HFP_ATCMD_CKPD_200,
	HFP_ATCMD_IPHONE_BATTERY_INQUIRY,				
	HFP_ATCMD_IPHONE_BATTERY_SEND,
	HFP_ATCMD_XEVENT_BATTERY_INQUIRY,				
	HFP_ATCMD_XEVENT_BATTERY_SEND,
	HFP_ATCMD_BIEV_BATTERY_SEND,
	HFP_ATCMD_PLACE_CALL_WITH_PHONE_NUMBER,
	HFP_ATCMD_MEMORY_DIALING,
	HFP_ATCMD_HOLD_AND_MULTIPARTY_HANDLING,		
	HFP_ATCMD_QUERY_OPERATOR_SELECTION,
	HFP_ATCMD_GET_SUBSCRIBER_NUMBER,
	HFP_ATCMD_SELECT_CHAR_SET_UTF8,
	HFP_ATCMD_ENABLE_CLI_NOTIFICATION,
	HFP_ATCMD_DISABLE_CLI_NOTIFICATION,
	HFP_ATCMD_SEND_DTMF, 						
	HFP_ATCMD_ENABLE_CALL_WAITING_NOTIFICATION,
	HFP_ATCMD_DISABLE_CALL_WAITING_NOTIFICATION,
	HFP_ATCMD_ENABLE_COMMAND_ERROR,
	HFP_ATCMD_DISABLE_COMMAND_ERROR,				
	HFP_ATCMD_QUERY_LIST_OF_CURRENT_CALLS,
	HFP_ATCMD_ATTACH_LAST_VOICE_TAG_RECORDED,
	HFP_ATCMD_TEST_GET_SUBSCRIBER_NUMBER,			
	HFP_ATCMD_AVAILABLE_CODEC,
	HFP_ATCMD_SELECT_CODEC,
	HFP_ATCMD_CODEC_CONNECTION,
	HFP_ATCMD_ACTIVATE_INDICATORS,
	HFP_ATCMD_PUT_INCOMING_CALL_ON_HOLD,
	HFP_ATCMD_ACCEPT_HELD_INCOMING_CALL,
	HFP_ATCMD_REJECT_HELD_INCOMING_CALL,
	HFP_ATCMD_READ_CURRENT_RSP_AND_HOLD_STATUS,
	HFP_ATCMD_APPLE_SIRI_STATUS,
	HFP_ATCMD_ENABLE_APPLE_EYES_FREE_MODE,
	HFP_ATCMD_DISABLE_APPLE_EYES_FREE_MODE,
	HFP_TABLE_LOOKUP_ATCMD_COUNT,
	HFP_ATCMD_3WAY_RELNUDUB = HFP_TABLE_LOOKUP_ATCMD_COUNT,
	HFP_ATCMD_3WAY_RELNACP,
	HFP_ATCMD_3WAY_RELNACP_X,
	HFP_ATCMD_3WAY_HOLDNACP,
	HFP_ATCMD_3WAY_HOLDNACP_X,
	HFP_ATCMD_3WAY_ADD,
	HFP_ATCMD_3WAY_CALLTRANSFER,
	HFP_TOTAL_ATCMD_COUNT,
	
	HFP_SET_INIT_VALUE,
	/*
	//Internal Command
	HFP_CMD_INTERNAL_SLC_INIT_ROUTINE = HFP_TOTAL_ATCMD_COUNT,
	HFP_CMD_INTERNAL_SLC_INIT_ROUTINE_HEADSET,
	HFP_AGCMD_FROM_MMI_BEGIN,
	HFP_AGCMD_FROM_MMI_CODEC_SELECTION,
	HFP_AGCMD_FROM_MMI_AUTO_CALL_SETUP,
	HFP_AGCMD_FROM_MMI_END,
	*/
};

enum
{
	HFP_APLSIRI_NOT_AVAILABLE = 0,
	HFP_APLSIRI_AVAILABLE_ENABLE,
	HFP_APLSIRI_AVAILABLE_DISABLE,
};

typedef enum HFP_MSG_E
{
	HFP_START_SERVICE_CFM = MSG_MESSAGE_BT_PROFILE_HSP,	//0x2000
	HFP_STOP_SERVICE_CFM,								//0x2001
	HFP_CONNECT_IND,									//0x2002
	HFP_DISCONNECT_CFM,									//0x2003
	HFP_DISCONNECT_IND,									//0x2004
	HFP_CONNECT_CFM,									//0x2005

	HFP_AG_ERROR_CODE_IND,								//0x2006
	HFP_AG_EXT_ERROR_IND,								//0x2007
	HFP_SUSCRIBER_NUM_IND,								//0x2008
	HFP_CALLER_NUM_IND,									//0x2009
	HFP_CURRENT_CALL_LIST_IND,							//0x200A
	HFP_INBAND_RINGTONE_IND,							//0x200B
	HFP_RESPONSE_HOLD_IND,								//0x200C
	HFP_RING_IND,										//0x200D
	HFP_PLUS_VGS_IND,									//0x200E
	HFP_PLUS_VGM_IND,									//0x200F
	HFP_SERVICE_IND,									//0x2010
	HFP_CALL_IND,										//0x2011
	HFP_CALLSETUP_IND,									//0x2012
	HFP_CALLHELD_IND,									//0x2013
	HFP_SIGNAL_IND,										//0x2014
	HFP_ROAM_IND,										//0x2015
	HFP_BATCHG_IND,										//0x2016
	HFP_APPLE_SIRI_IND,									//0x2017
	HFP_UNKNOWN_RESULT_CODE_IND,						//0x2018
	HFP_AT_ACCEPT_CALL_CFM,								//0x2019
	HFP_AT_AG_ERROR_CODE_CFM,							//0x201A
	HFP_AT_APL_EFM_CFM,									//0x201B
	HSP_AT_BUTTON_PRESS_CFM,							//0x201C
	HFP_AT_CALL_WAITING_CFM,							//0x201D
	HFP_AT_CODEC_SELECT_CFM,							//0x201E
	HFP_AT_INIT_SCO_CONN_CFM,							//0x201F
	HFP_AT_NREC_CFM,									//0x2020
	HFP_AT_REDIAL_CFM,									//0x2021
	HFP_AT_TERMINATE_CALL_CFM,							//0x2022
	HFP_AT_VGS_CFM,										//0x2023
	HFP_AT_VGM_CFM,										//0x2024
	HFP_AT_VOICE_DIAL_CFM,								//0x2025
	HFP_AT_VENDOR_IND,									//0x2026
	HFP_AT_VENDOR_TIMEOUT_IND,							//0x2027
	HFP_AT_VENDOR_OK_IND,								//0x2028
	HFP_AT_VENDOR_ERROR_IND,							//0x2029
}HFP_MSG_E;


typedef struct HFP_START_SERVICE_CFM_T
{
	BT_GENERIC_STATUS_E status;
	U8 profileBit;
}HFP_START_SERVICE_CFM_T;


typedef struct HFP_STOP_SERVICE_CFM_T
{
	BT_GENERIC_STATUS_E status;
	U8 profileBit;
}HFP_STOP_SERVICE_CFM_T;

typedef struct HFP_CONNECT_IND_T
{
	BD_ADDR_T bdAddr;
	U8 profileBit;
}HFP_CONNECT_IND_T;

typedef struct HFP_CONNECT_CFM_T
{
	BT_GENERIC_STATUS_E status;
	BD_ADDR_T bdAddr;
	U8 profileBit;
}HFP_CONNECT_CFM_T;

typedef struct HFP_DISCONNECT_IND_T
{
	BD_ADDR_T bdAddr;
}HFP_DISCONNECT_IND_T;


typedef struct HFP_DISCONNECT_CFM_T
{
	BT_GENERIC_STATUS_E status;
	BD_ADDR_T bdAddr;
}HFP_DISCONNECT_CFM_T;

typedef struct HFP_SUSCRIBER_NUM_IND_T
{	
	BD_ADDR_T bdAddr;
	U8 length;
	U8 numId[CALLER_ID_DIGIT_NO];
	U8 type;
	U8 service;
}HFP_SUSCRIBER_NUM_IND_T;

typedef struct HFP_CALLER_NUM_IND_T
{	
	BD_ADDR_T bdAddr;
	U8 length;
	U8 callNumId[CALLER_ID_DIGIT_NO];
}HFP_CALLER_NUM_IND_T;

typedef struct HFP_AG_ERROR_CODE_IND_T
{
	BD_ADDR_T bdAddr;
	U8 errorCode;
}HFP_AG_ERROR_CODE_IND_T;


	
#define HFP_EXT_ERROR_NO_CARRIER	0
#define HFP_EXT_ERROR_BUSY			1
#define HFP_EXT_ERROR_NO_ANSWER		2
#define HFP_EXT_ERROR_DELAYED		3
#define HFP_EXT_ERROR_BLACKLISTED	4

typedef struct HFP_AG_EXT_ERROR_IND_T
{
	BD_ADDR_T bdAddr;
	U8 extError;
}HFP_AG_EXT_ERROR_IND_T;

typedef struct HFP_APPLE_SIRI_IND_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_APPLE_SIRI_IND_T;

typedef struct HFP_CURRENT_CALL_LIST_IND_T
{
	BD_ADDR_T bdAddr;
	U8 idx;
	U8 dir;
	U8 status;
	U8 mode;
	U8 mpty;
}HFP_CURRENT_CALL_LIST_IND_T;

typedef struct HFP_INBAND_RINGTONE_IND_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_INBAND_RINGTONE_IND_T;


#define BTRH_AG_INCOMING_CALL_PUT_ON_HOLD	0
#define BTRH_AG_INCOMING_CALL_ACCEPTED		1
#define BTRH_AG_INCOMING_CALL_REJECTED		2

typedef struct HFP_RESPONSE_HOLD_IND_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_RESPONSE_HOLD_IND_T;

typedef struct HFP_RING_IND_T
{
	BD_ADDR_T bdAddr;
}HFP_RING_IND_T;

typedef struct HFP_PLUS_VGS_IND_T
{
	BD_ADDR_T bdAddr;
	U8 vgs;
}HFP_PLUS_VGS_IND_T;

typedef struct HFP_PLUS_VGM_IND_T
{
	BD_ADDR_T bdAddr;
	U8 vgm;
}HFP_PLUS_VGM_IND_T;

typedef struct HFP_SERVICE_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_SERVICE_IND_T;

typedef struct HFP_CALL_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_CALL_IND_T;

typedef struct HFP_CALLSETUP_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_CALLSETUP_IND_T;

typedef struct HFP_CALLHELD_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_CALLHELD_IND_T;

typedef struct HFP_SIGNAL_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_SIGNAL_IND_T;

typedef struct HFP_ROAM_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_ROAM_IND_T;

typedef struct HFP_BATCHG_IND_T
{
	BD_ADDR_T bdAddr;
	U8 value;
}HFP_BATCHG_IND_T;

typedef struct HFP_AT_ACCEPT_CALL_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_AT_ACCEPT_CALL_CFM_T;

typedef struct HFP_AT_AG_ERROR_CODE_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 isEnable;
	U8 status;
}HFP_AT_AG_ERROR_CODE_CFM_T;

typedef struct HFP_AT_APL_EFM_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
	U8 efmEnable;
}HFP_AT_APL_EFM_CFM_T;

typedef struct HSP_AT_BUTTON_PRESS_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HSP_AT_BUTTON_PRESS_CFM_T;

typedef struct HFP_AT_CALL_WAITING_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 isEnable;
	U8 status;
}HFP_AT_CALL_WAITING_CFM_T;

typedef struct HFP_AT_CODEC_SELECT_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_AT_CODEC_SELECT_CFM_T;

typedef struct HFP_AT_INIT_SCO_CONN_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_AT_INIT_SCO_CONN_CFM_T;

typedef struct HFP_AT_NREC_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
	U8 isEnable;
}HFP_AT_NREC_CFM_T;

typedef struct HFP_AT_REDIAL_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_AT_REDIAL_CFM_T;

typedef struct HFP_AT_TERMINATE_CALL_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
}HFP_AT_TERMINATE_CALL_CFM_T;

typedef struct HFP_AT_VGS_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
	U8 vgs;
}HFP_AT_VGS_CFM_T;

typedef struct HFP_AT_VGM_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
	U8 vgm;
}HFP_AT_VGM_CFM_T;

typedef struct HFP_AT_VOICE_DIAL_CFM_T
{
	BD_ADDR_T bdAddr;
	U8 status;
	U8 isEnable;
}HFP_AT_VOICE_DIAL_CFM_T;

typedef struct HFP_AT_VENDOR_IND_T
{	
	BD_ADDR_T bdAddr;
	U8 dataLen;
	U8 data[1];
}HFP_AT_VENDOR_IND_T;

typedef struct HFP_AT_VENDOR_TIMEOUT_IND_T
{	
	BD_ADDR_T bdAddr;
	U8 cmdNo;
}HFP_AT_VENDOR_TIMEOUT_IND_T;

typedef struct HFP_AT_VENDOR_OK_IND_T
{	
	BD_ADDR_T bdAddr;
	U8 cmdNo;
}HFP_AT_VENDOR_OK_IND_T;

typedef struct HFP_AT_VENDOR_ERROR_IND_T
{	
	BD_ADDR_T bdAddr;
	U8 cmdNo;
}HFP_AT_VENDOR_ERROR_IND_T;


typedef struct HFP_UNKNOWN_RESULT_CODE_IND_T
{
	BD_ADDR_T bdAddr;
	U32 length;
	U8	dataBegin;
}HFP_UNKNOWN_RESULT_CODE_IND_T;

BOOL HFP_IsSupportAGInbandRingTone(BD_ADDR_T * pBdAddr);
BOOL HFP_IsSCOCodecCVSD(BD_ADDR_T * pBdAddr);
BOOL HFP_IsSCOCodecMSBC(BD_ADDR_T * pBdAddr);
BOOL HFP_IsLocalSupportCodecNego(void);


#include "BtHfp.h"
#endif //__HFP_INTERFACE_HH_
