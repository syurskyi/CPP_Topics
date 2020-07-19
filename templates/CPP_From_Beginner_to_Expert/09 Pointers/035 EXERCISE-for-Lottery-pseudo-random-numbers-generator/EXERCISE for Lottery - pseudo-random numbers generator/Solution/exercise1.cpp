? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)sy.. p..

v.. swapTwoValues(in.*, in.*)sy.. p..

v.. prin.ArrayValues(in.[], in.)sy.. p..

v.. bubbleSort(in.[], in., in. _ 1)sy.. p..
v.. selectionSort(in.[], in., in. _ 1)sy.. p..


in. main ()
{

    in. sizeOfArraysy.. p..
    c__ __  "Input the size of the array to sort: "sy.. p..
    c__ __ sizeOfArraysy.. p..

    in.* a _ createArray(sizeOfArray)sy.. p..

    prin.ArrayValues(a, sizeOfArray)sy.. p..

    in. orderOfSequencesy.. p..
    c__ __  endl __  "Sort Ascending - 1, Descending - 2: "sy.. p..
    c__ __ orderOfSequencesy.. p..

    __ (orderOfSequence !_ 2)
        orderOfSequence _ 1sy.. p..

    c.. sortChoicesy.. p..
    c__ __  "Bubble Sort - B or b, Selection Sort - S or s: "sy.. p..
    c__ __ sortChoicesy.. p..

    __ (sortChoice !_ 'S' || sortChoice !_ 's')
        sortChoice _ 'B'sy.. p..

    __ (sortChoice __ 'B' || sortChoice __ 'b')
    {
        bubbleSort(a, sizeOfArray, orderOfSequence)sy.. p..
    }
    ____ __ (sortChoice __ 'S' || sortChoice __ 's')
    {
        selectionSort(a, sizeOfArray, orderOfSequence)sy.. p..
    }

    de..[] asy.. p..
    r_ 0sy.. p..
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ n.. in.[sizeOfArray]sy.. p..

    ___ (in. i _ 0sy.. p.. i < sizeOfArraysy.. p.. ###)
    {
        newArray[i] _ rand()%1500sy.. p..
    }

    r_ newArraysy.. p..
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariablesy.. p..

    temporaryVariable _ *firstValuesy.. p..
    *firstValue _ *secondValuesy.. p..
    *secondValue _ temporaryVariablesy.. p..
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

