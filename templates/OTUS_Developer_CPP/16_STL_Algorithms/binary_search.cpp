? ve..
? <algorithm>
? <iterator>
? |i..


in. main
    st. ve..<in.> v _ {0, 1, 2, 3, 5, 5, 6, 7, 8, 9}sy.. p..
    //                    ^                              ^
    //                                ^     ^
    //                                ^^

    st. c__ __  "lower_bound видим как begin "sy.. p..
    a.. lowerBound _ st. lower_bound(st. begin(v), st. end(v), 5)sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "upper_bound видим как end "sy.. p..
    a.. upperBound _ st. upper_bound(st. begin(v), st. end(v), 5)sy.. p..
    ___ (a.. i _ upperBoundsy.. p.. i !_ st. end(v)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..
    ___ (a.. i _ st. begin(v)sy.. p.. i !_ upperBoundsy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "equal_range = lower_bound .. upper_bound видим как контейнер "sy.. p..
    st. tie(lowerBound, upperBound) _ st. equal_range(st. begin(v), st. end(v), 5)sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ upperBoundsy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "пустышка в середине "sy.. p..
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), 4)sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "пустышка слева "sy.. p..
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), -100)sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "пустышка справа "sy.. p..
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), 100)sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(v)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "наличие equal_range != {}, lower_bound == x, "sy.. p..
    a.. exists _ st. binary_search(st. begin(v), st. end(v), 100)sy.. p..
    st. c__ __  st. bo..alpha __  exists __  st. e..

    st. ve..<in.> r _ {9, 8, 7, 6, 5, 5, 3, 2, 1, 0}sy.. p..
    st. c__ __  "обратная сортировка "sy.. p..
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 5)sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(r)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    st. c__ __  "обратная сортировка с компаратором "sy.. p..
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 5, st. greater<>())sy.. p..
    ___ (a.. i _ lowerBoundsy.. p.. i !_ st. end(r)sy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..

    r _ {93, 84, 75, 66, 57, 27, 26, 25, 24, 23, 10}sy.. p..
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 20, st. greater<>())sy.. p..
    upperBound _ st. upper_bound(st. begin(r), st. end(r), 29, st. greater<>())sy.. p..

    ___ (a.. i _ st. begin(r)sy.. p.. i !_ st. end(r)sy.. p.. ++i)
    {
        st. c__ __  (i __ lowerBound ? ">" : " ")sy.. p..

        st. c__ __  *isy.. p..

        st. c__ __  (i __ upperBound ? "<\n" : "\n")sy.. p..
    }

    ___ (a.. i _ lowerBoundsy.. p.. i !_ upperBoundsy.. p.. ++i) { st. c__ __  *i __  " "sy.. p.. }sy.. p.. st. c__ __  st. e..
}sy.. p..
