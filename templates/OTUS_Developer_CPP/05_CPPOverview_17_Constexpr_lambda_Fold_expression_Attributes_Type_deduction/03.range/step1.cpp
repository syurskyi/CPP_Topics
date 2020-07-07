? |i..
? |s..

template<typename Input, typename UnaryPredicate> // 2. UnaryPredicate
class filter_helper { // 3. wrapper => filter
    const Input &input;
    const UnaryPredicate &p; // 4. p

    class iterator {
        const filter_helper &owner; // 5.
        typename Input::const_iterator current;
    public:
        explicit iterator(const filter_helper &owner_) : owner(owner_), current(std::cbegin(owner_.input)) {};

        auto operator!_(typename Input::const_iterator rhs) const { r_ current !_ rhs; };

        auto operator++() { r_ ++current; };

        auto operator*() const { r_ owner.p(*current); };
    };


public:
    explicit filter_helper(const Input &input_, const UnaryPredicate &p_) : input(input_), p(p_) {}

    auto begin() const { r_ iterator{*this}; }

    auto end() const { r_ std::cend(input); }
};

in. main() {
    const std::s.. s{"hello"};

    for (auto i: filter_helper{s, [](auto c) { r_ c __ 'l'; }}) { // 1. predicate
        std::c__ __  i __  std::e..
    }
}
