? |i..
? <numeric>
? <vector>

struct fibonacci {
    in. a = 0;
    in. b = 1;

    in. operator()() {
        auto t = a;
        a = b;
        b += t;
        r_ t;
    }
};

in. main() {
    std::vector<in.> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // *_n количество, вместо диапазона
    // заполнение значением
    std::fill_n(v.begin(), 5, 0);
    for (auto i : v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    std::fill(v.begin(), v.end(), 1);
    for (auto i : v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    // заполнение последовательностью
    std::iota(v.begin(), v.end(), -1);
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    // заполнение произвольным значением
    std::generate_n(v.begin(), 5, fibonacci{});
    for (auto i : v) std::c__ __  i __  " ";
    std::c__ __  std::e..

    std::generate(v.begin(), v.end(), fibonacci{});
    for (auto i : v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..
}
