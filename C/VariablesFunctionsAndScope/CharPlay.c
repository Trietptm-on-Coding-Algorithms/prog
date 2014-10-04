
#include <stdio.h>
#include <string.h>

int main( int argc, char* argv[] )
{
	//Chars are represented by ints
	char char1 = 'c';
	signed char schar = 's';
	unsigned char uchar = 'u';

	char chararr[] = "Array of characters is a string";
	char* charpnt = chararr;

	int i;
	printf( "Iterate with for loop:\n" );
	for( i = 0; i <= sizeof(chararr); i++ ) {
		printf( "%c%c", chararr[i], charpnt++);
	}

	printf( "\nChar c +1: %c\n", char1+1 );
	return 0;
}
