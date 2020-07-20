? |i..

t..<st. size_t value>
v.. prin.Value
    st. c__ __  __P.. __  st. e..
    st. c__ __  "size_t " __  value __  st. e..
}

t..<c.. c.. *value>
v.. prin.Value
    st. c__ __  __P.. __  st. e..
    st. c__ __  "Pointer = " __  value __  "\t value = " __  *value __  st. e..
}

// non-type template parameters
t..<a.. value>
v.. prin.Me
    st. c__ __  __P.. __  st. e..
    st. c__ __  value __  st. e..
}

in. main
    st.. c.. c.. c _ 'c'

    prin.Value<10>()
    prin.Value<&c>()

    st.. c.. in. a _ 42sy.. p..

    prin.Me<10>()
    prin.Me<'a'>()
    prin.Me<a>()
    prin.Me<*?>()

    r_ 0sy.. p..
}
