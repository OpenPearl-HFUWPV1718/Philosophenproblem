// [automatic generated by intermodule checker (imc) -- do not change ]
// 2017/10/18 18:42:11

#include "PearlIncludes.h" 



namespace pearlrt {
   int createSystemElements();
}

// enshure that the static (parametrized) objects are instanciated first
static int dummy = pearlrt::createSystemElements();

pearlrt::Device * d_stdout;	// philosophers.prl:4



namespace pearlrt {
   int createSystemElements() {

	// philosophers.prl:4
	static pearlrt::StdOut s_stdout;
	d_stdout = &s_stdout;

   return 0;
   }
}
