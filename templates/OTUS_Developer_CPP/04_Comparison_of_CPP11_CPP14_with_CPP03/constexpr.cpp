//? <array>
//? |i..
//
//in. foo in. i
//    r_ ? + ? sy.. p..
//
//
//c_t.. in. bar in. i
//    r_ ? + ? sy.. p..
//
//
//in. main in., c.. #||
//    a.. c _ st. ar..|c.., 10||| sy.. p..
//
//    in. n _ 10 sy.. p..
////    auto d = std::array<char, n>(); // not a constant
//
//    c.. in. m _ 10 sy.. p..
//    a.. e _ st. ar..|c.., m||| sy.. p..
//
//    // const vs constexpr
//
//   // auto f = std::array<char, foo(10)>(); // is not a constant
//   // auto g = std::array<char, foo(n)>(); // is not a constant
//   // auto h = std::array<char, foo(m)>();
//
//    a.. f _ st. ar..|c.., b.. 10 ||| sy.. p..
//   // auto g = std::array<char, bar(n)>(); // is not a constant
//    a.. h _ st. ar..|c.. b.. m ||| sy.. p..
//
//    in. z _ b.. 10 sy.. p..
//
//    r_ _ sy.. p..
//
