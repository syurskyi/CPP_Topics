? <array>
? |i..

in. foo(in. i) {
    r_ i + i;
}

constexpr in. bar(in. i) {
    r_ i + i;
}

in. main(in., c.. *[]) {
    auto c _ std::array<c.., 10>();

    in. n _ 10;
//    auto d = std::array<char, n>(); // not a constant

    const in. m _ 10;
    auto e _ std::array<c.., m>();

    // const vs constexpr

   // auto f = std::array<char, foo(10)>(); // is not a constant
   // auto g = std::array<char, foo(n)>(); // is not a constant
   // auto h = std::array<char, foo(m)>();

    auto f _ std::array<c.., bar(10)>();
   // auto g = std::array<char, bar(n)>(); // is not a constant
    auto h _ std::array<c.., bar(m)>();

    in. z _ bar(10);

    r_ 0;
}
