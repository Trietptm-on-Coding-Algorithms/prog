#include <stdio.h>

#include <stdbool.h>
#include <string.h>



#include "lib_reference/stdlib/file_write.h"

#include "data_types.h"


bool verboseCheck();

int main(int argc, char* argv[]) {

	for(int i = 0; i < argc; i++) {
		printf("%d::%s\n", i, argv[i]);
	}


	bool v = verboseCheck();

	if (v) {
		printf("Starting demo");
	}
	data_type_demonstration();

	file_write_demonstration();





}


bool verboseCheck() {
	char phrase[255] = "";
	printf("Would you like all data printed? (y/n) \n");
	scanf("%s", phrase);
	while( strcmp(phrase, "y") != 0 && strcmp(phrase, "n") != 0) {
		printf("Did not understand....");
		scanf("%s", phrase);	
	}

	if (strcmp(phrase, "y") == 0) {
		return true;
	} else {
		return false;
	}
}
