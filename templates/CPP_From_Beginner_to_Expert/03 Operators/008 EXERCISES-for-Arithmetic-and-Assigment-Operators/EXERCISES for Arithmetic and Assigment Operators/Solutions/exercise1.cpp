#include <iostream>

using namespace std;

main()
{
    double lengthInches, lengthCentimeters;

    cout << "Length in inches: ";
    cin >> lengthInches;

    lengthCentimeters = lengthInches * 2.54;

    cout << lengthInches << " inches is equal to " << lengthCentimeters << " centimeters.";

}


