//============================================================================
// Name        : This.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
? "Person.h"
u.. s..

in. main

	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);

	c.. __ person1.toString() __  e..
	c.. __ person2.toString() __  e..
	c.. __ person3.toString() __  e..

	r_ 0;
}
