? |i..

template<typename Input, typename UnaryPredicate>
class filter_helper {
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause

    class iterator {
        c.. filter_helper *ownersy.. pause
        typename Input::const_iterator currentsy.. pause
    public:
        explicit iterator(c.. filter_helper &owner_, typename Input::const_iterator current_) : owner(&owner_),
                                                                                                  current(std::find_if(current_,
                                                                                                                       std::cend(owner_.input),
                                                                                                                       owner_.p)) {}sy.. pause
        auto operator!_(c.. iterator &rhs) c.. { r_ current !_ rhs.currentsy.. pause }sy.. pause

        auto &operator++() {
            current _ std::find_if(++current, std::cend(owner->input), owner->p)sy.. pause
            r_ *thissy.. pause
        }sy.. pause

        auto operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause

public:
    using const_iterator _ iteratorsy.. pause

    explicit filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p) {}

    auto begin() c.. { r_ iterator{*this, std::cbegin(input)}sy.. pause }

    auto end() c.. { r_ iterator{*this, std::cend(input)}sy.. pause }
}sy.. pause

template<typename UnaryPredicate>
struct filter : UnaryPredicate {
    filter(UnaryPredicate p) : UnaryPredicate(p) {}sy.. pause
}sy.. pause

template<typename Input, typename F>
auto operator|(c.. Input &input, c.. F &f) { r_ filter_helper(input, f)sy.. pause }

in. main() {
    c.. std::s.. s{"hello"}sy.. pause

    ___ (auto i: s | filter{[](auto c) { r_ c !_ 'l'sy.. pause }} | filter{[](auto c) { r_ c !_ 'h'sy.. pause }}) {
        std::c__ __  i __  std::e..
    }
}
