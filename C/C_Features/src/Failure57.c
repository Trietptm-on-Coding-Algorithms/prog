
#include <stdio.h>

int main( int argc, char* argv[] ) {

	//C creates pointers to files that are essentially streams
	//C cannot modify a text file. It can only copy a file and modify it	
	FILE* f;
	FILE* target;
	f = fopen( "success.txt", "r" );
	//error handling in C
	if ( f = NULL )
		return 0;

	target = fopen( "failure.txt", "w" );
		
	//setup the memory and calulation for spot in file to write failure to
	char TEMP[8];
	int delta_bytes = sizeof( "SUCCESS")*56;
	int success_bytes = sizeof( "SUCCESS\n" );

	//write first half of file
	do {
		fgets( TEMP, success_bytes, f );
		fputs( TEMP,  target );
	} while ( ftell(f) < delta_bytes ); 

	//write the changed line
	fgets( TEMP, success_bytes, f );
	fputs( "FAILURE\n", target );

	//write the second half of file
	do {
		fgets( TEMP, success_bytes, f );
		fputs( TEMP, target );
	} while ( ftell(f) >= ftell( target )  );

	//release resources back to the system
	fclose( f );
	fclose( target );
}	
