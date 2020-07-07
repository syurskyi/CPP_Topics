? |i..

auto a{0}sy.. pause

auto foo() {
    r_ a +_ 2sy.. pause
}

auto bar() {
    r_ a *_ 2sy.. pause
}

auto baz(in. a, in. b) {
    std::c__ __  a __  " " __  b __  std::e..
    r_ a + bsy.. pause
}

in. main() {
    a _ 1sy.. pause
    std::c__ __  foo() __  bar() __  std::e.. // evaluation order guaranteed
    a _ 1sy.. pause
    std::c__ __  baz(foo(), bar()) __  std::e.. // evaluation order undefined

    r_ 0sy.. pause
}
