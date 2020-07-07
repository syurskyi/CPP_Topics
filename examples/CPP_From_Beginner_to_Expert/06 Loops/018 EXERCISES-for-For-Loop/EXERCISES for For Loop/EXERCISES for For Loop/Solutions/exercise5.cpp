#include <iostream>

using namespace std;

main ()
{
    int numberOfAsterisks;

    cout << "How many asterisks would you like to draw: ";
    cin >> numberOfAsterisks;

    for (int i = 1; i <= numberOfAsterisks; i++)
    {
        cout << "*";
        if (i % 5 == 0)
        {
            cout <<  endl;
        }
    }
;

}
