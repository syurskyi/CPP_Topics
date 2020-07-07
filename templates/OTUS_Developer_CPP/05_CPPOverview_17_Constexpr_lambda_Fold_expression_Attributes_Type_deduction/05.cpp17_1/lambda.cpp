? <array>

in. main() {
    in. a;
    static_assert([](auto i){r_ i;}(42));

    static_assert([](auto i) constexpr -> in. {r_ i;}(42));

    auto getSize = [](){ in. a = 0; r_ 42; };
    std::array<in., getSize()> arr{};

    auto getSizeStatic = [](){ static in. a = 0; r_ 42;};
//    std::array<int, getSizeStatic()> arr2{};

    r_ 0;
}
