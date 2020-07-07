# to create a variable that holds the compiler name:
CC=g++
BINDIR=build
# creating var to pass options to compiler:
CFLAGS=-c -Wall

all: $(BINDIR)/mammal

$(BINDIR)/mammal: $(BINDIR)/main.o $(BINDIR)/mammal.o $(BINDIR)/cat.o
	$(CC) $(BINDIR)/main.o $(BINDIR)/mammal.o $(BINDIR)/cat.o -o $(BINDIR)/mammal

$(BINDIR)/main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(BINDIR)/main.o

$(BINDIR)/mammal.o: mammal.cpp
	$(CC) $(CFLAGS) mammal.cpp -o $(BINDIR)/mammal.o

$(BINDIR)/cat.o: cat.cpp
	$(CC) $(CFLAGS) cat.cpp -o $(BINDIR)/cat.o

clean:
	del -rf $(BINDIR)/*o $(BINDIR)/mammal
