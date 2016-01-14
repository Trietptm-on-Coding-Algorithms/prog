IDIR=../include
CC=gcc
CFLAGS=-I.$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=-lm

_DEPS=hellomake.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -p $@ $< $(CFLAGS)

# create a rule that a *.o file depends on the corresponding %.c file
	# -o $@ the name of the object file depends on the leftside of :
	# $< is the first item in the dependency list
	# $^ the right side of the :

# compile hellomake with two object files using specific compiler
hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR_/*~

