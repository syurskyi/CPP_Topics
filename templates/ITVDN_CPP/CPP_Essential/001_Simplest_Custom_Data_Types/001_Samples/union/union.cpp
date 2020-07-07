#include <iostream>
#include <string>

using namespace std;

struct A
{
    int a;
    union{
        int b;
        double c;
    };
};


union Container
{
    int int_field;
    double double_field;
};

typedef Container cnt;

int main()
{
    Container container;
    container.double_field = 0.5;

    A a;
    a.b = 2;

    A* a_ptr;
    Container* cnt_ptr;

    a_ptr->b;
    cout << a_ptr.a;


    cout << a.b << "\n";
    cout << a.c << "\n";
    cout << sizeof(A) << "\n";

    cout << sizeof(container) << "\n";

    cout << container.int_field << "\n";
    cout << container.double_field << "\n";
    container = {4};

    cout << container.int_field << "\n";
    cout << container.double_field << "\n";
    return 0;
}
