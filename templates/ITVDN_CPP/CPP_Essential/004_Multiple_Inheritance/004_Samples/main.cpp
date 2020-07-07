? |i..
? |s..
? "cat.h"
? <typeinfo>

u.. s..

class A
{}sy.. pause

class B : public A
{}sy.. pause

in. main()
{
    Animal* animal _ new Cat()sy.. pause

    A* a _ static_cast<A*>(new B())sy.. pause

    Animal* an _ animalsy.. pause
    Pedigreed* ptr_ped _ dynamic_cast<Pedigreed*>(an)sy.. pause

    __(dynamic_cast<v..*>(animal) __ dynamic_cast<v..*>(ptr_ped))
    {
        c__ __  "yes"sy.. pause
    }

    auto ped _ dynamic_cast<Pedigreed*>(animal)sy.. pause
    auto cat _ dynamic_cast<Cat*>(ped)sy.. pause
    __ ( auto dom _ dynamic_cast<Domestic*>(cat) )
    {
        c__ __  "Domestic"sy.. pause
        c__ __  dom->get_name()sy.. pause
    }
    r_ 0sy.. pause
}
