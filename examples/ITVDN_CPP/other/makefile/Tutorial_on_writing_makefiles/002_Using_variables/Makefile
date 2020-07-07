# Define the symbols we might want to change:
CXX:= c++
CXXFLAGS:= -g

OBJECTS = main.o hello.o name.o
OBJECTSINBUILD:= build/main.o build/hello.o build/name.o

my_program: $(OBJECTS)
	$(CXX) $(OBJECTSINBUILD) -o build/my_program

main.o: main.cpp
	$(CXX) $(INCLUDES) $(CXXFLAGS) -c main.cpp -o build/main.o

hello.o: hello.cpp
	$(CXX) $(CXXFLAGS) -c hello.cpp -o build/hello.o

name.o: name.cpp
	$(CXX) $(CXXFLAGS) -c name.cpp -o build/name.o