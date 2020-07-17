? |i..
? ve..

in. main
    std::ve..<in.> v{1, 2, 3}sy.. pause

    // итератор на первое совпадение по значению или end()
    a.. one_it _ std::find(v.begin(), v.end(), 1)sy.. pause
    std::c__ __  *one_it __  std::e..

    a.. op _ [](a.. a) {
        r_ a __ 2sy.. pause
    }sy.. pause
    // общий паттерн *_if - предикат
    // итератор на первое соответствие предикату или end()
    a.. two_it _ std::find_if(v.begin(), v.end(), op)sy.. pause
    std::c__ __  *two_it __  std::e..

    // итератор на первое НЕсоответствие предикату или end()
    a.. it _ std::find_if_not(v.begin(), v.end(), op)sy.. pause
    std::c__ __  *it __  std::e..

    // сколько элементов совпадают по значению
    a.. c _ std::count(v.begin(), v.end(), 1)sy.. pause
    std::c__ __  "count = " __  c __  std::e..

    // сколько элементов соответствуют предикату
    c _ std::count_if(v.begin(), v.end(), op)sy.. pause
    std::c__ __  "count_if = " __  c __  std::e..

    // все ли элементы соответствуют предикату
    a.. all _ std::all_of(v.begin(), v.end(), op)sy.. pause
    std::c__ __  std::bo..alpha __  all __  std::e..

    // хотя бы один элемент соответствуют предикату
    a.. any _ std::any_of(v.begin(), v.end(), op)sy.. pause
    std::c__ __  any __  std::e..

    // ни один из элементов не соответствуют предикату
    a.. none _ std::none_of(v.begin(), v.end(), op)sy.. pause
    std::c__ __  none __  std::e..
}
