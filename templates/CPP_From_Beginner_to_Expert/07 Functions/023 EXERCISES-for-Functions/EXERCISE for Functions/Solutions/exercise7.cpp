? |i..
? <cstdlib>

u.. s..

double minValue(double tab[]);
double maxValue(double tab[]);


in. main ()
{
    double tab[5];

    for (in. i _ 0; i < 5; i++)
    {
        c__ __  "Input " __  i+1 __  " number: ";
        c__ __ tab[i];
    }

    c__ __  "The minimum value was: " __  minValue(tab) __  e..
    c__ __  "The maximum value was: " __  maxValue(tab) __  e..

    r_ 0;
}

double minValue(double tab[])
{
    double minValue _ tab[0];

    for (in. i _ 1; i < 5; i++)
    {
        __ (minValue > tab[i])
            minValue _ tab[i];

    }

    r_ minValue;
}
double maxValue(double tab[])
{
    double maxValue _ tab[0];

    for (in. i _ 1; i < 5; i++)
    {
        __ (maxValue < tab[i])
            maxValue _ tab[i];

    }

    r_ maxValue;
}
