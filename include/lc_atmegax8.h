#ifndef _LC_ATMEGAX8_H_
#define _LC_ATMEGAX8_H_
#include "lc_atmegax8_map.h"
#include "../config.h"

void lc_uart_open(unsigned char port,unsigned long int baud);
void lc_uart_write(unsigned char port,char* buff,unsigned char count);
#endif
