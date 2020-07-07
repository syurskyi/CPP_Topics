? |i..
? |s..
? "cat.h"
? <typeinfo>

u.. s..

class A
{};

class B : public A
{};

in. main()
{
    Animal* animal _ new Cat();

    A* a _ static_cast<A*>(new B());

    Animal* an _ animal;
    Pedigreed* ptr_ped _ dynamic_cast<Pedigreed*>(an);

    __(dynamic_cast<v..*>(animal) __ dynamic_cast<v..*>(ptr_ped))
    {
        c__ __  "yes";
    }

    auto ped _ dynamic_cast<Pedigreed*>(animal);
    auto cat _ dynamic_cast<Cat*>(ped);
    __ ( auto dom _ dynamic_cast<Domestic*>(cat) )
    {
        c__ __  "Domestic";
        c__ __  dom->get_name();
    }
    r_ 0;
}
