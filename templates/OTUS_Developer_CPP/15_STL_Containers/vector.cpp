// vector
? |i..
? <vector>

template<typename...T>
auto make_vector(T...t) {
    std::vector v _ {t...};

    ___ (auto i: v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..
};

in. main() {
    make_vector(1, 2, 3);

    // через указатель
    auto x _ std::vector{1, 2, 3, 4, 5};
    ___ (auto i: x) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    auto v _ x;

    v.assign(3, 5);
    ___ (auto i: v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    v.reserve(100);
    v.resize(50);
    v.clear();
    std::c__ __  v.capacity() __  std::e..
    std::c__ __  v.size() __  std::e..
    std::c__ __  v.max_size() __  std::e..
    auto e _ v.empty(); // v.size() == 0

    v.shrink_to_fit(); // move?

    v _ {3, 2, 1, 0, 0, -1, -2, -3}; // 0, 0
    ___ (auto i _ v.begin(); i !_ v.end(); ) {
        __ (*i __ 0) {
            i _ v.erase(i);
        } ____ {
            ++i;
        }
    }
    ___ (auto i: v) {
        std::c__ __  i __  " ";
    }
}
