#include <iostream>
#include "person.h"

// Constructor - Person with Name
Person::Person(std::string name){
    this->name =name;
}

// Constructor - Person without Name
Person::Person(){
}


// Destructor
Person::~Person(){
    std::cout << this->getName() <<" - Person Object Destroyed" << std::endl;
}

void Person::setName(std::string name){
    this->name=name;
}

std::string Person::getName(){
    return name;
}