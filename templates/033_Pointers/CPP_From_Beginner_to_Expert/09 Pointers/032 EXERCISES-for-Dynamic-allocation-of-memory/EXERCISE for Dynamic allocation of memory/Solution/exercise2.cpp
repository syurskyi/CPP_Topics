? |i..

u.. s..

in. main ()
{

    in. arraySize

    c.. __ "Input the size of the dynamic array you want to create: "
    cin __ arraySize

    in. *dynamicArray _ n.. in.[arraySize]


    ___ (in. i _ 0 i < arraySize i++)
    {
        c.. __ "Input " __ i+1 __ " number: "
        cin __ *(dynamicArray+i)
    }

    ___ (in. i _ 0 i < arraySize i++)
    {
        c.. __ "Number " __ i+1 __ ": " __ *(dynamicArray+i) __ e..
    }

    delete []dynamicArray


}

