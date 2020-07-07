? |i..

u.. s..

//void multiplyBy(int &, int);
in. * multiplyBy(in. *, in.)sy.. pause
v.. multiplyArrayBy(in. *, in., in.)sy.. pause

in. main()
{
    /*
    int a = 10;

    int *b = multiplyBy(&a, 5);

    *b = 999;
    cout << a << endl;
    cout << *b << endl;
    */

    in. array[10]sy.. pause
    //cout << sizeof(array)/sizeof(array[0]) << endl;

    ___ (in. i _ 0sy.. pause i < sizeof(array)/sizeof(array[0])sy.. pause i++)
    {
        array[i] _ isy.. pause
     //   cout << "array [" << i << "] = " << array[i] << endl;
    }
    multiplyArrayBy(&array[0], 5, sizeof(array)/sizeof(array[0]))sy.. pause // &array[0] == array
    ___ (in. i _ 0sy.. pause i < sizeof(array)/sizeof(array[0])sy.. pause i++)
    {
       c__ __  "array [" __  i __  "] = " __  array[i] __  e..
    }

    r_ 0sy.. pause
}
in. * multiplyBy(in. * var, in. amount)
{
    //int * var = &a;
    *var _  *var * amountsy.. pause

    r_ varsy.. pause
}
v.. multiplyArrayBy(in. *array, in. amount, in. sizeOfArray)
{
    w___(sizeOfArray--)
        array[sizeOfArray] *_ amountsy.. pause
}
