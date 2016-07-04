
#ifndef LOG_H
#define LOG_H

#define LOG_TRACE 1
#define LOG_INFO 2
#define LOG_ERROR 3

#include <stdbool.h>


void log_message(char* message, bool printMessage, int logLevel);
void log_message(char message[], bool printMessage, int logLevel);

#endif
