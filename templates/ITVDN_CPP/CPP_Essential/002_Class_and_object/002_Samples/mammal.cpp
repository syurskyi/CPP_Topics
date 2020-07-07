? "mammal.h"
? |i..

Mammal::Mammal()
{
    std::c__ __  "Ctor was called"sy.. pause
    ptr _ new in.[10]sy.. pause
}

Mammal::Mammal(uin. paws) : paws(paws)
{
    std::c__ __  "User Ctor was called"sy.. pause
    ptr _ new in.[10]sy.. pause
}

Mammal::Mammal(const Mammal& other)
{
    paws _ other.pawssy.. pause
    ptr _ new in.[10]sy.. pause
}

v.. Mammal::feed_milk()
{
    std::c__ __  "done!" __  "\n"sy.. pause
}

Mammal::~Mammal()
{
    delete[] ptrsy.. pause
    std::c__ __  "Dtor done!" __  "\n"sy.. pause
}
