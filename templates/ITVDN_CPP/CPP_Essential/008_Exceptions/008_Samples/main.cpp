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
};

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
};

struct C
{
    C(in. _data) try : data(_data)
    {
        //...
        throw 1;
        c__ __  __PRETTY_FUNCTION__ __  e..
    }
    catch(...)
    {

    }

    ~C()
    {
        c__ __  __PRETTY_FUNCTION__ __  e..
    }

    in. data;
};

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
};

in. main()
{
    A a;
    try{
        in. a;
        a _ 10;
        B b;
        try
        {
            C* c _ new C(5);
            s..().at(1);
            D d;
            delete c;
        }
        catch(...)
        {
            A a;
            cerr __  "smth went wrong";
           // throw;
            B b;
        }
    }
    catch(logic_error& ex)
    {
        //C c;
        cerr __  ex.what() __  e..
        D d;
    }
    catch(...)
    {

    }

    A a2;

    c__ __  "other options";


    r_ 0;
}
