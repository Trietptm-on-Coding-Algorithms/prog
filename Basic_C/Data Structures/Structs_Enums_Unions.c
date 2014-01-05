
#include <stdio.h>

int main( int argc, char* argv[] )
{
	//Holds multiple data entries
	typedef struct
	{
		int year;
		int day;
		int month;
	} date;

	date d;
	d.year = 2013;
	d.day = 21;
	d.month = 9;
	printf( "%d-%d-%d\n", d.month, d.day, d.year );

	//Unions allow multiple data entries to take up same memory
	union number
	{
		int i;
		float f;
	};
	//result is unpredictable if you assign a value to one and try to grab value from another subvariable

	//blue=0, red=5, green=6
	typedef enum {blue, red=5, green} color;
	color c = green;
	printf("%d\n", c);

}
