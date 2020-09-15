#ifndef _I2C_H_
#define _I2C_H_

/* 
 *TWBR – TWI Bit Rate Register 
 */
#define TWBR (*(volatile unsigned char *)0xB8)
#define TWBR0 0 // TWI Bit Rate Register
#define TWBR1 1 // TWI Bit Rate Register
#define TWBR2 2 // TWI Bit Rate Register
#define TWBR3 3 // TWI Bit Rate Register
#define TWBR4 4 // TWI Bit Rate Register
#define TWBR5 5 // TWI Bit Rate Register
#define TWBR6 6 // TWI Bit Rate Register
#define TWBR7 7 // TWI Bit Rate Register

/*
 *TWCR – TWI Control Register 
 */
#define TWCR (*(volatile unsigned char *)(0xBC)
#define TWIE  0 // TWI Interrupt Enable
#define TWEN  2 // TWI Enable Bit
#define TWWC  3 // TWI Write Collision Flag
#define TWSTO 4 // TWI STOP Condition Bit
#define TWSTA 5 // TWI START Condition Bit
#define TWEA  6 // TWI Enable Acknowledge Bit
#define TWINT 7 // TWI Interrupt Flag

/*
 *TWSR – TWI Status Register 
 */
#define TWSR (*(volatile unsigned char *)0xB9)
#define TWPS0 0 // TWI Prescaler Bits
#define TWPS1 1 // TWI Prescaler Bits
#define TWS3  3 // TWI Status
#define TWS4  4 // TWI Status
#define TWS5  5 // TWI Status
#define TWS6  6 // TWI Status
#define TWS7  7 // TWI Status

/*
 * TWDR – TWI Data Register 
 */
#define TWDR (*(volatile unsigned char *)0xBB)
#define TWD0  0 // TWI Data Register
#define TWD1  1 // TWI Data Register
#define TWD2  2 // TWI Data Register
#define TWD3  3 // TWI Data Register
#define TWD4  4 // TWI Data Register
#define TWD5  5 // TWI Data Register
#define TWD6  6 // TWI Data Register
#define TWD7  7 // TWI Data Register

/* 
 *TWAR – TWI (Slave) Address Register
 */
#define TWAR (*(volatile unsigned char *)0xBA)
#define TWGCE 0 // TWI (Slave) Address Register
#define TWA0  1 // TWI (Slave) Address Register
#define TWA1  2 // TWI (Slave) Address Register
#define TWA2  3 // TWI (Slave) Address Register
#define TWA3  4 // TWI (Slave) Address Register
#define TWA4  5 // TWI (Slave) Address Register
#define TWA5  6 // TWI (Slave) Address Register
#define TWA6  7 // TWI (Slave) Address Register

/* 
 *TWAMR – TWI (Slave) Address Mask Register
 */
#define TWAMR (*(volatile unsigned char *)0xBD)
#define TWAM0 0 // TWI Address Mask
#define TWAM1 1 // TWI Address Mask
#define TWAM2 2 // TWI Address Mask
#define TWAM3 3 // TWI Address Mask
#define TWAM4 4 // TWI Address Mask
#define TWAM5 5 // TWI Address Mask
#define TWAM6 6 // TWI Address Mask


#endif
