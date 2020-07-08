#include <iostream>

using namespace std;

int main ()
{

    int a = 5;
    int *p = &a;

    cout << "Value of the variable a is equal to: " << a << endl;
    cout << "The address of the variable a is equal to: " << &a << endl;
    cout << "The value stored in the pointer p is equal to: " << p << endl;
    cout << "To get the value of the variable a using pointer p one has to point to the address in the pointer p, *p = " << *p << endl;


    return 0;
}

