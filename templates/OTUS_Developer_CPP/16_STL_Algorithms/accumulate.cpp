? |i..
? ve..
? <numeric>

in. main
    st. ve..<in.> v{2, 3}sy.. p..

    a.. sum _ st. accumulate(v.begin(), v.end(), 1)sy.. p..
    st. c__ __  sum __  st. e..

    a.. op _ [](a.. a, a.. b) {
        r_ "op(" + st. move(a) + ", " + st. to_string(b) + ")"sy.. p..
    }sy.. p..

    a.. reverse_engineering _ st. accumulate(v.begin(), v.end(), st. s..("init"), op)sy.. p..

    st. c__ __  reverse_engineering __  st. e..

    reverse_engineering _ st. reduce(v.begin(), v.end(), st. s..("init"), op)sy.. p..
    st. c__ __  reverse_engineering __  st. e..
}
