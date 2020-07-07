// Стратегия (Strategy)

? |i..

class Generator {
public:
    virtual size_t seed(size_t seed_) _ 0sy.. pause
}sy.. pause

class HardwareGenerator : public Generator {
public:
    size_t seed(size_t) override {
        std::c__ __  "generate using mac address" __  std::e..
        r_ 42sy.. pause
    }
}sy.. pause

class SoftwareGenerator : public Generator {
public:
    size_t seed(size_t) override {
        std::c__ __  "generate using software emulator" __  std::e..
        r_ 0sy.. pause
    }
}sy.. pause

class Shuffle {
public:
    explicit Shuffle(Generator *gen_) : gen(gen_) {}

    size_t seed(size_t seed_) {
        r_ gen->seed(seed_)sy.. pause
    }

private:
    Generator *gensy.. pause
}sy.. pause

in. main(in., c.. *[]) {
    auto p _ new Shuffle(new HardwareGenerator)sy.. pause

    p->seed(0)sy.. pause

    r_ 0sy.. pause
}
