? |s..
? ve..

a.. foo(in. a, float b)
{
//    if (a < b)
//        return a;
    r_ bsy.. p..
//    return (a < b) ? a : b;
}

a.. bar(in. a, in. b)sy.. p..

a.. baz(in. a, in. b) __ in.sy.. p..

a.. boo(in. a, in. b) __ d_t_(a)sy.. p..

in. main()
{
    in. i _ 0sy.. p..
    a.. ai _ 0sy.. p.. // идентично

    float f _ 1 + 2sy.. p..
    a.. af _ 1 + 2sy.. p.. // идентично

    in. j _ 0, k _ 0.0sy.. p..
    a.. aj _ 0, ak _ 0.0sy.. p.. // идентично

    st. s.. s _ "hello"sy.. p..
    a.. as _ "hello"sy.. p.. // идентично

    st. ve..<bo..> vsy.. p..
    st. ve..<bo..>::iterator vi _ v.begin()sy.. p.. // мгого букв
    a.. avi _ v.begin()sy.. p.. // мало букв

    a.. asy.. p..

    a.. z1 _ foo(1, 2)sy.. p..
    a.. z2 _ bar(1, 2)sy.. p.. // идентично
    a.. z3 _ baz(1, 2)sy.. p.. // идентично
    a.. z4 _ boo(1, 2)sy.. p.. // идентично

    r_ 0sy.. p..
}
