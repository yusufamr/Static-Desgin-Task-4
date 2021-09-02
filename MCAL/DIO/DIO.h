/*
 * DIO.h
 *
 * Created: 9/1/2021 5:40:36 PM
 *  Author: user
 */ 


#ifndef DIO_H_
#define DIO_H_
/* used to initialize DIO pin ( DDR ) */
void DIO_init(uint8_t port,uint8_t pin,uint8_t direction);
/*used to write on pin you want*/
void DIO_write(uint8_t port, uint8_t pin,uint8_t data);
/*used to read from pin you need*/
void DIO_read(uint8_t port, uint8_t pin,uint8_t *data);
/*used to toggle bit of pin*/
void DIO_toggle(uint8_t port,uint8_t pin);





#endif /* DIO_H_ */