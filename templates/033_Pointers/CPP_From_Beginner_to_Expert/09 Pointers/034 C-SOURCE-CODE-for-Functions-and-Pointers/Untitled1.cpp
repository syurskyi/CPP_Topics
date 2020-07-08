? |i..

u.. s..

//void multiplyBy(int &, int);
in. * multiplyBy(in. *, in.)
v.. multiplyArrayBy(in. *, in., in.)

in. main()
{
    /*
    int a = 10;

    int *b = multiplyBy(&a, 5);

    *b = 999;
    cout << a << endl;
    cout << *b << endl;
    */

    in. array[10]
    //cout << sizeof(array)/sizeof(array[0]) << endl;

    ___ (in. i _ 0 i < s_o_(array)/s_o_(array[0]) ###)
    {
        array[i] _ i
     //   cout << "array [" << i << "] = " << array[i] << endl;
    }
    multiplyArrayBy(&array[0], 5, s_o_(array)/s_o_(array[0])) // &array[0] == array
    ___ (in. i _ 0 i < s_o_(array)/s_o_(array[0]) ###)
    {
       c.. __ "array [" __ i __ "] = " __ array[i] __ e..
    }

    r_ _
}
in. * multiplyBy(in. * var, in. amount)
{
    //int * var = &a;
    *var _  *var * amount

    r_ var
}
v.. multiplyArrayBy(in. *array, in. amount, in. sizeOfArray)
{
    w___(sizeOfArray--)
        array[sizeOfArray] *_ amount
}
