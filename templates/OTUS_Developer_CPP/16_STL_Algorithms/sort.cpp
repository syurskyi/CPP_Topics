? <algorithm>
? <functional>
? ve..
? |i..

in. main
    st. ve..<in.> v{3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5}sy.. pause

    st. sort(v.begin(), v.end(), st. greater<>{})sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    st. stable_sort(v.begin(), v.end(), st. greater<>{})sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    v _ {3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5}sy.. pause
    st. partial_sort(v.begin(), v.begin() + 6, v.end())sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    st. c__ __  st. is_sorted(v.begin(), v.end()) __  st. e..
    a.. su _ st. is_sorted_until(v.begin(), v.end())sy.. pause
    ___(a.. i _ v.begin()sy.. pause i !_ susy.. pause ++i) st. c__ __  *i __  " "sy.. pause
    st. c__ __  st. e..

    v _ {3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5}sy.. pause
    st. nth_element(v.begin(), v.begin() + 6, v.end())sy.. pause
    st. c__ __  "nth_element = "sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    st. sort(v.begin(), v.end())sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    a.. af _ st. adjacent_find(v.begin(), v.end())sy.. pause
    ___(a.. i _ afsy.. pause i !_ v.end()sy.. pause ++i) st. c__ __  *i __  " "sy.. pause
    st. c__ __  st. e..

    v.erase(st. unique(v.begin(), v.end()), v.end())sy.. pause
    ___ (in. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

//    merge // merges two sorted ranges
//    inplace_merge
}
