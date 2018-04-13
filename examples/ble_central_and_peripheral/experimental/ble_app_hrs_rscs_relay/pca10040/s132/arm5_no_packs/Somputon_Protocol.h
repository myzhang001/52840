#ifndef __somputon_protocol_h
#define __somputon_protocol_h

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "nordic_common.h"


/******************************************************************************
**                           Macro define                                   **
******************************************************************************/
#define START_FLAG										0x3A														
#define PROTOCOL_VERSION							    0x01														
#define CONTROL_DATA_COMMAND               				0x0040													
#define CONTROL_DATA_COMMAND_REPLY         				0xA040

#define CONTROL_STA_COMMAND                    		    0x0041													
#define CONTROL_STA_COMMAND_REPLY              		    0xA041

#define BOND_COMMAND                    	 		    0x0032
#define BOND_COMMAND_REPLY               	 		    0xA032

#define ENCRYPTION_REQ_REPLY               				0x0020
#define ENCRYPTION_REQ_COMMAND                	        0xA020

#define GET_DEVICE_TIME_COMMAND						 	0x0022
#define GET_DEVICE_TIME_COMMAND_REPLY			 	    0xA022	

#define SET_DEVICE_TIME_COMMAND						 	0x0023
#define SET_DEVICE_TIME_COMMAND_REPLY			 	    0xA023

#define GET_HISTORY_DATA_TOTAL_PACKETS		 			0x0030
#define GET_HISTORY_DATA_TOTAL_PACKETS_REPLY		    0xA030

#define GET_HISTORY_DATA_COMMAND		 			    0x0031
#define GET_HISTORY_DATA_COMMAND_REPLY		 		    0xA031
#define HISTORY_DATA_REPLY_FROM_APP		 			    0x0039

#define CLEAR_HISTORY_DATA_COMMAND    					0x0035
#define CLEAR_HISTORY_DATA_COMMAND_REPLY    			0xA035

#define GET_REAL_TIME_DATA_COMMAND    				    0x0037
#define GET_REAL_TIME_DATA_COMMAND_REPLY    			0xA037



#define CONTROL_DATA_COMMAND_LENGTH                     4+10
#define GET_REAL_TIME_DATA_COMMAND_LENGTH               4+10
#define BOND_COMMAND_LENGTH                             4+10

#define DATA_lENGTH_NUM                                 4      //固定长度
#define DATA_LENGTH_INDEX                               12     //数据内容索引
#define CONTROL_WORD_INDEX                              10     //控制字索引


#endif
