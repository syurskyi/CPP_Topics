#include <iostream>

using namespace std;

main() {

    int minValue, maxValue, elementToCheck;
    bool isGreaterThanMinValue, isLowerThanMaxValue;

    cout << "Please input the minimum value: ";
    cin >> minValue;
    cout << "Please input the maximum value: ";
    cin >> maxValue;
    cout << "Please input the number to check: ";
    cin >> elementToCheck;

    isGreaterThanMinValue = (minValue <= elementToCheck);
    isLowerThanMaxValue = (elementToCheck <= maxValue);

    cout << "Is the value " << elementToCheck << " greater or equal to " << minValue << " ? " << isGreaterThanMinValue << endl;
    cout << "Is the value " << elementToCheck << " lower or equal to " << maxValue << " ? " << isLowerThanMaxValue << endl;



}


