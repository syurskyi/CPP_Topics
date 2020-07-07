? |i..
? <string>
? "cat.h"

u.. s..

void foo(Mammal * m)
{
    m->say();
}

in. main()
{
    Cat cat;
    cat.say();

    Mammal *mammal = new Cat();
    mammal->say();

    Mammal mam;

    Mammal* mammals[2];

    mammals[0] = &cat;
    mammals[1] = &mam;

    for(in. i = 0; i < 2; i++)
    {
        mammals[i]->say();
    }

    foo(mammal);

    foo(&cat);

    r_ 0;
}
