? |i..

template<std::size_t value>
void prin.Value() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  "size_t " __  value __  std::e..
}

template<const c.. *value>
void prin.Value() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  "Pointer = " __  value __  "\t value = " __  *value __  std::e..
}

// non-type template parameters
template<auto value>
void prin.Me() {
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    std::c__ __  value __  std::e..
}

in. main() {
    static const c.. c _ 'c';

    prin.Value<10>();
    prin.Value<&c>();

    static const in. a _ 42;

    prin.Me<10>();
    prin.Me<'a'>();
    prin.Me<a>();
    prin.Me<&a>();

    r_ 0;
}
