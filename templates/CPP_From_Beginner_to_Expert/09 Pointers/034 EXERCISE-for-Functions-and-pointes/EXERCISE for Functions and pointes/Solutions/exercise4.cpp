? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)sy.. pause

v.. swapTwoValues(in.*, in.*)sy.. pause

v.. fillArrayWithValues(in.[], in.)sy.. pause
v.. prin.ArrayValues(in.[], in.)sy.. pause

v.. bubbleSort(in.[], in., in. _ 1)sy.. pause

in. main ()
{

    r_ 0sy.. pause
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ n.. in.[sizeOfArray]sy.. pause

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
    ___ (in. i _ 0sy.. pause i < sizeOfArraysy.. pause ###)
    {
        c__ __  "Enter " __  i+1 __  " element: "sy.. pause
        c__ __ arrayToFill[i]sy.. pause
    }
    system("cls")sy.. pause
}

v.. prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    ___ (in. i _ 0sy.. pause i < sizeOfArraysy.. pause ###)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0sy.. pause i < sizeOfArray-1sy.. pause ###)
    {
        ___ (in. j _ 0sy.. pause j < sizeOfArray-1sy.. pause j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)sy.. pause
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)sy.. pause
            }
        }
    }
    prin.ArrayValues(arrayToSort, sizeOfArray)sy.. pause
}


