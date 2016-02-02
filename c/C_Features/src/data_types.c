
#include <stdio.h>
#include <stdlib.h>




void data_type_demonstration();

void simple_data_types();

void integer_data_type();
void real_data_type();
void char_data_type();
void pointer_data_type();

void complex_data_types();

void array_data_type();
void struct_data_type();
void enum_data_type();
void union_data_type();

void data_type_demonstration() {
	//Any data type that is supported by the compiler
	simple_data_types();

	//A data type that can be user defined
	complex_data_types();
}


void simple_data_types() {
	
	//Integral numbers differ in sign and size
	integer_data_type();
	
	//Real numbers differ in size
	real_data_type();
	
	//char is single character
	char_data_type();

}

void integer_data_type() {

	//Integers only have the standard operations defined upon them
	// + - * / modulo with percent .

	short shorty = 1;
	short int shortint = shorty + 1;
	signed short signshort = shorty + shortint + 1;
	signed short int signshortint = shorty + shortint + signshort + 1;
	unsigned short ushort = shorty + signshortint;
	unsigned short int ushortint = ushort + 5;
	int inty = 500 + ushortint;
	signed int signint = inty * 50;
	unsigned int uint = signint + 10;
	long longy = uint * 10;
	long int longyint = longy + 50;
	signed long slong = longyint;
	signed long int slongint = slong;
	unsigned long ulong = slongint;
	unsigned long int ulongint = ulong;
	long long ll = ulongint;
	long long int llint = ll * 2;
	signed long long sll = llint * -1;
	signed long long int slli = sll * 10;
	unsigned long long ull = 500000 + slli;
	unsigned long long int ulli = ull;

	ull = ulli;
	
	printf("Long: %llu", ulli);

}

void real_data_type() {
	float floaty = 3.14;
	double dbl = 2.718;
	long double ldbl = floaty * dbl;
	
	printf("Double : %1.5LF", ldbl);
}

void char_data_type() {

	//Chars are represented by ints
	//They are commonly used to represent raw bytes since they are fixed 1 byte wide
	char char1 = 'c';
	signed char schar = 's';
	unsigned char uchar = 'u';

	printf("%c%c%c", char1, schar, uchar);

	char chararr[] = "Array of characters is a string";
	char* charpnt = chararr;

	unsigned int i;
	printf( "Iterate with for loop:\n" );
	for( i = 0; i < sizeof(chararr); i++ ) {
		printf( "%c %c\n", chararr[i], *charpnt++);
	}

	printf( "\nChar c + 1 = %c\n", char1+1 );
}


void complex_data_types() {
	//Complex data types bind mulitple basic types together 
	//into a single unit
	

	//typedef defines a complex data type to instread of 
		// struct date d;
	//You can do
		// date d;
	// it should only be done to conceal implemenation details
	
	
	//An array holds a list of values
	array_data_type();

	//A struct holds multiple data entries in seperate areas
	struct_data_type();

	//A union holds different data entries in same area
	union_data_type();

	//An enum is used to represent a group of values with identifiers
	enum_data_type();
}


void array_data_type() {

	//Arrays are limited in size. They cannot be dynamically allocated with simple methods
	int arr[] = {1,2,3,4,5,6,7};
	// causes an error arr[8];	
	int *newarr;
	newarr = (int*) malloc( sizeof(int)*8 ); //allocate new array of correct size
	*(newarr+7) = 51;
	int int1;
	for( int1 = 0; int1 < 8; int1++ ) {
		if ( int1 < 7 )
			*(newarr+int1) = arr[int1];
		printf( "%d\n", *(newarr+int1) );
	}

	free(newarr); //release memory
}

void struct_data_type() {

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
}

void enum_data_type() {
	//enum should only be used in small scopes because 
	//each value polutes the global name space
	
	//blue=0, red=5, green=6
	enum color {blue, red=5, green};
	enum color c = green;
	printf("%d\n", c);
}

void union_data_type() {

	//Unions allow multiple data entries to take up same memory
	//Union behavior is undefined. Be very careful with this type. Probably better to avoid.
	union number
	{
		int i;
		float f;
	};

	float testNumber = 3.14;
	int testInt = 50000;

	union number test;
	test.i = testInt;
	printf("Union integer is %d. Assign %f after\n",testInt, testNumber);
	test.f = testNumber;
	printf("Now integer is %d with %f assigned.", test.i, test.f);

	//result is unpredictable if you assign a value to one and 
	//try to grab value from another subvariable
}
