#include "Person.h"
#include <string>
using namespace std;

Person::Person(string name, int age) {
    this -> name = name;
    this -> age = age;
}

int Person::getAge() {
    return this -> age;
}

string Person::getName() {
    return this -> name;
}