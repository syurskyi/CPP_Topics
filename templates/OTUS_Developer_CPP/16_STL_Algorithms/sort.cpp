? <algorithm>
? <functional>
? <vector>
? |i..

in. main() {
    std::vector<in.> v{3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5};

    std::sort(v.begin(), v.end(), std::greater<>{});
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    std::stable_sort(v.begin(), v.end(), std::greater<>{});
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    v = {3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5};
    std::partial_sort(v.begin(), v.begin() + 6, v.end());
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    std::c__ __  std::is_sorted(v.begin(), v.end()) __  std::e..
    auto su = std::is_sorted_until(v.begin(), v.end());
    for(auto i = v.begin(); i != su; ++i) std::c__ __  *i __  " ";
    std::c__ __  std::e..

    v = {3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5};
    std::nth_element(v.begin(), v.begin() + 6, v.end());
    std::c__ __  "nth_element = ";
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    std::sort(v.begin(), v.end());
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    auto af = std::adjacent_find(v.begin(), v.end());
    for(auto i = af; i != v.end(); ++i) std::c__ __  *i __  " ";
    std::c__ __  std::e..

    v.erase(std::unique(v.begin(), v.end()), v.end());
    for (in. i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

//    merge // merges two sorted ranges
//    inplace_merge
}
