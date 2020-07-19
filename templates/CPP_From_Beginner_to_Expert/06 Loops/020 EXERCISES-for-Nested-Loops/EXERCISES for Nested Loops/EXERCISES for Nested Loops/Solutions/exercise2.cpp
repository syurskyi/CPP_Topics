? |i..
? <cstdlib>

u.. s..

main ()
{
    c.. coordinates[3][3]sy.. p..
    c.. startingValue _ '1'sy.. p..

    ___ (in. i _ 0sy.. p.. i < 3sy.. p.. ###)
    {
        ___ (in. j _ 0sy.. p.. j < 3sy.. p.. j++)
        {
            coordinates[i][j] _ startingValuesy.. p..
            startingValue++sy.. p..
        }
    }

    w___ (t..)
    {
        ___ (in. i _ 0sy.. p.. i < 3sy.. p.. ###)
        {
            c__ __  endl __  e..
            ___ (in. j _ 0sy.. p.. j < 3sy.. p.. j++)
            {
                c__.width(5)sy.. p..
                c__ __  coordinates[i][j]sy.. p.. //for debbuging purpose add this line:  cout <<  " i = " << i << " j = " << j;
            }
            c__ __  endl __  e..
        }

        in. xCoordinate, yCoordinatesy.. p..

        c__ __  "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" __  e..

        c__ __  "x: "sy.. p..
        c__ __ xCoordinatesy.. p..

        c__ __  "y: "sy.. p..
        c__ __ yCoordinatesy.. p..

        coordinates[yCoordinate-1][xCoordinate-1] _ 'X'sy.. p..
        system("cls")sy.. p..
    }
}
