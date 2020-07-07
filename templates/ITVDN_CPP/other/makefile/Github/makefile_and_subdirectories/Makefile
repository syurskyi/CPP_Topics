#Makefile for "prog1" C++ application
#Created by Ygor Almeida 03/07/2017

PROG = prog1

BINPATH = bin/
BUILDPATH = build/
SRCPATH = src/
INC = include/

CC = g++
CPPFLAGS = -Wall -pedantic -ansi -I$(INC)
#LDFLAGS = -L/usr/lib -lmylib

OBJS = build/main.o build/calcula.o build/mostra.o

$(PROG):$(OBJS)
	$(CC) -o $(BINPATH)$(PROG) $(OBJS)
    #$(CC) $(LDFLAGS) -o $(BINPATH)$(PROG) $(OBJS)
$(BUILDPATH)main.o:
	$(CC) $(CPPFLAGS) -c $(SRCPATH)main.cpp -o $@
$(BUILDPATH)calcula.o:$(INC)calcula.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)calcula.cpp -o $@
$(BUILDPATH)mostra.o:$(INC)mostra.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)mostra.cpp -o $@
clean:
	rm -f core $(BINPATH)$(PROG) $(OBJS)
