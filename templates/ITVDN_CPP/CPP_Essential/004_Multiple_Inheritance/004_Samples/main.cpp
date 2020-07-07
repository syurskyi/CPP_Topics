? |i..
? <string>
? "cat.h"
? <typeinfo>

u.. s..

class A
{};

class B : public A
{};

in. main()
{
    Animal* animal = new Cat();

    A* a = static_cast<A*>(new B());

    Animal* an = animal;
    Pedigreed* ptr_ped = dynamic_cast<Pedigreed*>(an);

    if(dynamic_cast<void*>(animal) == dynamic_cast<void*>(ptr_ped))
    {
        c__ __  "yes";
    }

    auto ped = dynamic_cast<Pedigreed*>(animal);
    auto cat = dynamic_cast<Cat*>(ped);
    if ( auto dom = dynamic_cast<Domestic*>(cat) )
    {
        c__ __  "Domestic";
        c__ __  dom->get_name();
    }
    r_ 0;
}
