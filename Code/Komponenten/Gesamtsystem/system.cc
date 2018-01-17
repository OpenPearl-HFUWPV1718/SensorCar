// [automatic generated by intermodule checker (imc) -- do not change ]
// 2018/01/17 16:43:10

#include "PearlIncludes.h" 



namespace pearlrt {
   int createSystemElements();
}

// enshure that the static (parametrized) objects are instanciated first
static int dummy = pearlrt::createSystemElements();

pearlrt::Device * d_stdout;	// systemtest.prl:5
pearlrt::Device * d_lichtrechen;	// systemtest.prl:6
pearlrt::Device * d_leftstepmotor_out;	// systemtest.prl:7
pearlrt::Device * d_rightstepmotor_out;	// systemtest.prl:8
pearlrt::Device * d_httpSocket;	// systemtest.prl:9



namespace pearlrt {
   int createSystemElements() {

	// systemtest.prl:5
	static pearlrt::StdOut s_stdout;
	d_stdout = &s_stdout;

	// systemtest.prl:6
	static pearlrt::RPiDigitalIn s_lichtrechen(13, 8, (char*)"u");
	d_lichtrechen = &s_lichtrechen;

	// systemtest.prl:7
	static pearlrt::RPiDigitalOut s_leftstepmotor_out(19, 4);
	d_leftstepmotor_out = &s_leftstepmotor_out;

	// systemtest.prl:8
	static pearlrt::RPiDigitalOut s_rightstepmotor_out(23, 4);
	d_rightstepmotor_out = &s_rightstepmotor_out;

	// systemtest.prl:9
	static pearlrt::TcpIpServer s_httpSocket(80);
	d_httpSocket = &s_httpSocket;

   return 0;
   }
}
