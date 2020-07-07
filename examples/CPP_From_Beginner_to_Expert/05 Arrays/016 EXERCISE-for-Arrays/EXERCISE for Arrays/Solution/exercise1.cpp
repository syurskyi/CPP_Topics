#include <iostream>

using namespace std;

main ()
{
    double val[4], sum = 0;
    cout << "Input first number: ";
    cin >> val[0];
    cout << "Input second number: ";
    cin >> val[1];
    cout << "Input third number: ";
    cin >> val[2];
    cout << "Input fourth number: ";
    cin >> val[3];

    sum = val[0] + val[1] + val[2] + val[3];

    cout << "The result of addition is: " << sum << endl;
    cout << "Address of first element: " << &val[0] << endl;
    cout << "Address of last element: " << &val[3] << endl;

}
