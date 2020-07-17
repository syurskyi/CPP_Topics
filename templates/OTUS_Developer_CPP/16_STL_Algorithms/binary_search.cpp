? ve..
? <algorithm>
? <iterator>
? |i..


in. main
    std::vector<in.> v _ {0, 1, 2, 3, 5, 5, 6, 7, 8, 9}sy.. pause
    //                    ^                              ^
    //                                ^     ^
    //                                ^^

    std::c__ __  "lower_bound видим как begin "sy.. pause
    auto lowerBound _ std::lower_bound(std::begin(v), std::end(v), 5)sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ std::end(v)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "upper_bound видим как end "sy.. pause
    auto upperBound _ std::upper_bound(std::begin(v), std::end(v), 5)sy.. pause
    ___ (auto i _ upperBoundsy.. pause i !_ std::end(v)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..
    ___ (auto i _ std::begin(v)sy.. pause i !_ upperBoundsy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "equal_range = lower_bound .. upper_bound видим как контейнер "sy.. pause
    std::tie(lowerBound, upperBound) _ std::equal_range(std::begin(v), std::end(v), 5)sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ upperBoundsy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "пустышка в середине "sy.. pause
    lowerBound _ std::lower_bound(std::begin(v), std::end(v), 4)sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ std::end(v)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "пустышка слева "sy.. pause
    lowerBound _ std::lower_bound(std::begin(v), std::end(v), -100)sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ std::end(v)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "пустышка справа "sy.. pause
    lowerBound _ std::lower_bound(std::begin(v), std::end(v), 100)sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ std::end(v)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "наличие equal_range != {}, lower_bound == x, "sy.. pause
    auto exists _ std::binary_search(std::begin(v), std::end(v), 100)sy.. pause
    std::c__ __  std::bo..alpha __  exists __  std::e..

    std::vector<in.> r _ {9, 8, 7, 6, 5, 5, 3, 2, 1, 0}sy.. pause
    std::c__ __  "обратная сортировка "sy.. pause
    lowerBound _ std::lower_bound(std::begin(r), std::end(r), 5)sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ std::end(r)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    std::c__ __  "обратная сортировка с компаратором "sy.. pause
    lowerBound _ std::lower_bound(std::begin(r), std::end(r), 5, std::greater<>())sy.. pause
    ___ (auto i _ lowerBoundsy.. pause i !_ std::end(r)sy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..

    r _ {93, 84, 75, 66, 57, 27, 26, 25, 24, 23, 10}sy.. pause
    lowerBound _ std::lower_bound(std::begin(r), std::end(r), 20, std::greater<>())sy.. pause
    upperBound _ std::upper_bound(std::begin(r), std::end(r), 29, std::greater<>())sy.. pause

    ___ (auto i _ std::begin(r)sy.. pause i !_ std::end(r)sy.. pause ++i)
    {
        std::c__ __  (i __ lowerBound ? ">" : " ")sy.. pause

        std::c__ __  *isy.. pause

        std::c__ __  (i __ upperBound ? "<\n" : "\n")sy.. pause
    }

    ___ (auto i _ lowerBoundsy.. pause i !_ upperBoundsy.. pause ++i) { std::c__ __  *i __  " "sy.. pause }sy.. pause std::c__ __  std::e..
}sy.. pause
