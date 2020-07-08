//============================================================================
// Name        : 014_Namespaces.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..

? "Animals.h"
? "Cat.h"

u.. s..
using namespace jwp

in. main() {

	Cat cat
	cat.speak()

	jwp::Cat cat2
	cat2.speak()

	cats::Cat cat3
	cat3.speak()

	c.. __ jwp::CATNAME __ e..
	c.. __ cats::CATNAME __ e..

	c.. __ CATNAME __ e..

	r_ _
}
