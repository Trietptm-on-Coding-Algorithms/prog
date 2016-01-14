
#include <iostream>

#define symboliccons 124


template <typename T, size_t N> inline size_t SizeOfArray( const T(&)[ N ] );

namespace cpp_demo {

	void array_demo() {
	
		//Arrays in C++ behave essentially the same as C

		int arr[] = {1,2,3,4,5};

		std::cout << std::endl << SizeOfArray( arr ) << std::endl;
	}

	void data_types_demo() {

	
		//basic data types
		unsigned short int usi = 65535;
		short int si = 32767; //-32768
		unsigned long int uli = 4294967295;
		long int li = 2147483648; // - of number -1
		char c = 'a';
		bool b = true;
		float f = 1.2e-38; //to 3.4e38
		

		int a, ab, abc;
		
		//symbolic
		a = symboliccons;
		std::cout << a << std::endl;

		b = usi >= si;
		b = si == si;
		b = si != usi;
		b = true;
		
		if ( b || b ) 
			std::cout << "Conditional\n";
		
		if ( !b && b )
			std::cout << "Cond\n";
		else
			std::cout << "Else\n";

	}

}
template <typename T, size_t N> inline size_t SizeOfArray( const T(&)[ N ] )
{
	return N;
}
