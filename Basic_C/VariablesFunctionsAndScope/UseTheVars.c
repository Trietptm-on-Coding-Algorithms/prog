#include <stdio.h>

int main( int argc, char* argv[] ) {

	//C is a low level language
	int int1 = 57;
	//variables are staticly typed.

	//Variables have a set size
	printf( "%d\n", sizeof(int1) );
	

	//Arrays are limited in size. They cannot be dynamically allocated with simple methods
	int arr[] = {1,2,3,4,5,6,7};
	// causes an error arr[8];	
	int *newarr;
	newarr = malloc( sizeof(int)*8 ); //allocate new array of correct size
	*(newarr+7) = 51;
	for( int1 = 0; int1 < 8; int1++ ) {
		if ( int1 < 7 )
			*(newarr+int1) = arr[int1];
		printf( "%d\n", *(newarr+int1) );
	}

	free(newarr); //release memory

	//strings do not exist
		//they are arrays of characters
}
