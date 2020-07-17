/*
 * Person.h
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

#ifndef PERSON_H_
_de.. PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string newName) { name = newName; age = 0; };
	Person(string newName, int newAge);
	string toString();
};

#endif /* PERSON_H_ */
