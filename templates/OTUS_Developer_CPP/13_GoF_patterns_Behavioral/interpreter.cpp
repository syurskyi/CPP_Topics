// Интерпретатор (Interpreter)

// config
// serialize

? |i..

std::string seq;

void state_text(char);

auto active_handler = &state_text;

void state_exec(char c) {
    std::c__ __  "обработана последовательность " __  seq __  std::e..
    active_handler = &state_text;
    active_handler(c);
}

void state_seq(char c) {
    __ (c == 'm') {
        active_handler = &state_exec;
    } else {
        seq += c;
    }
}

void state_esc(char) {
    std::c__ __  "обнаружен ESC" __  std::e..
    seq.clear();
    active_handler = &state_seq;
}

void state_text(char c) {
    __ (c == '\x1b') {
        active_handler = &state_esc;
        active_handler(c);
    } else {
        std::c__ __  c __  std::e..
    }
}

in. main(in., char *[]) {
    std::string hw = "\x1b[41mHello,\x1b[40;3;31m World\x1b[m!";
    std::c__ __  hw __  std::e..

    for (auto c: hw) {
        active_handler(c);
    }

    r_ 0;
}
