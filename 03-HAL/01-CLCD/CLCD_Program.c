/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :HAL         ***********************
*********    SWC     :LCD      **************************
***********  VERSION :1.0
********************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_interface.h"
#include <util/delay.h>
#include "CLCD_interface.h"
#include "CLCD_Config.h"
#include "CLCD_Private.h"


void CLCD_voidInit(void)
{
	/*WAIT FOR MORE THEN 30 MILISECOND*/
	_delay_ms(40);
	CLCD_voidSendCommand(FUNCTION_SET);
	CLCD_voidSendCommand(DISPLAY_ON/OFF);
	//CLEAR DISPLAY
	CLCD_voidSendCommand(CLEAR_DISPLAY);
}

void CLCD_voidSendCommand(uint8 Copy_u8Command)
{
	/*SET RS PIN FOR SEND COMMAND*/
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_u8PIN_LOW);
	/*SET RW PIN FOR WRITE COMMAND*/
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_u8PIN_LOW);
    /*SEND COMMAND FOR PORT DATA*/
	DIO_uint8SetPort_Value(CLCD_DATA_PORT,Copy_u8Command);
	/*SEND ENBLE PULSE*/
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_u8PIN_HIGH);
	_delay_ms(2);
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_u8PIN_LOW);
}

void CLCD_voidSendData(uint8 Copy_u8Data)
{
	/*SET RS PIN FOR SEND DATA*/
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_u8PIN_HIGH);
	/*SET RW PIN FOR WRITE COMMAND*/
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_u8PIN_LOW);
    /*SEND DTAT FOR PORT DATA*/
	DIO_uint8SetPort_Value(CLCD_DATA_PORT,Copy_u8Data);
	/*SEND ENBLE PULSE*/
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_u8PIN_HIGH);
	_delay_ms(2);
	DIO_uint8SetPIN_Value(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_u8PIN_LOW);
}

void CLCD_voidSendString(const char *PTCCopy_String)
{
	uint8 Itiritor=0;
	
	while(PTCCopy_String[Itiritor]!='\0')
	{
		CLCD_voidSendData(PTCCopy_String[Itiritor]);
		Itiritor++;
	}
	
}

void CLCD_voidGOTo_XY(uint8 Copy_u8PosX,uint8 Copy_u8PosY)
{
	        uint8 Local_u8Adress=0;
			if(Copy_u8PosX==0)
			{
				Local_u8Adress=Copy_u8PosY;
			}
			else if(Copy_u8PosX==1)
			{
				Local_u8Adress=Copy_u8PosY+0x40;
			}
			else
			{
				Local_u8Adress=0;
			}
           CLCD_voidSendCommand(Local_u8Adress+128);			
	
}
void HLCD_voidDisplayNumber(u32 copy_u32Number)
{
	u32 local_u32Num = 1;
	if (copy_u32Number == 0)
	{
		HLCD_voidSendData('0');
	}
	if (copy_u32Number < 0)
	{
		HLCD_voidSendData('-');
		copy_u32Number *= -1;
	}
	while (copy_u32Number != 0)
	{
		local_u32Num = ((local_u32Num * 10) + (copy_u32Number % 10));
		copy_u32Number = (copy_u32Number / 10);
	}
	while (local_u32Num != 1)
	{
		HLCD_voidSendData((local_u32Num % 10) + 48);
		local_u32Num = (local_u32Num / 10);
	}
}

void CLCD_voidWriteSpicailChar(uint8 *Copy_Pu8Pattern,uint8 Copy_u8PatternNumber,uint8 Copy_u8POS_X,uint8 Copy_u8POS_Y)
{
	uint8 Local_CGRAMAdress=0;
	
	Local_CGRAMAdress=Copy_u8PatternNumber*8;
	
    CLCD_voidSendCommand(Local_CGRAMAdress+64);
	for(uint8 Local_u8Itritire=0;Local_u8Itritire<8;Local_u8Itritire++)
	{
		CLCD_voidSendData(Copy_Pu8Pattern[Local_u8Itritire]);
	}
	CLCD_voidGOTo_XY(Copy_u8POS_X,Copy_u8POS_Y);
	CLCD_voidSendData(Copy_u8PatternNumber);
}