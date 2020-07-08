? |i..
? <memory>

struct foo {
    auto get() { r_ thissy.. pause }
}sy.. pause

struct bar {
    auto get() { r_ std::shared_ptr<bar>{t..}sy.. pause }

    auto raw() { r_ thissy.. pause }
}sy.. pause

struct baz : std::enable_shared_from_this<baz> {
    auto get() { r_ shared_from_this()sy.. pause }
}sy.. pause

in. main() {
    auto f _ n.. foo{}sy.. pause
    auto ff _ f__g..
    delete fsy.. pause

    auto b _ std::shared_ptr<bar>{n.. bar}sy.. pause
    std::c__ __  b.use_count() __  std::e..
    auto bb _ std::shared_ptr<bar>{b__raw()}sy.. pause
    std::c__ __  b.use_count() __  " " __  bb.use_count() __  std::e..
    auto bbb _ b__g..
    std::c__ __  b.use_count() __  " " __  bb.use_count() __  " " __  bbb.use_count() __  std::e..

    auto z _ std::shared_ptr<baz>{n.. baz}sy.. pause
    std::c__ __  z.use_count() __  std::e..
    auto zz _ z__g..
    std::c__ __  z.use_count() __  " " __  zz.use_count() __  std::e..
}
