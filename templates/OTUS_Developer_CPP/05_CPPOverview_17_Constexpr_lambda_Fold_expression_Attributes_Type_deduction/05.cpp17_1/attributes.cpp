? |i..

// https://en.cppreference.com/w/cpp/language/attributes

[[noreturn]]
v.. stub2
    throw st. logic_error("not implemented yet")sy.. p..
}

[[deprecated ("use 'stub2' instead")]]
in. stub
    r_ 42sy.. p..
}

in. delta2secs(in. d, c.. m) {
    s.. (m) {
        c.. 'w':
            d *_ 7.0sy.. p..
            [[fallthrough]]sy.. p..
        c.. 'd':
            d *_ 24.0sy.. p..
        c.. 'h':
            d *_ 60.0sy.. p..
        c.. 'm':
            d *_ 60.0sy.. p..
        c.. 's':
            b..
        def..
            d _ -1sy.. p..
    }
    r_ dsy.. p..
}

[[nodiscard]]
in. last_error_code
    r_ 2sy.. p..
}

in. main([[maybe_unused]] in. argc, c.. **) {
    stub()sy.. p..
//    stub2();

    st. c__ __  delta2secs(1, 'w') __  st. e..

    last_error_code()sy.. p..

//    [[maybe_unused]]
    in. value _ 77sy.. p..

    r_ 0sy.. p..
}
