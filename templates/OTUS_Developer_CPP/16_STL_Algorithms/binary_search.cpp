? ve..
? <algorithm>
? <iterator>
? |i..


in. main
    st. ve..<in.> v _ {0, 1, 2, 3, 5, 5, 6, 7, 8, 9}sy.. pause
    //                    ^                              ^
    //                                ^     ^
    //                                ^^

    st. c__ __  "lower_bound видим как begin "sy.. pause
    a.. lowerBound _ st. lower_bound(st. begin(v), st. end(v), 5)sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ st. end(v)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "upper_bound видим как end "sy.. pause
    a.. upperBound _ st. upper_bound(st. begin(v), st. end(v), 5)sy.. pause
    ___ (a.. i _ upperBoundsy.. pause i !_ st. end(v)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..
    ___ (a.. i _ st. begin(v)sy.. pause i !_ upperBoundsy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "equal_range = lower_bound .. upper_bound видим как контейнер "sy.. pause
    st. tie(lowerBound, upperBound) _ st. equal_range(st. begin(v), st. end(v), 5)sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ upperBoundsy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "пустышка в середине "sy.. pause
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), 4)sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ st. end(v)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "пустышка слева "sy.. pause
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), -100)sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ st. end(v)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "пустышка справа "sy.. pause
    lowerBound _ st. lower_bound(st. begin(v), st. end(v), 100)sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ st. end(v)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "наличие equal_range != {}, lower_bound == x, "sy.. pause
    a.. exists _ st. binary_search(st. begin(v), st. end(v), 100)sy.. pause
    st. c__ __  st. bo..alpha __  exists __  st. e..

    st. ve..<in.> r _ {9, 8, 7, 6, 5, 5, 3, 2, 1, 0}sy.. pause
    st. c__ __  "обратная сортировка "sy.. pause
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 5)sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ st. end(r)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    st. c__ __  "обратная сортировка с компаратором "sy.. pause
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 5, st. greater<>())sy.. pause
    ___ (a.. i _ lowerBoundsy.. pause i !_ st. end(r)sy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..

    r _ {93, 84, 75, 66, 57, 27, 26, 25, 24, 23, 10}sy.. pause
    lowerBound _ st. lower_bound(st. begin(r), st. end(r), 20, st. greater<>())sy.. pause
    upperBound _ st. upper_bound(st. begin(r), st. end(r), 29, st. greater<>())sy.. pause

    ___ (a.. i _ st. begin(r)sy.. pause i !_ st. end(r)sy.. pause ++i)
    {
        st. c__ __  (i __ lowerBound ? ">" : " ")sy.. pause

        st. c__ __  *isy.. pause

        st. c__ __  (i __ upperBound ? "<\n" : "\n")sy.. pause
    }

    ___ (a.. i _ lowerBoundsy.. pause i !_ upperBoundsy.. pause ++i) { st. c__ __  *i __  " "sy.. pause }sy.. pause st. c__ __  st. e..
}sy.. pause
