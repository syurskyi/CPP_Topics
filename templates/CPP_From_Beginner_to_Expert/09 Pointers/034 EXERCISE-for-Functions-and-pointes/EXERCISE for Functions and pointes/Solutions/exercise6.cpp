? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)

v.. swapTwoValues(in.*, in.*)

v.. fillArrayWithValues(in.[], in.)
v.. prin.ArrayValues(in.[], in.)

v.. bubbleSort(in.[], in., in. _ 1)
v.. selectionSort(in.[], in., in. _ 1)


in. main ()
{

    in. sizeOfArraysy.. p..
    c__ __  "Input the size of the array to sort: "
    c__ __ sizeOfArraysy.. p..

    in.* a _ createArray(sizeOfArray)

    fillArrayWithValues(a, sizeOfArray)
    prin.ArrayValues(a, sizeOfArray)

    in. orderOfSequencesy.. p..
    c__ __  endl __  "Sort Ascending - 1, Descending - 2: "
    c__ __ orderOfSequencesy.. p..

    __ (orderOfSequence !_ 2)
        orderOfSequence _ 1sy.. p..

    c.. sortChoicesy.. p..
    c__ __  "Bubble Sort - B or b, Selection Sort - S or s: "
    c__ __ sortChoicesy.. p..

    __ (sortChoice !_ 'S' && sortChoice !_ 's')
        sortChoice _ 'B'

    __ (sortChoice __ 'B' || sortChoice __ 'b')
    {
        bubbleSort(a, sizeOfArray, orderOfSequence)
    }
    ____ __ (sortChoice __ 'S' || sortChoice __ 's')
    {
        selectionSort(a, sizeOfArray, orderOfSequence)
    }

    de..[] asy.. p..
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

v.. selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    in. limitIndexsy.. p..
    ___ (in. i _ 0sy.. p.. i < sizeOfArray - 1sy.. p.. ###)
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
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex)
    }
    prin.ArrayValues(arrayToSort, sizeOfArray)
}

