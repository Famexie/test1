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
 
 
#include "bt.h"
#include "app_hfpnvkey_nvstruc.h"

static APP_HFP_SCO_PKT_PARA_STRU *gpHfpSCOPktPara;

BOOL App_HfpSCOPktPara_InitNvKey(void)
{
	if(NVKEY_GetPayloadLength(NVKEYID_APP_HFP_SCO_PACKET_PARA) == sizeof(APP_HFP_SCO_PKT_PARA_STRU))
	{
		gpHfpSCOPktPara =(APP_HFP_SCO_PKT_PARA_STRU*)NVKEY_GetPayloadFlashAddress(NVKEYID_APP_HFP_SCO_PACKET_PARA);
	}	
	return (gpHfpSCOPktPara)? TRUE : FALSE;
}


U16 App_Hfp_SCO_ReadNvkeyPktParaTypeSCO(void)
{
	if(gpHfpSCOPktPara)
		return gpHfpSCOPktPara->SCOPktPara;
	return 0;
}

U16 App_Hfp_SCO_ReadNvkeyPktParaTypeeSCO(void)
{
	if(gpHfpSCOPktPara)
		return gpHfpSCOPktPara->eSCOPktPara;
	return 0;
}

U16 App_Hfp_SCO_ReadNvkeyPktParaTypeSCOHV3(void)
{
	if(gpHfpSCOPktPara)
		return gpHfpSCOPktPara->SCOOnlyHV3PktPara;
	return 0;
}

NVKEY_APP_HFP_TIMER_STRU *gpAppHfpNvkeyTimer;
void APP_HfpNvkeyTimerInit()
{
	gpAppHfpNvkeyTimer = (NVKEY_APP_HFP_TIMER_STRU *)NVKEY_GetPayloadFlashAddress(NVKEYID_APP_HFP_TIMER_PARAMETER);
}

U16 APP_HfpNvkeyGetTimerValue(U8 timerId)
{
	if(!gpAppHfpNvkeyTimer)
		return 0;
	
	switch(timerId)
	{
		case TIMER_ID_NETWORK_SERVICE_INDICATION_REPEAT:
			return gpAppHfpNvkeyTimer->NetworkServiceIndicatorRepeatTime;
		
		case TIMER_ID_AUTO_ANSWER:
			return gpAppHfpNvkeyTimer->autoAnswerTime;

		case TIMER_ID_EST_SCO_AFTER_OGGCALL:
			return gpAppHfpNvkeyTimer->estSCOAfterOggCallTime;

		case TIMER_ID_AUDIO_TRANSFER_DETACH:
			return gpAppHfpNvkeyTimer->AudioTransferDetachTime;

		default:
			return 0;
	}
}
