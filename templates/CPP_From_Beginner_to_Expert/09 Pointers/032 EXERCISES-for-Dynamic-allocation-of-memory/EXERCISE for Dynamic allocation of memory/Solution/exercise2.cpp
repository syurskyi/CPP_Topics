? |i..

u.. s..

in. main ()
{

    in. arraySize;

    c__ __  "Input the size of the dynamic array you want to create: ";
    c__ >> arraySize;

    in. *dynamicArray = new in.[arraySize];


    for (in. i = 0; i < arraySize; i++)
    {
        c__ __  "Input " __  i+1 __  " number: ";
        c__ >> *(dynamicArray+i);
    }

    for (in. i = 0; i < arraySize; i++)
    {
        c__ __  "Number " __  i+1 __  ": " __  *(dynamicArray+i) __  e..
    }

    delete []dynamicArray;


}

