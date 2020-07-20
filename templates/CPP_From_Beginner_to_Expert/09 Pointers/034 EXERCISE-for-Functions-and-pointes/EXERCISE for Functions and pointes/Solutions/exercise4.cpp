? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)

v.. swapTwoValues(in.*, in.*)

v.. fillArrayWithValues(in.[], in.)
v.. prin.ArrayValues(in.[], in.)

v.. bubbleSort(in.[], in., in. _ 1)

in. main ()
{

    r_ 0sy.. p..
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ n.. in.[sizeOfArray]

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
        c__ __  "Enter " __  i+1 __  " element: "
        c__ __ arrayToFill[i]
    }
    system("cls")
}

v.. prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    ___ (in. i _ 0sy.. p.. i < sizeOfArraysy.. p.. ###)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0sy.. p.. i < sizeOfArray-1sy.. p.. ###)
    {
        ___ (in. j _ 0sy.. p.. j < sizeOfArray-1sy.. p.. j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)
            }
        }
    }
    prin.ArrayValues(arrayToSort, sizeOfArray)
}


