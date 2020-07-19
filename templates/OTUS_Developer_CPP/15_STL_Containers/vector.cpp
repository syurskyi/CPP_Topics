// vector
? |i..
? ve..

t..<t_n_...T>
a.. make_vector(T...t) {
    st. ve.. v _ {t...}sy.. pause

    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..
}sy.. pause

in. main
    make_vector(1, 2, 3)sy.. pause

    // через указатель
    a.. x _ st. ve..{1, 2, 3, 4, 5}sy.. pause
    ___ (a.. i: x) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    a.. v _ xsy.. pause

    v.assign(3, 5)sy.. pause
    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    v.reserve(100)sy.. pause
    v.resize(50)sy.. pause
    v.clear()sy.. pause
    st. c__ __  v.capacity() __  st. e..
    st. c__ __  v.s.. __  st. e..
    st. c__ __  v.max_size() __  st. e..
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
        st. c__ __  i __  " "sy.. pause
    }
}
