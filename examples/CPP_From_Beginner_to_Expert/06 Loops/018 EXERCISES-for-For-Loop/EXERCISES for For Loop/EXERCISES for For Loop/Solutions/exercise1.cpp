#include <iostream>

using namespace std;

main ()
{

    int startingNumber;

    cout << "Input the number you would like to start with: ";
    cin >> startingNumber;

    for (int i = 0; i < 100; i++)
    {
        cout << ++startingNumber << endl;
    }


}
