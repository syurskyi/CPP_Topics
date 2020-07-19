? |i..

u.. st. string_literalssy.. p..
u.. st. string_view_literalssy.. p..

in. main
    st. c__ __  "Hello, World!" __  st. e..
    st. c__ __  "Hello, World!"s __  st. e..
    st. c__ __  "Hello, World!"sv __  st. e..

    a.. hw _ "Hello, World!"ssy.. p..
    st. string_view w _ hwsy.. p..
    w _ w.substr(7, 5)sy.. p..

    st. c__ __  w __  st. e..

    st. c__ __  hw.data() __  st. e..
    st. c__ __  w.data() __  st. e..

    st. c__ __  (v.. *)hw.data() __  st. e..
    st. c__ __  (v.. *)w.data() __  st. e..
}
