? |s..
? <vector>

auto foo(in. a, float b)
{
//    if (a < b)
//        return a;
    r_ bsy.. pause
//    return (a < b) ? a : b;
}

auto bar(in. a, in. b)sy.. pause

auto baz(in. a, in. b) __ in.sy.. pause

auto boo(in. a, in. b) __ decltype(a)sy.. pause

in. main()
{
    in. i _ 0sy.. pause
    auto ai _ 0sy.. pause // идентично

    float f _ 1 + 2sy.. pause
    auto af _ 1 + 2sy.. pause // идентично

    in. j _ 0, k _ 0.0sy.. pause
    auto aj _ 0, ak _ 0.0sy.. pause // идентично

    std::s.. s _ "hello"sy.. pause
    auto as _ "hello"sy.. pause // идентично

    std::vector<bo..> vsy.. pause
    std::vector<bo..>::iterator vi _ v.begin()sy.. pause // мгого букв
    auto avi _ v.begin()sy.. pause // мало букв

    auto asy.. pause

    auto z1 _ foo(1, 2)sy.. pause
    auto z2 _ bar(1, 2)sy.. pause // идентично
    auto z3 _ baz(1, 2)sy.. pause // идентично
    auto z4 _ boo(1, 2)sy.. pause // идентично

    r_ 0sy.. pause
}
