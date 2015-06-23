
#include <iostream>

//symbolic constant
#define symboliccons 124

int main()
{
	
	using namespace std;

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
	cout << a << endl;

	b = usi >= si;
	b = si == si;
	b = si != usi;
	b = true;
	
	if ( b || b ) 
		cout << "Conditional\n";
	
	if ( !b && b )
		cout << "Cond\n";
	else
		cout << "Else\n";

}
