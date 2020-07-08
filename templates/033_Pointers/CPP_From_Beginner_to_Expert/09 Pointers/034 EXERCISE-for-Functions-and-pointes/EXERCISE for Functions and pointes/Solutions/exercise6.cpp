? |i..
? <cstdlib>

u.. s..

in. * createArray in.

v.. swapTwoValues in.#, in.#

v.. fillArrayWithValues in.||, in.
v.. printArrayValues in.||, in.

v.. bubbleSort(in.||, in., in. _ 1
v.. selectionSort in.||, in., in. _ 1


in. main 


    in. sizeOfArray
    c.. __ "Input the size of the array to sort: "
    ci. __ ?

    in.# a _ createArray ?

    f.. ? s..
    p.. ? s..

    in. orderOfSequence
    c.. __ e.. __ "Sort Ascending - 1, Descending - 2: "
    ci. __ ?

    __ (? !_ 2)
        ? _ 1

    ch.. sortChoice
    c.. __ "Bubble Sort - B or b, Selection Sort - S or s: "
    cin __ ?

    __ ? !_ 'S' ## ? !_ 's'
        ? _ 'B'

    __ ? __ 'B' || ? ? 'b')

        b.. ? s.. o..

    ____ __ s.. __ 'S' || s.. __ 's'

        s.. ? s.. o..


    de..|| a
    r_ _


in. # c.. in. sizeOfArray

    in.# newArray _ n.. in. ?

    r_ ?


v.. swapTwoValues in.# firstValue, in.# secondValue

    in. temporaryVariable

    temporaryVariable _ #f..
    @f.. _ #?
    @? _ t..
}

v.. fillArrayWithValues(in. arrayToFill[], in. sizeOfArray
{
    ___ (in. i _ 0 i < sizeOfArray ###)
    {
        c.. __ "Enter " __ i+1 __ " element: "
        cin __ arrayToFill[i]
    }
    system("cls")
}

v.. printArrayValues(in. arrayToPrint[], in. sizeOfArray)
{
    ___ (in. i _ 0 i < sizeOfArray ###)
    {
        c.. __ "Array[" __ i __ "] = " __ arrayToPrint[i] __ e..
    }
    c.. __ e..
}

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0 i < sizeOfArray-1 ###)
    {
        ___ (in. j _ 0 j < sizeOfArray-1 j++)
        {
            __ (orderOfSequence == 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)
            }
            ____ __ (orderOfSequence == 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)
            }
        }
    }
    printArrayValues(arrayToSort, sizeOfArray)
}

v.. selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    in. limitIndex
    ___ (in. i _ 0 i < sizeOfArray - 1 ###)
    {
        limitIndex _ i
        ___ (in. j _ i j < sizeOfArray j++)
        {
            __ (orderOfSequence == 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex _ j
            }
            ____ __ (orderOfSequence == 2 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex _ j
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex)
    }
    printArrayValues(arrayToSort, sizeOfArray)
}

