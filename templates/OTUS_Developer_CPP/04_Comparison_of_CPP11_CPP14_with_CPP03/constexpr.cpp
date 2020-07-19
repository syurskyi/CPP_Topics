? <array>
? |i..

in. foo(in. i) 
    r_ i + isy.. p..
}

constexpr in. bar(in. i) 
    r_ i + isy.. p..
}

in. main(in., c.. #||
    a.. c _ st. array<c.., 10>()sy.. p..

    in. n _ 10sy.. p..
//    auto d = std::array<char, n>(); // not a constant

    c.. in. m _ 10sy.. p..
    a.. e _ st. array<c.., m>()sy.. p..

    // const vs constexpr

   // auto f = std::array<char, foo(10)>(); // is not a constant
   // auto g = std::array<char, foo(n)>(); // is not a constant
   // auto h = std::array<char, foo(m)>();

    a.. f _ st. array<c.., bar(10)>()sy.. p..
   // auto g = std::array<char, bar(n)>(); // is not a constant
    a.. h _ st. array<c.., bar(m)>()sy.. p..

    in. z _ bar(10)sy.. p..

    r_ 0sy.. p..
}
