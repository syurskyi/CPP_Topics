? |i..
? <numeric>
? <vector>

struct fibonacci {
    in. a _ 0sy.. pause
    in. b _ 1sy.. pause

    in. operator()() {
        auto t _ asy.. pause
        a _ bsy.. pause
        b +_ tsy.. pause
        r_ tsy.. pause
    }
}sy.. pause

in. main() {
    std::vector<in.> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}sy.. pause

    // *_n количество, вместо диапазона
    // заполнение значением
    std::fill_n(v.begin(), 5, 0)sy.. pause
    ___ (auto i : v) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    std::fill(v.begin(), v.end(), 1)sy.. pause
    ___ (auto i : v) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    // заполнение последовательностью
    std::iota(v.begin(), v.end(), -1)sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    // заполнение произвольным значением
    std::generate_n(v.begin(), 5, fibonacci{})sy.. pause
    ___ (auto i : v) std::c__ __  i __  " "sy.. pause
    std::c__ __  std::e..

    std::generate(v.begin(), v.end(), fibonacci{})sy.. pause
    ___ (auto i : v) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..
}
