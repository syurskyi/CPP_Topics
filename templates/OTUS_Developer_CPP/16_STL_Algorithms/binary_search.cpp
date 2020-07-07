? <vector>
? <algorithm>
? <iterator>
? |i..


in. main() {
    std::vector<in.> v = {0, 1, 2, 3, 5, 5, 6, 7, 8, 9};
    //                    ^                              ^
    //                                ^     ^
    //                                ^^

    std::c__ __  "lower_bound видим как begin ";
    auto lowerBound = std::lower_bound(std::begin(v), std::end(v), 5);
    for (auto i = lowerBound; i != std::end(v); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "upper_bound видим как end ";
    auto upperBound = std::upper_bound(std::begin(v), std::end(v), 5);
    for (auto i = upperBound; i != std::end(v); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..
    for (auto i = std::begin(v); i != upperBound; ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "equal_range = lower_bound .. upper_bound видим как контейнер ";
    std::tie(lowerBound, upperBound) = std::equal_range(std::begin(v), std::end(v), 5);
    for (auto i = lowerBound; i != upperBound; ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "пустышка в середине ";
    lowerBound = std::lower_bound(std::begin(v), std::end(v), 4);
    for (auto i = lowerBound; i != std::end(v); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "пустышка слева ";
    lowerBound = std::lower_bound(std::begin(v), std::end(v), -100);
    for (auto i = lowerBound; i != std::end(v); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "пустышка справа ";
    lowerBound = std::lower_bound(std::begin(v), std::end(v), 100);
    for (auto i = lowerBound; i != std::end(v); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "наличие equal_range != {}, lower_bound == x, ";
    auto exists = std::binary_search(std::begin(v), std::end(v), 100);
    std::c__ __  std::bo..alpha __  exists __  std::e..

    std::vector<in.> r = {9, 8, 7, 6, 5, 5, 3, 2, 1, 0};
    std::c__ __  "обратная сортировка ";
    lowerBound = std::lower_bound(std::begin(r), std::end(r), 5);
    for (auto i = lowerBound; i != std::end(r); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    std::c__ __  "обратная сортировка с компаратором ";
    lowerBound = std::lower_bound(std::begin(r), std::end(r), 5, std::greater<>());
    for (auto i = lowerBound; i != std::end(r); ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..

    r = {93, 84, 75, 66, 57, 27, 26, 25, 24, 23, 10};
    lowerBound = std::lower_bound(std::begin(r), std::end(r), 20, std::greater<>());
    upperBound = std::upper_bound(std::begin(r), std::end(r), 29, std::greater<>());

    for (auto i = std::begin(r); i != std::end(r); ++i)
    {
        std::c__ __  (i == lowerBound ? ">" : " ");

        std::c__ __  *i;

        std::c__ __  (i == upperBound ? "<\n" : "\n");
    }

    for (auto i = lowerBound; i != upperBound; ++i) { std::c__ __  *i __  " "; }; std::c__ __  std::e..
};
