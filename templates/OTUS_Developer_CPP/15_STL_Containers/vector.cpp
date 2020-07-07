// vector
? |i..
? <vector>

template<typename...T>
auto make_vector(T...t) {
    std::vector v = {t...};

    for (auto i: v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..
};

in. main() {
    make_vector(1, 2, 3);

    // через указатель
    auto x = std::vector{1, 2, 3, 4, 5};
    for (auto i: x) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    auto v = x;

    v.assign(3, 5);
    for (auto i: v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    v.reserve(100);
    v.resize(50);
    v.clear();
    std::c__ __  v.capacity() __  std::e..
    std::c__ __  v.size() __  std::e..
    std::c__ __  v.max_size() __  std::e..
    auto e = v.empty(); // v.size() == 0

    v.shrink_to_fit(); // move?

    v = {3, 2, 1, 0, 0, -1, -2, -3}; // 0, 0
    for (auto i = v.begin(); i != v.end(); ) {
        __ (*i == 0) {
            i = v.erase(i);
        } else {
            ++i;
        }
    }
    for (auto i: v) {
        std::c__ __  i __  " ";
    }
}
