#include <iostream>
#include <cstdlib>

using namespace std;

main ()
{
    int chosenNumbersSum = 0;
    char choice;

    for (int i = 1; ; i++)
    {

        cout << "The current sum is: " << chosenNumbersSum << endl << endl;
        cout << "Do you want to add " << i << " ?" << endl;

        cout << "Y - yes / N - no / Anything else - end : ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y')
        {
            chosenNumbersSum += i;
        }
        else if (choice == 'N' || choice == 'n')
        {
            system ("cls");
            continue;
        }
        else
        {
            system ("cls");
            break;
        }
        system ("cls");
    }

    cout << "Good bye !";

}
