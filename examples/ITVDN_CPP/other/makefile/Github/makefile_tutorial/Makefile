cc=g++
output: main.o message.o
	$(cc) main.o message.o -o output
	
main.o: main.cpp
	$(cc) -c main.cpp
	
message.o: message.cpp
	$(cc) -c message.cpp
	
clean:
	rm *.o output
