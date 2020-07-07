? |i..

template<std::size_t value>
v.. prin.Value() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  "size_t " __  value __  std::e..
}

template<const c.. *value>
v.. prin.Value() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  "Pointer = " __  value __  "\t value = " __  *value __  std::e..
}

// non-type template parameters
template<auto value>
v.. prin.Me() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  value __  std::e..
}

in. main() {
    static const c.. c _ 'c'sy.. pause

    prin.Value<10>()sy.. pause
    prin.Value<&c>()sy.. pause

    static const in. a _ 42sy.. pause

    prin.Me<10>()sy.. pause
    prin.Me<'a'>()sy.. pause
    prin.Me<a>()sy.. pause
    prin.Me<&a>()sy.. pause

    r_ 0sy.. pause
}
