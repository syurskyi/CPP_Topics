#include <iostream>
#include <cstdlib>

using namespace std;

main ()
{

    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Input " << i+1 << ". number: ";
        cin >> numbers[i];
    }

    system("cls");

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << "The number " << numbers[i] << " is even." << endl;
        }
        else
        {
            cout << "The number " << numbers[i] << " is odd." << endl;
        }
    }


}
