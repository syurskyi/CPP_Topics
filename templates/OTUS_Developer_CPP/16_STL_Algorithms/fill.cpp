? |i..
? <numeric>
? ve..

st.. fibonacci {
    in. a _ 0sy.. p..
    in. b _ 1sy.. p..

    in. op..()
        a.. t _ asy.. p..
        a _ bsy.. p..
        b +_ tsy.. p..
        r_ tsy.. p..
    }
}

in. main
    st. ve..<in.> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

    // *_n количество, вместо диапазона
    // заполнение значением
    st. fill_n(v.begin(), 5, 0)
    ___ (a.. i : v) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    st. fill(v.begin(), v.end(), 1)
    ___ (a.. i : v) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    // заполнение последовательностью
    st. iota(v.begin(), v.end(), -1)
    ___ (a.. i : v) st. c__ __  i __  " "
    st. c__ __  st. e..

    // заполнение произвольным значением
    st. generate_n(v.begin(), 5, fibonacci{})
    ___ (a.. i : v) st. c__ __  i __  " "
    st. c__ __  st. e..

    st. generate(v.begin(), v.end(), fibonacci{})
    ___ (a.. i : v) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..
}
