? |i..
? <cstdlib>

u.. s..

main ()
{
    char coordinates[3][3];
    in. startingValue _ '1';
    in. player _ 2;

    for (in. i _ 0; i < 3; i++)
    {
        for (in. j _ 0; j < 3; j++)
        {
            coordinates[i][j] _ startingValue;
            startingValue++;
        }
    }

    while (true)
    {
        for (in. i _ 0; i < 3; i++)
        {
            c__ __  endl __  e..
            for (in. j _ 0; j < 3; j++)
            {
                c__.width(5);
                c__ __  coordinates[i][j] __  " ";
            }
            c__ __  endl __  e..
        }

        in. xCoordinate, yCoordinate;

        __ (player % 2 __ 0)
        {
            c__ __  "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" __  e..

            c__ __  "x: ";
            c__ __ xCoordinate;

            c__ __  "y: ";
            c__ __ yCoordinate;

            coordinates[yCoordinate-1][xCoordinate-1] _ 'X';
            player _ 1;
            system("cls");
        }
        ____
        {

            c__ __  "Input x and y coordinates of a cell to put O (7 is on x:1 y:3)" __  e..

            c__ __  "x: ";
            c__ __ xCoordinate;

            c__ __  "y: ";
            c__ __ yCoordinate;

            coordinates[yCoordinate-1][xCoordinate-1] _ 'O';
            player _ 2;
            system("cls");

        }
    }
}
