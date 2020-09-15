#ifndef _GPIO_H_
#define _GPIO_H_

/*
 * MCUCR – MCU Control Register
 */
#define MCUCR (*(volatile unsigned char *)0x35)
#define PUD 4

/*
 * PORTB – The Port B Data Register
 */
#define PORTB (*(volatile unsigned char *)0x05)
#define PORTB0 0
#define PORTB1 1
#define PORTB2 2
#define PORTB3 3
#define PORTB4 4
#define PORTB5 5
#define PORTB6 6
#define PORTB7 7

/*
 * DDRB – The Port B Data Direction Register
 */
#define DDRB (*(volatile unsigned char *)0x04)
#define DDB0 0
#define DDB1 1
#define DDB2 2
#define DDB3 3
#define DDB4 4
#define DDB5 5
#define DDB6 6
#define DDB7 7

/*
 * PINB – The Port B Input Pins Address
 */
#define PINB (*(volatile unsigned char *)0x03)
#define PINB0 0
#define PINB1 1
#define PINB2 2
#define PINB3 3
#define PINB4 4
#define PINB5 5
#define PINB6 6
#define PINB7 7

/*
 * PORTC – The Port C Data Register
 */
#define PORTC (*(volatile unsigned char *)0x08)
#define PORTC0 0
#define PORTC1 1
#define PORTC2 2
#define PORTC3 3
#define PORTC4 4
#define PORTC5 5
#define PORTC6 6

/*
 * DDRC – The Port C Data Direction Register
 */
#define DDRC (*(volatile unsigned char *)0x07)
#define DDC0 0
#define DDC1 1
#define DDC2 2
#define DDC3 3
#define DDC4 4
#define DDC5 5
#define DDC6 6

/*
 * PINC – The Port C Input Pins Address
 */
#define PINC (*(volatile unsigned char *)0x06)
#define PINC0 0
#define PINC1 1
#define PINC2 2
#define PINC3 3
#define PINC4 4
#define PINC5 5
#define PINC6 6

/*
 * PORTD – The Port D Data Register
 */
#define PORTD (*(volatile unsigned char *)(0x0B)
#define PORTD0 0
#define PORTD1 1
#define PORTD2 2
#define PORTD3 3
#define PORTD4 4
#define PORTD5 5
#define PORTD6 6
#define PORTD7 7

/*
 * DDRD – The Port D Data Direction Register
 */
#define DDRD (*(volatile unsigned char *)(0x0A)
#define DDD0 0
#define DDD1 1
#define DDD2 2
#define DDD3 3
#define DDD4 4
#define DDD5 5
#define DDD6 6
#define DDD7 7

/*
 * PIND – The Port D Input Pins Address
 */
#define PIND (*(volatile unsigned char *)0x09)
#define PIND0 0
#define PIND1 1
#define PIND2 2
#define PIND3 3
#define PIND4 4
#define PIND5 5
#define PIND6 6
#define PIND7 7

#endif
