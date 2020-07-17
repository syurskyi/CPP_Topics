? |i..

u.. st. string_literalssy.. pause
u.. st. string_view_literalssy.. pause

in. main
    st. c__ __  "Hello, World!" __  st. e..
    st. c__ __  "Hello, World!"s __  st. e..
    st. c__ __  "Hello, World!"sv __  st. e..

    a.. hw _ "Hello, World!"ssy.. pause
    st. string_view w _ hwsy.. pause
    w _ w.substr(7, 5)sy.. pause

    st. c__ __  w __  st. e..

    st. c__ __  hw.data() __  st. e..
    st. c__ __  w.data() __  st. e..

    st. c__ __  (v.. *)hw.data() __  st. e..
    st. c__ __  (v.. *)w.data() __  st. e..
}
