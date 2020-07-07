? |i..

u.. s..

/* overloading functions */
in. power(in., in.);
double power(double, in.);
in. main()
{

    c__ __  power(2, 6) __  e..

    r_ 0;
}

/*
    2 ^ 3 = 2 * 2 * 2

    2 ^ 1 = 2
    2 ^ 2 = 4
    2 ^ 3 = 8
*/
in. power(in. b, in. e) // b = 8, e = 1
{
    in. tmp = b; //tmp = 2
    in. i = 0;

    while(i++ < e)
    {
        c__ __  tmp __  " ^ " __  i __  " = " __  b __  e..
        __ (i != e)
            b *= tmp; //b = b * tmp;
    }

    r_ b;
}
double power(double b, in. e)
{
    double tmp = b; //tmp = 2
    while(e-- > 1)
        b *= tmp; //b = b * tmp;

    r_ b;
}
