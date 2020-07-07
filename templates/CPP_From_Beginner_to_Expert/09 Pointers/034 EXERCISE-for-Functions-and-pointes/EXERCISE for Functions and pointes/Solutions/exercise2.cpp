? |i..

u.. s..

in. * createArray(in.);

v.. swapTwoValues(in.*, in.*);

in. main ()
{

    r_ 0;
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ new in.[sizeOfArray];

    r_ newArray;
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable;

    temporaryVariable _ *firstValue;
    *firstValue _ *secondValue;
    *secondValue _ temporaryVariable;
}


