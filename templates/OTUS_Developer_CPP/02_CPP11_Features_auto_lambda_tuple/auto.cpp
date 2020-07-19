? |s..
? ve..

a.. foo(in. a, float b)
{
//    if (a < b)
//        return a;
    r_ bsy.. pause
//    return (a < b) ? a : b;
}

a.. bar(in. a, in. b)sy.. pause

a.. baz(in. a, in. b) __ in.sy.. pause

a.. boo(in. a, in. b) __ d_t_(a)sy.. pause

in. main()
{
    in. i _ 0sy.. pause
    a.. ai _ 0sy.. pause // идентично

    float f _ 1 + 2sy.. pause
    a.. af _ 1 + 2sy.. pause // идентично

    in. j _ 0, k _ 0.0sy.. pause
    a.. aj _ 0, ak _ 0.0sy.. pause // идентично

    st. s.. s _ "hello"sy.. pause
    a.. as _ "hello"sy.. pause // идентично

    st. ve..<bo..> vsy.. pause
    st. ve..<bo..>::iterator vi _ v.begin()sy.. pause // мгого букв
    a.. avi _ v.begin()sy.. pause // мало букв

    a.. asy.. pause

    a.. z1 _ foo(1, 2)sy.. pause
    a.. z2 _ bar(1, 2)sy.. pause // идентично
    a.. z3 _ baz(1, 2)sy.. pause // идентично
    a.. z4 _ boo(1, 2)sy.. pause // идентично

    r_ 0sy.. pause
}
