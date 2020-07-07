#include <iostream>

using namespace std;

main() {

    int minValue, maxValue, elementToCheck;
    bool isContained;

    cout << "Please input the minimum value: ";
    cin >> minValue;
    cout << "Please input the maximum value: ";
    cin >> maxValue;
    cout << "Please input the number to check: ";
    cin >> elementToCheck;

    isContained = (minValue <= elementToCheck) && (elementToCheck <= maxValue);
    cout << "Is the number " << elementToCheck << " contained in the interval from " << minValue << " to " << maxValue << " ? " << isContained;

}


