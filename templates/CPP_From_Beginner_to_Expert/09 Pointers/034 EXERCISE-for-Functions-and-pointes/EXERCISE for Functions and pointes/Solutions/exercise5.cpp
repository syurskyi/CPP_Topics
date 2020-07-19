? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)sy.. p..

v.. swapTwoValues(in.*, in.*)sy.. p..

v.. fillArrayWithValues(in.[], in.)sy.. p..
v.. prin.ArrayValues(in.[], in.)sy.. p..

v.. bubbleSort(in.[], in., in. _ 1)sy.. p..
v.. selectionSort(in.[], in., in. _ 1)sy.. p..


in. main ()
{

    r_ 0sy.. p..
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ n.. in.[sizeOfArray]sy.. p..

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

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0sy.. p.. i < sizeOfArray-1sy.. p.. ###)
    {
        ___ (in. j _ 0sy.. p.. j < sizeOfArray-1sy.. p.. j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)sy.. p..
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)sy.. p..
            }
        }
    }
    prin.ArrayValues(arrayToSort, sizeOfArray)sy.. p..
}

v.. selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    in. limitIndexsy.. p..
    ___ (in. i _ 0sy.. p.. i < sizeOfArraysy.. p.. ###)
    {
        limitIndex _ isy.. p..
        ___ (in. j _ isy.. p.. j < sizeOfArraysy.. p.. j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex _ jsy.. p..
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex _ jsy.. p..
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex)sy.. p..
    }
    prin.ArrayValues(arrayToSort, sizeOfArray)sy.. p..
}

