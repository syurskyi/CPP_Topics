#include <iostream>

using namespace std;

main ()
{

    int number;
    long double factorialResult = 1;

    cout << "Input the number: ";
    cin >> number;


    for (int i = 1; i <= number; i++)
    {
        factorialResult *= i;
        cout << i << "! = " << factorialResult << endl;
    }



}
