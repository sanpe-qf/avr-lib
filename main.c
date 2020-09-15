#include "lc_atmegax8.h" 
int main (){
    lc_uart_open(0,115200);
    while(1)
    {
    lc_uart_write(0,"love\n\r",0);
    }
    
}
SIGNAL(SIG_INTERRUPT0)
