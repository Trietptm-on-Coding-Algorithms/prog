
#include <iostream>

#include "udf.cc"


double exponentialLessThan2Pow(double val);

double twoPow(int pow);


class Animal {
	
};

int main(int argc, char* argv[]) {
	
	std::cout << "Starting... " << std::endl;

	for(int i = 0; i < argc; i++) {
		std::cout << argv[i] << std::endl;
	}

	std::cout << exponentialLessThan2Pow(4) << std::endl;
	std::cout << twoPow(4) << std::endl;

	std::cout << udf::enums::FAVORITE_COLOR << std::endl;
		



}


double twoPow(int pow) {
	double returnVal = 1;
	for(int i  = 0; i < pow; i++) {
		returnVal *= 2;
	}
	return returnVal;
}

double exponentialLessThan2Pow( const double val) {
	const int max = twoPow( val );

	double newVal = 1;
	while(newVal <= max) {
		newVal *= val;
	}


	return newVal;
}


//Declarator Operator
void showDeclaratorOperator() {
	int a[5]; //[] represent an array of Type
	int* b; //* represents a pointer
	//int& c = a+1; //reference to int
	int d(int); //reference to function that takes int returns an int

	b = a+2;
	std::cout << b << std::endl;
}

bool accept2() {
	std::cout << "Do you want to proceed(y/n)?" << std::endl;

	char answer = 0;

	std::cin >> answer;

	switch(answer) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout << "Thats a no\n";
			return false;
	}
}
