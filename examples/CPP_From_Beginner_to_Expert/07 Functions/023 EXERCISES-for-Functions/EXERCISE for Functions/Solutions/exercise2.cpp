#include <iostream>

using namespace std;

void subtraction();

main ()
{
    subtraction();
}

void subtraction()
{
    double firstNumber, secondNumber, result;

    cout << "Input the number to subtract from: ";
    cin >> firstNumber;
    cout << "Input the number to subtract with: ";
    cin >> secondNumber;

    result = firstNumber - secondNumber;
    cout << firstNumber << " - " << secondNumber << " = " << result;

}
