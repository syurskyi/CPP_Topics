? |i..
? |s..

t..<t_n_ Input, t_n_ UnaryPredicate> // 2. UnaryPredicate
c_ filter_helper { // 3. wrapper => filter
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause // 4. p

    c_ iterator {
        c.. filter_helper &ownersy.. pause // 5.
        t_n_ Input::const_iterator currentsy.. pause
    pu..
        ex__ iterator(c.. filter_helper &owner_) : owner(owner_), current(st. cbegin(owner_.input)) {}sy.. pause

        a.. operator!_(t_n_ Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        a.. operator++ r_ ++currentsy.. pause }sy.. pause

        a.. operator*() c.. { r_ owner.p(*current)sy.. pause }sy.. pause
    }sy.. pause


pu..
    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p_) : input(input_), p(p_) {}

    a.. begin() c.. { r_ iterator{*t..}sy.. pause }

    a.. end() c.. { r_ st. cend(input)sy.. pause }
}sy.. pause

in. main
    c.. st. s.. s{"hello"}sy.. pause

    ___ (a.. i: filter_helper{s, [](a.. c) { r_ c __ 'l'sy.. pause }}) { // 1. predicate
        st. c__ __  i __  st. e..
    }
}
