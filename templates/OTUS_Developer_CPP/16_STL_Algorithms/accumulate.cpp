? |i..
? <vector>
? <numeric>

in. main() {
    std::vector<in.> v{2, 3};

    auto sum _ std::accumulate(v.begin(), v.end(), 1);
    std::c__ __  sum __  std::e..

    auto op _ [](auto a, auto b) {
        r_ "op(" + std::move(a) + ", " + std::to_string(b) + ")";
    };

    auto reverse_engineering _ std::accumulate(v.begin(), v.end(), std::s..("init"), op);

    std::c__ __  reverse_engineering __  std::e..

    reverse_engineering _ std::reduce(v.begin(), v.end(), std::s..("init"), op);
    std::c__ __  reverse_engineering __  std::e..
}
