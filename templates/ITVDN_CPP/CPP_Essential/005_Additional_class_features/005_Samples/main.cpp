? |i..
? |s..
? "cat.h"
? <typeinfo>
? "number.h"

u.. s..

uin. Cat::vibr _ 20;

class SomeClass;

class A
{
public:
    virtual v.. foo() _ 0;
};

v.. A::foo()
{
    c__ __  "A::foo";
}

class B : public A
{
public:
    v.. foo() override;

    v.. new_method(SomeClass& some);

    in. get_data(SomeClass& some);

private:
    s.. string_data;

    friend SomeClass;
};



class SomeClass
{
public:
    v.. get_string(B& b)
    {
        c__ __  b.string_data;
    }
private:
    in. share_data()
    {
       r_ data;
    }
private:
    in. data _ 20;

    friend B;
    friend v.. B::new_method(SomeClass& some);
    friend v.. some_func(SomeClass& some);
};

v.. some_func(SomeClass& some)
{
    c__ __  __PRETTY_FUNCTION__ __  e..
    c__ __  some.data;
}

v.. B::foo()
{
    A::foo();
    c__ __  "B::foo";
}

in. B::get_data(SomeClass& some)
{
    c__ __  some.share_data();
    r_ some.data;
}

v.. B::new_method(SomeClass& some)
{
    c__ __  some.share_data();
}

in. main()
{
    Number a(4), b(10);

    b _ a;

    c__ __  a + b;


//    B b;
//    SomeClass sm;
//    b.get_data(sm);
    r_ 0;
}
