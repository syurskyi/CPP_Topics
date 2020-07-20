//? <array>
//? |i..
//
//in. foo in. i
//    r_ ? + ?
//
//
//c_t.. in. bar in. i
//    r_ ? + ?
//
//
//in. main in., c.. #||
//    a.. c _ st. ar..|c.., 10|||
//
//    in. n _ 10
////    auto d = std::array<char, n>(); // not a constant
//
//    c.. in. m _ 10
//    a.. e _ st. ar..|c.., m|||
//
//    // const vs constexpr
//
//   // auto f = std::array<char, foo(10)>(); // is not a constant
//   // auto g = std::array<char, foo(n)>(); // is not a constant
//   // auto h = std::array<char, foo(m)>();
//
//    a.. f _ st. ar..|c.., b.. 10 |||
//   // auto g = std::array<char, bar(n)>(); // is not a constant
//    a.. h _ st. ar..|c.. b.. m |||
//
//    in. z _ b.. 10
//
//    r_ _
//
