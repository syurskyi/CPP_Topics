all: hello.exe

# $@ matches the target; $< matches the first dependent
hello.exe: hello.o
	g++ -o $@ $<

hello.o: hello.cpp
	g++ -c $<

clean:
	del hello.o hello.exe