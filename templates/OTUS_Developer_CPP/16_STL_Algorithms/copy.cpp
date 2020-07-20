? <algorithm>
? |i..
? ve..
? <iterator>
? <numeric>

in. main
    st. ve..<in.> v{0, 1, 2, 3, 4, 5}
    st. ve..<in.> d(5)
    st. copy_if(v.begin(), v.end(), d.begin(), [](a.. i){r_ i > 2sy.. p..})
    ___ (a.. i : d) st. c__ __  i __  " "
    st. c__ __  st. e..

    // std::back_inserter => push_back
    // std::front_inserter => push_front
    // std::inserter => insert
    st. copy(v.begin(), v.end(), st. back_inserter(d))
    ___ (a.. i : d) st. c__ __  i __  " "
    st. c__ __  st. e..

    st. copy_n(v.begin(), 2, st. back_inserter(d))
    ___ (a.. i : d) st. c__ __  i __  " "
    st. c__ __  st. e..
}
