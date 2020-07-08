// Стратегия (Strategy)

? |i..

c_ Generator {
pu..
    virtual size_t seed(size_t seed_) _ 0sy.. pause
}sy.. pause

c_ HardwareGenerator : public Generator {
pu..
    size_t seed(size_t) override {
        std::c__ __  "generate using mac address" __  std::e..
        r_ 42sy.. pause
    }
}sy.. pause

c_ SoftwareGenerator : public Generator {
pu..
    size_t seed(size_t) override {
        std::c__ __  "generate using software emulator" __  std::e..
        r_ 0sy.. pause
    }
}sy.. pause

c_ Shuffle {
pu..
    explicit Shuffle(Generator *gen_) : gen(gen_) {}

    size_t seed(size_t seed_) {
        r_ gen__seed(seed_)sy.. pause
    }

pr..
    Generator *gensy.. pause
}sy.. pause

in. main(in., c.. *[]) {
    auto p _ n.. Shuffle(n.. HardwareGenerator)sy.. pause

    p__seed(0)sy.. pause

    r_ 0sy.. pause
}
