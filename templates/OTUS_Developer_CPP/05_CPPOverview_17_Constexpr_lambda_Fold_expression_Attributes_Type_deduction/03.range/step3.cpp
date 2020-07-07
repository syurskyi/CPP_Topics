? |i..

template<typename Input, typename UnaryPredicate>
class filter_helper {
    const Input &input;
    const UnaryPredicate &p;

    class iterator {
        const filter_helper &owner;
        typename Input::const_iterator current;
    public:
        explicit iterator(const filter_helper &owner_) : owner(owner_),
                                                         current(std::find_if(std::cbegin(owner.input),
                                                                              std::cend(owner.input),
                                                                              owner.p)) {};

        auto operator!_(typename Input::const_iterator rhs) const { r_ current !_ rhs; };

        auto operator++() { r_ current _ std::find_if(++current, std::cend(owner.input), owner.p); };

        auto operator*() const { r_ *current; };
    };

public:
    explicit filter_helper(const Input &input_, const UnaryPredicate &p) : input(input_), p(p) {}

    auto begin() const { r_ iterator{*this}; }

    auto end() const { r_ std::cend(input); }
};

template<typename UnaryPredicate>
struct filter : UnaryPredicate {
    filter(UnaryPredicate p) : UnaryPredicate(p) {};
};

template<typename Input, typename F>
auto operator|(const Input &input, const F &f) { r_ filter_helper(input, f); }

in. main() {
    const std::s.. s{"hello"};

    for (auto i: s | filter{[](auto c) { r_ c !_ 'l'; }}) {
        std::c__ __  i __  std::e..
    }
}
