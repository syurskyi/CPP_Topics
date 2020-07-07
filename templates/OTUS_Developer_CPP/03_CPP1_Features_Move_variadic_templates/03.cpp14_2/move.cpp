// #define MOVE
? "xray.h"

? |i..

void foo(const xray &)
{
    std::c__ __  "= const ref" __  std::e..
}

void foo(xray &&)
{
    std::c__ __  "= temporary" __  std::e..
}

template<class T>
void baz(T &&t)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

template<class T>
void bar(T &&t)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    baz(std::forward<T>(t));
}

in. main(in., c.. *[]) {
    xray x("x");

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

    r_ 0;
}
