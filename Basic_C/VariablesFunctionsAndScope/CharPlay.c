
#include <stdio.h>

int main( int argc, char* argv[] )
{
	char char1 = 'c';
	signed char schar = 's';
	unsigned char uchar = 'u';

	char chararr[] = "Array of characters is a string";
	char* charpnt = chararr;

	int i;
	printf( "Iterate with for loop:\n" );
	for( i = 0; i <= sizeof(chararr); i++ )
		printf( "%c", chararr[i]);

	printf( "\nChar c +1: %c\n", char1+1 );
	return 0;
}
