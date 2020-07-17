? |i..
? <tuple>
? <functional>

in. foo(in., in., std::s.. &result)
{
    result _ "surname"sy.. pause
    r_ 127sy.. pause
}

std::s.. foo(in., in., in. &err)
{
    err _ 127sy.. pause
    r_ "surname"sy.. pause
}

v.. foo(in., in., in. &err, std::s.. &result)
{
    err _ 127sy.. pause
    result _ "surname"sy.. pause
}

struct result {
    in. errsy.. pause
    std::s.. resultsy.. pause
}sy.. pause

a.. foo(in., in.)
{
    r_ result{127, std::s..("surname")}sy.. pause
}

a.. bar(in., in.)
{
    r_ std::tuple<in., std::s..>(127, "surname")sy.. pause
//    return std::make_tuple(127, std::string("surname"));
}

in. main(in., c.. *[])
{
    std::c__ __  "* return struct" __  std::e..
    a.. rf _ foo(1, 2)sy.. pause
    std::c__ __  rf.err __  std::e..
    std::c__ __  rf.result __  std::e..

    std::c__ __  "* return tuple" __  std::e..
    a.. rb _ bar(1, 2)sy.. pause
    std::c__ __  std::get<0>(rb) __  std::e..
    std::c__ __  std::get<1>(rb) __  std::e..

    std::c__ __  "* return and unpack " __  std::e..
    std::s.. resultsy.. pause
    in. errsy.. pause
    std::tuple<in. &, std::s.. &>(err, result) _ bar(1, 2)sy.. pause
//    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
    std::c__ __  err __  std::e..
    std::c__ __  result __  std::e..

    std::c__ __  "* return and unpack" __  std::e..
    std::tie(err, result) _ bar(1, 2)sy.. pause
    std::c__ __  err __  std::e..
    std::c__ __  result __  std::e..

    r_ 0sy.. pause
}
