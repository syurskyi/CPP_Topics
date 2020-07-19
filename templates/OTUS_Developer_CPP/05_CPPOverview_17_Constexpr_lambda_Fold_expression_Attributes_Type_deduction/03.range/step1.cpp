? |i..
? |s..

t..<t_n_ Input, t_n_ UnaryPredicate> // 2. UnaryPredicate
c_ filter_helper { // 3. wrapper => filter
    c.. Input &inputsy.. p..
    c.. UnaryPredicate &psy.. p.. // 4. p

    c_ iterator {
        c.. filter_helper &ownersy.. p.. // 5.
        t_n_ Input::const_iterator currentsy.. p..
    pu..
        ex__ iterator(c.. filter_helper &owner_) : owner(owner_), current(st. cbegin(owner_.input)) {}sy.. p..

        a.. op..!_(t_n_ Input::const_iterator rhs) c.. { r_ current !_ rhssy.. p.. }sy.. p..

        a.. op..++ r_ ++currentsy.. p.. }sy.. p..

        a.. op..*() c.. { r_ owner.p(*current)sy.. p.. }sy.. p..
    }sy.. p..


pu..
    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p_) : input(input_), p(p_) {}

    a.. begin() c.. { r_ iterator{*t..}sy.. p.. }

    a.. end() c.. { r_ st. cend(input)sy.. p.. }
}sy.. p..

in. main
    c.. st. s.. s{"hello"}sy.. p..

    ___ (a.. i: filter_helper{s, [](a.. c) { r_ c __ 'l'sy.. p.. }}) { // 1. predicate
        st. c__ __  i __  st. e..
    }
}
