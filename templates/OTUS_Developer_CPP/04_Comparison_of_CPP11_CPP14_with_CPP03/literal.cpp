? |i..

u.. std::string_literals;

std::string operator""_kg(unsigned long long)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    r_ "sorok dva";
}

std::string operator""_rate(long double)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    r_ "sorok dva";
}

std::string operator""_english(const char *, size_t)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    r_ "sorok dva";
}

in. main(in., char *[]) {
    auto a = 42_kg;
    std::c__ __  a __  std::e..

    auto b = 42.0_rate;
    std::c__ __  b __  std::e..

    auto c = "42"_english;
    std::c__ __  c __  std::e..

    auto d = "hello world"; // s
    std::c__ __  d __  std::e..
    std::c__ __  typeid(d).name() __  std::e..

    r_ 0;
}
