? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)sy.. pause

v.. swapTwoValues(in.*, in.*)sy.. pause

v.. fillArrayWithValues(in.[], in.)sy.. pause
v.. prin.ArrayValues(in.[], in.)sy.. pause

in. main ()
{

    r_ 0sy.. pause
}

in. * createArray(in. sizeOfArray)
{
    in.* SnewArray _ new in.[sizeOfArray]sy.. pause

    r_ newArraysy.. pause
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariablesy.. pause

    temporaryVariable _ *firstValuesy.. pause
    *firstValue _ *secondValuesy.. pause
    *secondValue _ temporaryVariablesy.. pause
}

v.. fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    ___ (in. i _ 0sy.. pause i < sizeOfArraysy.. pause i++)
    {
        c__ __  "Enter " __  i+1 __  " element: "sy.. pause
        c__ __ arrayToFill[i]sy.. pause
    }
    system("cls")sy.. pause
}

v.. prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    ___ (in. i _ 0sy.. pause i < sizeOfArraysy.. pause i++)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}


