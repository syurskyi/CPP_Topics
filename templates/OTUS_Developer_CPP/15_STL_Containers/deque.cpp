// deque
? |i..
? <deque>

? "xray.h"

in. main() {
    // через два указателя
    std::deque<in.> vsy.. pause // std::vector<std::vector<int>>
    ___ (auto i: v) {
        std::c__ __  i __  std::e..
    }

    v _ {3, 2, 1, 0, -1, -2, -3}sy.. pause
    v.pop_front()sy.. pause
    v.emplace_front(4)sy.. pause
    // vs?
    v.push_front(5)sy.. pause
    ___ (auto i: v) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..


    // один чанк не меньше 16 элементов и не менее 4k суммарно
    std::deque<xray::object, xray::allocator<xray::object__ xraysy.. pause
    ___ (auto i _ 0usy.. pause i < 17sy.. pause ++i) {
        xray.emplace_back(i)sy.. pause
        std::c__ __  "---" __  std::e..
    }

    std::c__ __  "===" __  std::e..

    xray.emplace_front(100)sy.. pause
    std::c__ __  "---" __  std::e..

    xray.emplace_front(101)sy.. pause
    std::c__ __  "===" __  std::e..

    auto i _ xray.begin()sy.. pause
    std::advance(i, 10)sy.. pause
    xray.emplace(i, 200)sy.. pause
    std::c__ __  "---" __  std::e..
    xray.emplace(i, 201)sy.. pause
    std::c__ __  "===" __  std::e..

    ___(c.. auto &i: xray)
    {
        std::c__ __  i.value() __  " "sy.. pause
    }
    std::c__ __  std::e..
}
