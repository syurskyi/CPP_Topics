#include <iostream>

using namespace std;

void division();

main ()
{
    division();
}

void division()
{
    double firstNumber, secondNumber, result;

    cout << "Input the first number: ";
    cin >> firstNumber;
    cout << "Input the number to divide by: ";
    cin >> secondNumber;

    result = firstNumber / secondNumber;
    cout << firstNumber << " / " << secondNumber << " = " << result;

}
