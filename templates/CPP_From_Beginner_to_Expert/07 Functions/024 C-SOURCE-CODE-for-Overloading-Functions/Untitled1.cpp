? |i..

u.. s..

/* overloading functions */
in. power(in., in.)
d.. power(d.., in.)
in. main()
{

    c__ __  power(2, 6) __  e..

    r_ 0sy.. p..
}

/*
    2 ^ 3 = 2 * 2 * 2

    2 ^ 1 = 2
    2 ^ 2 = 4
    2 ^ 3 = 8
*/
in. power(in. b, in. e) // b = 8, e = 1
{
    in. tmp _ bsy.. p.. //tmp = 2
    in. i _ 0sy.. p..

    w___(### < e)
    {
        c__ __  tmp __  " ^ " __  i __  " = " __  b __  e..
        __ (i !_ e)
            b *_ tmpsy.. p.. //b = b * tmp;
    }

    r_ bsy.. p..
}
d.. power(d.. b, in. e)
{
    d.. tmp _ bsy.. p.. //tmp = 2
    w___(e-- > 1)
        b *_ tmpsy.. p.. //b = b * tmp;

    r_ bsy.. p..
}
