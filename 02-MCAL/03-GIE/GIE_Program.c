/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :GIE      **************************
***********  VERSION : 1.0
********************************************/

#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include  "../include/GIE_Interface.h"
#include "../include/GIE_Register.h"


void GIE_voidEnable(void)
{
	
	SET_BIT(SREG,SREG_I);
}

void GIE_voidDisable(void)
{
		CLR_BIT(SREG,SREG_I);

}

