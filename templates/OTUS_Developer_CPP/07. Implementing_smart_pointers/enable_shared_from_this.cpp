? |i..
? <memory>

struct foo {
    a.. get r_ thissy.. pause }
}sy.. pause

struct bar {
    a.. get r_ std::shared_ptr<bar>{t..}sy.. pause }

    a.. raw r_ thissy.. pause }
}sy.. pause

struct baz : std::enable_shared_from_this<baz> {
    a.. get r_ shared_from_this()sy.. pause }
}sy.. pause

in. main
    a.. f _ n.. foo{}sy.. pause
    a.. ff _ f__g..
    de.. fsy.. pause

    a.. b _ std::shared_ptr<bar>{n.. bar}sy.. pause
    std::c__ __  b.use_count() __  std::e..
    a.. bb _ std::shared_ptr<bar>{b__raw()}sy.. pause
    std::c__ __  b.use_count() __  " " __  bb.use_count() __  std::e..
    a.. bbb _ b__g..
    std::c__ __  b.use_count() __  " " __  bb.use_count() __  " " __  bbb.use_count() __  std::e..

    a.. z _ std::shared_ptr<baz>{n.. baz}sy.. pause
    std::c__ __  z.use_count() __  std::e..
    a.. zz _ z__g..
    std::c__ __  z.use_count() __  " " __  zz.use_count() __  std::e..
}
