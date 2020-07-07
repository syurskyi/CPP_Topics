? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

void swapTwoValues(in.*, in.*);

void fillArrayWithValues(in.[], in.);
void prin.ArrayValues(in.[], in.);

void bubbleSort(in.[], in., in. = 1);
void selectionSort(in.[], in., in. = 1);


in. main ()
{

    in. sizeOfArray;
    c__ __  "Input the size of the array to sort: ";
    c__ >> sizeOfArray;

    in.* a = createArray(sizeOfArray);

    fillArrayWithValues(a, sizeOfArray);
    prin.ArrayValues(a, sizeOfArray);

    in. orderOfSequence;
    c__ __  endl __  "Sort Ascending - 1, Descending - 2: ";
    c__ >> orderOfSequence;

    if (orderOfSequence != 2)
        orderOfSequence = 1;

    char sortChoice;
    c__ __  "Bubble Sort - B or b, Selection Sort - S or s: ";
    c__ >> sortChoice;

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
    r_ 0;
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray = new in.[sizeOfArray];

    r_ newArray;
}

void swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable;

    temporaryVariable = *firstValue;
    *firstValue = *secondValue;
    *secondValue = temporaryVariable;
}

void fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    for (in. i = 0; i < sizeOfArray; i++)
    {
        c__ __  "Enter " __  i+1 __  " element: ";
        c__ >> arrayToFill[i];
    }
    system("cls");
}

void prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    for (in. i = 0; i < sizeOfArray; i++)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}

void bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
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
    prin.ArrayValues(arrayToSort, sizeOfArray);
}

void selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
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
    prin.ArrayValues(arrayToSort, sizeOfArray);
}

