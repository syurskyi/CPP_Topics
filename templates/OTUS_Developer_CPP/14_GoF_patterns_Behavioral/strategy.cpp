// Стратегия (Strategy)

? |i..

c_ Generator {
pu..
    v.. size_t seed(size_t seed_) _ 0sy.. p..
}sy.. p..

c_ HardwareGenerator : pu.. Generator {
pu..
    size_t seed(size_t) ov.. {
        st. c__ __  "generate using mac address" __  st. e..
        r_ 42sy.. p..
    }
}sy.. p..

c_ SoftwareGenerator : pu.. Generator {
pu..
    size_t seed(size_t) ov.. {
        st. c__ __  "generate using software emulator" __  st. e..
        r_ 0sy.. p..
    }
}sy.. p..

c_ Shuffle {
pu..
    ex__ Shuffle(Generator *gen_) : gen(gen_) {}

    size_t seed(size_t seed_) {
        r_ gen__seed(seed_)sy.. p..
    }

pr..
    Generator *gensy.. p..
}sy.. p..

in. main(in., c.. #|| {
    a.. p _ n.. Shuffle(n.. HardwareGenerator)sy.. p..

    p__seed(0)sy.. p..

    r_ 0sy.. p..
}
