? |i..

class Big {
    char* buffer;
public:
    Big() : buffer(new char[1000]) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // allocate 1G" __  std::e..
    }
    Big(const Big &other) : buffer(new char[1000]) {
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
    Big& operator=(const Big &other) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  std::e..
        std::memcpy(buffer, other.buffer, 1000);
        r_ *this;
    }
    Big& operator=(Big &&other) {
        std::c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  std::e..
        buffer = other.buffer;
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

in. main(in., char *[]) {
    Big big, big2;

    std::c__ __  std::e..
    big = big2;

    std::c__ __  std::e..
    big = Big();

    std::c__ __  std::e..
    big = std::move(big2);

    std::c__ __  "}" __  std::e..

//    foo(big);
//    foo(Big());

    r_ 0;
}
