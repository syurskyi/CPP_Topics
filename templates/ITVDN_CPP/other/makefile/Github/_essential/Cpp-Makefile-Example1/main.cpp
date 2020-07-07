// Author       : Quazi Rabbi 
// Objective    : Simple demostration of cpp - object orientated programming
// Description  : Initialize person objects and display the name, along with build using Makefile

#include <iostream>
#include "person.h"

int main(){
    std::cout << "Starting Program" << std::endl;
    
    // Create Person 1 - p1 and display set name
    Person p1("Quazi");
    std::cout << p1.getName() << std::endl;
    
    // Create Person 2 - p2, set name and display set name
    Person p2;
    p2.setName("John");
    std::cout << p2.getName() << std::endl;
    
    // Display set name of the Person 1
    std::cout << p1.getName() << std::endl;


    std::cout << "Program Finished" << std::endl;
    return 0;
}