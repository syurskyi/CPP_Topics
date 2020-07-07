myExe: main.o myProg.o
	g++ main.o myProg.o -o myExe

main.o: main.cpp
	g++ -c main.cpp

myProg.o: myProg.cpp myProg.h
	g++ -c myProg.cpp

clean:
	rm *.o myExe
