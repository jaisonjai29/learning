CC=gcc
FLAGS=-c -Wall -I
CLEANC=rm -rf *.o *.exe
DEPS=add.h
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
res: main.o add_fun.o 
	$(CC) -o res main.o add_fun.o
clean:
	$(CLEANC)
# Define a pattern rule that compiles every .c file into a .o file
#%.o : %.c
#	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

#-Wall enables all warnings
#-L is the path to the directories containing the libraries. A search path for libraries.
#-L$(HOME)/libs -labc
#-l is the name of the library you want to link to.
#LDFLAGS+=-L$(HOME)/libs -labc
#-c compile only do not link
#$@ executable name
#$< starting from .o files