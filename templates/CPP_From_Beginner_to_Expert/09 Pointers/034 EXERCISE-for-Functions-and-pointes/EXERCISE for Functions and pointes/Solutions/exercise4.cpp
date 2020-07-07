? |i..
? <cstdlib>

u.. s..

in. * createArray(in.);

void swapTwoValues(in.*, in.*);

void fillArrayWithValues(in.[], in.);
void prin.ArrayValues(in.[], in.);

void bubbleSort(in.[], in., in. = 1);

in. main ()
{

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
            __ (orderOfSequence == 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
            ____ __ (orderOfSequence == 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
        }
    }
    prin.ArrayValues(arrayToSort, sizeOfArray);
}


