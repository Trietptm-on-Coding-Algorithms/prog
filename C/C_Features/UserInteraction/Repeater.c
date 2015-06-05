
#include <stdio.h>

int main ( int argc, char* argv[] )
{
	printf( "Please enter phrase to repeat:" );
	char phrase[255] = "";
	scanf( "%s", phrase );
	printf( "%s\n", phrase );
	return 0;
}
