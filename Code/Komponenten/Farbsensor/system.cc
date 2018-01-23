// [automatic generated by intermodule checker (imc) -- do not change ]
// 2018/01/22 19:18:49

#include "PearlIncludes.h" 



namespace pearlrt {
   int createSystemElements();
}

// enshure that the static (parametrized) objects are instanciated first
static int dummy = pearlrt::createSystemElements();

pearlrt::Device * d_stdout;	// farbsensor2.prl:3
pearlrt::Device * d_farbsensor;	// farbsensor2.prl:5



namespace pearlrt {
   int createSystemElements() {

	// farbsensor2.prl:3
	static pearlrt::StdOut s_stdout;
	d_stdout = &s_stdout;

	// farbsensor2.prl:4
	static pearlrt::I2CBus s_i2cbus((char*)"/dev/i2c-1");

	// farbsensor2.prl:5
	static pearlrt::TCS34725 s_farbsensor(& s_i2cbus, 0x29);
	d_farbsensor = &s_farbsensor;

   return 0;
   }
}