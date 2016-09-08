
#include <stdio.h>
#include "log.h"

static bool print = true;

//Data setup. Arrays and pointers are very similar.
//Arrays are a block of data. Pointers allow you to walk through the
//block of data. A type of array similar to ages below is essentially
//an int* pointing to the first element in the block.
int ages[] = { 23,54,33,66,77};
char *names[] = { "bob", "mob", "gob", "qob", "pob"};
int sizeOfArray = 5;

//describing pointers using simple language

void pointerDefinitions() {
	int val = 5;
		//A pointer of int named ptr1
	int *ptr1 = &val;
		//The value of whatever ptr is pointed at
	int a = *ptr1;

	ptr1 = ages;

		// the value of what ptr is pointed to offset by size
	a = *(ptr1+sizeof(int));

		//&a is the address of a
	ptr1 = &a;
		//increment where ptr points
	ptr1++;

}

//This only works when the compiler can determine the size at compile time
// otherwise sizeof(ages) will return the size of the pointer to the array
int sizeOfArrayForStatic = sizeof(ages) / sizeof(int);

void accessByArrayIndexing();
void accessByPointerArithmetic();
void accessByPointerIndexing();
void accessByComplex();

void pointerDemo() {
	log_message("Starting pointer demo", print, LOG_INFO);
	//The simplest way to access is through array indices
	accessByArrayIndexing();
	//The second way is to access through point arithmetic
	accessByPointerArithmetic();
	//The third way is to access through pointer indexing. Pointers are just arrays
	accessByPointerIndexing();
	//Demonstrating the flexibility of pointers
	accessByComplex();



}

void accessByArrayIndexing() {
	char buffer[255];
	for(int i = 0; i < sizeOfArray; i++) {
		sprintf(buffer, "%s is aged %d", names[i], ages[i]);
		log_message( buffer, print, LOG_TRACE);
	}
}


void accessByPointerArithmetic() {
	int* curAge = ages; // initialize pointer to start of array.
	char** curName = names;

	char buffer[255];

	for (int i = 0; i < sizeOfArray; i++) {
		sprintf(buffer, "%s is aged %d", *(curName+i), *(curAge+i));
		log_message( buffer, print, LOG_TRACE);
	}
}

void accessByPointerIndexing() {
	int* curAge = ages; // initialize pointer to start of array.
	char** curName = names;

	char buffer[255];

	for (int i = 0; i < sizeOfArray; i++) {
		sprintf(buffer, "%s is aged %d", curName[i], curAge[i]);
		log_message( buffer, print, LOG_TRACE);
	}
}

void accessByComplex() {

	int* curAge = ages; // initialize pointer to start of array.
	char** curName = names;

	char buffer[255];

	for (curName = names, curAge = ages; curAge - ages < sizeOfArray
			; curName++, curAge++) {
		sprintf(buffer, "%s is aged %d", *curName, *curAge);
		log_message( buffer, print, LOG_TRACE);
	}
}
