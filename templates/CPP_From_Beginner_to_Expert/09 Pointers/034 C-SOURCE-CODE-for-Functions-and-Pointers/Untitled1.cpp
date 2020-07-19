? |i..

u.. s..

//void multiplyBy(int &, int);
in. * multiplyBy(in. *, in.)sy.. p..
v.. multiplyArrayBy(in. *, in., in.)sy.. p..

in. main()
{
    /*
    int a = 10;

    int *b = multiplyBy(&a, 5);

    *b = 999;
    cout << a << endl;
    cout << *b << endl;
    */

    in. array[10]sy.. p..
    //cout << sizeof(array)/sizeof(array[0]) << endl;

    ___ (in. i _ 0sy.. p.. i < s_o_(array)/s_o_(array[0])sy.. p.. ###)
    {
        array[i] _ isy.. p..
     //   cout << "array [" << i << "] = " << array[i] << endl;
    }
    multiplyArrayBy(&array[0], 5, s_o_(array)/s_o_(array[0]))sy.. p.. // &array[0] == array
    ___ (in. i _ 0sy.. p.. i < s_o_(array)/s_o_(array[0])sy.. p.. ###)
    {
       c__ __  "array [" __  i __  "] = " __  array[i] __  e..
    }

    r_ 0sy.. p..
}
in. * multiplyBy(in. * var, in. amount)
{
    //int * var = &a;
    *var _  *var * amountsy.. p..

    r_ varsy.. p..
}
v.. multiplyArrayBy(in. *array, in. amount, in. sizeOfArray)
{
    w___(sizeOfArray--)
        array[sizeOfArray] *_ amountsy.. p..
}
