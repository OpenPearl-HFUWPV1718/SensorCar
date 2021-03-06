// [automatic generated by intermodule checker (imc) -- do not change ]
// 2018/01/16 16:02:01

#include "PearlIncludes.h" 



namespace pearlrt {
   int createSystemElements();
}

// enshure that the static (parametrized) objects are instanciated first
static int dummy = pearlrt::createSystemElements();

pearlrt::Device * d_leftstepmotor_out;	// stepmotor_module.prl:5
pearlrt::Device * d_rightstepmotor_out;	// stepmotor_module.prl:6



namespace pearlrt {
   int createSystemElements() {

	// stepmotor_module.prl:5
	static pearlrt::RPiDigitalOut s_leftstepmotor_out(19, 4);
	d_leftstepmotor_out = &s_leftstepmotor_out;

	// stepmotor_module.prl:6
	static pearlrt::RPiDigitalOut s_rightstepmotor_out(23, 4);
	d_rightstepmotor_out = &s_rightstepmotor_out;

   return 0;
   }
}
