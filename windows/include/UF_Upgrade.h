/**
 *  	Upgrade
 */

/*  
 *  Copyright (c) 2001-2021 Suprema Inc. All Rights Reserved.
 * 
 *  This software is the confidential and proprietary information of 
 *  Suprema Inc. ("Confidential Information").  You shall not
 *  disclose such Confidential Information and shall use it only in
 *  accordance with the terms of the license agreement you entered into
 *  with Suprema.
 */

#ifndef __UNIFINGER_UPGRADE_H__
#define __UNIFINGER_UPGRADE_H__

typedef enum
{
	// Legacy
	UF_UPGRADE_VALIDATE_FIRMWARE = 0x7B,

	// Compatible enumerations
	UF_UPGRADE_OPTION_VALIDATE_FIRMWARE = UF_UPGRADE_VALIDATE_FIRMWARE,
} UF_UPGRADE_OPTION;

#endif
