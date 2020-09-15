#include "lc_atmega328p.h"
#include "i2c.h"


char lc_i2c_master_open(unsigned char port,
                        unsigned int baud)
{
    if(port!=0)return -1;
}

char lc_i2c_master_close(unsigned char port)
{
    if(port!=0)return -1;
}

char lc_i2c_master_read(unsigned char port,
                        char* buff,
                        unsigned char count)
{
    if(port!=0)return -1;
}

char lc_i2c_master_write(unsigned char port,
                        char* buff,
                        unsigned char count)
{
    if(port!=0)return -1;
}

char lc_i2c_master_fastread(unsigned char port,
                           char* buff)
{
    if(port!=0)return -1;
}

char lc_i2c_master_fastwrite(unsigned char port,
                            char* buff)
{
    if(port!=0)return -1;
}

