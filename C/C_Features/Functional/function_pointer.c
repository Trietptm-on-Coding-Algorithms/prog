#include <stdio.h>

//test function
int Printer(char word[]);

int main() {
	
	//test data
	char the_word[] = "Wooooords\n\0";
	//initialize function pointer
	int (*f)(char[]);
	//asignment
	f = &Printer;
	//usage
	(*f)(the_word);

	return 0;
}


int Printer(char word[]) {
	printf("%s", word);
	return 5;
}
