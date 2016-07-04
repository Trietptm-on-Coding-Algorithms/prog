#include <stdio.h>
#include <stdbool.h>

int LOG_LEVEL = 1;

void log_message(char* message, bool printMessage, int logLevel) {
	if (printMessage == false) {
		return;
	}	

	if (logLevel >= LOG_LEVEL) {
		printf("%s\n", message);
	}
}
