? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)sy.. p..

v.. swapTwoValues(in.*, in.*)sy.. p..

v.. fillArrayWithValues(in.[], in.)sy.. p..
v.. prin.ArrayValues(in.[], in.)sy.. p..

in. main ()
{

    r_ 0sy.. p..
}

in. * createArray(in. sizeOfArray)
{
    in.* SnewArray _ n.. in.[sizeOfArray]sy.. p..

    r_ newArraysy.. p..
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariablesy.. p..

    temporaryVariable _ *firstValuesy.. p..
    *firstValue _ *secondValuesy.. p..
    *secondValue _ temporaryVariablesy.. p..
}

v.. fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    ___ (in. i _ 0sy.. p.. i < sizeOfArraysy.. p.. ###)
    {
        c__ __  "Enter " __  i+1 __  " element: "sy.. p..
        c__ __ arrayToFill[i]sy.. p..
    }
    system("cls")sy.. p..
}

v.. prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    ___ (in. i _ 0sy.. p.. i < sizeOfArraysy.. p.. ###)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}


