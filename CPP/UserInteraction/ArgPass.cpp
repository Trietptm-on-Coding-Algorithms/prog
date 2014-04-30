
#include <iostream>

int main( int argc, char* argv[] ) {
	using namespace std;
	
	for( int i = 1; i < argc; i++ ) 
		cout << argv[i] << endl;
}
