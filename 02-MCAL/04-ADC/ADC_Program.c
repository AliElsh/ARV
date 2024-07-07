/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :GIE      **************************
***********  VERSION : 1.0
********************************************/

#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include  "include"
#include  "include"

void ADC_voidEnable();
{
	/* Reference Selection Bits
	   AVCC with external capacitor at AREF pin
	*/
	CLR_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);
	/*
	ADC RIGTHAdjust Result
	0 RIGTH
	1 LEFT
	*/
	CLR_BIT(ADMUX,ADLAR);

	/* DISABLE AUTO TRIGGER */

	CLR_BIT(ADCSRA,ADATE)
	/* ADC ENABLE */	
	SET_BIT(ADCSRA,ADEN);

}


u16 ADC_u16StartConversionSync(ADC_e Copy_EnumChanal,ADC_Prescaler Copy_EnumPrescaler)
{
	u16 ADC_Localu16Data=0;
/*CHOICE CHANAL*/
	ADMUX&=0b11100000;
	ADMUX|=Copy_EnumChanal;
	/*ADC Prescaler Select Bits */
	ADCSRA&=11111000;
	ADMUX|=Copy_EnumPrescaler;
	/*START CONVERSION*/
	SET_BIT(ADCSRA,ADSC);
	while(GET_BIT(ADCSRA,ADIF)==0){}
	SET_BIT(ADCSRA,ADIF);
	ADC_Localu16Data=ADC_u16puData;
	return ADC_Localu16Data;
}