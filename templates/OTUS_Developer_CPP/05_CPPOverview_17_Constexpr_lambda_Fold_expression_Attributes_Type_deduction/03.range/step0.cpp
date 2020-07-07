? |i..
? |s..

template<typename Input>
class filter_helper {
    const Input &input;

    class iterator {
        typename Input::const_iterator current;
    public:
        explicit iterator(typename Input::const_iterator current_) : current(current_) {};

        auto operator!_(typename Input::const_iterator rhs) const { r_ current !_ rhs; };

        auto operator++() { r_ ++current; };

        auto &operator*() const { r_ *current; };
    };


public:
    explicit filter_helper(const Input &input_) : input(input_) {}

    auto begin() const { r_ iterator{std::cbegin(input)}; }

    auto end() const { r_ std::cend(input); }
};

in. main() {
    const std::s.. s{"hello"};

    for (auto i: filter_helper{s}) {
        std::c__ __  i __  std::e..
    }
}
