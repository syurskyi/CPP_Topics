# Global compiler and linker flags
CXXFLAGS := --std=c++11 -g
LDFLAGS :=

#Directory for your header (hpp) files
DEPS_DIR := includes
#Get a list of all the hpp files in deps_dir (./include)
DEPS := $(wildcard ${DEPS_DIR}/*.hpp)
$(info $$DEPS is [${DEPS}])

#Directory for your source (cpp) files
SRC_DIR := src
#Get a list of all the cpp files in src_dir (./src)
SRC := $(wildcard ${SRC_DIR}/*.cpp)
$(info $$SRC is [${SRC}])

#Directory for the compiled object (.o) files
BUILD_DIR := build
# Convert the list of sources (src/example.cpp src/whatever.cpp) into a list of object files using pattern substitution)
# '%' will match and store, so this will take (src/example.cpp), % will store "example", and insert it into (build/%.o)
# as (build/example.o)
DEMO_OBJS := $(patsubst ${SRC_DIR}/%.cpp, ${BUILD_DIR}/%.o, ${SRC})
$(info $$DEMO_OBJS is [${DEMO_OBJS}])

# Since our includes are in a different directory, we need to tell the compiler to use
CXXFLAGS += -I$(DEPS_DIR)
# different includes directory
$(info $$CXXFLAGS is [${CXXFLAGS}])

all: directories demo.out

directories:
	mkdir -p	${BUILD_DIR}
# 007_This will make the build directory if it doesn't exist yet

demo.out: $(DEMO_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
# $@ = target name (demo.out, in this case)
# $^ = dependency list (build/demo.o build/insertionSort.o ...)
# 007_This target makes $@ by linking $^ together

${BUILD_DIR}/%.o: ${SRC_DIR}/%.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -o $@ -c $<
# $< = first dep in dependency list (only src/demo.cpp, for example)
# % does the same thing as patsubst. In short, this means you can make example.o using example.cpp.

clean:
	rm -rf demo.out demo.out.dSYM build
