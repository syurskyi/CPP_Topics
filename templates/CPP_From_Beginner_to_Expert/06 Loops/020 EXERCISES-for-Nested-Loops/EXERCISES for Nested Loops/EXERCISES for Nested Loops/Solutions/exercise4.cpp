? |i..
? <cstdlib>

u.. s..

main ()
{
    c.. coordinates[3][3]sy.. pause
    in. startingValue _ '1'sy.. pause
    in. player _ 2sy.. pause
    bo.. moveAcceptedsy.. pause

    ___ (in. i _ 0sy.. pause i < 3sy.. pause ###)
    {
        ___ (in. j _ 0sy.. pause j < 3sy.. pause j++)
        {
            coordinates[i][j] _ startingValuesy.. pause
            startingValue++sy.. pause
        }
    }

    w___ (t..)
    {

        in. xCoordinate, yCoordinatesy.. pause


            do
            {
                ___ (in. i _ 0sy.. pause i < 3sy.. pause ###)
                {
                    c__ __  endl __  e..
                    ___ (in. j _ 0sy.. pause j < 3sy.. pause j++)
                    {
                        c__.width(5)sy.. pause
                        c__ __  coordinates[i][j] __  " "sy.. pause
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
                    c__ __  "x: "sy.. pause
                    c__ __ xCoordinatesy.. pause

                } w___(xCoordinate <_ 0 || xCoordinate > 3)sy.. pause


                do
                {
                    c__ __  "y: "sy.. pause
                    c__ __ yCoordinatesy.. pause

                } w___(yCoordinate <_ 0 || yCoordinate > 3)sy.. pause

                __ (coordinates[yCoordinate-1][xCoordinate-1] !_ 'X' && coordinates[yCoordinate-1][xCoordinate-1] !_ 'O')
                {
                    __ (player % 2 __ 0)
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] _ 'X'sy.. pause
                        player _ 1sy.. pause
                    }
                    ____
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] _ 'O'sy.. pause
                        player _ 2sy.. pause
                    }
                    moveAccepted _ truesy.. pause
                    system ("cls")sy.. pause
                }
                ____
                {
                    moveAccepted _ falsesy.. pause
                    system ("cls")sy.. pause
                }
            } w___(moveAccepted __ false)sy.. pause



        }
}

