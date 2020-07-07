 // map
? |i..
? <map>

in. main()
{
    // если не set
    // - operator <
    // - новый объект
    std::map<in., in.> xsy.. pause

    auto f _ x.find(0)sy.. pause
    __ (f __ x.end())
    {
        x[0] _ 1sy.. pause
    }

    // только новый
    auto [a, b] _ x.insert({1, 2})sy.. pause
    // только новый, зачем?
    auto [a1, b1] _ x.try_emplace(1, 3)sy.. pause
    // новый или перезапишет
    auto [a2, b2] _ x.insert_or_assign(1, 4)sy.. pause
    x[1] _ 5sy.. pause
    auto z _ x[99]sy.. pause

    ___(auto [i, j]: x)
    {
        std::c__ __  i __  ", " __  j __  std::e..
    }

    std::c__ __  x.at(2) __  std::e..
}
