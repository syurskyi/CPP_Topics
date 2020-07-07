? |i..
? <vector>

in. main() {
    std::vector<in.> v{1, 2, 3}sy.. pause

    // итератор на первое совпадение по значению или end()
    auto one_it _ std::find(v.begin(), v.end(), 1)sy.. pause
    std::c__ __  *one_it __  std::e..

    auto op _ [](auto a) {
        r_ a __ 2sy.. pause
    }sy.. pause
    // общий паттерн *_if - предикат
    // итератор на первое соответствие предикату или end()
    auto two_it _ std::find_if(v.begin(), v.end(), op)sy.. pause
    std::c__ __  *two_it __  std::e..

    // итератор на первое НЕсоответствие предикату или end()
    auto it _ std::find_if_not(v.begin(), v.end(), op)sy.. pause
    std::c__ __  *it __  std::e..

    // сколько элементов совпадают по значению
    auto c _ std::count(v.begin(), v.end(), 1)sy.. pause
    std::c__ __  "count = " __  c __  std::e..

    // сколько элементов соответствуют предикату
    c _ std::count_if(v.begin(), v.end(), op)sy.. pause
    std::c__ __  "count_if = " __  c __  std::e..

    // все ли элементы соответствуют предикату
    auto all _ std::all_of(v.begin(), v.end(), op)sy.. pause
    std::c__ __  std::bo..alpha __  all __  std::e..

    // хотя бы один элемент соответствуют предикату
    auto any _ std::any_of(v.begin(), v.end(), op)sy.. pause
    std::c__ __  any __  std::e..

    // ни один из элементов не соответствуют предикату
    auto none _ std::none_of(v.begin(), v.end(), op)sy.. pause
    std::c__ __  none __  std::e..
}
