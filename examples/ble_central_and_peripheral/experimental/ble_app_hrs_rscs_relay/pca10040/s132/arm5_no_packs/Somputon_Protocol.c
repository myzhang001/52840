
#include "Somputon_Protocol.h"

#define DATA_lENGTH_NUM                                 4      //固定长度
#define DATA_LENGTH_INDEX                               12     //数据内容索引
#define CONTROL_WORD_INDEX                              10     //控制字索引

typedef void(* appRecvHandler_Cb) (uint16_t cmd, uint8_t* pdata,uint16_t len);


appRecvHandler_Cb 	receive_data_from_app;


void regRevAppDataCb(appRecvHandler_Cb cb)
{
		receive_data_from_app = cb;
}


void Somputon_Init(appRecvHandler_Cb cb)
{
    regRevAppDataCb(cb);
}



void get_real_time_data_cmd(void)
{
	
}


void bond_cmd(void)
{
	
}

void clear_history_data_cmd(void)
{
	
}

void set_device_time_cmd(uint8_t *data_info)
{
	 
}


void get_device_time_cmd(uint32_t second)
{
	
}

void control_device_cmd(uint8_t *ctrl_data)
{	
			
}


void Clife_GenerateHisData(void)
{

}


//数据组装
void Data_Product(uint16_t cmd,uint8_t *data,uint16_t len ,uint8_t addr[6])
{
    
    uint8_t Send_Buff[50];
    
    
    Send_Buff[0] = START_FLAG;               //发送协议头
    Send_Buff[1] = len + 4;//数据长度
    Send_Buff[2] = PROTOCOL_VERSION;         //协议版本号
    
    memcpy(&Send_Buff[DATA_LENGTH_INDEX],data,len);  //数据内容
    
    
    switch(cmd)
    {
        case CONTROL_DATA_COMMAND:      
               Send_Buff[CONTROL_WORD_INDEX] = CONTROL_DATA_COMMAND;
             break;
        case GET_REAL_TIME_DATA_COMMAND: 

               Send_Buff[CONTROL_WORD_INDEX] = GET_REAL_TIME_DATA_COMMAND;
            break;
        case BOND_COMMAND:               
             Send_Buff[CONTROL_WORD_INDEX] = BOND_COMMAND;
            break;     
        default:
        break;
    }
    
    
    
    
}


