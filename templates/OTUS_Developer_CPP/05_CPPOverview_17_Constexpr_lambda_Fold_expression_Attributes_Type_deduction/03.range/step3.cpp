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
                                                         current(std::find_if(std::cbegin(owner.input),
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

template<typename UnaryPredicate>
struct filter : UnaryPredicate {
    filter(UnaryPredicate p) : UnaryPredicate(p) {}sy.. pause
}sy.. pause

template<typename Input, typename F>
auto operator|(const Input &input, const F &f) { r_ filter_helper(input, f)sy.. pause }

in. main() {
    const std::s.. s{"hello"}sy.. pause

    ___ (auto i: s | filter{[](auto c) { r_ c !_ 'l'sy.. pause }}) {
        std::c__ __  i __  std::e..
    }
}
