// vector
? |i..
? ve..

t..<t_n_...T>
a.. make_vector(T...t) {
    st. ve.. v _ {t...}

    ___ (a.. i: v) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..
}

in. main
    make_vector(1, 2, 3)

    // через указатель
    a.. x _ st. ve..{1, 2, 3, 4, 5}
    ___ (a.. i: x) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    a.. v _ xsy.. p..

    v.assign(3, 5)
    ___ (a.. i: v) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    v.reserve(100)
    v.resize(50)
    v.clear()
    st. c__ __  v.capacity() __  st. e..
    st. c__ __  v.s.. __  st. e..
    st. c__ __  v.max_size() __  st. e..
    a.. e _ v.empty() // v.size() == 0

    v.shrink_to_fit() // move?

    v _ {3, 2, 1, 0, 0, -1, -2, -3} // 0, 0
    ___ (a.. i _ v.begin() i !_ v.end() ) {
        __ (*i __ 0) {
            i _ v.erase(i)
        } ____ {
            ++isy.. p..
        }
    }
    ___ (a.. i: v) {
        st. c__ __  i __  " "
    }
}
