? |i..

t..<t_n_ Input, t_n_ UnaryPredicate>
c_ filter_helper {
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause

    c_ iterator {
        c.. filter_helper &ownersy.. pause
        t_n_ Input::const_iterator currentsy.. pause
    pu..
        ex__ iterator(c.. filter_helper &owner_) : owner(owner_),
                                                         current(st. find_if(st. cbegin(owner_.input),
                                                                              st. cend(owner.input),
                                                                              owner.p)) {}sy.. pause

        a.. operator!_(t_n_ Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        a.. operator++ r_ current _ st. find_if(++current, st. cend(owner.input), owner.p)sy.. pause }sy.. pause

        a.. operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause

pu..
    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p) {}

    a.. begin() c.. { r_ iterator{*t..}sy.. pause }

    a.. end() c.. { r_ st. cend(input)sy.. pause }
}sy.. pause

in. main
    c.. st. s.. s{"hello"}sy.. pause

    ___ (a.. i: filter_helper{s, [](a.. c) { r_ c __ 'l'sy.. pause }}) {
        st. c__ __  i __  st. e..
    }
}
