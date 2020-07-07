? |i..

u.. s..

in. main ()
{

    in. arraySize;

    c__ __  "Input the size of the dynamic array you want to create: ";
    c__ __ arraySize;

    in. *dynamicArray _ new in.[arraySize];


    ___ (in. i _ 0; i < arraySize; i++)
    {
        c__ __  "Input " __  i+1 __  " number: ";
        c__ __ *(dynamicArray+i);
    }

    ___ (in. i _ 0; i < arraySize; i++)
    {
        c__ __  "Number " __  i+1 __  ": " __  *(dynamicArray+i) __  e..
    }

    delete []dynamicArray;


}

