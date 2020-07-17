? |i..

a.. a{0}sy.. pause

a.. foo
    r_ a +_ 2sy.. pause
}

a.. bar
    r_ a *_ 2sy.. pause
}

a.. baz(in. a, in. b) {
    st. c__ __  a __  " " __  b __  st. e..
    r_ a + bsy.. pause
}

in. main
    a _ 1sy.. pause
    st. c__ __  foo() __  bar() __  st. e.. // evaluation order guaranteed
    a _ 1sy.. pause
    st. c__ __  baz(foo(), bar()) __  st. e.. // evaluation order undefined

    r_ 0sy.. pause
}
