? |i..
? <cstdlib>

u.. s..

main ()
{
    char coordinates[3][3];
    char startingValue = '1';

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
                c__ __  coordinates[i][j]; //for debbuging purpose add this line:  cout <<  " i = " << i << " j = " << j;
            }
            c__ __  endl __  e..
        }

        in. xCoordinate, yCoordinate;

        c__ __  "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" __  e..

        c__ __  "x: ";
        c__ >> xCoordinate;

        c__ __  "y: ";
        c__ >> yCoordinate;

        coordinates[yCoordinate-1][xCoordinate-1] = 'X';
        system("cls");
    }
}
