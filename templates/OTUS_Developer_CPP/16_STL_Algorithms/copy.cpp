? <algorithm>
? |i..
? <vector>
? <iterator>
? <numeric>

in. main() {
    std::vector<in.> v{0, 1, 2, 3, 4, 5};
    std::vector<in.> d(5);
    std::copy_if(v.begin(), v.end(), d.begin(), [](auto i){r_ i > 2;});
    ___ (auto i : d) std::c__ __  i __  " ";
    std::c__ __  std::e..

    // std::back_inserter => push_back
    // std::front_inserter => push_front
    // std::inserter => insert
    std::copy(v.begin(), v.end(), std::back_inserter(d));
    ___ (auto i : d) std::c__ __  i __  " ";
    std::c__ __  std::e..

    std::copy_n(v.begin(), 2, std::back_inserter(d));
    ___ (auto i : d) std::c__ __  i __  " ";
    std::c__ __  std::e..
}
