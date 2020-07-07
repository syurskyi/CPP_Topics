? |i..

u.. s..

in. & swap(in. &, in. &);

in. main()
{
    in. a = 10;
    in. b = 20;

    in. &c = swap(a, b);

    c = 100;

    c__ __  "a: " __  a __  e..
    c__ __  "b: " __  b __  e..
    c__ __  "c: " __  c __  e..

    r_ 0;
}
in. & swap(in. &x, in. &y)
{
    in. t;
    t = x;
    x = y;
    y = t;
    //x at the end is 20
    r_ x;
}

