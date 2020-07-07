#include <iostream>

using namespace std;

main ()
{

    double number;
    double poweredNumber = 1;
    int nPower;

    cout << "Input the number: ";
    cin >> number;

    cout << "Raise to what power: ";
    cin >> nPower;

    for (int i = 0; i < nPower; i++)
    {
        poweredNumber *= number;
    }

    cout << "The number " << number << " to the power of " << nPower << " is equal to " << poweredNumber << ".";


}
