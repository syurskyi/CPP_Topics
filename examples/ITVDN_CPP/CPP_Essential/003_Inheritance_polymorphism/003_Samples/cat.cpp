#include "cat.h"
#include <iostream>

Cat::Cat()
{
    std::cout << __P.. << "\n";
}

Cat::Cat(uint paws) : Mammal(paws)
{
}

Cat::~Cat()
{
    std::cout << __P.. << "\n";
}

void Cat::say()
{
    std::cout << "meow\n";
}
