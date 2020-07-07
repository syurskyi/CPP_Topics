#include <iostream>

using namespace std;

void multiplication();

main ()
{
    multiplication();
}

void multiplication()
{
    double firstNumber, secondNumber, result;

    cout << "Input the first number: ";
    cin >> firstNumber;
    cout << "Input the number to multiply by: ";
    cin >> secondNumber;

    result = firstNumber * secondNumber;
    cout << firstNumber << " * " << secondNumber << " = " << result;

}
