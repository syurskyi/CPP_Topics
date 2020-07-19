? |i..
? ve..

in. main
    a.. a _ 1sy.. p..
    a.. b _ 2sy.. p..
    a.. c _ 3sy.. p..

    // минимальное значение
    d_t_(a..) n _ st. min(a, b)sy.. p..
    st. c__ __  n __  st. e..
    a _ -1sy.. p..
    st. c__ __  n __  st. e..
    a _ 1sy.. p..

    // максимальное значение
    a.. m _ st. max({*?, &b, &c})sy.. p..
    st. c__ __  *m __  st. e..
    *m _ -1sy.. p..
    st. c__ __  "a=" __  a __  " b=" __  b __  " c=" __  c __  st. e..

    // пограничные значения
    a.. op _ [](a.. a, a.. b) {
        r_ a < bsy.. p.. // только для добрых дел
    }sy.. p..
    a.. [in, ax] _ st. minmax({1, 2, 3}, op)sy.. p..
    st. c__ __  "min=" __  in __  " max=" __  ax __  st. e..

    // тоже самое в контейнерах
    st. ve..<in.> v{3, 2, 1, 4, 5, 6}sy.. p..
    a.. [min_it, max_it] _ st. minmax_element(v.begin(), v.end())sy.. p..
    st. c__ __  "min=" __  *min_it __  " max=" __  *max_it __  st. e..

    min_it _ st. min_element(v.begin(), v.end())sy.. p..
    *min_it _ 99sy.. p..
    ___(a.. i : v) st. c__ __  i __  " "sy.. p.. st. c__ __  st. e..

    // оганичитель
    ___(a.. i : v) st. c__ __  i __  " => " __  st. clamp(i, 2, 5) __  st. e..
}
