/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :HAL         ***********************
*********    SWC     :LCD      **************************
***********  VERSION : 1.0
********************************************/
#ifndef CLCD_interface
#define CLCD_interface


/*

1-N IS NUMBER OFF LINE   0 -> 1 LINE &   1 -> 2 LINE				   
2-F IS FONT SIZE         0 -> 5*8    &   1 -> 5*11

3-D- DISPLAY ENABLE      0->DISEBLE  &	 1 ENABLE
4-C- CURSOR  ENABLE      0->DISEBLE  &	 1 ENABLE
5-B  BLINK CURSOR        0->DISEBLE  &	 1 ENABLE

*/	


//TOW LINE ,5*8 FONT SIZE		   
#define FUNCTION_SET    0b00111000
#define DISPLAY_ON/OFF  0b00001100
#define CLEAR_DISPLAY   0b00000001  






void CLCD_voidInit(void);

void CLCD_voidSendCommand(uint8 Copy_u8Command);

void CLCD_voidSendData(uint8 Copy_u8Data);

void CLCD_voidGOTo_XY(uint8 Copy_Posx,uint8 Copy_Posx);

void CLCD_voidSendString(char *PtrCopy_String);

void HLCD_voidDisplayNumber(u32 copy_u32Number);

void CLCD_voidWriteSpicailChar(uint8 *Copy_Pu8Pattern,uint8 Copy_u8PatternNumber,uint8 Copy_u8POS_X,uint8 Copy_u8POS_Y);
#endif