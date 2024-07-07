/********************************************
*********    Author  :ALI ELSHEIKH      ***************
*********    lAYER   :MCAL         ***********************
*********    SWC     :TIMER      **************************
***********  VERSION : 1.0
********************************************/
#ifndef TIMER_Private_H
#define TIMER_Private_H

#define   TCCR0_FOC0     7
#define   TCCR0_WGM00    6
#define   TCCR0_COM01    5 
#define   TCCR0_COM00    4
#define   TCCR0_WGM01    3 
#define   TCCR0_CS02     2
#define   TCCR0_CS01     1
#define   TCCR0_CS00     0


#define    TIMSK_OCIE0    1
#define    TIMSK_TOIE0    0
 
  
#define Normal_MODE               1
#define PWM_ PHASE_CORRECT_MODE   2
#define CTC_MODE                  3
#define FAST_PWM_MODE             4
 
#endif