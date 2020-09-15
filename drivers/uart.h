#ifndef _UART_H_
#define _UART_H_
/*
 *UCSRnA – USART Control and Status Register n A
 */
#define UCSR0A (*(volatile unsigned char *)0xC0)
#define MPCMn   0 //Multi-processor Communication Mode
#define U2Xn    1 //Double the USART Transmission Speed
#define UPEn    2 //USART Parity Error
#define DORn    3 //Data OverRun
#define FEn     4 //Frame Error
#define UDREn   5 //USART Data Register Empty
#define TXCn    6 //USART Transmit Complete
#define RXCn    7 //USART Receive Complete
/*
 *UCSRnB – USART Control and Status Register n B
 */
#define UCSR0B (*(volatile unsigned char *)0xC1)
#define RXB8n   0 //Transmit Data Bit 8 n
#define TXB8n   1 //Receive Data Bit 8 n
#define UCSZn2  2 //Character Size n
#define TXENn   3 //TXENn: Transmitter Enable n
#define RXENn   4 //Receiver Enable n
#define UDRIEn  5 //USART Data Register Empty Interrupt Enable n
#define TXCIEn  6 //TX Complete Interrupt Enable n
#define RXCIEn  7 //RX Complete Interrupt Enable n
/*
 *UCSRnC – USART Control and Status Register n C
 */
#define UCSR0C (*(volatile unsigned char *)0xC2)
#define UCPOLn  0 //Clock Polarity
#define UCSZn0  1 //Character Size 0
#define UCSZn1  2 //Character Size 1
#define USBSn   3 //Stop Bit Select
#define UPMn0   4 //Parity Mode 0
#define UPMn1   5 //Parity Mode 1
#define UMSELn0 6 //USART Mode Select 0
#define UMSELn1 7 //USART Mode Select 1

#define UBRR0  (*(volatile unsigned char *)0xC4)

#define UBRR0L (*(volatile unsigned char *)0xC4)
#define UBRR0_0 0
#define UBRR0_1 1
#define UBRR0_2 2
#define UBRR0_3 3
#define UBRR0_4 4
#define UBRR0_5 5
#define UBRR0_6 6
#define UBRR0_7 7

#define UBRR0H (*(volatile unsigned char *)0xC5)
#define UBRR0_8 0
#define UBRR0_9 1
#define UBRR0_10 2
#define UBRR0_11 3

#define UDR0 (*(volatile unsigned char *)0xC6)
#define UDR0_0 0
#define UDR0_1 1
#define UDR0_2 2
#define UDR0_3 3
#define UDR0_4 4
#define UDR0_5 5
#define UDR0_6 6
#define UDR0_7 7

#endif
