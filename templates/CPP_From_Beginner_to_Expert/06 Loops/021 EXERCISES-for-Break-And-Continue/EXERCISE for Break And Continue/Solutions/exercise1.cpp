#include <iostream>

using namespace std;

main ()
{
    int maximumNumber;
    int sumEven = 0;
    int temp;

    cout << "Input maximum number you want to check: ";
    cin >> maximumNumber;

    for (int i = 1; i <= maximumNumber; i++)
    {
        if (i % 2 == 1)
            continue;

        temp = sumEven;
        sumEven += i;
        cout << temp << " + " << i << " = " << sumEven << endl;

    }

}
