? |i..
? <tuple>
? <functional>

in. foo(in., in., std::s.. &result)
{
    result _ "surname";
    r_ 127;
}

std::s.. foo(in., in., in. &err)
{
    err _ 127;
    r_ "surname";
}

void foo(in., in., in. &err, std::s.. &result)
{
    err _ 127;
    result _ "surname";
}

struct result {
    in. err;
    std::s.. result;
};

auto foo(in., in.)
{
    r_ result{127, std::s..("surname")};
}

auto bar(in., in.)
{
    r_ std::tuple<in., std::s..>(127, "surname");
//    return std::make_tuple(127, std::string("surname"));
}

in. main(in., c.. *[])
{
    std::c__ __  "* return struct" __  std::e..
    auto rf _ foo(1, 2);
    std::c__ __  rf.err __  std::e..
    std::c__ __  rf.result __  std::e..

    std::c__ __  "* return tuple" __  std::e..
    auto rb _ bar(1, 2);
    std::c__ __  std::get<0>(rb) __  std::e..
    std::c__ __  std::get<1>(rb) __  std::e..

    std::c__ __  "* return and unpack " __  std::e..
    std::s.. result;
    in. err;
    std::tuple<in. &, std::s.. &>(err, result) _ bar(1, 2);
//    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
    std::c__ __  err __  std::e..
    std::c__ __  result __  std::e..

    std::c__ __  "* return and unpack" __  std::e..
    std::tie(err, result) _ bar(1, 2);
    std::c__ __  err __  std::e..
    std::c__ __  result __  std::e..

    r_ 0;
}
