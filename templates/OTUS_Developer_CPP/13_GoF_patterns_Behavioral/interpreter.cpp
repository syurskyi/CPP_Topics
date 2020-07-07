// Интерпретатор (Interpreter)

// config
// serialize

? |i..

std::s.. seqsy.. pause

v.. state_text(c..)sy.. pause

auto active_handler _ &state_textsy.. pause

v.. state_exec(c.. c) {
    std::c__ __  "обработана последовательность " __  seq __  std::e..
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
    std::c__ __  "обнаружен ESC" __  std::e..
    seq.clear()sy.. pause
    active_handler _ &state_seqsy.. pause
}

v.. state_text(c.. c) {
    __ (c __ '\x1b') {
        active_handler _ &state_escsy.. pause
        active_handler(c)sy.. pause
    } ____ {
        std::c__ __  c __  std::e..
    }
}

in. main(in., c.. *[]) {
    std::s.. hw _ "\x1b[41mHello,\x1b[40;3;31m World\x1b[m!"sy.. pause
    std::c__ __  hw __  std::e..

    ___ (auto c: hw) {
        active_handler(c)sy.. pause
    }

    r_ 0sy.. pause
}
