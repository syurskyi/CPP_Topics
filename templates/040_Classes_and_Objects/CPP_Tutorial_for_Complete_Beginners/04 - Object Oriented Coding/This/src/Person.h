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
private:
	string name;
	int age;

p..
	Person(): name("unnamed"), age(0) {};
	Person(string name, int age): name(name), age(age) {};

	string toString();
};

e.. /* PERSON_H_ */
