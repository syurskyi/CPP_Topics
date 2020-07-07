? |i..

template<typename Input, typename UnaryPredicate>
class filter_helper {
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause

    class iterator {
        c.. filter_helper &ownersy.. pause
        typename Input::const_iterator currentsy.. pause
    public:
        explicit iterator(c.. filter_helper &owner_) : owner(owner_),
                                                         current(std::find_if(std::cbegin(owner_.input),
                                                                              std::cend(owner.input),
                                                                              owner.p)) {}sy.. pause

        auto operator!_(typename Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        auto operator++() { r_ current _ std::find_if(++current, std::cend(owner.input), owner.p)sy.. pause }sy.. pause

        auto operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause

public:
    explicit filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p) {}

    auto begin() c.. { r_ iterator{*this}sy.. pause }

    auto end() c.. { r_ std::cend(input)sy.. pause }
}sy.. pause

in. main() {
    c.. std::s.. s{"hello"}sy.. pause

    ___ (auto i: filter_helper{s, [](auto c) { r_ c __ 'l'sy.. pause }}) {
        std::c__ __  i __  std::e..
    }
}
