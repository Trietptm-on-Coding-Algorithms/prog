#include <stdio.h>
#include <stdlib.h>

#define ROWS 100

int main( int argc, char* argv[] )
{

	//create variables to use
	//random
	int i;
	FILE* f = fopen( "randomcsv.csv", "w" );

	for( i = 0; i < ROWS; i++ )
		fprintf( f, "%d\t%d\n", i, rand() );
	
	fclose( f );	

	return 0;

}	