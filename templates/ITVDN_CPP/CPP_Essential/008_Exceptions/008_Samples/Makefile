# to create a variable that holds the compiler name:
CC=g++
BINDIR=build
# creating var to pass options to compiler:
CFLAGS=-c -Wall

all: $(BINDIR)/TestProject

$(BINDIR)/TestProject: $(BINDIR)/main.o $(BINDIR)/mammal.o $(BINDIR)/cat.o $(BINDIR)/number.o $(BINDIR)/scopedptr.o
	$(CC) $(BINDIR)/main.o $(BINDIR)/mammal.o $(BINDIR)/cat.o $(BINDIR)/number.o $(BINDIR)/scopedptr.o -o $(BINDIR)/TestProject

$(BINDIR)/main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(BINDIR)/main.o

$(BINDIR)/mammal.o: mammal.cpp
	$(CC) $(CFLAGS) mammal.cpp -o $(BINDIR)/mammal.o

$(BINDIR)/cat.o: cat.cpp
	$(CC) $(CFLAGS) cat.cpp -o $(BINDIR)/cat.o

$(BINDIR)/number.o: number.cpp
	$(CC) $(CFLAGS) number.cpp -o $(BINDIR)/number.o

$(BINDIR)/scopedptr.o: scopedptr.cpp
	$(CC) $(CFLAGS) scopedptr.cpp -o $(BINDIR)/scopedptr.o

clean:
	del -rf $(BINDIR)/*o $(BINDIR)/TestProject
