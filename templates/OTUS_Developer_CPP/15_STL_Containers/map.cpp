 // map
? |i..
? <map>

in. main()
{
    // если не set
    // - operator <
    // - новый объект
    st. map<in., in.> xsy.. pause

    a.. f _ x.find(0)sy.. pause
    __ (f __ x.end())
    {
        x[0] _ 1sy.. pause
    }

    // только новый
    a.. [a, b] _ x.insert({1, 2})sy.. pause
    // только новый, зачем?
    a.. [a1, b1] _ x.try_emplace(1, 3)sy.. pause
    // новый или перезапишет
    a.. [a2, b2] _ x.insert_or_assign(1, 4)sy.. pause
    x[1] _ 5sy.. pause
    a.. z _ x[99]sy.. pause

    ___(a.. [i, j]: x)
    {
        st. c__ __  i __  ", " __  j __  st. e..
    }

    st. c__ __  x.at(2) __  st. e..
}
