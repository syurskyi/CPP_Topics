? |i..
? me..

st.. foo {
    a.. get r_ thissy.. p.. }
}sy.. p..

st.. bar {
    a.. get r_ st. shared_ptr<bar>{t..}sy.. p.. }

    a.. raw r_ thissy.. p.. }
}sy.. p..

st.. baz : st. enable_shared_from_this<baz> {
    a.. get r_ shared_from_this()sy.. p.. }
}sy.. p..

in. main
    a.. f _ n.. foo{}sy.. p..
    a.. ff _ f__g..
    de.. fsy.. p..

    a.. b _ st. shared_ptr<bar>{n.. bar}sy.. p..
    st. c__ __  b.use_count() __  st. e..
    a.. bb _ st. shared_ptr<bar>{b__raw()}sy.. p..
    st. c__ __  b.use_count() __  " " __  bb.use_count() __  st. e..
    a.. bbb _ b__g..
    st. c__ __  b.use_count() __  " " __  bb.use_count() __  " " __  bbb.use_count() __  st. e..

    a.. z _ st. shared_ptr<baz>{n.. baz}sy.. p..
    st. c__ __  z.use_count() __  st. e..
    a.. zz _ z__g..
    st. c__ __  z.use_count() __  " " __  zz.use_count() __  st. e..
}
