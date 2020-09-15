cc   = avr-gcc
chip = atmega328p

drivers_dir	= ./drivers/
include_dir	= ./include/
obj_dir		= ./obj/

objects = $(obj_dir)gpio.o $(obj_dir)i2c.o $(obj_dir)spi.o $(obj_dir)uart.o 

edit:
	$(cc) -Wall -mmcu=$(chip) -I $(include_dir) $(drivers_dir)uart.c ./main.c 
