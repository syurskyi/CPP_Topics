? |i..
? me..

st.. foo {
    a.. get r_ thissy.. pause }
}sy.. pause

st.. bar {
    a.. get r_ st. shared_ptr<bar>{t..}sy.. pause }

    a.. raw r_ thissy.. pause }
}sy.. pause

st.. baz : st. enable_shared_from_this<baz> {
    a.. get r_ shared_from_this()sy.. pause }
}sy.. pause

in. main
    a.. f _ n.. foo{}sy.. pause
    a.. ff _ f__g..
    de.. fsy.. pause

    a.. b _ st. shared_ptr<bar>{n.. bar}sy.. pause
    st. c__ __  b.use_count() __  st. e..
    a.. bb _ st. shared_ptr<bar>{b__raw()}sy.. pause
    st. c__ __  b.use_count() __  " " __  bb.use_count() __  st. e..
    a.. bbb _ b__g..
    st. c__ __  b.use_count() __  " " __  bb.use_count() __  " " __  bbb.use_count() __  st. e..

    a.. z _ st. shared_ptr<baz>{n.. baz}sy.. pause
    st. c__ __  z.use_count() __  st. e..
    a.. zz _ z__g..
    st. c__ __  z.use_count() __  " " __  zz.use_count() __  st. e..
}
