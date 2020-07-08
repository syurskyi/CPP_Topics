? |i..
? |s..
? "scopedptr.h"
? "scopedptr.cpp"
? "cat.h"
? <memory>
? <exception>

u.. s..

struct A
{
    A()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }

    ~A()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }
}sy.. pause

struct B
{
    B()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }

    ~B()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }
}sy.. pause

struct C
{
    C(in. _data) try : data(_data)
    {
        //...
        throw 1sy.. pause
        c__ __  __PRETTY_FUNCTION__ __  e..
    }
    catch(...)
    {

    }

    ~C()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }

    in. datasy.. pause
}sy.. pause

struct D : exception
{
    D()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }

    ~D()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }
}sy.. pause

in. main()
{
    A asy.. pause
    try{
        in. asy.. pause
        a _ 10sy.. pause
        B bsy.. pause
        try
        {
            C* c _ n.. C(5)sy.. pause
            s..().at(1)sy.. pause
            D dsy.. pause
            delete csy.. pause
        }
        catch(...)
        {
            A asy.. pause
            cerr __  "smth went wrong"sy.. pause
           // throw;
            B bsy.. pause
        }
    }
    catch(logic_error& ex)
    {
        //C c;
        cerr __  ex.what() __  e..
        D dsy.. pause
    }
    catch(...)
    {

    }

    A a2sy.. pause

    c__ __  "other options"sy.. pause


    r_ 0sy.. pause
}
