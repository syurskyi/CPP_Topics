? |i..
? <cstdlib>

u.. s..

main ()
{
    c.. coordinates[3][3]sy.. pause
    c.. startingValue _ '1'sy.. pause

    ___ (in. i _ 0sy.. pause i < 3sy.. pause i++)
    {
        ___ (in. j _ 0sy.. pause j < 3sy.. pause j++)
        {
            coordinates[i][j] _ startingValuesy.. pause
            startingValue++sy.. pause
        }
    }

    w___ (t..)
    {
        ___ (in. i _ 0sy.. pause i < 3sy.. pause i++)
        {
            c__ __  endl __  e..
            ___ (in. j _ 0sy.. pause j < 3sy.. pause j++)
            {
                c__.width(5)sy.. pause
                c__ __  coordinates[i][j]sy.. pause //for debbuging purpose add this line:  cout <<  " i = " << i << " j = " << j;
            }
            c__ __  endl __  e..
        }

        in. xCoordinate, yCoordinatesy.. pause

        c__ __  "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" __  e..

        c__ __  "x: "sy.. pause
        c__ __ xCoordinatesy.. pause

        c__ __  "y: "sy.. pause
        c__ __ yCoordinatesy.. pause

        coordinates[yCoordinate-1][xCoordinate-1] _ 'X'sy.. pause
        system("cls")sy.. pause
    }
}
