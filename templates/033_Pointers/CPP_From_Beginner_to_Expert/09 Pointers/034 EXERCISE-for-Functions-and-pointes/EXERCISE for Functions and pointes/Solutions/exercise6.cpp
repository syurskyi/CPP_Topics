? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)

v.. swapTwoValues(in.*, in.*)

v.. fillArrayWithValues(in.[], in.)
v.. printArrayValues(in.[], in.)

v.. bubbleSort(in.[], in., in. _ 1)
v.. selectionSort(in.[], in., in. _ 1)


in. main ()
{

    in. sizeOfArray
    c.. __ "Input the size of the array to sort: "
    cin >> sizeOfArray

    in.* a _ createArray(sizeOfArray)

    fillArrayWithValues(a, sizeOfArray)
    printArrayValues(a, sizeOfArray)

    in. orderOfSequence
    c.. __ endl __ "Sort Ascending - 1, Descending - 2: "
    cin >> orderOfSequence

    __ (orderOfSequence !_ 2)
        orderOfSequence _ 1

    char sortChoice
    c.. __ "Bubble Sort - B or b, Selection Sort - S or s: "
    cin >> sortChoice

    __ (sortChoice !_ 'S' && sortChoice !_ 's')
        sortChoice _ 'B'

    __ (sortChoice == 'B' || sortChoice == 'b')
    {
        bubbleSort(a, sizeOfArray, orderOfSequence)
    }
    else __ (sortChoice == 'S' || sortChoice == 's')
    {
        selectionSort(a, sizeOfArray, orderOfSequence)
    }

    delete[] a
    r_ _
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ new in.[sizeOfArray]

    return newArray
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable

    temporaryVariable _ *firstValue
    *firstValue _ *secondValue
    *secondValue _ temporaryVariable
}

v.. fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    ___ (in. i _ 0 i < sizeOfArray i++)
    {
        c.. __ "Enter " __ i+1 __ " element: "
        cin >> arrayToFill[i]
    }
    system("cls")
}

v.. printArrayValues(in. arrayToPrint[], in. sizeOfArray)
{
    ___ (in. i _ 0 i < sizeOfArray i++)
    {
        c.. __ "Array[" __ i __ "] = " __ arrayToPrint[i] __ e..
    }
    c.. __ e..
}

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0 i < sizeOfArray-1 i++)
    {
        ___ (in. j _ 0 j < sizeOfArray-1 j++)
        {
            __ (orderOfSequence == 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1)
            }
            else __ (orderOfSequence == 2 && arrayToSort[j] < arrayToSort[j+1])
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
    ___ (in. i _ 0 i < sizeOfArray - 1 i++)
    {
        limitIndex _ i
        ___ (in. j _ i j < sizeOfArray j++)
        {
            __ (orderOfSequence == 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex _ j
            }
            else __ (orderOfSequence == 2 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex _ j
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex)
    }
    printArrayValues(arrayToSort, sizeOfArray)
}

