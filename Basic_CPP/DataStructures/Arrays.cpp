
#include <iostream>
using namespace std;

template <typename T, size_t N> inline size_t SizeOfArray( const T(&)[ N ] );

int main() {
	//Arrays in C++ behave essentially the same as C

	int arr[] = {1,2,3,4,5};

	cout << endl << SizeOfArray( arr ) << endl;
}


template <typename T, size_t N> inline size_t SizeOfArray( const T(&)[ N ] )
{
	return N;
}
