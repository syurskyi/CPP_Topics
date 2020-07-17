// deque
? |i..
? <deque>

? "xray.h"

in. main
    // через два указателя
    st. deque<in.> vsy.. pause // std::vector<std::vector<int>>
    ___ (a.. i: v) {
        st. c__ __  i __  st. e..
    }

    v _ {3, 2, 1, 0, -1, -2, -3}sy.. pause
    v.pop_front()sy.. pause
    v.emplace_front(4)sy.. pause
    // vs?
    v.push_front(5)sy.. pause
    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..


    // один чанк не меньше 16 элементов и не менее 4k суммарно
    st. deque<xray::object, xray::allocator<xray::object__ xraysy.. pause
    ___ (a.. i _ 0usy.. pause i < 17sy.. pause ++i) {
        xray.emplace_back(i)sy.. pause
        st. c__ __  "---" __  st. e..
    }

    st. c__ __  "===" __  st. e..

    xray.emplace_front(100)sy.. pause
    st. c__ __  "---" __  st. e..

    xray.emplace_front(101)sy.. pause
    st. c__ __  "===" __  st. e..

    a.. i _ xray.begin()sy.. pause
    st. advance(i, 10)sy.. pause
    xray.emplace(i, 200)sy.. pause
    st. c__ __  "---" __  st. e..
    xray.emplace(i, 201)sy.. pause
    st. c__ __  "===" __  st. e..

    ___(c.. a.. &i: xray)
    {
        st. c__ __  i.value() __  " "sy.. pause
    }
    st. c__ __  st. e..
}
