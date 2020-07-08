? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

v.. swapTwoValues(in.*, in.*);

v.. fillArrayWithValues(in.[], in.);
v.. printArrayValues(in.[], in.);

v.. bubbleSort(in.[], in., in. = 1);

in. main ()
{

    r_ _
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray = new in.[sizeOfArray];

    return newArray;
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable;

    temporaryVariable = *firstValue;
    *firstValue = *secondValue;
    *secondValue = temporaryVariable;
}

v.. fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    for (in. i = 0; i < sizeOfArray; i++)
    {
        c.. __ "Enter " __ i+1 __ " element: ";
        cin >> arrayToFill[i];
    }
    system("cls");
}

v.. printArrayValues(in. arrayToPrint[], in. sizeOfArray)
{
    for (in. i = 0; i < sizeOfArray; i++)
    {
        c.. __ "Array[" __ i __ "] = " __ arrayToPrint[i] __ e..
    }
    c.. __ e..
}

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    for (in. i = 0; i < sizeOfArray-1; i++)
    {
        for (in. j = 0; j < sizeOfArray-1; j++)
        {
            if (orderOfSequence == 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
            else if (orderOfSequence == 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
        }
    }
    printArrayValues(arrayToSort, sizeOfArray);
}


