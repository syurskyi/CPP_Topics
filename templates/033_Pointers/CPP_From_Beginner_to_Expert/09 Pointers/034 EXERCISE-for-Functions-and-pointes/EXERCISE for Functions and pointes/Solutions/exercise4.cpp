? |i..
? <cstdlib>

u.. s..

in. * createArray(in.)

v.. swapTwoValues(in.*, in.*)

v.. fillArrayWithValues(in.[], in.)
v.. printArrayValues(in.[], in.)

v.. bubbleSort(in.[], in., in. _ 1)

in. main ()
{

    r_ _
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ n.. in.[sizeOfArray]

    r_ newArray
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


