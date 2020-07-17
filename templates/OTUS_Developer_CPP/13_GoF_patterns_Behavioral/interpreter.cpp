// Интерпретатор (Interpreter)

// config
// serialize

? |i..

st. s.. seqsy.. pause

v.. state_text(c..)sy.. pause

a.. active_handler _ &state_textsy.. pause

v.. state_exec(c.. c) {
    st. c__ __  "обработана последовательность " __  seq __  st. e..
    active_handler _ &state_textsy.. pause
    active_handler(c)sy.. pause
}

v.. state_seq(c.. c) {
    __ (c __ 'm') {
        active_handler _ &state_execsy.. pause
    } ____ {
        seq +_ csy.. pause
    }
}

v.. state_esc(c..) {
    st. c__ __  "обнаружен ESC" __  st. e..
    seq.clear()sy.. pause
    active_handler _ &state_seqsy.. pause
}

v.. state_text(c.. c) {
    __ (c __ '\x1b') {
        active_handler _ &state_escsy.. pause
        active_handler(c)sy.. pause
    } ____ {
        st. c__ __  c __  st. e..
    }
}

in. main(in., c.. *[]) {
    st. s.. hw _ "\x1b[41mHello,\x1b[40;3;31m World\x1b[m!"sy.. pause
    st. c__ __  hw __  st. e..

    ___ (a.. c: hw) {
        active_handler(c)sy.. pause
    }

    r_ 0sy.. pause
}
