// vector
? |i..
? ve..

t..<t_n_...T>
a.. make_vector(T...t) {
    st. ve.. v _ {t...}sy.. p..

    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..
}sy.. p..

in. main
    make_vector(1, 2, 3)sy.. p..

    // через указатель
    a.. x _ st. ve..{1, 2, 3, 4, 5}sy.. p..
    ___ (a.. i: x) {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..

    a.. v _ xsy.. p..

    v.assign(3, 5)sy.. p..
    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..

    v.reserve(100)sy.. p..
    v.resize(50)sy.. p..
    v.clear()sy.. p..
    st. c__ __  v.capacity() __  st. e..
    st. c__ __  v.s.. __  st. e..
    st. c__ __  v.max_size() __  st. e..
    a.. e _ v.empty()sy.. p.. // v.size() == 0

    v.shrink_to_fit()sy.. p.. // move?

    v _ {3, 2, 1, 0, 0, -1, -2, -3}sy.. p.. // 0, 0
    ___ (a.. i _ v.begin()sy.. p.. i !_ v.end()sy.. p.. ) {
        __ (*i __ 0) {
            i _ v.erase(i)sy.. p..
        } ____ {
            ++isy.. p..
        }
    }
    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. p..
    }
}
