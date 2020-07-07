? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

v.. swapTwoValues(in.*, in.*);

v.. prin.ArrayValues(in.[], in.);

v.. bubbleSort(in.[], in., in. _ 1);
v.. selectionSort(in.[], in., in. _ 1);


in. main ()
{

    in. sizeOfArray;
    c__ __  "Input the size of the array to sort: ";
    c__ __ sizeOfArray;

    in.* a _ createArray(sizeOfArray);

    prin.ArrayValues(a, sizeOfArray);

    in. orderOfSequence;
    c__ __  endl __  "Sort Ascending - 1, Descending - 2: ";
    c__ __ orderOfSequence;

    __ (orderOfSequence !_ 2)
        orderOfSequence _ 1;

    c.. sortChoice;
    c__ __  "Bubble Sort - B or b, Selection Sort - S or s: ";
    c__ __ sortChoice;

    __ (sortChoice !_ 'S' || sortChoice !_ 's')
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

    ___ (in. i _ 0; i < sizeOfArray; i++)
    {
        newArray[i] _ rand()%1500;
    }

    r_ newArray;
}

v.. swapTwoValues(in.* firstValue, in.* secondValue)
{
    in. temporaryVariable;

    temporaryVariable _ *firstValue;
    *firstValue _ *secondValue;
    *secondValue _ temporaryVariable;
}

v.. prin.ArrayValues(in. arrayToPrin.[], in. sizeOfArray)
{
    ___ (in. i _ 0; i < sizeOfArray; i++)
    {
        c__ __  "Array[" __  i __  "] = " __  arrayToPrin.[i] __  e..
    }
    c__ __  e..
}

v.. bubbleSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    ___ (in. i _ 0; i < sizeOfArray-1; i++)
    {
        ___ (in. j _ 0; j < sizeOfArray-1; j++)
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

v.. selectionSort(in. arrayToSort[], in. sizeOfArray, in. orderOfSequence)
{
    in. limitIndex;
    ___ (in. i _ 0; i < sizeOfArray; i++)
    {
        limitIndex _ i;
        ___ (in. j _ i; j < sizeOfArray; j++)
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

