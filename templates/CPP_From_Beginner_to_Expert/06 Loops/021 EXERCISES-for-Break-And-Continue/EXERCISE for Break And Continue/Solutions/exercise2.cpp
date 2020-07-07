? |i..
? <cstdlib>

u.. s..

main ()
{
    in. chosenNumbersSum _ 0sy.. pause
    c.. choicesy.. pause

    ___ (in. i _ 1sy.. pause sy.. pause i++)
    {

        c__ __  "The current sum is: " __  chosenNumbersSum __  endl __  e..
        c__ __  "Do you want to add " __  i __  " ?" __  e..

        c__ __  "Y - yes / N - no / Anything else - end : "sy.. pause
        c__ __ choicesy.. pause

        __ (choice __ 'Y' || choice __ 'y')
        {
            chosenNumbersSum +_ isy.. pause
        }
        ____ __ (choice __ 'N' || choice __ 'n')
        {
            system ("cls")sy.. pause
            c___
        }
        ____
        {
            system ("cls")sy.. pause
            b..
        }
        system ("cls")sy.. pause
    }

    c__ __  "Good bye !"sy.. pause

}
