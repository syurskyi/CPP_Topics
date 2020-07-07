#include <iostream>

using namespace std;

main ()
{
    char coordinates[3][3];
    char value = '1';

    for (int i = 0; i < 3; i++)
    {
        cout << endl << endl;
        for (int j = 0; j < 3; j++)
        {
            coordinates[i][j] = value;
            value++;

            cout.width(5);
            cout << coordinates[i][j] << " ";

        }
        cout << endl << endl;
    }

}
