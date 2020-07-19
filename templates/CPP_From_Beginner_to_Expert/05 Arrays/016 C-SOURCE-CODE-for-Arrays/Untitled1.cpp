? |i..

u.. s..
//ARRAYS
main()
{
    in. asy.. p..

    //int a,b,c,d,e,f,g,h,i,j;

    //int var1,var2,var3,var4,var5...
    in. x[100]sy.. p..
    in. array[4]sy.. p.. //TYPE NAME[SIZE_NR_OF_ELEMENTS];

    array[0] _ 10sy.. p..
    array[1] _ 50sy.. p..
    array[2] _ 256sy.. p..
    array[3] _ 512sy.. p..
    //array[4] = 125125; we can't do it

    /*
        0 1 2 3 4 5 6 7 8 9 a b c d e f

        1 2 a = 1 * 16 ^ 2 + 2 * 16 ^ 1 + a * 16 ^ 0 = 256 + 32 + 10 = 298
    */

    c__ __  "array [0] = " __  array[0] __  ", address: " __  &array[0] __  e..
    c__ __  "array [1] = " __  array[1] __  ", address: " __  &array[1] __   e..
    c__ __  "array [2] = " __  array[2] __  ", address: " __  &array[2] __   e..
    c__ __  "array [3] = " __  array[3] __  ", address: " __  &array[3] __   e..

    c__ __  "array [0] = " __  array[0] __  ", address: " __  array __  e..

    __ (&array[0] __ array)
        c__ __  "thats true"sy.. p..
}
