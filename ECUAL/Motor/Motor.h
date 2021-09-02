/*
 * Motor.h
 *
 * Created: 9/2/2021 5:30:27 PM
 *  Author: user
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_
#include "../../MCAL/PWM/PWM.h"
/*used for set motor config */
void Motor_init();
/* used for start motor and set direction and speed*/
void Motor_start(uint8_t direction,uint8_t speed);
/* used to stop motor*/
void Motor_stop();



#endif /* MOTOR_H_ */