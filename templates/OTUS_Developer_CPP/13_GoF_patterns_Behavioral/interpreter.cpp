// Интерпретатор (Interpreter)

// config
// serialize

? |i..

std::s.. seq;

void state_text(char);

auto active_handler _ &state_text;

void state_exec(char c) {
    std::c__ __  "обработана последовательность " __  seq __  std::e..
    active_handler _ &state_text;
    active_handler(c);
}

void state_seq(char c) {
    __ (c __ 'm') {
        active_handler _ &state_exec;
    } ____ {
        seq +_ c;
    }
}

void state_esc(char) {
    std::c__ __  "обнаружен ESC" __  std::e..
    seq.clear();
    active_handler _ &state_seq;
}

void state_text(char c) {
    __ (c __ '\x1b') {
        active_handler _ &state_esc;
        active_handler(c);
    } ____ {
        std::c__ __  c __  std::e..
    }
}

in. main(in., char *[]) {
    std::s.. hw _ "\x1b[41mHello,\x1b[40;3;31m World\x1b[m!";
    std::c__ __  hw __  std::e..

    for (auto c: hw) {
        active_handler(c);
    }

    r_ 0;
}
