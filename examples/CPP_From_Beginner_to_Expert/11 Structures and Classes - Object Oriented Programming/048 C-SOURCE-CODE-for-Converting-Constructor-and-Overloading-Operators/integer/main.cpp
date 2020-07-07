#include <iostream>
#include "integer.h"

using namespace std;
/* CONVERT constructor - overloading operators */
int main()
{
    Integer a(50);

    int b = a;
    a = 100;
   // cout << a.getNr() << endl;
    //cout << b << endl;

   // cout << a + b << endl;

    b += a; // a = a + b;

    cout << a << endl;

    return 0;
}
