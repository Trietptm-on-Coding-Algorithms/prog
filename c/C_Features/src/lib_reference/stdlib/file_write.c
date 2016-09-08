
#include <stdio.h>
#include <stdlib.h>

void basic_open_and_close_file();

void file_write_demonstration() {

	basic_open_and_close_file();

	//C creates pointers to files that are essentially streams
	//C cannot modify a text file. It can only copy a file and modify it	
	FILE* target;

	target = fopen( "test_file.txt", "w" );
		
	//setup the memory and calulation for spot in file to write failure to
	//write first half of file
	fputs( "Data in the file\n", target );

	//release resources back to the system
	fclose( target );

	system("rm failure.txt");
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
