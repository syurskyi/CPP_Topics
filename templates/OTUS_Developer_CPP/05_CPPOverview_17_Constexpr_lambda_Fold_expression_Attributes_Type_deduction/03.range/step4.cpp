? |i..

t..<t_n_ Input, t_n_ UnaryPredicate>
c_ filter_helper  
    c.. Input &inputsy.. p..
    c.. UnaryPredicate &psy.. p..

    c_ iterator  
        c.. filter_helper *ownersy.. p..
        t_n_ Input::const_iterator currentsy.. p..
    pu..
        ex__ iterator(c.. filter_helper &owner_, t_n_ Input::const_iterator current_) : owner(&owner_),
                                                                                                  current(st. find_if(current_,
                                                                                                                       st. cend(owner_.input),
                                                                                                                       owner_.p))  }
        a.. op..!_(c.. iterator &rhs) c..   r_ current !_ rhs.currentsy.. p.. }

        a.. &op..++
            current _ st. find_if(++current, st. cend(owner__input), owner__p)
            r_ *thissy.. p..
        }

        a.. op..*() c..   r_ *currentsy.. p.. }
    }

pu..
    u.. const_iterator _ iteratorsy.. p..

    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p)  }

    a.. begin() c..   r_ iterator *t.., st. cbegin(input)} }

    a.. end() c..   r_ iterator *t.., st. cend(input)} }
}

t..<t_n_ UnaryPredicate>
st.. filter : UnaryPredicate  
    filter(UnaryPredicate p) : UnaryPredicate(p)  }
}

t..<t_n_ Input, t_n_ F>
a.. op..|(c.. Input &input, c.. F &f)   r_ filter_helper(input, f) }

in. main
    c.. st. s.. s "hello"}

    ___ (a.. i: s | filter [](a.. c)   r_ c !_ 'l' }} | filter [](a.. c)   r_ c !_ 'h' }})
        st. c__ __  i __  st. e..
    }
}
