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

st..  Person::toString
	r_ "Person's name is: " + name;
}

v.. Person::setName(st..  newName) {
	name = newName;
}

st..  Person::getName
	r_ name;
}

