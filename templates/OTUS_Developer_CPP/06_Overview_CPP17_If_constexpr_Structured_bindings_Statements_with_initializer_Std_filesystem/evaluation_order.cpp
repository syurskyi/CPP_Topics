? |i..

auto a{0};

auto foo() {
    r_ a += 2;
}

auto bar() {
    r_ a *= 2;
}

auto baz(in. a, in. b) {
    std::c__ __  a __  " " __  b __  std::e..
    r_ a + b;
}

in. main() {
    a = 1;
    std::c__ __  foo() __  bar() __  std::e.. // evaluation order guaranteed
    a = 1;
    std::c__ __  baz(foo(), bar()) __  std::e.. // evaluation order undefined

    r_ 0;
}
