#include <iostream>

using namespace std;

main ()
{
    int minValue, maxValue, elementToCheck;

    cout << "Please input the minimum value: ";
    cin >> minValue;
    cout << "Please input the maximum value: ";
    cin >> maxValue;
    cout << "Please input the number to check: ";
    cin >> elementToCheck;

    bool isContained = (minValue <= elementToCheck) && (elementToCheck <= maxValue);

    if (isContained)
        cout << "The number " << elementToCheck << " belongs to the interval from " << minValue << " to " << maxValue << " !" << endl;
    else
        cout << "The number " << elementToCheck << " doesn't belong to the interval from " << minValue << " to " << maxValue << " !" << endl;
}
