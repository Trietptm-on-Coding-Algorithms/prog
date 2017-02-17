
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

	
		//basic data types are included from C
		//
		//Bool is included by default
		bool b = true;

	}

}
template <typename T, size_t N> inline size_t SizeOfArray( const T(&)[ N ] )
{
	return N;
}
