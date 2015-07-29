#include <iostream>


#include "data_types.hpp"


int main(int argc, char* argv[]) {
	std::cout << "Hello....." << std::endl;

	for(int i = 0; i < argc; i++) {
		std::cout << argv[i]  << std::endl;
	}

	std::string in;
	std::cout << "Are you ready?" << std::endl;
	std::cin >> in;


	cpp_demo::array_demo();

	return 0;
}
