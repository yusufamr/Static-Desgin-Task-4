/*
 * Button.h
 *
 * Created: 9/2/2021 5:29:57 PM
 *  Author: user
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO/DIO.h"
/*used for initialize button and choose pin for each button and Pull up or down*/
void Button_init(uint8_t port,uint8_t pin,uint8_t IsPullUp);
/* used to check button status (pressed) or not */
void Button_read(uint8_t port,void pin);




#endif /* BUTTON_H_ */