
#include <stdio.h>

int main( int argc, char* argv[] )
{
	FILE* f;
	f = fopen( "randomcsv.csv", "r" );
	long long int total = 0;
	int count = 0;
	int TEMP = 0;
	int empty = 0;
	
	while ( !feof( f ) ) {
		fscanf( f, "%d\t%d\n", &empty, &TEMP );
		total += TEMP;
		count += 1;
	}
	printf( "Average is %lld\n", total/count );
	
	
}
