#include <iostream>
#include <cstdlib>

using namespace std;

main ()
{
    char coordinates[3][3];
    int startingValue = '1';
    int player = 2;
    bool moveAccepted;

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

        int xCoordinate, yCoordinate;


            do
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

                if (player % 2 == 0)
                {
                    cout << "Input x and y coordinates (values from 1 to 3) of a cell to put X (7 is on x:1 y:3)" << endl;
                }
                else
                {
                    cout << "Input x and y coordinates (values from 1 to 3) of a cell to put O (7 is on x:1 y:3)" << endl;
                }

                do
                {
                    cout << "x: ";
                    cin >> xCoordinate;

                } while(xCoordinate <= 0 || xCoordinate > 3);


                do
                {
                    cout << "y: ";
                    cin >> yCoordinate;

                } while(yCoordinate <= 0 || yCoordinate > 3);

                if (coordinates[yCoordinate-1][xCoordinate-1] != 'X' && coordinates[yCoordinate-1][xCoordinate-1] != 'O')
                {
                    if (player % 2 == 0)
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] = 'X';
                        player = 1;
                    }
                    else
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] = 'O';
                        player = 2;
                    }
                    moveAccepted = true;
                    system ("cls");
                }
                else
                {
                    moveAccepted = false;
                    system ("cls");
                }
            } while(moveAccepted == false);



        }
}

