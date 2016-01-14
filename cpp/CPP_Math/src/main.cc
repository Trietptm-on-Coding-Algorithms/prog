
#include <iostream>
#include "./dbee.h"
#include <list>
#include <string>

int main(int argc, char* argv[]) {

	std::cout << "Starting..."  << std::endl;

	dbee::data_and_config_loader dc(argc, argv);

	std::list< std::string > dataz = dc.getList();

	for( std::list< std::string >::iterator it = dataz.begin(); it != dataz.end(); it++) {

		std::string d = *it;

		std::cout << d << std::endl;

	}






	return 0;
}
