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

in. delta2secs(in. d, char m) {
    switch (m) {
        case 'w':
            d *= 7.0;
            [[fallthrough]];
        case 'd':
            d *= 24.0;
        case 'h':
            d *= 60.0;
        case 'm':
            d *= 60.0;
        case 's':
            break;
        default:
            d = -1;
    }
    r_ d;
}

[[nodiscard]]
in. last_error_code() {
    r_ 2;
}

in. main([[maybe_unused]] in. argc, char **) {
    stub();
//    stub2();

    std::c__ __  delta2secs(1, 'w') __  std::e..

    last_error_code();

//    [[maybe_unused]]
    in. value = 77;

    r_ 0;
}
