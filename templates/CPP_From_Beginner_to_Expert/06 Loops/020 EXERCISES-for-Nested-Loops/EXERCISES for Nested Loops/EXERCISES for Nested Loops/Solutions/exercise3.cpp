? |i..
? <cstdlib>

u.. s..

main ()
{
    char coordinates[3][3];
    in. startingValue = '1';
    in. player = 2;

    for (in. i = 0; i < 3; i++)
    {
        for (in. j = 0; j < 3; j++)
        {
            coordinates[i][j] = startingValue;
            startingValue++;
        }
    }

    while (true)
    {
        for (in. i = 0; i < 3; i++)
        {
            c__ __  endl __  e..
            for (in. j = 0; j < 3; j++)
            {
                c__.width(5);
                c__ __  coordinates[i][j] __  " ";
            }
            c__ __  endl __  e..
        }

        in. xCoordinate, yCoordinate;

        __ (player % 2 == 0)
        {
            c__ __  "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" __  e..

            c__ __  "x: ";
            c__ >> xCoordinate;

            c__ __  "y: ";
            c__ >> yCoordinate;

            coordinates[yCoordinate-1][xCoordinate-1] = 'X';
            player = 1;
            system("cls");
        }
        ____
        {

            c__ __  "Input x and y coordinates of a cell to put O (7 is on x:1 y:3)" __  e..

            c__ __  "x: ";
            c__ >> xCoordinate;

            c__ __  "y: ";
            c__ >> yCoordinate;

            coordinates[yCoordinate-1][xCoordinate-1] = 'O';
            player = 2;
            system("cls");

        }
    }
}
