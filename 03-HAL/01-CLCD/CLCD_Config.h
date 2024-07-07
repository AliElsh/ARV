/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :HAL         ***********************
*********    SWC     :LCD      **************************
***********  VERSION : 1.0
********************************************/
#ifndef CLCD_Config
#define CLCD_Config
/*  
**YOU CAN CHOICE FORM**   
                      1-DIO_u8_PORTA
                      2-DIO_u8_PORTB
                      3-DIO_u8_PORTC
                      4-DIO_u8_PORTD
  
 */
#define CLCD_DATA_PORT          DIO_u8_PORTA
#define CLCD_CTRL_PORT          DIO_u8_PORTC

/*  
**YOU CAN CHOICE FORM**   
                 1-DIO_u8_PIN0
                 2-DIO_u8_PIN1
                 3-DIO_u8_PIN2
                 4-DIO_u8_PIN3
                 5-DIO_u8_PIN4
                 6-DIO_u8_PIN5
                 7-DIO_u8_PIN6
                 8-DIO_u8_PIN7
                 
 */
#define CLCD_RS_PIN              DIO_u8_PIN0                 
#define CLCD_RW_PIN              DIO_u8_PIN1
#define CLCD_E_PIN               DIO_u8_PIN2

                                 
#endif