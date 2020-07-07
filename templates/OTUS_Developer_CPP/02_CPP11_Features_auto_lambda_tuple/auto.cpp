? |s..
? <vector>

auto foo(in. a, float b)
{
//    if (a < b)
//        return a;
    r_ b;
//    return (a < b) ? a : b;
}

auto bar(in. a, in. b);

auto baz(in. a, in. b) -> in.;

auto boo(in. a, in. b) -> decltype(a);

in. main()
{
    in. i _ 0;
    auto ai _ 0; // идентично

    float f _ 1 + 2;
    auto af _ 1 + 2; // идентично

    in. j _ 0, k _ 0.0;
    auto aj _ 0, ak _ 0.0; // идентично

    std::s.. s _ "hello";
    auto as _ "hello"; // идентично

    std::vector<bo..> v;
    std::vector<bo..>::iterator vi _ v.begin(); // мгого букв
    auto avi _ v.begin(); // мало букв

    auto a;

    auto z1 _ foo(1, 2);
    auto z2 _ bar(1, 2); // идентично
    auto z3 _ baz(1, 2); // идентично
    auto z4 _ boo(1, 2); // идентично

    r_ 0;
}
