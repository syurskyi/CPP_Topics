#include <iostream>

using namespace std;

void addition();

main ()
{
    addition();
}

void addition()
{
    double firstNumber, secondNumber, result;

    cout << "Input the first number to add: ";
    cin >> firstNumber;
    cout << "Input the second number to add: ";
    cin >> secondNumber;

    result = firstNumber + secondNumber;
    cout << firstNumber << " + " << secondNumber << " = " << result;

}
