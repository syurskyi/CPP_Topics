? |i..

template<std::size_t value>
v.. prin.Value
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  "size_t " __  value __  std::e..
}

template<c.. c.. *value>
v.. prin.Value
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  "Pointer = " __  value __  "\t value = " __  *value __  std::e..
}

// non-type template parameters
template<a.. value>
v.. prin.Me
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  value __  std::e..
}

in. main
    static c.. c.. c _ 'c'sy.. pause

    prin.Value<10>()sy.. pause
    prin.Value<&c>()sy.. pause

    static c.. in. a _ 42sy.. pause

    prin.Me<10>()sy.. pause
    prin.Me<'a'>()sy.. pause
    prin.Me<a>()sy.. pause
    prin.Me<*?>()sy.. pause

    r_ 0sy.. pause
}
