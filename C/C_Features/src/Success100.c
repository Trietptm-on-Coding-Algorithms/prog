
#include <stdio.h>

int main( int argc, char* argv[] )
{
	FILE *f;
	f = fopen( "success.txt", "w" );
	
	int i;
	for( i = 0; i < 100; i++ )
		fputs( "SUCCESS\n", f ); 
}
