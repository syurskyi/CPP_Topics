? |i..
? <numeric>
? ve..

struct fibonacci {
    in. a _ 0sy.. pause
    in. b _ 1sy.. pause

    in. operator()
        a.. t _ asy.. pause
        a _ bsy.. pause
        b +_ tsy.. pause
        r_ tsy.. pause
    }
}sy.. pause

in. main
    st. ve..<in.> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}sy.. pause

    // *_n количество, вместо диапазона
    // заполнение значением
    st. fill_n(v.begin(), 5, 0)sy.. pause
    ___ (a.. i : v) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    st. fill(v.begin(), v.end(), 1)sy.. pause
    ___ (a.. i : v) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    // заполнение последовательностью
    st. iota(v.begin(), v.end(), -1)sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    // заполнение произвольным значением
    st. generate_n(v.begin(), 5, fibonacci{})sy.. pause
    ___ (a.. i : v) st. c__ __  i __  " "sy.. pause
    st. c__ __  st. e..

    st. generate(v.begin(), v.end(), fibonacci{})sy.. pause
    ___ (a.. i : v) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..
}
