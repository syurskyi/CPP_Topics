#include <iostream>

using namespace std;

int main ()
{

    int a = 5;
    int *p = &a;
    int **pp = &p;

    cout << "Value of the variable a is equal to: " << a << endl;
    cout << "The address of the variable a is equal to: " << &a << endl;
    cout << "The value stored in the pointer p is equal to: " << p << endl;
    cout << "To get the value of the variable a using pointer p one has to point to the address in the pointer p, *p = " << *p << endl << endl;
    cout << "Pointer p has its own address which is: " << &p << endl;
    cout << "The value stored in the pointer pp is equal to: " << pp << endl;
    cout << "To get the value of the pointer p using pointer pp one has to point to the address in the pointer pp, *pp = " << *pp << endl;
    cout << "To get the value of he variable a using pointer pp one has to point to the address in the pointer pp and p, **pp = " << **pp << endl;

    return 0;
}

