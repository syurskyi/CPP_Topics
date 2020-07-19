#include <iostream>
#include <string>
#include "scopedptr.h"
#include "scopedptr.cpp"
#include "cat.h"
#include <memory>
#include <exception>

using namespace std;

struct A
{
    A()
    {
        cout << __P.. << endl;
    }

    ~A()
    {
        cout << __P.. << endl;
    }
};

struct B
{
    B()
    {
        cout << __P.. << endl;
    }

    ~B()
    {
        cout << __P.. << endl;
    }
};

struct C
{
    C(int _data) try : data(_data)
    {
        //...
        throw 1;
        cout << __P.. << endl;
    }
    catch(...)
    {

    }

    ~C()
    {
        cout << __P.. << endl;
    }

    int data;
};

struct D : exception
{
    D()
    {
        cout << __P.. << endl;
    }

    ~D()
    {
        cout << __P.. << endl;
    }
};

int main()
{
    A a;
    try{
        int a;
        a = 10;
        B b;
        try
        {
            C* c = new C(5);
            string().at(1);
            D d;
            delete c;
        }
        catch(...)
        {
            A a;
            cerr << "smth went wrong";
           // throw;
            B b;
        }
    }
    catch(logic_error& ex)
    {
        //C c;
        cerr << ex.what() << endl;
        D d;
    }
    catch(...)
    {

    }

    A a2;

    cout << "other options";


    return 0;
}
