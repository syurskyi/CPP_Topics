#include <iostream>

using namespace std;

main () {

    int firstNumber, secondNumber, temporaryContainer;

    cout << "Input first number: ";
    cin >> firstNumber;
    cout << "Input second number: ";
    cin >> secondNumber;

    temporaryContainer = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporaryContainer;

    cout << "After exchange, the first number is: " << firstNumber << endl;
    cout << "The second number is: " << secondNumber << endl;
}
