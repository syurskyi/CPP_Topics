? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)sy.. pause

v.. swapTwoValues(in.*, in.*)sy.. pause

v.. fillArrayWithValues(in.[], in.)sy.. pause
v.. prin.ArrayValues(in.[], in.)sy.. pause

v.. bubbleSort(in.[], in., in. _ 1)sy.. pause
v.. selectionSort(in.[], in., in. _ 1)sy.. pause


in. main ()
{

    in. sizeOfArraysy.. pause
    c__ __  "Input the size of the array to sort: "sy.. pause
    c__ __ sizeOfArraysy.. pause

    in.* a _ createArray(sizeOfArray)sy.. pause

    fillArrayWithValues(a, sizeOfArray)sy.. pause
    prin.ArrayValues(a, sizeOfArray)sy.. pause

    in. orderOfSequencesy.. pause
    c__ __  endl __  "Sort Ascending - 1, Descending - 2: "sy.. pause
    c__ __ orderOfSequencesy.. pause

    __ (orderOfSequence !_ 2)
        orderOfSequence _ 1sy.. pause

    c.. sortChoicesy.. pause
    c__ __  "Bubble Sort - B or b, Selection Sort - S or s: "sy.. pause
    c__ __ sortChoicesy.. pause

    __ (sortChoice !_ 'S' && sortChoice !_ 's')
        sortChoice _ 'B'sy.. pause

    __ (sortChoice __ 'B' || sortChoice __ 'b')
    {
        bubbleSort(a, sizeOfArray, orderOfSequence)sy.. pause
    }
    ____ __ (sortChoice __ 'S' || sortChoice __ 's')
    {
        selectionSort(a, sizeOfArray, orderOfSequence)sy.. pause
    }

    delete[] asy.. pause
    r_ 0sy.. pause
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ new in.[sizeOfArray]sy.. pause

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

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0sy.. pause i < sizeOfArray-1sy.. pause i++)
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

v.. selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    in. limitIndexsy.. pause
    ___ (in. i _ 0sy.. pause i < sizeOfArray - 1sy.. pause i++)
    {
        limitIndex _ isy.. pause
        ___ (in. j _ isy.. pause j < sizeOfArraysy.. pause j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex _ jsy.. pause
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex _ jsy.. pause
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex)sy.. pause
    }
    prin.ArrayValues(arrayToSort, sizeOfArray)sy.. pause
}

