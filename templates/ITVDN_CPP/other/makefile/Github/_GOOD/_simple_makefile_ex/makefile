# following the tutorial for creating a simple make file:
# http://mrbook.org/tutorials/make/
#
# to create a variable that holds the compiler name:
CC=g++
BINDIR=bin
# creating var to pass options to compiler:
CFLAGS=-c -Wall

all: $(BINDIR)/hello

$(BINDIR)/hello: $(BINDIR)/main.o $(BINDIR)/factorial.o $(BINDIR)/hello.o	
	$(CC) $(BINDIR)/main.o $(BINDIR)/hello.o $(BINDIR)/factorial.o -o $(BINDIR)/hello

$(BINDIR)/main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(BINDIR)/main.o

$(BINDIR)/factorial.o: factorial.cpp
	$(CC) $(CFLAGS) factorial.cpp -o $(BINDIR)/factorial.o

$(BINDIR)/hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp -o $(BINDIR)/hello.o

clean:
	rm -rf $(BINDIR)/*o $(BINDIR)/hello


# here is a more complicated make file example:
# CC=g++
# CFLAGS=-c -Wall
# LDFLAGS=
# SOURCES=main.cpp hello.cpp factorial.cpp
# OBJECTS=$(SOURCES:.cpp=.o)
# EXECUTABLE=hello

# all: $(SOURCES) $(EXECUTABLE)
	
# $(EXECUTABLE): $(OBJECTS) 
# 	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

# .cpp.o:
# 	$(CC) $(CFLAGS) $< -o $@

# this would be the simplest version of makefile for this project:
# all:
# 	g++ main.cpp hello.cpp factorial.cpp -o hello