
/*
	This program studies variables of all types as well as
		operators
		constants
		blocks
		relational operators
		boolean values
		conditional statements

*/
#include <iostream>

#define SYMBOLIC_NUMBER 439

int addThree( int int1 = 1, int int2 = 2, int int3 = 3 ) {
	//all paramters are local variables
		//strict pass by value unless you are passing address
	return int1+int2+in3;
}

double addThree( long long1 = 1.1, long long2 = 2.2, long long3 = 3.3) {
	return long1 + long2 + long3;
}

int main() {
		
	char char1, char2; //1byte
		//line demonstrates creating multiple variables
	short int sint; //2 bytes
	int int1; //4 bytes
	long int lint; //4 bytes
	bool bool1; //1 byte
	float float1; //4 bytes
	double double1; //8 bytes
	long double ldouble; //8 bytes
	wchar_t widechar;//2 bytes

	int1 = sizeof(char); //size of character in bytes
	typedef int feet; //feet is another name for int
	
	//constants - block of statements used to study constants
	{
	sint = 29;
		//29 is a literal constant
	int1 = SYMBOLIC_NUMBER;
	const int constant = 23;
	}

	//operators + - / * %
	// += -= *= /= %=
	// ++ --

	//relational
	// == <= >= < > !=

	//resolves to true or false
	
	if ( true )
		cout << int1 << endl;
	else {
		//this will never happen
		;
	}
	
	if ( true && false || true && ( !false) )
		cout << "true" << endl;

}
