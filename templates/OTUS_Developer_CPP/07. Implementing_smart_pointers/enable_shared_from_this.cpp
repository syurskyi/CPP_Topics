? |i..
? <memory>

struct foo {
    auto get() { r_ this; }
};

struct bar {
    auto get() { r_ std::shared_ptr<bar>{this}; }

    auto raw() { r_ this; }
};

struct baz : std::enable_shared_from_this<baz> {
    auto get() { r_ shared_from_this(); }
};

in. main() {
    auto f = new foo{};
    auto ff = f->g..
    delete f;

    auto b = std::shared_ptr<bar>{new bar};
    std::c__ __  b.use_count() __  std::e..
    auto bb = std::shared_ptr<bar>{b->raw()};
    std::c__ __  b.use_count() __  " " __  bb.use_count() __  std::e..
    auto bbb = b->g..
    std::c__ __  b.use_count() __  " " __  bb.use_count() __  " " __  bbb.use_count() __  std::e..

    auto z = std::shared_ptr<baz>{new baz};
    std::c__ __  z.use_count() __  std::e..
    auto zz = z->g..
    std::c__ __  z.use_count() __  " " __  zz.use_count() __  std::e..
}
