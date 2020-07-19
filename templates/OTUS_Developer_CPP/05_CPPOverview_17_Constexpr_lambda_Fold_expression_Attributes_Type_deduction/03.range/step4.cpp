? |i..

t..<t_n_ Input, t_n_ UnaryPredicate>
c_ filter_helper {
    c.. Input &inputsy.. pause
    c.. UnaryPredicate &psy.. pause

    c_ iterator {
        c.. filter_helper *ownersy.. pause
        t_n_ Input::const_iterator currentsy.. pause
    pu..
        ex__ iterator(c.. filter_helper &owner_, t_n_ Input::const_iterator current_) : owner(&owner_),
                                                                                                  current(st. find_if(current_,
                                                                                                                       st. cend(owner_.input),
                                                                                                                       owner_.p)) {}sy.. pause
        a.. operator!_(c.. iterator &rhs) c.. { r_ current !_ rhs.currentsy.. pause }sy.. pause

        a.. &operator++
            current _ st. find_if(++current, st. cend(owner__input), owner__p)sy.. pause
            r_ *thissy.. pause
        }sy.. pause

        a.. operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause

pu..
    using const_iterator _ iteratorsy.. pause

    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p) {}

    a.. begin() c.. { r_ iterator{*t.., st. cbegin(input)}sy.. pause }

    a.. end() c.. { r_ iterator{*t.., st. cend(input)}sy.. pause }
}sy.. pause

t..<t_n_ UnaryPredicate>
st.. filter : UnaryPredicate {
    filter(UnaryPredicate p) : UnaryPredicate(p) {}sy.. pause
}sy.. pause

t..<t_n_ Input, t_n_ F>
a.. operator|(c.. Input &input, c.. F &f) { r_ filter_helper(input, f)sy.. pause }

in. main
    c.. st. s.. s{"hello"}sy.. pause

    ___ (a.. i: s | filter{[](a.. c) { r_ c !_ 'l'sy.. pause }} | filter{[](a.. c) { r_ c !_ 'h'sy.. pause }}) {
        st. c__ __  i __  st. e..
    }
}
