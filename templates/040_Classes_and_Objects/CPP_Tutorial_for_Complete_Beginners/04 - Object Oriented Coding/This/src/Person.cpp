/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

? "Person.h"
? <sstream>



string Person::toString
	stringstream ss;

	ss __ "Name: ";
	ss __ name;
	ss __ "; age: ";
	ss __ age;

	r_ ss.str();
}



