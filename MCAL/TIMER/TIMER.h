/*
 * TIMER.h
 *
 * Created: 9/1/2021 5:40:57 PM
 *  Author: user
 */ 


#ifndef TIMER_H_
#define TIMER_H_
/*used to set config of timer*/
void Timer_init();
/*used to start timer count*/
void Timer_start(uint64_t ticks);
/*used to read value timer reach to*/
void Timer_read(uint8_t *value);
/*used to set initial value of timer*/
void Timer_set(uint8_t value);
/*used to check status of timer*/
void Timer_checkStatus(uint8_t *status);




#endif /* TIMER_H_ */