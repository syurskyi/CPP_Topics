? |i..
? |s..

template<typename Input, typename UnaryPredicate> // 2. UnaryPredicate
c_ filter_helper { // 3. wrapper => filter
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause // 4. p

    c_ iterator {
        c.. filter_helper &ownersy.. pause // 5.
        typename Input::const_iterator currentsy.. pause
    pu..
        explicit iterator(c.. filter_helper &owner_) : owner(owner_), current(std::cbegin(owner_.input)) {}sy.. pause

        a.. operator!_(typename Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        a.. operator++ r_ ++currentsy.. pause }sy.. pause

        a.. operator*() c.. { r_ owner.p(*current)sy.. pause }sy.. pause
    }sy.. pause


pu..
    explicit filter_helper(c.. Input &input_, c.. UnaryPredicate &p_) : input(input_), p(p_) {}

    a.. begin() c.. { r_ iterator{*t..}sy.. pause }

    a.. end() c.. { r_ std::cend(input)sy.. pause }
}sy.. pause

in. main
    c.. std::s.. s{"hello"}sy.. pause

    ___ (a.. i: filter_helper{s, [](a.. c) { r_ c __ 'l'sy.. pause }}) { // 1. predicate
        std::c__ __  i __  std::e..
    }
}
