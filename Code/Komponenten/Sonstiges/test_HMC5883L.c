// Distributed with a free-will license.
// Use it any way you want, profit or free, provided it fits in the licenses of its associated works.
// TCS34725
// This code is designed to work with the TCS34725_I2CS I2C Mini Module available from ControlEverything.com.
// https://www.controleverything.com/products

#include <stdio.h>
#include <stdlib.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>

void main() 
{
	// Create I2C bus
	int file;
	char *bus = "/dev/i2c-1";
	if ((file = open(bus, O_RDWR)) < 0) 
	{
		printf("Failed to open the bus. \n");
		exit(1);
	}
	// Get I2C device, HMC5883L I2C address is 0x1E(30)
	ioctl(file, I2C_SLAVE, 0x1E);

	/* Set default configuration */
	char config[2] = {0};
	config[0] = 0x00;
	config[1] = 0x70;
	write(file, config, 2);

    /* Set the gain to a known level */
	config[0] = 0x01;
	config[1] = 0x20;
	write(file, config, 2);

    /* Enable the magnetometer */
	config[0] = 0x02;
	config[1] = 0x00;
	write(file, config, 2);

	sleep(1);
	
	while(1){
		char reg[1] = {0x03};
		write(file, reg, 1);
		
		int32_t data = 0;
		read(file, data, 1);
	
		printf("1 : %d \n", data[0]);
		printf("2 : %d \n", data[1]);
		printf("3 : %d \n", data[2]);
		printf("4 : %d \n", data[3]);
		printf("5 : %d \n", data[4]);
		printf("6 : %d \n", data[5]);
		sleep(1);
	}
}