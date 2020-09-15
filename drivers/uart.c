#include "lc_atmegax8.h" 
#include "uart.h"
unsigned char* lc_uart_txbuff;
unsigned char* lc_uart_rxbuff;
unsigned char  lc_uart_rxcount;

void USART_UDRE(void)
{
    
    
}
void USART_RXC(void)
{
    
    
}
void lc_uart_open(unsigned char port,
                  unsigned long int baud)
{
    unsigned int ubrr = 0;
    /* calculation baud rate */
    ubrr = (F_CPU/8/baud)-1;
    /* Set baud rate */
    UBRR0H = ubrr>>8;
    UBRR0L = ubrr;
    
    /*Enable Double Transmission Speed */
    UCSR0A = 1<<U2Xn;
    /*Enable receiver and transmitter */
    UCSR0B = (0<<RXCIEn)|(0<<UDREn)|(1<<RXENn)|(1<<TXENn);
    /* Set frame format: 8data */
    UCSR0C = 3<<UCSZn0;
}
void lc_uart_close(unsigned char port)
{
    
}

void lc_uart_read(unsigned char port,
                  unsigned char* buff,
                  unsigned char count)
{
    
}

void lc_uart_write(unsigned char port,
                   char* buff,
                   unsigned char count)
{
    while(*buff)
    {
        while((UCSR0A&UDREn)==0);
        UDR0 = *buff;
        buff++;
    }
}
