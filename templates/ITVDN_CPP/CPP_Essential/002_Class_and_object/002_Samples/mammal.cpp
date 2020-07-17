? "mammal.h"
? |i..

Mammal::Mammal()
{
    st. c__ __  "Ctor was called"sy.. pause
    ptr _ n.. in.[10]sy.. pause
}

Mammal::Mammal(uin. paws) : paws(paws)
{
    st. c__ __  "User Ctor was called"sy.. pause
    ptr _ n.. in.[10]sy.. pause
}

Mammal::Mammal(c.. Mammal& other)
{
    paws _ other.pawssy.. pause
    ptr _ n.. in.[10]sy.. pause
}

v.. Mammal::feed_milk()
{
    st. c__ __  "done!" __  "\n"sy.. pause
}

Mammal::~Mammal()
{
    de..[] ptrsy.. pause
    st. c__ __  "Dtor done!" __  "\n"sy.. pause
}
