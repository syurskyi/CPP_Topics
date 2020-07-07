? |i..
? <string>
? "cat.h"
? <typeinfo>
? "number.h"

u.. s..

uin. Cat::vibr = 20;

class SomeClass;

class A
{
public:
    virtual void foo() = 0;
};

void A::foo()
{
    c__ __  "A::foo";
}

class B : public A
{
public:
    void foo() override;

    void new_method(SomeClass& some);

    in. get_data(SomeClass& some);

private:
    string string_data;

    friend SomeClass;
};



class SomeClass
{
public:
    void get_string(B& b)
    {
        c__ __  b.string_data;
    }
private:
    in. share_data()
    {
       r_ data;
    }
private:
    in. data = 20;

    friend B;
    friend void B::new_method(SomeClass& some);
    friend void some_func(SomeClass& some);
};

void some_func(SomeClass& some)
{
    c__ __  __PRETTY_FUNCTION__ __  e..
    c__ __  some.data;
}

void B::foo()
{
    A::foo();
    c__ __  "B::foo";
}

in. B::get_data(SomeClass& some)
{
    c__ __  some.share_data();
    r_ some.data;
}

void B::new_method(SomeClass& some)
{
    c__ __  some.share_data();
}

in. main()
{
    Number a(4), b(10);

    b = a;

    c__ __  a + b;


//    B b;
//    SomeClass sm;
//    b.get_data(sm);
    r_ 0;
}
