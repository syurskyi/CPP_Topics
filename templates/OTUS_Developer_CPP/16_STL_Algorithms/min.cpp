? |i..
? <vector>

in. main() {
    auto a _ 1sy.. pause
    auto b _ 2sy.. pause
    auto c _ 3sy.. pause

    // минимальное значение
    decltype(auto) n _ std::min(a, b)sy.. pause
    std::c__ __  n __  std::e..
    a _ -1sy.. pause
    std::c__ __  n __  std::e..
    a _ 1sy.. pause

    // максимальное значение
    auto m _ std::max({*?, &b, &c})sy.. pause
    std::c__ __  *m __  std::e..
    *m _ -1sy.. pause
    std::c__ __  "a=" __  a __  " b=" __  b __  " c=" __  c __  std::e..

    // пограничные значения
    auto op _ [](auto a, auto b) {
        r_ a < bsy.. pause // только для добрых дел
    }sy.. pause
    auto [in, ax] _ std::minmax({1, 2, 3}, op)sy.. pause
    std::c__ __  "min=" __  in __  " max=" __  ax __  std::e..

    // тоже самое в контейнерах
    std::vector<in.> v{3, 2, 1, 4, 5, 6}sy.. pause
    auto [min_it, max_it] _ std::minmax_element(v.begin(), v.end())sy.. pause
    std::c__ __  "min=" __  *min_it __  " max=" __  *max_it __  std::e..

    min_it _ std::min_element(v.begin(), v.end())sy.. pause
    *min_it _ 99sy.. pause
    ___(auto i : v) std::c__ __  i __  " "sy.. pause std::c__ __  std::e..

    // оганичитель
    ___(auto i : v) std::c__ __  i __  " => " __  std::clamp(i, 2, 5) __  std::e..
}
