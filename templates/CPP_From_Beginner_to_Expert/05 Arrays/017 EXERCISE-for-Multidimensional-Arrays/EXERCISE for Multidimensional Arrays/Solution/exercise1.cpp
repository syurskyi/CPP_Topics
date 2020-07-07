#include <iostream>

using namespace std;

main ()
{
    int arr[3][3];
    int xCoordinate, yCoordinate;

    arr[0][0] = 5;
    arr[0][1] = 3;
    arr[0][2] = 2;
    arr[1][0] = 1;
    arr[1][1] = 4;
    arr[1][2] = 15;
    arr[2][0] = 123;
    arr[2][1] = 12;
    arr[2][2] = 42;

    cout << "Input x coordinate: ";
    cin >> xCoordinate;

    cout << "Input y coordinate: ";
    cin >> yCoordinate;

    cout << arr[xCoordinate-1][yCoordinate-1];

}
