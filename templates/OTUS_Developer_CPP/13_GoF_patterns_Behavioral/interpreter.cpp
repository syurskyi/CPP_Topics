// Интерпретатор (Interpreter)

// config
// serialize

? |i..

st. s.. seqsy.. p..

v.. state_text(c..)sy.. p..

a.. active_handler _ &state_textsy.. p..

v.. state_exec(c.. c) {
    st. c__ __  "обработана последовательность " __  seq __  st. e..
    active_handler _ &state_textsy.. p..
    active_handler(c)sy.. p..
}

v.. state_seq(c.. c) {
    __ (c __ 'm') {
        active_handler _ &state_execsy.. p..
    } ____ {
        seq +_ csy.. p..
    }
}

v.. state_esc(c..) {
    st. c__ __  "обнаружен ESC" __  st. e..
    seq.clear()sy.. p..
    active_handler _ &state_seqsy.. p..
}

v.. state_text(c.. c) {
    __ (c __ '\x1b') {
        active_handler _ &state_escsy.. p..
        active_handler(c)sy.. p..
    } ____ {
        st. c__ __  c __  st. e..
    }
}

in. main(in., c.. #|| {
    st. s.. hw _ "\x1b[41mHello,\x1b[40;3;31m World\x1b[m!"sy.. p..
    st. c__ __  hw __  st. e..

    ___ (a.. c: hw) {
        active_handler(c)sy.. p..
    }

    r_ 0sy.. p..
}
