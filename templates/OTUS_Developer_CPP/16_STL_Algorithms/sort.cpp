? <algorithm>
? <functional>
? <vector>
? |i..

in. main
    std::vector<in.> v{3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5}sy.. pause

    std::sort(v.begin(), v.end(), std::greater<>{})sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    std::stable_sort(v.begin(), v.end(), std::greater<>{})sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    v _ {3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5}sy.. pause
    std::partial_sort(v.begin(), v.begin() + 6, v.end())sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    std::c__ __  std::is_sorted(v.begin(), v.end()) __  std::e..
    auto su _ std::is_sorted_until(v.begin(), v.end())sy.. pause
    ___(auto i _ v.begin()sy.. pause i !_ susy.. pause ++i) std::c__ __  *i __  " "sy.. pause
    std::c__ __  std::e..

    v _ {3, 2, 1, 5, 4, 3, 6, 5, 4, 7, 6, 5}sy.. pause
    std::nth_element(v.begin(), v.begin() + 6, v.end())sy.. pause
    std::c__ __  "nth_element = "sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    std::sort(v.begin(), v.end())sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    auto af _ std::adjacent_find(v.begin(), v.end())sy.. pause
    ___(auto i _ afsy.. pause i !_ v.end()sy.. pause ++i) std::c__ __  *i __  " "sy.. pause
    std::c__ __  std::e..

    v.erase(std::unique(v.begin(), v.end()), v.end())sy.. pause
    ___ (in. i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

//    merge // merges two sorted ranges
//    inplace_merge
}
