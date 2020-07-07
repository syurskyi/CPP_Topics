? |i..
? <tuple>
? <functional>

in. foo(in., in., std::string &result)
{
    result = "surname";
    r_ 127;
}

std::string foo(in., in., in. &err)
{
    err = 127;
    r_ "surname";
}

void foo(in., in., in. &err, std::string &result)
{
    err = 127;
    result = "surname";
}

struct result {
    in. err;
    std::string result;
};

auto foo(in., in.)
{
    r_ result{127, std::string("surname")};
}

auto bar(in., in.)
{
    r_ std::tuple<in., std::string>(127, "surname");
//    return std::make_tuple(127, std::string("surname"));
}

in. main(in., char *[])
{
    std::c__ __  "* return struct" __  std::e..
    auto rf = foo(1, 2);
    std::c__ __  rf.err __  std::e..
    std::c__ __  rf.result __  std::e..

    std::c__ __  "* return tuple" __  std::e..
    auto rb = bar(1, 2);
    std::c__ __  std::get<0>(rb) __  std::e..
    std::c__ __  std::get<1>(rb) __  std::e..

    std::c__ __  "* return and unpack " __  std::e..
    std::string result;
    in. err;
    std::tuple<in. &, std::string &>(err, result) = bar(1, 2);
//    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
    std::c__ __  err __  std::e..
    std::c__ __  result __  std::e..

    std::c__ __  "* return and unpack" __  std::e..
    std::tie(err, result) = bar(1, 2);
    std::c__ __  err __  std::e..
    std::c__ __  result __  std::e..

    r_ 0;
}
