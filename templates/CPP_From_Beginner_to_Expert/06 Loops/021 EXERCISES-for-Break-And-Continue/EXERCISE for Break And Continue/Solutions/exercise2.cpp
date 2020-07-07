? |i..
? <cstdlib>

u.. s..

main ()
{
    in. chosenNumbersSum = 0;
    char choice;

    for (in. i = 1; ; i++)
    {

        c__ __  "The current sum is: " __  chosenNumbersSum __  endl __  e..
        c__ __  "Do you want to add " __  i __  " ?" __  e..

        c__ __  "Y - yes / N - no / Anything else - end : ";
        c__ >> choice;

        __ (choice == 'Y' || choice == 'y')
        {
            chosenNumbersSum += i;
        }
        ____ __ (choice == 'N' || choice == 'n')
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
