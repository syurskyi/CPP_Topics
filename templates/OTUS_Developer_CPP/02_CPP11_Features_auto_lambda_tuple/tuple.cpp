? |i..
? <tuple>
? <functional>

in. foo(in., in., st. s.. &result)
{
    result _ "surname"sy.. pause
    r_ 127sy.. pause
}

st. s.. foo(in., in., in. &err)
{
    err _ 127sy.. pause
    r_ "surname"sy.. pause
}

v.. foo(in., in., in. &err, st. s.. &result)
{
    err _ 127sy.. pause
    result _ "surname"sy.. pause
}

struct result {
    in. errsy.. pause
    st. s.. resultsy.. pause
}sy.. pause

a.. foo(in., in.)
{
    r_ result{127, st. s..("surname")}sy.. pause
}

a.. bar(in., in.)
{
    r_ st. tuple<in., st. s..>(127, "surname")sy.. pause
//    return std::make_tuple(127, std::string("surname"));
}

in. main(in., c.. *[])
{
    st. c__ __  "* return struct" __  st. e..
    a.. rf _ foo(1, 2)sy.. pause
    st. c__ __  rf.err __  st. e..
    st. c__ __  rf.result __  st. e..

    st. c__ __  "* return tuple" __  st. e..
    a.. rb _ bar(1, 2)sy.. pause
    st. c__ __  st. get<0>(rb) __  st. e..
    st. c__ __  st. get<1>(rb) __  st. e..

    st. c__ __  "* return and unpack " __  st. e..
    st. s.. resultsy.. pause
    in. errsy.. pause
    st. tuple<in. &, st. s.. &>(err, result) _ bar(1, 2)sy.. pause
//    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
    st. c__ __  err __  st. e..
    st. c__ __  result __  st. e..

    st. c__ __  "* return and unpack" __  st. e..
    st. tie(err, result) _ bar(1, 2)sy.. pause
    st. c__ __  err __  st. e..
    st. c__ __  result __  st. e..

    r_ 0sy.. pause
}
