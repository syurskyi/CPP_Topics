? |i..
? |s..

t..<t_n_ Input>
c_ filter_helper {
    c.. Input &inputsy.. pause

    c_ iterator {
        t_n_ Input::const_iterator currentsy.. pause
    pu..
        ex__ iterator(t_n_ Input::const_iterator current_) : current(current_) {}sy.. pause

        a.. operator!_(t_n_ Input::const_iterator rhs) c.. { r_ current !_ rhssy.. pause }sy.. pause

        a.. operator++ r_ ++currentsy.. pause }sy.. pause

        a.. &operator*() c.. { r_ *currentsy.. pause }sy.. pause
    }sy.. pause


pu..
    ex__ filter_helper(c.. Input &input_) : input(input_) {}

    a.. begin() c.. { r_ iterator{st. cbegin(input)}sy.. pause }

    a.. end() c.. { r_ st. cend(input)sy.. pause }
}sy.. pause

in. main
    c.. st. s.. s{"hello"}sy.. pause

    ___ (a.. i: filter_helper{s}) {
        st. c__ __  i __  st. e..
    }
}
