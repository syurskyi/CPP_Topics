? |i..
? <cstdlib>

u.. s..

main ()
{
    c.. coordinates[3][3];
    c.. startingValue _ '1';

    for (in. i _ 0; i < 3; i++)
    {
        for (in. j _ 0; j < 3; j++)
        {
            coordinates[i][j] _ startingValue;
            startingValue++;
        }
    }

    w___ (true)
    {
        for (in. i _ 0; i < 3; i++)
        {
            c__ __  endl __  e..
            for (in. j _ 0; j < 3; j++)
            {
                c__.width(5);
                c__ __  coordinates[i][j]; //for debbuging purpose add this line:  cout <<  " i = " << i << " j = " << j;
            }
            c__ __  endl __  e..
        }

        in. xCoordinate, yCoordinate;

        c__ __  "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" __  e..

        c__ __  "x: ";
        c__ __ xCoordinate;

        c__ __  "y: ";
        c__ __ yCoordinate;

        coordinates[yCoordinate-1][xCoordinate-1] _ 'X';
        system("cls");
    }
}
