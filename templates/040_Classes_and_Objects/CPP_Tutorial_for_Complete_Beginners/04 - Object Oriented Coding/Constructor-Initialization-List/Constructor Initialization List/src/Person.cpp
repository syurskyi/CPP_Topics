/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

? "Person.h"
? <sstream>

Person::Person
	age = 0;
	name = "";

}

Person::Person(st..  name, in. age) {
	this->name = name;
	this->age = age;

	c.. __ "Memory location of object: " __ this __ e..
}


st..  Person::toString
	stringstream ss;

	ss __ "Name: ";
	ss __ name;
	ss __ "; age: ";
	ss __ age;

	r_ ss.str();
}



