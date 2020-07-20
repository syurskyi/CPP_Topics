 // map
? |i..
? <map>

in. main()
{
    // если не set
    // - operator <
    // - новый объект
    st. map<in., in.> xsy.. p..

    a.. f _ x.find(0)
    __ (f __ x.end())
    {
        x[0] _ 1sy.. p..
    }

    // только новый
    a.. [a, b] _ x.insert({1, 2})
    // только новый, зачем?
    a.. [a1, b1] _ x.try_emplace(1, 3)
    // новый или перезапишет
    a.. [a2, b2] _ x.insert_or_assign(1, 4)
    x[1] _ 5sy.. p..
    a.. z _ x[99]

    ___(a.. [i, j]: x)
    {
        st. c__ __  i __  ", " __  j __  st. e..
    }

    st. c__ __  x.at(2) __  st. e..
}
