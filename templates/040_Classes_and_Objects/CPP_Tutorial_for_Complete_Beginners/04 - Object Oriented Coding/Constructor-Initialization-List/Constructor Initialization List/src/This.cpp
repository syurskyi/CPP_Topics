//============================================================================
// Name        : This.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? <iostream>
? "Person.h"
u.. s..

in. main

	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);

	c.. __ person2.toString() __ "; memory location: " __ &person2 __ e..
	c.. __ person3.toString() __ "; memory location: " __ &person3 __ e..

	r_ 0;
}
