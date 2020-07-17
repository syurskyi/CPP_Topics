/*
 * Person.h
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

?i.. PERSON_H_
_de.. PERSON_H_

? ios..
u... s..

n.. Person {
pr..
	string name;
	in. age;
p..
	Person();
	Person(string newName) { name = newName; age = 0; };
	Person(string newName, in. newAge);
	string toString();
};

e.. /* PERSON_H_ */
