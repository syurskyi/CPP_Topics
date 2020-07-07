? <array>
? |i..

in. foo(in. i) {
    r_ i + isy.. pause
}

constexpr in. bar(in. i) {
    r_ i + isy.. pause
}

in. main(in., c.. *[]) {
    auto c _ std::array<c.., 10>()sy.. pause

    in. n _ 10sy.. pause
//    auto d = std::array<char, n>(); // not a constant

    const in. m _ 10sy.. pause
    auto e _ std::array<c.., m>()sy.. pause

    // const vs constexpr

   // auto f = std::array<char, foo(10)>(); // is not a constant
   // auto g = std::array<char, foo(n)>(); // is not a constant
   // auto h = std::array<char, foo(m)>();

    auto f _ std::array<c.., bar(10)>()sy.. pause
   // auto g = std::array<char, bar(n)>(); // is not a constant
    auto h _ std::array<c.., bar(m)>()sy.. pause

    in. z _ bar(10)sy.. pause

    r_ 0sy.. pause
}
