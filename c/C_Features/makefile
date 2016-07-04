TARGET=prog
CC= gcc
CFLAGS= -g -Wall -std=c11 -pthread
BUILDDIR=build


.PHONY: clean default 

default: $(TARGET)
	mkdir build
SOURCES := $(shell find src -name '*.c')
OBJECTS= $(SOURCES:%.c=%.o)
HEADERS= $(wildcard src/**/*.h)


%.o: %.c $(OBJECTS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $@


clean:
	find ./src -regex ".*\.o" -exec rm {} \;
	-rm -f $(TARGET)
