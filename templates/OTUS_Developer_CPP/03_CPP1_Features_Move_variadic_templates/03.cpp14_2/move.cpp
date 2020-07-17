// #define MOVE
? "xray.h"

? |i..

v.. foo(c.. xray &)
{
    st. c__ __  "= const ref" __  st. e..
}

v.. foo(xray &&)
{
    st. c__ __  "= temporary" __  st. e..
}

template<c_ T>
v.. baz(T &&t)
{
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
}

template<c_ T>
v.. bar(T &&t)
{
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    baz(st. forward<T>(t))sy.. pause
}

in. main(in., c.. *[]) {
    xray x("x")sy.. pause

    // xray x("x");
    // xray y("y");

    // xray x("x");
    // xray y("y");
    // x = y;

    // xray x("x");
    // x = xray("y");

    // xray x("x");
    // foo(x);

    // foo(xray("x"));

    // xray x("x");
    // foo(x); // remove const

    // foo(xray("x"));

    // xray x("x");
    // xray y("y");
    // x = std::move(y);

    // x = xray("y");

    // foo(xray("y"));

    // x = std::move(y);
    // bar(x);
    // bar(xray("tmp"));

    st. c__ __  "---" __  st. e..

    r_ 0sy.. pause
}
