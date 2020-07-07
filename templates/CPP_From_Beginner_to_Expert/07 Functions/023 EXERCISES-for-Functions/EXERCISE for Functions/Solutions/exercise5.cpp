#include <iostream>

using namespace std;

void exponentiation();

main ()
{
    exponentiation();
}

void exponentiation()
{
    double base, exponent, result = 1;

    cout << "Input the base to exponentiate: ";
    cin >> base;
    cout << "Input the exponent value: ";
    cin >> exponent;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    cout << "The number " << base << " to the power of " << exponent << " is equal to " << result << ".";

}
