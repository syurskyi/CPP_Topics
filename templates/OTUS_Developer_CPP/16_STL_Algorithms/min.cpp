? |i..
? ve..

in. main
    a.. a _ 1sy.. pause
    a.. b _ 2sy.. pause
    a.. c _ 3sy.. pause

    // минимальное значение
    decltype(a..) n _ std::min(a, b)sy.. pause
    std::c__ __  n __  std::e..
    a _ -1sy.. pause
    std::c__ __  n __  std::e..
    a _ 1sy.. pause

    // максимальное значение
    a.. m _ std::max({*?, &b, &c})sy.. pause
    std::c__ __  *m __  std::e..
    *m _ -1sy.. pause
    std::c__ __  "a=" __  a __  " b=" __  b __  " c=" __  c __  std::e..

    // пограничные значения
    a.. op _ [](a.. a, a.. b) {
        r_ a < bsy.. pause // только для добрых дел
    }sy.. pause
    a.. [in, ax] _ std::minmax({1, 2, 3}, op)sy.. pause
    std::c__ __  "min=" __  in __  " max=" __  ax __  std::e..

    // тоже самое в контейнерах
    std::vector<in.> v{3, 2, 1, 4, 5, 6}sy.. pause
    a.. [min_it, max_it] _ std::minmax_element(v.begin(), v.end())sy.. pause
    std::c__ __  "min=" __  *min_it __  " max=" __  *max_it __  std::e..

    min_it _ std::min_element(v.begin(), v.end())sy.. pause
    *min_it _ 99sy.. pause
    ___(a.. i : v) std::c__ __  i __  " "sy.. pause std::c__ __  std::e..

    // оганичитель
    ___(a.. i : v) std::c__ __  i __  " => " __  std::clamp(i, 2, 5) __  std::e..
}
