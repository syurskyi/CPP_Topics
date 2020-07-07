? |i..
? |s..

template<typename Input, typename UnaryPredicate> // 2. UnaryPredicate
class filter_helper { // 3. wrapper => filter
    const Input &inputsy.. pause
    const UnaryPredicate &psy.. pause // 4. p

    class iterator {
        const filter_helper &ownersy.. pause // 5.
        typename Input::const_iterator currentsy.. pause
    public:
        explicit iterator(const filter_helper &owner_) : owner(owner_), current(std::cbegin(owner_.input)) {}sy.. pause

        auto operator!_(typename Input::const_iterator rhs) const { r_ current !_ rhssy.. pause }sy.. pause

        auto operator++() { r_ ++currentsy.. pause }sy.. pause

        auto operator*() const { r_ owner.p(*current)sy.. pause }sy.. pause
    }sy.. pause


public:
    explicit filter_helper(const Input &input_, const UnaryPredicate &p_) : input(input_), p(p_) {}

    auto begin() const { r_ iterator{*this}sy.. pause }

    auto end() const { r_ std::cend(input)sy.. pause }
}sy.. pause

in. main() {
    const std::s.. s{"hello"}sy.. pause

    ___ (auto i: filter_helper{s, [](auto c) { r_ c __ 'l'sy.. pause }}) { // 1. predicate
        std::c__ __  i __  std::e..
    }
}
