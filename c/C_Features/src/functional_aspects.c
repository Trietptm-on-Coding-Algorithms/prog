
#ifndef functional_aspects_c
#define functional_aspects_c


int funcTest();



void functionalDemonstration() {

	int (*test)() = &funcTest;
	(*test)();
}

int funcTest()
{
	return 1;
}

#endif
