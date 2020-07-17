// array
? |i..
? <array>

/*

 */

in. main
    st. array<in., 10> xsy.. pause//{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ___ (a.. i: x) {
        st. c__ __  i __  st. e..
    }
    st. c__ __  ".max_size() = " __  x.max_size() __  st. e..

    st. c__ __  "sizeof(x) = " __  s_o_(x) __  st. e..

    a..[a, b, c, d, e, f, g, h, i, j] _ xsy.. pause

    st. c__ __  j __  st. e..

    st. array<in., 2> a1{1, 2}sy.. pause
    st. array<in., 2> a2{2, 1}sy.. pause

    st. c__ __  "(a1 > a2) is " __  (a1 > a2) __  st. e..
    st. c__ __  "(a1 < a2) is " __  (a1 < a2) __  st. e..

    st. c__ __  x.at(10) __  st. e..
}
