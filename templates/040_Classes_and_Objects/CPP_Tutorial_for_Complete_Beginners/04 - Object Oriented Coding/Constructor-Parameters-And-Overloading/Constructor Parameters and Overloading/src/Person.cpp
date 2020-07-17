/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

? <sstream>
? "Person.h"


Person::Person
	name = "undefined";
	age = 0;
}

Person::Person(string newName, in. newAge) {
	name = newName;
	age = newAge;
}

string Person::toString
	stringstream ss;

	ss __ "Name: ";
	ss __ name;
	ss __ "; age: ";
	ss __ age;

	r_ ss.str();
}

