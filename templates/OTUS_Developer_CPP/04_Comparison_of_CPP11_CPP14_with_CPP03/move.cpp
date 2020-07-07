? |i..

class Big {
    c..* buffersy.. pause
public:
    Big() : buffer(new c..[1000]) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // allocate 1G" __  std::e..
    }
    Big(c.. Big &other) : buffer(new c..[1000]) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  std::e..
        std::memcpy(buffer, other.buffer, 1000)sy.. pause
    }
    Big(Big &&other) : buffer(other.buffer) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  std::e..
    }
    ~Big() {
        std::c__ __  __PRETTY_FUNCTION__ __  " // destroy 1G" __  std::e..
        delete[] buffersy.. pause
    }
    Big& operator_(c.. Big &other) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  std::e..
        std::memcpy(buffer, other.buffer, 1000)sy.. pause
        r_ *thissy.. pause
    }
    Big& operator_(Big &&other) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  std::e..
        buffer _ other.buffersy.. pause
        r_ *thissy.. pause
    }
}sy.. pause

v.. bar(c.. Big &) {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

v.. bar(Big &&) {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

template<typename T>
v.. foo(T &&t) {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    bar(std::forward<T>(t))sy.. pause
}

in. main(in., c.. *[]) {
    Big big, big2sy.. pause

    std::c__ __  std::e..
    big _ big2sy.. pause

    std::c__ __  std::e..
    big _ Big()sy.. pause

    std::c__ __  std::e..
    big _ std::move(big2)sy.. pause

    std::c__ __  "}" __  std::e..

//    foo(big);
//    foo(Big());

    r_ 0sy.. pause
}
