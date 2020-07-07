? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

void swapTwoValues(in.*, in.*);

void fillArrayWithValues(in.[], in.);
void prin.ArrayValues(in.[], in.);

void bubbleSort(in.[], in., in. _ 1);
void selectionSort(in.[], in., in. _ 1);


in. main ()
{

    in. sizeOfArray;
    c__ __  "Input the size of the array to sort: ";
    c__ __ sizeOfArray;

    in.* a _ createArray(sizeOfArray);

    fillArrayWithValues(a, sizeOfArray);
    prin.ArrayValues(a, sizeOfArray);

    in. orderOfSequence;
    c__ __  endl __  "Sort Ascending - 1, Descending - 2: ";
    c__ __ orderOfSequence;

    __ (orderOfSequence !_ 2)
        orderOfSequence _ 1;

    c.. sortChoice;
    c__ __  "Bubble Sort - B or b, Selection Sort - S or s: ";
    c__ __ sortChoice;

    __ (sortChoice !_ 'S' && sortChoice !_ 's')
        sortChoice _ 'B';

    __ (sortChoice __ 'B' || sortChoice __ 'b')
    {
        bubbleSort(a, sizeOfArray, orderOfSequence);
    }
    ____ __ (sortChoice __ 'S' || sortChoice __ 's')
    {
        selectionSort(a, sizeOfArray, orderOfSequence);
    }

    delete[] a;
    r_ 0;
}

in. * createArray(in. sizeOfArray)
{
    in.* newArray _ new in.[sizeOfArray];

    r_ newArray;
}

void swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable;

    temporaryVariable _ *firstValue;
    *firstValue _ *secondValue;
    *secondValue _ temporaryVariable;
}

void fillArrayWithValues(in. arrayToFill[], in. sizeOfArray)
{
    for (in. i _ 0; i < sizeOfArray; i++)
    {
        c__ __  "Enter " __  i+1 __  " element: ";
        c__ __ arrayToFill[i];
    }
    system("cls");
}

void prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    for (in. i _ 0; i < sizeOfArray; i++)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}

void bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    for (in. i _ 0; i < sizeOfArray-1; i++)
    {
        for (in. j _ 0; j < sizeOfArray-1; j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] < arrayToSort[j+1])
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
    for (in. i _ 0; i < sizeOfArray - 1; i++)
    {
        limitIndex _ i;
        for (in. j _ i; j < sizeOfArray; j++)
        {
            __ (orderOfSequence __ 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex _ j;
            }
            ____ __ (orderOfSequence __ 2 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex _ j;
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex);
    }
    prin.ArrayValues(arrayToSort, sizeOfArray);
}

