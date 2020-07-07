? <string>
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
    in. i = 0;
    auto ai = 0; // идентично

    float f = 1 + 2;
    auto af = 1 + 2; // идентично

    in. j = 0, k = 0.0;
    auto aj = 0, ak = 0.0; // идентично

    std::string s = "hello";
    auto as = "hello"; // идентично

    std::vector<bo..> v;
    std::vector<bo..>::iterator vi = v.begin(); // мгого букв
    auto avi = v.begin(); // мало букв

    auto a;

    auto z1 = foo(1, 2);
    auto z2 = bar(1, 2); // идентично
    auto z3 = baz(1, 2); // идентично
    auto z4 = boo(1, 2); // идентично

    r_ 0;
}
