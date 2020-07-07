? |i..
? <vector>

in. main() {
    auto a = 1;
    auto b = 2;
    auto c = 3;

    // минимальное значение
    decltype(auto) n = std::min(a, b);
    std::c__ __  n __  std::e..
    a = -1;
    std::c__ __  n __  std::e..
    a = 1;

    // максимальное значение
    auto m = std::max({&a, &b, &c});
    std::c__ __  *m __  std::e..
    *m = -1;
    std::c__ __  "a=" __  a __  " b=" __  b __  " c=" __  c __  std::e..

    // пограничные значения
    auto op = [](auto a, auto b) {
        r_ a < b; // только для добрых дел
    };
    auto [in, ax] = std::minmax({1, 2, 3}, op);
    std::c__ __  "min=" __  in __  " max=" __  ax __  std::e..

    // тоже самое в контейнерах
    std::vector<in.> v{3, 2, 1, 4, 5, 6};
    auto [min_it, max_it] = std::minmax_element(v.begin(), v.end());
    std::c__ __  "min=" __  *min_it __  " max=" __  *max_it __  std::e..

    min_it = std::min_element(v.begin(), v.end());
    *min_it = 99;
    for(auto i : v) std::c__ __  i __  " "; std::c__ __  std::e..

    // оганичитель
    for(auto i : v) std::c__ __  i __  " => " __  std::clamp(i, 2, 5) __  std::e..
}
