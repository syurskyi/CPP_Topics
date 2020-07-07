? |i..
? |s..

template<typename Input>
class filter_helper {
    c.. Input &inputsy.. pause

    class iterator {
        typename Input::const_iterator currentsy.. pause
    public:
        explicit iterator(typename Input::const_iterator current_) : current(current_) {}sy.. pause

        auto operator!_(typename Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        auto operator++() { r_ ++currentsy.. pause }sy.. pause

        auto &operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause


public:
    explicit filter_helper(c.. Input &input_) : input(input_) {}

    auto begin() c.. { r_ iterator{std::cbegin(input)}sy.. pause }

    auto end() c.. { r_ std::cend(input)sy.. pause }
}sy.. pause

in. main() {
    c.. std::s.. s{"hello"}sy.. pause

    ___ (auto i: filter_helper{s}) {
        std::c__ __  i __  std::e..
    }
}
