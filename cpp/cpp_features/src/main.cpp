#include <iostream>
#include <string>


#include "data_types.hpp"
#include "control_flow.hpp"
#include "userInteraction.hpp"

void runDemo(bool val, std::string name, void(&f)());

//main with cmd args
//int main(int argc, char* argv[]) {
int main() {



	runDemo(controlflow::run, "Control Flow", controlflow::demo);
	runDemo(userInteraction::run, "User interaction", userInteraction::demo);



	return 0;
}


void runDemo(bool val, std::string name, void (&f)()) {

	if (val) {
		std::cout << "\n\n\n\n\n" << name << " is starting" << "\n\n\n\n\n" << std::endl;
		f();
	} else {
		std::cout << name << " is skipped." << std::endl;
	}
}
