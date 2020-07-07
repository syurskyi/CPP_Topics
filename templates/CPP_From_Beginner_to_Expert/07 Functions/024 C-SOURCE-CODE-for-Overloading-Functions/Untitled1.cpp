? |i..

u.. s..

/* overloading functions */
in. power(in., in.);
d.. power(d.., in.);
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
    in. tmp _ b; //tmp = 2
    in. i _ 0;

    while(i++ < e)
    {
        c__ __  tmp __  " ^ " __  i __  " = " __  b __  e..
        __ (i !_ e)
            b *_ tmp; //b = b * tmp;
    }

    r_ b;
}
d.. power(d.. b, in. e)
{
    d.. tmp _ b; //tmp = 2
    while(e-- > 1)
        b *_ tmp; //b = b * tmp;

    r_ b;
}
