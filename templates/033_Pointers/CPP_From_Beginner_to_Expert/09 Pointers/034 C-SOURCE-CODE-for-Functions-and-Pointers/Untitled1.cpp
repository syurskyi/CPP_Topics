? |i..

u.. s..

//void multiplyBy(int &, int);
in. * multiplyBy(in. *, in.);
v.. multiplyArrayBy(in. *, in., in.);

in. main()
{
    /*
    int a = 10;

    int *b = multiplyBy(&a, 5);

    *b = 999;
    cout << a << endl;
    cout << *b << endl;
    */

    in. array[10];
    //cout << sizeof(array)/sizeof(array[0]) << endl;

    for (in. i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        array[i] = i;
     //   cout << "array [" << i << "] = " << array[i] << endl;
    }
    multiplyArrayBy(&array[0], 5, sizeof(array)/sizeof(array[0])); // &array[0] == array
    for (in. i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
       c.. __ "array [" __ i __ "] = " __ array[i] __ e..
    }

    r_ _
}
in. * multiplyBy(in. * var, in. amount)
{
    //int * var = &a;
    *var =  *var * amount;

    return var;
}
v.. multiplyArrayBy(in. *array, in. amount, in. sizeOfArray)
{
    while(sizeOfArray--)
        array[sizeOfArray] *= amount;
}
