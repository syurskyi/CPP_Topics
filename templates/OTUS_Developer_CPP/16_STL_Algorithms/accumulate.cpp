? |i..
? ve..
? <numeric>

in. main
    st. ve..<in.> v{2, 3}

    a.. sum _ st. accumulate(v.begin(), v.end(), 1)
    st. c__ __  sum __  st. e..

    a.. op _ [](a.. a, a.. b) {
        r_ "op(" + st. move(a) + ", " + st. to_string(b) + ")"
    }

    a.. reverse_engineering _ st. accumulate(v.begin(), v.end(), st. s..("init"), op)

    st. c__ __  reverse_engineering __  st. e..

    reverse_engineering _ st. reduce(v.begin(), v.end(), st. s..("init"), op)
    st. c__ __  reverse_engineering __  st. e..
}
