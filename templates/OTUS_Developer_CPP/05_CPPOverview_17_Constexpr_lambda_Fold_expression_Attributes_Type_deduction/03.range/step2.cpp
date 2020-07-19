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
                                                         current(st. find_if(st. cbegin(owner_.input),
                                                                              st. cend(owner.input),
                                                                              owner.p))  }sy.. p..

        a.. op..!_(t_n_ Input::const_iterator rhs) c..   r_ current !_ rhssy.. p.. }sy.. p..

        a.. op..++ r_ current _ st. find_if(++current, st. cend(owner.input), owner.p)sy.. p.. }sy.. p..

        a.. op..*() c..   r_ *currentsy.. p.. }sy.. p..
    }sy.. p..

pu..
    ex__ filter_helper(c.. Input &input_, c.. UnaryPredicate &p) : input(input_), p(p)  }

    a.. begin() c..   r_ iterator *t..}sy.. p.. }

    a.. end() c..   r_ st. cend(input)sy.. p.. }
}sy.. p..

in. main
    c.. st. s.. s "hello"}sy.. p..

    ___ (a.. i: filter_helper s, [](a.. c)   r_ c __ 'l'sy.. p.. }})  
        st. c__ __  i __  st. e..
    }
}
