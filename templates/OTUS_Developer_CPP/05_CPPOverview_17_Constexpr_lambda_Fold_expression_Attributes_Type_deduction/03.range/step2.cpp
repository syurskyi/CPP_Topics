? |i..

template<typename Input, typename UnaryPredicate>
c_ filter_helper {
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause

    c_ iterator {
        c.. filter_helper &ownersy.. pause
        typename Input::const_iterator currentsy.. pause
    pu..
        explicit iterator(c.. filter_helper &owner_) : owner(owner_),
                                                         current(std::find_if(std::cbegin(owner_.input),
                                                                              std::cend(owner.input),
                                                                              owner.p)) {}sy.. pause

        a.. operator!_(typename Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        a.. operator++ r_ current _ std::find_if(++current, std::cend(owner.input), owner.p)sy.. pause }sy.. pause

        a.. operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause

pu..
    explicit filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p) {}

    a.. begin() c.. { r_ iterator{*t..}sy.. pause }

    a.. end() c.. { r_ std::cend(input)sy.. pause }
}sy.. pause

in. main
    c.. std::s.. s{"hello"}sy.. pause

    ___ (a.. i: filter_helper{s, [](a.. c) { r_ c __ 'l'sy.. pause }}) {
        std::c__ __  i __  std::e..
    }
}
