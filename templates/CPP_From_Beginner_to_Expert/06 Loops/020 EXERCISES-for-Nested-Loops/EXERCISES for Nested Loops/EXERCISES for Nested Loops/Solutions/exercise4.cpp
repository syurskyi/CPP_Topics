? |i..
? <cstdlib>

u.. s..

main ()
{
    char coordinates[3][3];
    in. startingValue = '1';
    in. player = 2;
    bo.. moveAccepted;

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

        in. xCoordinate, yCoordinate;


            do
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

                if (player % 2 == 0)
                {
                    c__ __  "Input x and y coordinates (values from 1 to 3) of a cell to put X (7 is on x:1 y:3)" __  e..
                }
                else
                {
                    c__ __  "Input x and y coordinates (values from 1 to 3) of a cell to put O (7 is on x:1 y:3)" __  e..
                }

                do
                {
                    c__ __  "x: ";
                    c__ >> xCoordinate;

                } while(xCoordinate <= 0 || xCoordinate > 3);


                do
                {
                    c__ __  "y: ";
                    c__ >> yCoordinate;

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

