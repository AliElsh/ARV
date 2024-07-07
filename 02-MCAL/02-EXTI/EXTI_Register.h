/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :INTRRUPT      **************************
***********  VERSION : 1.0
********************************************/
#ifndef EXTI_Register_H
#define EXTI_Register_H

#define  MCUCSR     *((volatile uint8*)0x54)
    #define    MCUCSR_INT2    6		   
#define  MCUCR      *((volatile uint8*)0x55)    
	#define    MCUCR_ISC11    3
    #define    MCUCR_ISC10    2
    #define    MCUCR_ISC01    1
    #define    MCUCR_ISC00    0
#define  GICR       *((volatile uint8*)0x5B)
    #define    GICR_INT2      5
    #define    GICR_INT1      7
    #define    GICR_INT0      6
  
#define  GIFR       *((volatile uint8*)0x5A)  
  
  
#endif