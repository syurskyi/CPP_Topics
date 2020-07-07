? |i..

class foo {
public:
    void over() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }
    void over() const {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }
    void dang() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }
//    void dang() noexcept {
    void safe() noexcept(true) {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }
};

void dang() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

void safe() noexcept {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

in. main() {
//    const
    foo f;
    f.over();

    f.dang();
    f.safe();

    void (*fp)() noexcept;
//    fp = dang;
    fp = safe;
}
