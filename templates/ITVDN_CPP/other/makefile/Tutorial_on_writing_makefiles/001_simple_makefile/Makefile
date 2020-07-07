# Link command:
my_program: main.o hello.o name.o
	c++ build/main.o build/hello.o build/name.o -o build/my_program

# Compilation commands:
main.o: main.cpp
	c++ -c main.cpp -o build/main.o

hello.o: hello.cpp
	c++ -c hello.cpp -o build/hello.o

name.o: name.cpp
	c++ -c name.cpp -o build/name.o
