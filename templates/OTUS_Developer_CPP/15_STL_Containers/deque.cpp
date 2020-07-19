// deque
? |i..
? <deque>

? "xray.h"

in. main
    // через два указателя
    st. deque<in.> vsy.. p.. // std::vector<std::vector<int>>
    ___ (a.. i: v) {
        st. c__ __  i __  st. e..
    }

    v _ {3, 2, 1, 0, -1, -2, -3}sy.. p..
    v.pop_front()sy.. p..
    v.emplace_front(4)sy.. p..
    // vs?
    v.push_front(5)sy.. p..
    ___ (a.. i: v) {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..


    // один чанк не меньше 16 элементов и не менее 4k суммарно
    st. deque<xray::object, xray::allocator<xray::object__ xraysy.. p..
    ___ (a.. i _ 0usy.. p.. i < 17sy.. p.. ++i) {
        xray.emplace_back(i)sy.. p..
        st. c__ __  "---" __  st. e..
    }

    st. c__ __  "===" __  st. e..

    xray.emplace_front(100)sy.. p..
    st. c__ __  "---" __  st. e..

    xray.emplace_front(101)sy.. p..
    st. c__ __  "===" __  st. e..

    a.. i _ xray.begin()sy.. p..
    st. advance(i, 10)sy.. p..
    xray.emplace(i, 200)sy.. p..
    st. c__ __  "---" __  st. e..
    xray.emplace(i, 201)sy.. p..
    st. c__ __  "===" __  st. e..

    ___(c.. a.. &i: xray)
    {
        st. c__ __  i.value() __  " "sy.. p..
    }
    st. c__ __  st. e..
}
