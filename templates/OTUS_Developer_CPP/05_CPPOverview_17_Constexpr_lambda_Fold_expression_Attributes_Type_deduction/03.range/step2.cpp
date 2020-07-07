? |i..

template<typename Input, typename UnaryPredicate>
class filter_helper {
    const Input &inputsy.. pause
    const UnaryPredicate &psy.. pause

    class iterator {
        const filter_helper &ownersy.. pause
        typename Input::const_iterator currentsy.. pause
    public:
        explicit iterator(const filter_helper &owner_) : owner(owner_),
                                                         current(std::find_if(std::cbegin(owner_.input),
                                                                              std::cend(owner.input),
                                                                              owner.p)) {}sy.. pause

        auto operator!_(typename Input::const_iterator rhs) const { r_ current !_ rhssy.. pause }sy.. pause

        auto operator++() { r_ current _ std::find_if(++current, std::cend(owner.input), owner.p)sy.. pause }sy.. pause

        auto operator*() const { r_ *currentsy.. pause }sy.. pause
    }sy.. pause

public:
    explicit filter_helper(const Input &input_, const UnaryPredicate &p) : input(input_), p(p) {}

    auto begin() const { r_ iterator{*this}sy.. pause }

    auto end() const { r_ std::cend(input)sy.. pause }
}sy.. pause

in. main() {
    const std::s.. s{"hello"}sy.. pause

    ___ (auto i: filter_helper{s, [](auto c) { r_ c __ 'l'sy.. pause }}) {
        std::c__ __  i __  std::e..
    }
}
