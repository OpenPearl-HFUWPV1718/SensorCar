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
	// Get I2C device, GY521 I2C address is 0x68(104)
	ioctl(file, I2C_SLAVE, 0x68);

	// Select enable register(0x80)
	// Power ON, RGBC enable, wait time disable(0x03)
	char config[2] = {0};
	config[0] = 0x6B;
	config[1] = 0x00;
	write(file, config, 2);
	
	sleep(1);

	// 0x43   
	// 0x45   
	// 0x47
	while(1){
		int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
		
		char data[14] = {0};
		
		char reg[1] = {0x3B};
		write(file, reg, 1);
		read(file, data, 14);
		
		AcX=data[0]<<8|data[1];  // 0x3B (ACCEL_XOUT_H) & 0x3C (ACCEL_XOUT_L)
		AcY=data[2]<<8|data[3];  // 0x3D (ACCEL_YOUT_H) & 0x3E (ACCEL_YOUT_L)
		AcZ=data[4]<<8|data[5];  // 0x3F (ACCEL_ZOUT_H) & 0x40 (ACCEL_ZOUT_L)
		Tmp=data[6]<<8|data[7];  // 0x41 (TEMP_OUT_H) & 0x42 (TEMP_OUT_L)
		GyX=data[8]<<8|data[9];  // 0x43 (GYRO_XOUT_H) & 0x44 (GYRO_XOUT_L)
		GyY=data[10]<<8|data[11];  // 0x45 (GYRO_YOUT_H) & 0x46 (GYRO_YOUT_L)
		GyZ=data[12]<<8|data[13];  // 0x47 (GYRO_ZOUT_H) & 0x48 (GYRO_ZOUT_L)
		

		printf("ACx=%d\tACy=%d\tACz=%d\tTmp=%d\tGYx=%d\tGYy=%d\tGYz=%d\n", AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ);
		sleep(1);
	}
}
