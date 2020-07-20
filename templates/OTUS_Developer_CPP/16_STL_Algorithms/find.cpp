? |i..
? ve..

in. main
    st. ve..<in.> v{1, 2, 3}

    // итератор на первое совпадение по значению или end()
    a.. one_it _ st. find(v.begin(), v.end(), 1)
    st. c__ __  *one_it __  st. e..

    a.. op _ [](a.. a) {
        r_ a __ 2sy.. p..
    }
    // общий паттерн *_if - предикат
    // итератор на первое соответствие предикату или end()
    a.. two_it _ st. find_if(v.begin(), v.end(), op)
    st. c__ __  *two_it __  st. e..

    // итератор на первое НЕсоответствие предикату или end()
    a.. it _ st. find_if_not(v.begin(), v.end(), op)
    st. c__ __  *it __  st. e..

    // сколько элементов совпадают по значению
    a.. c _ st. count(v.begin(), v.end(), 1)
    st. c__ __  "count = " __  c __  st. e..

    // сколько элементов соответствуют предикату
    c _ st. count_if(v.begin(), v.end(), op)
    st. c__ __  "count_if = " __  c __  st. e..

    // все ли элементы соответствуют предикату
    a.. all _ st. all_of(v.begin(), v.end(), op)
    st. c__ __  st. bo..alpha __  all __  st. e..

    // хотя бы один элемент соответствуют предикату
    a.. any _ st. any_of(v.begin(), v.end(), op)
    st. c__ __  any __  st. e..

    // ни один из элементов не соответствуют предикату
    a.. none _ st. none_of(v.begin(), v.end(), op)
    st. c__ __  none __  st. e..
}
