#include <iostream>


int addThree( int int1 = 1, int int2 = 2, int int3 = 3 ) {
	//all paramters are local variables
		//strict pass by value unless you are passing address
	return int1+int2+int3;
}

double addThree( double long1 = 1.1, double long2 = 2.2, double long3 = 3.3) {
	return long1 + long2 + long3;
}

namespace controlflow {

	void demo() {
		std::cout << "This is the control flow" << std::endl;
	}

}
