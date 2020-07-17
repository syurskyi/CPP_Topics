? |i..
? |s..
? "cat.h"
? <typeinfo>

u.. s..

c_ A
{}sy.. pause

c_ B : pu.. A
{}sy.. pause

in. main()
{
    Animal* animal _ n.. Cat()sy.. pause

    A* a _ static_cast<A*>(n.. B())sy.. pause

    Animal* an _ animalsy.. pause
    Pedigreed* ptr_ped _ dynamic_cast<Pedigreed*>(an)sy.. pause

    __(dynamic_cast<v..*>(animal) __ dynamic_cast<v..*>(ptr_ped))
    {
        c__ __  "yes"sy.. pause
    }

    a.. ped _ dynamic_cast<Pedigreed*>(animal)sy.. pause
    a.. cat _ dynamic_cast<Cat*>(ped)sy.. pause
    __ ( a.. dom _ dynamic_cast<Domestic*>(cat) )
    {
        c__ __  "Domestic"sy.. pause
        c__ __  dom__get_name()sy.. pause
    }
    r_ 0sy.. pause
}
