? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

void swapTwoValues(in.*, in.*);

void fillArrayWithValues(in.[], in.);
void prin.ArrayValues(in.[], in.);

in. main ()
{

    r_ 0;
}

in. * createArray(in. sizeOfArray)
{
    in.* SnewArray _ new in.[sizeOfArray];

    r_ newArray;
}

void swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable;

    temporaryVariable _ *firstValue;
    *firstValue _ *secondValue;
    *secondValue _ temporaryVariable;
}

void fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    for (in. i _ 0; i < sizeOfArray; i++)
    {
        c__ __  "Enter " __  i+1 __  " element: ";
        c__ __ arrayToFill[i];
    }
    system("cls");
}

void prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    for (in. i _ 0; i < sizeOfArray; i++)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}


