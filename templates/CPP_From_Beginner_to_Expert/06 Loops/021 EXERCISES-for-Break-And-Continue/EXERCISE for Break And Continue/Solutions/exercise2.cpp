? |i..
? <cstdlib>

u.. s..

main ()
{
    in. chosenNumbersSum _ 0;
    char choice;

    for (in. i _ 1; ; i++)
    {

        c__ __  "The current sum is: " __  chosenNumbersSum __  endl __  e..
        c__ __  "Do you want to add " __  i __  " ?" __  e..

        c__ __  "Y - yes / N - no / Anything else - end : ";
        c__ __ choice;

        __ (choice __ 'Y' || choice __ 'y')
        {
            chosenNumbersSum +_ i;
        }
        ____ __ (choice __ 'N' || choice __ 'n')
        {
            system ("cls");
            continue;
        }
        ____
        {
            system ("cls");
            break;
        }
        system ("cls");
    }

    c__ __  "Good bye !";

}
