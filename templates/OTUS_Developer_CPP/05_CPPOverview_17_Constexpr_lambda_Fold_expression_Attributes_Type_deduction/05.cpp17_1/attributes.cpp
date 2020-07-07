? |i..

// https://en.cppreference.com/w/cpp/language/attributes

[[noreturn]]
v.. stub2() {
    throw std::logic_error("not implemented yet")sy.. pause
}

[[deprecated ("use 'stub2' instead")]]
in. stub() {
    r_ 42sy.. pause
}

in. delta2secs(in. d, c.. m) {
    s.. (m) {
        c.. 'w':
            d *_ 7.0sy.. pause
            [[fallthrough]]sy.. pause
        c.. 'd':
            d *_ 24.0sy.. pause
        c.. 'h':
            d *_ 60.0sy.. pause
        c.. 'm':
            d *_ 60.0sy.. pause
        c.. 's':
            b..
        default:
            d _ -1sy.. pause
    }
    r_ dsy.. pause
}

[[nodiscard]]
in. last_error_code() {
    r_ 2sy.. pause
}

in. main([[maybe_unused]] in. argc, c.. **) {
    stub()sy.. pause
//    stub2();

    std::c__ __  delta2secs(1, 'w') __  std::e..

    last_error_code()sy.. pause

//    [[maybe_unused]]
    in. value _ 77sy.. pause

    r_ 0sy.. pause
}
