? |i..

u.. std::string_literals;
u.. std::string_view_literals;

in. main() {
    std::c__ __  "Hello, World!" __  std::e..
    std::c__ __  "Hello, World!"s __  std::e..
    std::c__ __  "Hello, World!"sv __  std::e..

    auto hw _ "Hello, World!"s;
    std::string_view w _ hw;
    w _ w.substr(7, 5);

    std::c__ __  w __  std::e..

    std::c__ __  hw.data() __  std::e..
    std::c__ __  w.data() __  std::e..

    std::c__ __  (v.. *)hw.data() __  std::e..
    std::c__ __  (v.. *)w.data() __  std::e..
}
