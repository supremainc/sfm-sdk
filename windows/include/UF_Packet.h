/**
 *  	Packet definition
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

#ifndef __UNIFINGER_PACKET_H__
#define __UNIFINGER_PACKET_H__

#ifdef _WIN32
#include <windows.h>
#endif // _WIN32

//
// Constants
//
#define UF_PACKET_START_CODE 0x40
#define UF_NETWORK_PACKET_START_CODE 0x41
#define UF_SECURE_PACKET_START_CODE 0x50
#define UF_SECURE_NETWORK_PACKET_START_CODE 0x51
#define UF_PACKET_END_CODE 0x0a
#define UF_PACKET_LEN 13
#define UF_NETWORK_PACKET_LEN 15
#define UF_SECURE_PACKET_LEN 35         // 32byte encrypted data + 4byte checksum + start code + end code
#define UF_SECURE_NETWORK_PACKET_LEN 40 // 32byte encrypted data + 4byte checksum + start code + end code + module id

#define UF_PACKET_COMMAND 0
#define UF_PACKET_TERMINAL_ID 1
#define UF_PACKET_PARAM 2
#define UF_PACKET_SIZE 3
#define UF_PACKET_FLAG 4
#define UF_PACKET_CHECKSUM 5

//
// Byte position of packet components
//
#define UF_PACKET_START_CODE_POS 0
#define UF_PACKET_COMMAND_POS 1
#define UF_PACKET_PARAM_POS 2
#define UF_PACKET_SIZE_POS 6
#define UF_PACKET_FLAG_POS 10
#define UF_PACKET_CHECKSUM_POS 11
#define UF_PACKET_END_CODE_POS 12

#define UF_NETWORK_PACKET_START_CODE_POS 0
#define UF_NETWORK_PACKET_TERMINALID_POS 1
#define UF_NETWORK_PACKET_COMMAND_POS 3
#define UF_NETWORK_PACKET_PARAM_POS 4
#define UF_NETWORK_PACKET_SIZE_POS 8
#define UF_NETWORK_PACKET_FLAG_POS 12
#define UF_NETWORK_PACKET_CHECKSUM_POS 13
#define UF_NETWORK_PACKET_END_CODE_POS 14

typedef enum
{
    UF_KEY_OPTION_SET_ENCRYPTION_KEY = 0xC1,
    UF_KEY_OPTION_SET_INITIALIZATION_VECTOR = 0xC2,
    UF_KEY_OPTION_SET_SECURE_KEY = 0xC3,

    UF_KEY_OPTION_SET_ENCRYPTION_KEY_WITH_VERIFICATION = 0xC4,
    UF_KEY_OPTION_SET_INITIALIZATION_VECTOR_WITH_VERIFICATION = 0xC5,
    UF_KEY_OPTION_SET_SECURE_KEY_WITH_VERIFICATION = 0xC6,

    UF_KEY_OPTION_RESET_INITIALIZATION_VECTOR = 0xCA,
    UF_KEY_OPTION_RESET_SECURE_KEY = 0xCB,

} UF_KEY_OPTION;

typedef enum
{
    UF_KEY_EXCHANGE_OPTION_SET_PUBLIC_KEY = 0xCD,
    UF_KEY_EXCHANGE_OPTION_GET_PUBLIC_KEY = 0xCE,
}UF_KEY_EXCHANGE_OPTION;

//
// Data packet
//
#define UF_DEFAULT_DATA_PACKET_SIZE (4 * 1024)

#ifdef __cplusplus
extern "C"
{
#endif

    UF_API UINT32 UF_GetPacketValue(int component, BYTE *packet);
    UF_API UINT32 UF_GetNetworkPacketValue(int component, BYTE *packet);

    int UF_ReadData(unsigned char *buf, int size, int timeout);
    int UF_WriteData(unsigned char *buf, int size, int timeout);

    int UF_ClearReadBuffer();
    int UF_ClearWriteBuffer();

#ifdef __cplusplus
}
#endif

#endif
