
#include <stdio.h>

void basic_open_and_close_file();

void file_write_demonstration() {

	basic_open_and_close_file();

	//C creates pointers to files that are essentially streams
	//C cannot modify a text file. It can only copy a file and modify it	
	FILE* target;

	target = fopen( "failure.txt", "w" );
		
	//setup the memory and calulation for spot in file to write failure to
	//char TEMP[8];
	//int delta_bytes = sizeof( "SUCCESS")*56;
	//int success_bytes = sizeof( "SUCCESS\n" );

	//write first half of file
	/*
	do {
		//fgets( TEMP, success_bytes, f );
		fputs( TEMP,  target );
	} while ( ftell(f) < delta_bytes ); 
*/
	//write the changed line
//	fgets( TEMP, success_bytes, f );
	fputs( "FAILURE\n", target );
/*
	//write the second half of file
	do {
		//fgets( TEMP, success_bytes, f );
		fputs( TEMP, target );
	} while ( ftell(f) >= ftell( target )  );
*/
	//release resources back to the system
	//fclose( f );
	fclose( target );
}	

void basic_open_and_close_file() {
	
	//FILE is an opaque struct that has fields used by
	//file methods to interact with the OS
	FILE* filePointer;
	filePointer = fopen( "success.txt", "r" );

	//error handling in C
	if ( filePointer == NULL ) {
		return;
	}

	fclose(filePointer );
}
/*

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

#include <stdio.h>

int main( int argc, char* argv[] )
{
	FILE *f;
	f = fopen( "success.txt", "w" );
	
	int i;
	for( i = 0; i < 100; i++ )
		fputs( "SUCCESS\n", f ); 
}
*/
