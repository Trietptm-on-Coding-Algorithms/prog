
#include <sstream>
#include <iostream>
using namespace std;

void chorus( int n );
string beer( int n );
void take();

int main() {
	for( int i = 99; i >= 90; i-- )
		chorus( i );

}

void chorus( int n ) {
	cout << beer(n) << " on the wall, ";
	cout << beer(n) << endl;
	take();
	cout << beer( n-1 ) << " on the wall,"  << endl;
	
}

string beer( int n ) {
	string num;
	ostringstream t;
	t << n;
	return  t.str() + " bottles of beer";
}

void take() {
	cout << "Take one down and pass it around, ";
}
