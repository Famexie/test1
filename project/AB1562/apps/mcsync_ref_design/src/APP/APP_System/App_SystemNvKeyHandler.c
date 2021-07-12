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
#include "System_Nvkey.h"
#include "nvkey_hdl.h"

static APP_SYSTEM_PinCodeCtl_STRU *gpAppPinCodeCtl;
static NVKEY_APP_SYSTEM_TIMER_STRU *gpAppSystemTimer;
static NVKEY_APP_SYSTEM_TIMER_STRU *gpAppSystemTimer;
static NVKEY_APP_SYSTEM_DEFAULT_SYSTEM_VALUE_STRU *gpAppDefaultValue;


U8* System_ReadNvkeyDefaultDeviceName(void)
{
	return (U8*)NVKEY_GetPayloadFlashAddress(NVKEYID_APP_DEVICE_NAME_DEFAULT);
}

BOOL System_PinCodeNvKeyInit(void)
{
	gpAppPinCodeCtl = (APP_SYSTEM_PinCodeCtl_STRU*)NVKEY_GetPayloadFlashAddress(NVKEYID_APP_PINCODE);
	return (gpAppPinCodeCtl)? TRUE:FALSE;
}

BOOL System_TimerNvkeyInit(void)
{
	if(NVKEY_GetPayloadLength(NVKEYID_APP_SYSTEM_TIMER) == sizeof(NVKEY_APP_SYSTEM_TIMER_STRU))
	{
		gpAppSystemTimer = (NVKEY_APP_SYSTEM_TIMER_STRU*)NVKEY_GetPayloadFlashAddress(NVKEYID_APP_SYSTEM_TIMER);
	}
	return (gpAppSystemTimer)? TRUE : FALSE;
}

U8 System_ReadNvkeyPinCodeLength(void)
{
	if(gpAppPinCodeCtl)
	{
		if((NVKEY_GetPayloadLength(NVKEYID_APP_PINCODE) - 1) >= gpAppPinCodeCtl->pinCodelength)
		{
			return gpAppPinCodeCtl->pinCodelength;
		}
		else
		{
			if(NVKEY_GetPayloadLength(NVKEYID_APP_PINCODE) > 1)//else => only length but no data, return length = 0
				return (NVKEY_GetPayloadLength(NVKEYID_APP_PINCODE) - 1);
		}
	}
	return 0;
}

U8 *System_ReadNvkeyPinCodePtr(void)
{
	if(gpAppPinCodeCtl)
		return gpAppPinCodeCtl->pinCode;
	return NULL;
}


U16 System_WriteNvkeyDeviceNameToDefault(void)
{
	return nvkey_hdl_save_nvkey(NVKEYID_APP_DEVICE_NAME_USER_DEFINED, NVKEY_GetPayloadLength(NVKEYID_APP_DEVICE_NAME_DEFAULT), System_ReadNvkeyDefaultDeviceName());
}

U8 System_ReadNvkeyAutoPowerOnTimer(void)
{
//#if !FPGA
	if(gpAppSystemTimer)
		return gpAppSystemTimer->preventAutoPowerOnTimer;
//#endif
	return 0;
}

U8 System_ReadNvkeyBtnSequenceTimer(void)
{
	if(gpAppSystemTimer)
		return gpAppSystemTimer->btnSequenceTimer;
	return 0;
}

U8 System_ReadNvkeyReconnFailDiscTimer(void)
{
	return (gpAppSystemTimer) ? gpAppSystemTimer->reconnFailDiscTimer : 0;
}

U8 System_DefaultSystemValueInit(void)
{
	if(NVKEY_GetPayloadLength(NVKEYID_FACTORY_DEFAULT_SETTING_VALUE) == sizeof(NVKEY_APP_SYSTEM_DEFAULT_SYSTEM_VALUE_STRU))
	{
		gpAppDefaultValue = (NVKEY_APP_SYSTEM_DEFAULT_SYSTEM_VALUE_STRU*)NVKEY_GetPayloadFlashAddress(NVKEYID_FACTORY_DEFAULT_SETTING_VALUE);
	}
	return (gpAppDefaultValue)? TRUE : FALSE;
}

U8 System_ReadNvkeyVpLangFactoryValue(void)
{
	return (gpAppDefaultValue) ? gpAppDefaultValue->vpLangFactoryValue : 0;
}

U8 System_ReadNvkeyA2dpSoundLevelFactoryValue(void)
{
	return (gpAppDefaultValue) ? gpAppDefaultValue->a2dpFactorySoundLevel : 0;
}

U8 System_ReadNvkeyScoSoundLevelFactoryValue(void)
{
	return (gpAppDefaultValue) ? gpAppDefaultValue->scoFactorySoundLevel : 0;
}

U8 System_ReadNvkeyMicScoSoundLevelFactoryValue(void)
{
	return (gpAppDefaultValue) ? gpAppDefaultValue->micScoFactorySoundLevel : 0;
}

U8 System_ReadNvkeyVpRtSoundLevelFactoryValue(void)
{
	return (gpAppDefaultValue) ? gpAppDefaultValue->vpRtFactorySoundLevel : 0;
}


