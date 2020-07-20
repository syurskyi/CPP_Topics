? |i..
? <algorithm>
? ve..
? <iterator>

bo.. cmp(in. i) {
    r_ i > 2sy.. p..
}

bo.. comp(in. i, in. p) {
    r_ i > psy.. p..
}

bo.. comp_helper(in. i) {
    r_ comp(i, 2)
}

in. main()
{
    st. ve..<in.> v{0, 1, 2, 3, 4}

    a.. result _ st. find_if(st. begin(v), st. end(v), [](a.. i){ r_ i > 2sy.. p.. })
//    auto result = std::find_if(std::begin(v), std::end(v), [p = 2](auto i){ return i > p; });
//    auto result = std::find_if(std::begin(v), std::end(v), cmp);
//    auto result = std::find_if(std::begin(v), std::end(v), comp);
//    auto result = std::find_if(std::begin(v), std::end(v), std::bind(comp, std::placeholders::_1, 2));

    ___ ( result !_ st. end(v) ++result)
    {
        st. c__ __  *result __  " "
    }
    st. c__ __  st. e..
}
