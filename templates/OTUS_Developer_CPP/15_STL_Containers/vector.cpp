// vector
? |i..
? ve..

template<typename...T>
a.. make_vector(T...t) {
    std::vector v _ {t...}sy.. pause

    ___ (a.. i: v) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..
}sy.. pause

in. main
    make_vector(1, 2, 3)sy.. pause

    // через указатель
    a.. x _ std::vector{1, 2, 3, 4, 5}sy.. pause
    ___ (a.. i: x) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    a.. v _ xsy.. pause

    v.assign(3, 5)sy.. pause
    ___ (a.. i: v) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    v.reserve(100)sy.. pause
    v.resize(50)sy.. pause
    v.clear()sy.. pause
    std::c__ __  v.capacity() __  std::e..
    std::c__ __  v.s.. __  std::e..
    std::c__ __  v.max_size() __  std::e..
    a.. e _ v.empty()sy.. pause // v.size() == 0

    v.shrink_to_fit()sy.. pause // move?

    v _ {3, 2, 1, 0, 0, -1, -2, -3}sy.. pause // 0, 0
    ___ (a.. i _ v.begin()sy.. pause i !_ v.end()sy.. pause ) {
        __ (*i __ 0) {
            i _ v.erase(i)sy.. pause
        } ____ {
            ++isy.. pause
        }
    }
    ___ (a.. i: v) {
        std::c__ __  i __  " "sy.. pause
    }
}
