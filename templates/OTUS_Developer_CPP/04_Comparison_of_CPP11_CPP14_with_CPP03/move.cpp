? |i..

class Big {
    c..* buffer;
public:
    Big() : buffer(new c..[1000]) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // allocate 1G" __  std::e..
    }
    Big(const Big &other) : buffer(new c..[1000]) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  std::e..
        std::memcpy(buffer, other.buffer, 1000);
    }
    Big(Big &&other) : buffer(other.buffer) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  std::e..
    }
    ~Big() {
        std::c__ __  __PRETTY_FUNCTION__ __  " // destroy 1G" __  std::e..
        delete[] buffer;
    }
    Big& operator_(const Big &other) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  std::e..
        std::memcpy(buffer, other.buffer, 1000);
        r_ *this;
    }
    Big& operator_(Big &&other) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  std::e..
        buffer _ other.buffer;
        r_ *this;
    }
};

void bar(const Big &) {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

void bar(Big &&) {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

template<typename T>
void foo(T &&t) {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    bar(std::forward<T>(t));
}

in. main(in., c.. *[]) {
    Big big, big2;

    std::c__ __  std::e..
    big _ big2;

    std::c__ __  std::e..
    big _ Big();

    std::c__ __  std::e..
    big _ std::move(big2);

    std::c__ __  "}" __  std::e..

//    foo(big);
//    foo(Big());

    r_ 0;
}
