 // map
? |i..
? <map>

in. main()
{
    // если не set
    // - operator <
    // - новый объект
    std::map<in., in.> x;

    auto f _ x.find(0);
    __ (f __ x.end())
    {
        x[0] _ 1;
    }

    // только новый
    auto [a, b] _ x.insert({1, 2});
    // только новый, зачем?
    auto [a1, b1] _ x.try_emplace(1, 3);
    // новый или перезапишет
    auto [a2, b2] _ x.insert_or_assign(1, 4);
    x[1] _ 5;
    auto z _ x[99];

    ___(auto [i, j]: x)
    {
        std::c__ __  i __  ", " __  j __  std::e..
    }

    std::c__ __  x.at(2) __  std::e..
}
