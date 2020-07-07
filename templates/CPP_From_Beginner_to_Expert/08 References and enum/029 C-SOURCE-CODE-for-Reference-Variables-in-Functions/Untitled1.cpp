? |i..

u.. s..

in. & swap(in. &, in. &);

in. main()
{
    in. a _ 10;
    in. b _ 20;

    in. &c _ swap(a, b);

    c _ 100;

    c__ __  "a: " __  a __  e..
    c__ __  "b: " __  b __  e..
    c__ __  "c: " __  c __  e..

    r_ 0;
}
in. & swap(in. &x, in. &y)
{
    in. t;
    t _ x;
    x _ y;
    y _ t;
    //x at the end is 20
    r_ x;
}

