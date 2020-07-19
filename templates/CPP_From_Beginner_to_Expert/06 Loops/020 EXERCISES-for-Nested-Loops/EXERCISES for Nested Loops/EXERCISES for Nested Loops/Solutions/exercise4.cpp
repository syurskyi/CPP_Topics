? |i..
? <cstdlib>

u.. s..

main ()
{
    c.. coordinates[3][3]sy.. p..
    in. startingValue _ '1'sy.. p..
    in. player _ 2sy.. p..
    bo.. moveAcceptedsy.. p..

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

        in. xCoordinate, yCoordinatesy.. p..


            do
            {
                ___ (in. i _ 0sy.. p.. i < 3sy.. p.. ###)
                {
                    c__ __  endl __  e..
                    ___ (in. j _ 0sy.. p.. j < 3sy.. p.. j++)
                    {
                        c__.width(5)sy.. p..
                        c__ __  coordinates[i][j] __  " "sy.. p..
                    }
                    c__ __  endl __  e..
                }

                __ (player % 2 __ 0)
                {
                    c__ __  "Input x and y coordinates (values from 1 to 3) of a cell to put X (7 is on x:1 y:3)" __  e..
                }
                ____
                {
                    c__ __  "Input x and y coordinates (values from 1 to 3) of a cell to put O (7 is on x:1 y:3)" __  e..
                }

                do
                {
                    c__ __  "x: "sy.. p..
                    c__ __ xCoordinatesy.. p..

                } w___(xCoordinate <_ 0 || xCoordinate > 3)sy.. p..


                do
                {
                    c__ __  "y: "sy.. p..
                    c__ __ yCoordinatesy.. p..

                } w___(yCoordinate <_ 0 || yCoordinate > 3)sy.. p..

                __ (coordinates[yCoordinate-1][xCoordinate-1] !_ 'X' && coordinates[yCoordinate-1][xCoordinate-1] !_ 'O')
                {
                    __ (player % 2 __ 0)
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] _ 'X'sy.. p..
                        player _ 1sy.. p..
                    }
                    ____
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] _ 'O'sy.. p..
                        player _ 2sy.. p..
                    }
                    moveAccepted _ truesy.. p..
                    system ("cls")sy.. p..
                }
                ____
                {
                    moveAccepted _ falsesy.. p..
                    system ("cls")sy.. p..
                }
            } w___(moveAccepted __ false)sy.. p..



        }
}

