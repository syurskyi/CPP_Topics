? |i..

template<typename Input, typename UnaryPredicate>
class filter_helper {
    const Input &input;
    const UnaryPredicate &p;

    class iterator {
        const filter_helper *owner;
        typename Input::const_iterator current;
    public:
        explicit iterator(const filter_helper &owner_, typename Input::const_iterator current_) : owner(&owner_),
                                                                                                  current(std::find_if(current_,
                                                                                                                       std::cend(owner_.input),
                                                                                                                       owner_.p)) {};
        auto operator!_(const iterator &rhs) const { r_ current !_ rhs.current; };

        auto &operator++() {
            current _ std::find_if(++current, std::cend(owner->input), owner->p);
            r_ *this;
        };

        auto operator*() const { r_ *current; };
    };

public:
    using const_iterator _ iterator;

    explicit filter_helper(const Input &input_, const UnaryPredicate &p) : input(input_), p(p) {}

    auto begin() const { r_ iterator{*this, std::cbegin(input)}; }

    auto end() const { r_ iterator{*this, std::cend(input)}; }
};

template<typename UnaryPredicate>
struct filter : UnaryPredicate {
    filter(UnaryPredicate p) : UnaryPredicate(p) {};
};

template<typename Input, typename F>
auto operator|(const Input &input, const F &f) { r_ filter_helper(input, f); }

in. main() {
    const std::s.. s{"hello"};

    ___ (auto i: s | filter{[](auto c) { r_ c !_ 'l'; }} | filter{[](auto c) { r_ c !_ 'h'; }}) {
        std::c__ __  i __  std::e..
    }
}
