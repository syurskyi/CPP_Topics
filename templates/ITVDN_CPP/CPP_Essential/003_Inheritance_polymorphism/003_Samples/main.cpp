? |i..
? |s..
? "cat.h"

u.. s..

v.. foo(Mammal * m)
{
    m->say();
}

in. main()
{
    Cat cat;
    cat.say();

    Mammal *mammal _ new Cat();
    mammal->say();

    Mammal mam;

    Mammal* mammals[2];

    mammals[0] _ &cat;
    mammals[1] _ &mam;

    ___(in. i _ 0; i < 2; i++)
    {
        mammals[i]->say();
    }

    foo(mammal);

    foo(&cat);

    r_ 0;
}
