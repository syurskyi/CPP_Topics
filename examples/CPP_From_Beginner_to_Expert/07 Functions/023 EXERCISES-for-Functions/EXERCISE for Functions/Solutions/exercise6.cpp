#include <iostream>
#include <cstdlib>

using namespace std;

void chooseOperation(char);
void addition();
void subtraction();
void multiplication();
void division();
void exponentiation();


int main ()
{
    while (true)
    {
        char choice;

        cout << "What mathematical operation you want to use ?" << endl;
        cout << "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation: ";
        cin >> choice;

        system("cls");
        chooseOperation(choice);
    }
    return 0;
}

void chooseOperation(char choice)
{
    switch(choice)
    {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '^':
            exponentiation();
            break;
    }
}

void addition()
{
    double firstNumber, secondNumber, result;

    cout << "Input the first number to add: ";
    cin >> firstNumber;
    cout << "Input the second number to add: ";
    cin >> secondNumber;

    result = firstNumber + secondNumber;
    cout << firstNumber << " + " << secondNumber << " = " << result << endl;

}

void subtraction()
{
    double firstNumber, secondNumber, result;

    cout << "Input the number to subtract from: ";
    cin >> firstNumber;
    cout << "Input the number to subtract with: ";
    cin >> secondNumber;

    result = firstNumber - secondNumber;
    cout << firstNumber << " - " << secondNumber << " = " << result << endl;

}

void multiplication()
{
    double firstNumber, secondNumber, result;

    cout << "Input the first number: ";
    cin >> firstNumber;
    cout << "Input the number to multiply by: ";
    cin >> secondNumber;

    result = firstNumber * secondNumber;
    cout << firstNumber << " * " << secondNumber << " = " << result << endl;

}

void division()
{
    double firstNumber, secondNumber, result;

    cout << "Input the first number: ";
    cin >> firstNumber;
    cout << "Input the number to divide by: ";
    cin >> secondNumber;

    result = firstNumber / secondNumber;
    cout << firstNumber << " / " << secondNumber << " = " << result << endl;

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

    cout << "The number " << base << " to the power of " << exponent << " is equal to " << result << "." << endl;

}
