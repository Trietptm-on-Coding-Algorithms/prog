#include <stdio.h>
#include <stdlib.h>

#define rows 100

int main( int argc, char* argv[] )
{

	//create variables to use
	//random
	int i;
	FILE* f = fopen( "randomcsv.csv", "w" );

	for( i = 0; i < rows; i++ )
		fprintf( f, "%d\t%d\n", i, rand() );
	
	fclose( f );	

}	
