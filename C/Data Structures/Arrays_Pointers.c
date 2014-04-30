
#include <stdio.h>

void funcTest();

int main( int argc, char* argv[] )
{
	//arrays are essentially pointers
	int intlis[] = {1,2,3,4,5,6};
	int* intpnt = intlis;
	intpnt += 5;
	printf( "%d\n", *intpnt );

	void (*test)() = &funcTest;
	(*test)();
}

void funcTest()
{
	printf( "Function Pointers work\n" );
}
