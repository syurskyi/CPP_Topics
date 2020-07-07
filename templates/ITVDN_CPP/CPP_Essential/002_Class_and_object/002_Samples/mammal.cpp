? "mammal.h"
? |i..

Mammal::Mammal()
{
    std::c__ __  "Ctor was called";
    ptr _ new in.[10];
}

Mammal::Mammal(uin. paws) : paws(paws)
{
    std::c__ __  "User Ctor was called";
    ptr _ new in.[10];
}

Mammal::Mammal(const Mammal& other)
{
    paws _ other.paws;
    ptr _ new in.[10];
}

void Mammal::feed_milk()
{
    std::c__ __  "done!" __  "\n";
}

Mammal::~Mammal()
{
    delete[] ptr;
    std::c__ __  "Dtor done!" __  "\n";
}
