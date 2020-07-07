#Start of the makefile

VPATH = ./src:./header:./objects

OUTPUT_OPTION = -o objects/$@

CXXFLAGS += -Wall -g -I./header

Target = $(notdir $(CURDIR)).exe

Objects := $(notdir $(patsubst %.cpp,%.o,$(wildcard src/*.cpp)))



all: $(Target)

$(Target): $(Objects)
	$(CXX) $(CXXFLAGS) -o $(Target) $(addprefix objects/,$(Objects))


#Beware of -f. It skips any confirmation/errors (e.g. file does not exist)

