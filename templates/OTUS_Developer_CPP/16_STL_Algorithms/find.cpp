? |i..
? <vector>

in. main() {
    std::vector<in.> v{1, 2, 3};

    // итератор на первое совпадение по значению или end()
    auto one_it = std::find(v.begin(), v.end(), 1);
    std::c__ __  *one_it __  std::e..

    auto op = [](auto a) {
        r_ a == 2;
    };
    // общий паттерн *_if - предикат
    // итератор на первое соответствие предикату или end()
    auto two_it = std::find_if(v.begin(), v.end(), op);
    std::c__ __  *two_it __  std::e..

    // итератор на первое НЕсоответствие предикату или end()
    auto it = std::find_if_not(v.begin(), v.end(), op);
    std::c__ __  *it __  std::e..

    // сколько элементов совпадают по значению
    auto c = std::count(v.begin(), v.end(), 1);
    std::c__ __  "count = " __  c __  std::e..

    // сколько элементов соответствуют предикату
    c = std::count_if(v.begin(), v.end(), op);
    std::c__ __  "count_if = " __  c __  std::e..

    // все ли элементы соответствуют предикату
    auto all = std::all_of(v.begin(), v.end(), op);
    std::c__ __  std::bo..alpha __  all __  std::e..

    // хотя бы один элемент соответствуют предикату
    auto any = std::any_of(v.begin(), v.end(), op);
    std::c__ __  any __  std::e..

    // ни один из элементов не соответствуют предикату
    auto none = std::none_of(v.begin(), v.end(), op);
    std::c__ __  none __  std::e..
}
