/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :ADC      **************************
***********  VERSION : 1.0
********************************************/
#ifndef ADC_Interface_H
#define ADC_Interface_H

void ADC_voidInit();

u16 ADC_u16StartConversionSync(ADC_e Copy_EnumChanal,ADC_Prescaler Copy_EnumPrescaler);


void ADC_u16StartConversionASync();




#endif

