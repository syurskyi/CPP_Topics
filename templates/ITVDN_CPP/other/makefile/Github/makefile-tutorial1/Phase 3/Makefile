CC=g++
CFLAGS=-I.
DEPS = Person.h

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o Person.o 
	$(CC) -o main main.o Person.o