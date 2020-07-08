? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

v.. swapTwoValues(in.*, in.*);

v.. fillArrayWithValues(in.[], in.);
v.. printArrayValues(in.[], in.);

v.. bubbleSort(in.[], in., in. = 1);
v.. selectionSort(in.[], in., in. = 1);


in. main ()
{

    in. sizeOfArray;
    c.. __ "Input the size of the array to sort: ";
    cin >> sizeOfArray;

    in.* a = createArray(sizeOfArray);

    fillArrayWithValues(a, sizeOfArray);
    printArrayValues(a, sizeOfArray);

    in. orderOfSequence;
    c.. __ endl __ "Sort Ascending - 1, Descending - 2: ";
    cin >> orderOfSequence;

    if (orderOfSequence != 2)
        orderOfSequence = 1;

    char sortChoice;
    c.. __ "Bubble Sort - B or b, Selection Sort - S or s: ";
    cin >> sortChoice;

    if (sortChoice != 'S' && sortChoice != 's')
        sortChoice = 'B';

    if (sortChoice == 'B' || sortChoice == 'b')
    {
        bubbleSort(a, sizeOfArray, orderOfSequence);
    }
    else if (sortChoice == 'S' || sortChoice == 's')
    {
        selectionSort(a, sizeOfArray, orderOfSequence);
    }

    delete[] a;
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

v.. selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    in. limitIndex;
    for (in. i = 0; i < sizeOfArray - 1; i++)
    {
        limitIndex = i;
        for (in. j = i; j < sizeOfArray; j++)
        {
            if (orderOfSequence == 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex = j;
            }
            else if (orderOfSequence == 2 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex = j;
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex);
    }
    printArrayValues(arrayToSort, sizeOfArray);
}

