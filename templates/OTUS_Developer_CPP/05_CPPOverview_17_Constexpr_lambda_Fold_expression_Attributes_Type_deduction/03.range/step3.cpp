? |i..

t..<t_n_ Input, t_n_ UnaryPredicate>
c_ filter_helper  
    c.. Input &inputsy.. p..
    c.. UnaryPredicate &psy.. p..

    c_ iterator  
        c.. filter_helper &ownersy.. p..
        t_n_ Input::const_iterator currentsy.. p..
    pu..
        ex__ iterator(c.. filter_helper &owner_) : owner(owner_),
                                                         current(st. find_if(st. cbegin(owner.input),
                                                                              st. cend(owner.input),
                                                                              owner.p))  }

        a.. op..!_(t_n_ Input::const_iterator rhs) c..   r_ current !_ rhssy.. p.. }

        a.. op..++ r_ current _ st. find_if(++current, st. cend(owner.input), owner.p) }

        a.. op..*() c..   r_ *currentsy.. p.. }
    }

pu..
    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p)  }

    a.. begin() c..   r_ iterator *t..} }

    a.. end() c..   r_ st. cend(input) }
}

t..<t_n_ UnaryPredicate>
st.. filter : UnaryPredicate  
    filter(UnaryPredicate p) : UnaryPredicate(p)  }
}

t..<t_n_ Input, t_n_ F>
a.. op..|(c.. Input &input, c.. F &f)   r_ filter_helper(input, f) }

in. main
    c.. st. s.. s "hello"}

    ___ (a.. i: s | filter [](a.. c)   r_ c !_ 'l' }})
        st. c__ __  i __  st. e..
    }
}
