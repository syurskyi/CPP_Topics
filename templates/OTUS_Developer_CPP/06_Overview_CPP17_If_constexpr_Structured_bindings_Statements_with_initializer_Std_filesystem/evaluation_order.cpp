? |i..

a.. a{0}sy.. p..

a.. foo
    r_ a +_ 2sy.. p..
}

a.. bar
    r_ a *_ 2sy.. p..
}

a.. baz(in. a, in. b) {
    st. c__ __  a __  " " __  b __  st. e..
    r_ a + bsy.. p..
}

in. main
    a _ 1sy.. p..
    st. c__ __  foo() __  bar() __  st. e.. // evaluation order guaranteed
    a _ 1sy.. p..
    st. c__ __  baz(foo(), bar()) __  st. e.. // evaluation order undefined

    r_ 0sy.. p..
}
