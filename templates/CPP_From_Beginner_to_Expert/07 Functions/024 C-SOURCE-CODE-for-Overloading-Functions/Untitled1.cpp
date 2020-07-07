? |i..

u.. s..

/* overloading functions */
in. power(in., in.)sy.. pause
d.. power(d.., in.)sy.. pause
in. main()
{

    c__ __  power(2, 6) __  e..

    r_ 0sy.. pause
}

/*
    2 ^ 3 = 2 * 2 * 2

    2 ^ 1 = 2
    2 ^ 2 = 4
    2 ^ 3 = 8
*/
in. power(in. b, in. e) // b = 8, e = 1
{
    in. tmp _ bsy.. pause //tmp = 2
    in. i _ 0sy.. pause

    w___(i++ < e)
    {
        c__ __  tmp __  " ^ " __  i __  " = " __  b __  e..
        __ (i !_ e)
            b *_ tmpsy.. pause //b = b * tmp;
    }

    r_ bsy.. pause
}
d.. power(d.. b, in. e)
{
    d.. tmp _ bsy.. pause //tmp = 2
    w___(e-- > 1)
        b *_ tmpsy.. pause //b = b * tmp;

    r_ bsy.. pause
}
