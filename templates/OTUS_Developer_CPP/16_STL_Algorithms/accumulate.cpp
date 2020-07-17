? |i..
? ve..
? <numeric>

in. main
    std::ve..<in.> v{2, 3}sy.. pause

    a.. sum _ std::accumulate(v.begin(), v.end(), 1)sy.. pause
    std::c__ __  sum __  std::e..

    a.. op _ [](a.. a, a.. b) {
        r_ "op(" + std::move(a) + ", " + std::to_string(b) + ")"sy.. pause
    }sy.. pause

    a.. reverse_engineering _ std::accumulate(v.begin(), v.end(), std::s..("init"), op)sy.. pause

    std::c__ __  reverse_engineering __  std::e..

    reverse_engineering _ std::reduce(v.begin(), v.end(), std::s..("init"), op)sy.. pause
    std::c__ __  reverse_engineering __  std::e..
}
