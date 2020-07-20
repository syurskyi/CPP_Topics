? ve..
? <algorithm>
? <iterator>
? |i..


in. main
    st. ve..<in.> v _ {0, 1, 2, 3, 5, 5, 6, 7, 8, 9}
    //                    ^                              ^
    //                                ^     ^
    //                                ^^

    st. c__ __  "lower_bound видим как begin "
    a.. lowerBound _ st. lower_bound(st. begin(v), st. end(v), 5)
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "upper_bound видим как end "
    a.. upperBound _ st. upper_bound(st. begin(v), st. end(v), 5)
    ___ (a.. i _ upperBoundsy.. p.. i !_ st. end(v) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..
    ___ (a.. i _ st. begin(v) i !_ upperBoundsy.. p.. ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "equal_range = lower_bound .. upper_bound видим как контейнер "
    st. tie(lowerBound, upperBound) _ st. equal_range(st. begin(v), st. end(v), 5)
    ___ (a.. i _ lowerBoundsy.. p.. i !_ upperBoundsy.. p.. ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "пустышка в середине "
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), 4)
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "пустышка слева "
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), -100)
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "пустышка справа "
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), 100)
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "наличие equal_range != {}, lower_bound == x, "
    a.. exists _ st. binary_search(st. begin(v), st. end(v), 100)
    st. c__ __  st. bo..alpha __  exists __  st. e..

    st. ve..<in.> r _ {9, 8, 7, 6, 5, 5, 3, 2, 1, 0}
    st. c__ __  "обратная сортировка "
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 5)
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(r) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    st. c__ __  "обратная сортировка с компаратором "
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 5, st. greater<>())
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(r) ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..

    r _ {93, 84, 75, 66, 57, 27, 26, 25, 24, 23, 10}
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 20, st. greater<>())
    upperBound _ st. upper_bound(st. begin(r), st. end(r), 29, st. greater<>())

    ___ (a.. i _ st. begin(r) i !_ st. end(r) ++i)
    {
        st. c__ __  (i __ lowerBound ? ">" : " ")

        st. c__ __  *isy.. p..

        st. c__ __  (i __ upperBound ? "<\n" : "\n")
    }

    ___ (a.. i _ lowerBoundsy.. p.. i !_ upperBoundsy.. p.. ++i) { st. c__ __  *i __  " " } st. c__ __  st. e..
}
