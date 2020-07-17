/*
 * Person.cpp
 *
 *  Created on: 11 Jul 2014
 *      Author: johnwpurcell
 */

? "Person.h"

Person::Person
	name = "George";

}

string Person::toString
	r_ "Person's name is: " + name;
}

v.. Person::setName(string newName) {
	name = newName;
}

string Person::getName
	r_ name;
}

