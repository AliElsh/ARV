/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :TIMER      **************************
***********  VERSION : 1.0
********************************************/
#ifndef TIMER_Interface_H
#define TIMER_Interface_H


void MTIMERS_voidTimer0Init(void);
void MTIMERS_voidTimer0OVFSetCallBack (void (*copy_pf)(void));
void MTIMERS_voidTimer0CTCSetCallBack (void (*copy_pf)(void));
void MTIMERS_voidTimer1Init(void);



#endif

