/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :ADC      **************************
***********  VERSION : 1.0
********************************************/
#ifndef ADC_Private_H
#define ADC_Private_H

#define    ADLAR          5
#define    REFS0          6
#define    REFS1          7
typedef enum
{
      ADC0=0,
      ADC1,
      ADC2,
      ADC3,
      ADC4,
      ADC5,
      ADC6,
      ADC7     	
}ADC_e;
/*  ADC Prescaler Select Bits
ADPS2    ADPS1          ADPS0   Division Factor
0   	 0		0	2
0  	 0		1 	2
0   	 1		0 	4
0   	 1		1 	8
1  	 0		0 	16
1  	 0      	1 	32
1  	 1      	0 	64
1  	 1      	1 	128
*/
#define    ADPS0          0
#define    ADPS1          1
#define    ADPS2          2
/*  ADC INTERRUPT ENABLE */
#define    ADIE           3
/*  ADC INTERRUPT FLAGE */
#define    ADIF           4
/*ADC Auto Trigger Enable*/
#define    ADATE          5
/*ADC Auto START CONVERSION */
#define    ADSC           6
/*ADC ENABLE */
#define    ADEN           7




/*
ADTS2 		ADTS1 	 ADTS0 		Trigger Source
0 		0 	 0 		Free Running mode
0 		0 	 1		Analog Comparator
0 		1	 0 		External Interrupt Request 0
0 		1        1 		Timer/Counter0 Compare Match
1 		0 	 0 		Timer/Counter0 Overflow
1 		0 	 1 		Timer/Counter Compare Match B
1 		1 	 0 		Timer/Counter1 Overflow
1 		1	 1 		Timer/Counter1 Capture Event

*/
 #define    ADTS0             5   
 #define    ADTS1             6 
 #define    ADTS2             7
  
 



typedef enum
{
     DivisionFactor_2,
     DivisionFactor_2,
     DivisionFactor_4,
     DivisionFactor_8,
     DivisionFactor_16,
     DivisionFactor_32,
     DivisionFactor_64,
     DivisionFactor_128,    	
}ADC_Prescaler;





 
#endif