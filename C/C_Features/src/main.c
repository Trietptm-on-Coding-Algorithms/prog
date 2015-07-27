#include <stdio.h>

#include <string.h>



#include "file_write.h"

#include "data_types.h"


void rdyCheck();

int main(int argc, char* argv[]) {
	int arg_count = argc;

	for(int i = 0; i < argc; i++) {
		printf("%d::%s\n", i, argv[i]);
	}

	rdyCheck(arg_count);

	data_type_demonstration();

	file_write_demonstration();





}


void rdyCheck(int arg_value) {
	if (arg_value != 0) {
		return;
	}
	char phrase[255] = "";
	printf("rdy for next? (y/n) \n");
	scanf("%s", phrase);
	while( strcmp(phrase, "y") != 0 ) {
		printf("Did not understand....");
		scanf("%s", phrase);	
	}
}
