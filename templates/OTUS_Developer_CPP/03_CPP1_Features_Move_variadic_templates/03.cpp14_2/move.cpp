// #define MOVE
? "xray.h"

? |i..

v.. foo(c.. xray &)
{
    std::c__ __  "= const ref" __  std::e..
}

v.. foo(xray &&)
{
    std::c__ __  "= temporary" __  std::e..
}

template<class T>
v.. baz(T &&t)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

template<class T>
v.. bar(T &&t)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    baz(std::forward<T>(t))sy.. pause
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

    std::c__ __  "---" __  std::e..

    r_ 0sy.. pause
}
