#include <iostream>


using namespace std;

main()
{
    int firstElement, secondElement, divisionRemainder;

    cout << "007_This is a simple program that calculates the remainder of division of two numbers." << endl;
    cout << "Input first number: ";
    cin >> firstElement;
    cout << "Input second number: ";
    cin >> secondElement;

    divisionRemainder = firstElement % secondElement;
    cout << "First number: " << firstElement << endl;
    cout << "Second number: " << secondElement << endl;
    cout << "Remainder: " << divisionRemainder << endl;

}


