
#ifndef functional_aspects_c
#define functional_aspects_c

#include <stdio.h>

int funcTest();



void functionalDemonstration() {

	int (*test)() = &funcTest;
	int a = (*test)();

	printf("Result from function call=%d", a);
}

int funcTest()
{
	return 1;
}

#endif
