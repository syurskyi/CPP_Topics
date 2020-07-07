// Стратегия (Strategy)

? |i..

class Generator {
public:
    virtual size_t seed(size_t seed_) _ 0;
};

class HardwareGenerator : public Generator {
public:
    size_t seed(size_t) override {
        std::c__ __  "generate using mac address" __  std::e..
        r_ 42;
    }
};

class SoftwareGenerator : public Generator {
public:
    size_t seed(size_t) override {
        std::c__ __  "generate using software emulator" __  std::e..
        r_ 0;
    }
};

class Shuffle {
public:
    explicit Shuffle(Generator *gen_) : gen(gen_) {}

    size_t seed(size_t seed_) {
        r_ gen->seed(seed_);
    }

private:
    Generator *gen;
};

in. main(in., c.. *[]) {
    auto p _ new Shuffle(new HardwareGenerator);

    p->seed(0);

    r_ 0;
}
