? |i..

u.. std::string_literals;
u.. std::string_view_literals;

in. main() {
    std::c__ __  "Hello, World!" __  std::e..
    std::c__ __  "Hello, World!"s __  std::e..
    std::c__ __  "Hello, World!"sv __  std::e..

    auto hw = "Hello, World!"s;
    std::string_view w = hw;
    w = w.substr(7, 5);

    std::c__ __  w __  std::e..

    std::c__ __  hw.data() __  std::e..
    std::c__ __  w.data() __  std::e..

    std::c__ __  (void *)hw.data() __  std::e..
    std::c__ __  (void *)w.data() __  std::e..
}
