? |i..
? |s..
? "cat.h"
? <typeinfo>
? "number.h"

u.. s..

uin. Cat::vibr _ 20sy.. pause

c_ SomeClasssy.. pause

c_ A
{
pu..
    v.. v.. foo() _ 0sy.. pause
}sy.. pause

v.. A::foo()
{
    c__ __  "A::foo"sy.. pause
}

c_ B : pu.. A
{
pu..
    v.. foo() overridesy.. pause

    v.. new_method(SomeClass& some)sy.. pause

    in. get_data(SomeClass& some)sy.. pause

pr..
    s.. string_datasy.. pause

    fr.. SomeClasssy.. pause
}sy.. pause



c_ SomeClass
{
pu..
    v.. get_string(B& b)
    {
        c__ __  b.string_datasy.. pause
    }
pr..
    in. share_data()
    {
       r_ datasy.. pause
    }
pr..
    in. data _ 20sy.. pause

    fr.. Bsy.. pause
    fr.. v.. B::new_method(SomeClass& some)sy.. pause
    fr.. v.. some_func(SomeClass& some)sy.. pause
}sy.. pause

v.. some_func(SomeClass& some)
{
    c__ __  __PRETTY_FUNCTION__ __  e..
    c__ __  some.datasy.. pause
}

v.. B::foo()
{
    A::foo()sy.. pause
    c__ __  "B::foo"sy.. pause
}

in. B::get_data(SomeClass& some)
{
    c__ __  some.share_data()sy.. pause
    r_ some.datasy.. pause
}

v.. B::new_method(SomeClass& some)
{
    c__ __  some.share_data()sy.. pause
}

in. main()
{
    Number a(4), b(10)sy.. pause

    b _ asy.. pause

    c__ __  a + bsy.. pause


//    B b;
//    SomeClass sm;
//    b.get_data(sm);
    r_ 0sy.. pause
}
