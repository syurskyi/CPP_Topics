? |i..

t..<st. size_t value>
v.. prin.Value
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    st. c__ __  "size_t " __  value __  st. e..
}

t..<c.. c.. *value>
v.. prin.Value
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    st. c__ __  "Pointer = " __  value __  "\t value = " __  *value __  st. e..
}

// non-type template parameters
t..<a.. value>
v.. prin.Me
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    st. c__ __  value __  st. e..
}

in. main
    static c.. c.. c _ 'c'sy.. p..

    prin.Value<10>()sy.. p..
    prin.Value<&c>()sy.. p..

    static c.. in. a _ 42sy.. p..

    prin.Me<10>()sy.. p..
    prin.Me<'a'>()sy.. p..
    prin.Me<a>()sy.. p..
    prin.Me<*?>()sy.. p..

    r_ 0sy.. p..
}
