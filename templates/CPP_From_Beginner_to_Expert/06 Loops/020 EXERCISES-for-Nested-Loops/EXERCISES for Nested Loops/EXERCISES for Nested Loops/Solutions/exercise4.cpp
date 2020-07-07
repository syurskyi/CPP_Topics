? |i..
? <cstdlib>

u.. s..

main ()
{
    c.. coordinates[3][3];
    in. startingValue _ '1';
    in. player _ 2;
    bo.. moveAccepted;

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

        in. xCoordinate, yCoordinate;


            do
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
                    c__ __  "x: ";
                    c__ __ xCoordinate;

                } w___(xCoordinate <_ 0 || xCoordinate > 3);


                do
                {
                    c__ __  "y: ";
                    c__ __ yCoordinate;

                } w___(yCoordinate <_ 0 || yCoordinate > 3);

                __ (coordinates[yCoordinate-1][xCoordinate-1] !_ 'X' && coordinates[yCoordinate-1][xCoordinate-1] !_ 'O')
                {
                    __ (player % 2 __ 0)
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] _ 'X';
                        player _ 1;
                    }
                    ____
                    {
                        coordinates[yCoordinate-1][xCoordinate-1] _ 'O';
                        player _ 2;
                    }
                    moveAccepted _ true;
                    system ("cls");
                }
                ____
                {
                    moveAccepted _ false;
                    system ("cls");
                }
            } w___(moveAccepted __ false);



        }
}

