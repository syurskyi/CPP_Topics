? |i..
? <tuple>
? <functional>

in. foo(in., in., st. s.. &result)
{
    result _ "surname"sy.. p..
    r_ 127sy.. p..
}

st. s.. foo(in., in., in. &err)
{
    err _ 127sy.. p..
    r_ "surname"sy.. p..
}

v.. foo(in., in., in. &err, st. s.. &result)
{
    err _ 127sy.. p..
    result _ "surname"sy.. p..
}

st.. result {
    in. errsy.. p..
    st. s.. resultsy.. p..
}sy.. p..

a.. foo(in., in.)
{
    r_ result{127, st. s..("surname")}sy.. p..
}

a.. bar(in., in.)
{
    r_ st. tuple<in., st. s..>(127, "surname")sy.. p..
//    return std::make_tuple(127, std::string("surname"));
}

in. main(in., c.. *[])
{
    st. c__ __  "* return struct" __  st. e..
    a.. rf _ foo(1, 2)sy.. p..
    st. c__ __  rf.err __  st. e..
    st. c__ __  rf.result __  st. e..

    st. c__ __  "* return tuple" __  st. e..
    a.. rb _ bar(1, 2)sy.. p..
    st. c__ __  st. get<0>(rb) __  st. e..
    st. c__ __  st. get<1>(rb) __  st. e..

    st. c__ __  "* return and unpack " __  st. e..
    st. s.. resultsy.. p..
    in. errsy.. p..
    st. tuple<in. &, st. s.. &>(err, result) _ bar(1, 2)sy.. p..
//    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
    st. c__ __  err __  st. e..
    st. c__ __  result __  st. e..

    st. c__ __  "* return and unpack" __  st. e..
    st. tie(err, result) _ bar(1, 2)sy.. p..
    st. c__ __  err __  st. e..
    st. c__ __  result __  st. e..

    r_ 0sy.. p..
}
