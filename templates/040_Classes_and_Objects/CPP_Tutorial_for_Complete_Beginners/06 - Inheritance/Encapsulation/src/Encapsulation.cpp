//============================================================================
// Name        : Encapsulation.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

c_ Frog {
pr..
	st..  name;

pr..
	st..  getName r_ name; }

pu..
	Frog(st..  name): name(name) {}

	v.. info c.. __ "My name is: " __ getName() __ e.. }
};

in. main

	Frog frog("Freddy");

	frog.info();

	r_ 0;
}
