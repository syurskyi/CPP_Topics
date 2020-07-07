#include <iostream>
#include <cstdlib>

using namespace std;

main ()
{
    char coordinates[3][3];
    int startingValue = '1';
    int player = 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            coordinates[i][j] = startingValue;
            startingValue++;
        }
    }

    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl << endl;
            for (int j = 0; j < 3; j++)
            {
                cout.width(5);
                cout << coordinates[i][j] << " ";
            }
            cout << endl << endl;
        }

        int xCoordinate, yCoordinate;

        if (player % 2 == 0)
        {
            cout << "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" << endl;

            cout << "x: ";
            cin >> xCoordinate;

            cout << "y: ";
            cin >> yCoordinate;

            coordinates[yCoordinate-1][xCoordinate-1] = 'X';
            player = 1;
            system("cls");
        }
        else
        {

            cout << "Input x and y coordinates of a cell to put O (7 is on x:1 y:3)" << endl;

            cout << "x: ";
            cin >> xCoordinate;

            cout << "y: ";
            cin >> yCoordinate;

            coordinates[yCoordinate-1][xCoordinate-1] = 'O';
            player = 2;
            system("cls");

        }
    }
}
