? |i..
? ve..

in. main
    a.. a _ 1sy.. pause
    a.. b _ 2sy.. pause
    a.. c _ 3sy.. pause

    // минимальное значение
    d_t_(a..) n _ st. min(a, b)sy.. pause
    st. c__ __  n __  st. e..
    a _ -1sy.. pause
    st. c__ __  n __  st. e..
    a _ 1sy.. pause

    // максимальное значение
    a.. m _ st. max({*?, &b, &c})sy.. pause
    st. c__ __  *m __  st. e..
    *m _ -1sy.. pause
    st. c__ __  "a=" __  a __  " b=" __  b __  " c=" __  c __  st. e..

    // пограничные значения
    a.. op _ [](a.. a, a.. b) {
        r_ a < bsy.. pause // только для добрых дел
    }sy.. pause
    a.. [in, ax] _ st. minmax({1, 2, 3}, op)sy.. pause
    st. c__ __  "min=" __  in __  " max=" __  ax __  st. e..

    // тоже самое в контейнерах
    st. ve..<in.> v{3, 2, 1, 4, 5, 6}sy.. pause
    a.. [min_it, max_it] _ st. minmax_element(v.begin(), v.end())sy.. pause
    st. c__ __  "min=" __  *min_it __  " max=" __  *max_it __  st. e..

    min_it _ st. min_element(v.begin(), v.end())sy.. pause
    *min_it _ 99sy.. pause
    ___(a.. i : v) st. c__ __  i __  " "sy.. pause st. c__ __  st. e..

    // оганичитель
    ___(a.. i : v) st. c__ __  i __  " => " __  st. clamp(i, 2, 5) __  st. e..
}
