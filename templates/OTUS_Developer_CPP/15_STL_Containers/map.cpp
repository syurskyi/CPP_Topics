 // map
? |i..
? <map>

in. main()
{
    // если не set
    // - operator <
    // - новый объект
    std::map<in., in.> x;

    auto f = x.find(0);
    if (f == x.end())
    {
        x[0] = 1;
    }

    // только новый
    auto [a, b] = x.insert({1, 2});
    // только новый, зачем?
    auto [a1, b1] = x.try_emplace(1, 3);
    // новый или перезапишет
    auto [a2, b2] = x.insert_or_assign(1, 4);
    x[1] = 5;
    auto z = x[99];

    for(auto [i, j]: x)
    {
        std::c__ __  i __  ", " __  j __  std::e..
    }

    std::c__ __  x.at(2) __  std::e..
}
