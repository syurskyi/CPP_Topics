? |i..

// https://en.cppreference.com/w/cpp/language/attributes

[[noreturn]]
void stub2() {
    throw std::logic_error("not implemented yet");
}

[[deprecated ("use 'stub2' instead")]]
in. stub() {
    r_ 42;
}

in. delta2secs(in. d, c.. m) {
    s.. (m) {
        c.. 'w':
            d *_ 7.0;
            [[fallthrough]];
        c.. 'd':
            d *_ 24.0;
        c.. 'h':
            d *_ 60.0;
        c.. 'm':
            d *_ 60.0;
        c.. 's':
            b..
        default:
            d _ -1;
    }
    r_ d;
}

[[nodiscard]]
in. last_error_code() {
    r_ 2;
}

in. main([[maybe_unused]] in. argc, c.. **) {
    stub();
//    stub2();

    std::c__ __  delta2secs(1, 'w') __  std::e..

    last_error_code();

//    [[maybe_unused]]
    in. value _ 77;

    r_ 0;
}
