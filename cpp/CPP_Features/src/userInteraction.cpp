
#include <iostream>

namespace userInteraction {

	void basicInputFromUser() {

		std::string in;
		std::cout << "Are you ready?" << std::endl;
		std::cin >> in;
	}
	void demo() {
		basicInputFromUser();
	}

}
