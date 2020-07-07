// deque
? |i..
? <deque>

? "xray.h"

in. main() {
    // через два указателя
    std::deque<in.> v; // std::vector<std::vector<int>>
    ___ (auto i: v) {
        std::c__ __  i __  std::e..
    }

    v _ {3, 2, 1, 0, -1, -2, -3};
    v.pop_front();
    v.emplace_front(4);
    // vs?
    v.push_front(5);
    ___ (auto i: v) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..


    // один чанк не меньше 16 элементов и не менее 4k суммарно
    std::deque<xray::object, xray::allocator<xray::object__ xray;
    ___ (auto i _ 0u; i < 17; ++i) {
        xray.emplace_back(i);
        std::c__ __  "---" __  std::e..
    }

    std::c__ __  "===" __  std::e..

    xray.emplace_front(100);
    std::c__ __  "---" __  std::e..

    xray.emplace_front(101);
    std::c__ __  "===" __  std::e..

    auto i _ xray.begin();
    std::advance(i, 10);
    xray.emplace(i, 200);
    std::c__ __  "---" __  std::e..
    xray.emplace(i, 201);
    std::c__ __  "===" __  std::e..

    ___(const auto &i: xray)
    {
        std::c__ __  i.value() __  " ";
    }
    std::c__ __  std::e..
}
