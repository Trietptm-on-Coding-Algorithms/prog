

#include <stdbool.h>
#include "log.h"

static bool print = true;

void switchDemo();
void control_flow_demonstration() {
	

}

void iterative_structure_demonstration() {

}

void conditional_structure_demonstration() {

}


void switchDemo() {

	char testVal = 'a';

	switch (testVal) {
		case 'a':
		case 'A':
			log_message("\"A\" found.", print, LOG_TRACE);
			break;
		case 'b':
			log_message("\"b\" found.", print, LOG_TRACE);
			break;
		case 'B':
			log_message("\"B\" found.", print, LOG_TRACE);
			break;
		default:
			log_message("No matching letter found", print, LOG_TRACE);
	}



}


