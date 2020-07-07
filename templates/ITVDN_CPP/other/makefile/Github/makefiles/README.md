# Makefile example(s)

## Make Cheatsheet
https://www.gnu.org/software/make/manual/make.html
### Variables Used by Implicit Rules
**CC** - Program for compiling C programs; default ‘cc’.  

**CXX** - Program for compiling C++ programs; default ‘g++’.  

**CPP** - Program for running the C preprocessor, with results to standard output; default ‘$(CC) -E’.


Here is a table of variables whose values are additional arguments for the programs above. The default values for all of these is the empty string, unless otherwise noted.

**CFLAGS** - Extra flags to give to the C compiler.  

**CXXFLAGS** - Extra flags to give to the C++ compiler.  

**CPPFLAGS** - Extra flags to give to the C preprocessor and programs that use it.  

**LDFLAGS** - Extra flags to give to compilers when they are supposed to invoke the linker, ‘ld’, such as -L. Libraries (-lfoo) should be added to the LDLIBS variable instead.  

**LDLIBS** - Library flags or names given to compilers when they are supposed to invoke the linker, ‘ld’. LOADLIBES is a deprecated (but still supported) alternative to LDLIBS. Non-library linker flags, such as -L, should go in the LDFLAGS variable.  

### Automatic Variables

**$@** - The file name of the target of the rule.  

**$<** - The name of the first prerequisite.  

**$^** - The names of all the prerequisites, with spaces between them.

### Catalogue of Built-In Rules

**Compiling C programs**  
*n.o* is made automatically from *n.c* with a recipe of the form ‘$(CC) $(CPPFLAGS) $(CFLAGS) -c’.

**Compiling C++ programs**  
*n.o* is made automatically from *n.cc*, *n.cpp*, or *n.C* with a recipe of the form ‘$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c’.  

**Linking a single object file**  
*n* is made automatically from *n.o* by running the linker (usually called ld) via the C compiler. The precise recipe used is ‘$(CC) $(LDFLAGS) n.o $(LOADLIBES) $(LDLIBS)’.  

This rule does the right thing for a simple program with only one source file. It will also do the right thing if there are multiple object files (presumably coming from various other source files), one of which has a name matching that of the executable file.

```
x: y.o z.o
```

NOTE: make follows the convention that the rule to compile a .x source file uses the variable COMPILE.x. Similarly, the rule to produce an executable from a .x file uses LINK.x; and the rule to preprocess a .x file uses PREPROCESS.x.
