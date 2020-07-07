# -*- Makefile -*-
main := ./main.cpp
program := task1
flags := -std=c++14 -g -Wall -Wextra -I./
lib_name := libtask1.a
objs := line.o rect.o
os := $(shell uname -s)

ifeq ($(os),Darwin)
  maybe_static_phrase :=
else
  maybe_static_phrase := -static
endif

program:library
	clang++ ${maybe_static_pharse} ${main} -L. \
	-ltask1 ${flags} -o ${program}

%.o:%.cpp
	clang++ -c ${flags} $<

library:${objs}; ar rcs ${lib_name} ${objs}

test_program:program; ./${program}

.PHONY: install_dependencies
install_dependencies:
	sudo aptitude install libc++1 clang lldb make \
	libasan1 libasan1-dbg libasan0 pstree \
	python3-pip -y
	pip3 install pexpect

clean:; @rm -rf ${program} *.dSYM *.o ${lib_name} *.so *.a
