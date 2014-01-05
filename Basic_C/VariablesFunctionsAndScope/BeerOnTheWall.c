
#include <stdio.h>

void Chorus( char* line, int number );
int main( int argc, char* argv[] )
{

	//No try catch in C. Only if

	char* firstline = " Bottles of Beer on the wall,";
	
	int int1 = 99;

	while( int1 > 90 )
		Chorus( firstline, int1-- );
	return 0;
}

void Chorus( char* line, int number)
{
	char* secondline = "Take one down pass it around,";
	//This variable is not in scope
	//printf( "%s", firstline);
	printf( "%d%s\n%d%s\n%s\n%d%s\n\n", number, line, number, " Bottles of Beer", secondline, number-1, line );
	//number--; the value was passed by value, so this does nothing in this scope.

}
