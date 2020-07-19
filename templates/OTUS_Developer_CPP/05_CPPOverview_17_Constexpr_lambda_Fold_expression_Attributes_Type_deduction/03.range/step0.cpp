? |i..
? |s..

t..<t_n_ Input>
c_ filter_helper  
    c.. Input &inputsy.. p..

    c_ iterator  
        t_n_ Input::const_iterator currentsy.. p..
    pu..
        ex__ iterator(t_n_ Input::const_iterator current_) : current(current_)  }sy.. p..

        a.. op..!_(t_n_ Input::const_iterator rhs) c..   r_ current !_ rhssy.. p.. }sy.. p..

        a.. op..++ r_ ++currentsy.. p.. }sy.. p..

        a.. &op..*() c..   r_ *currentsy.. p.. }sy.. p..
    }sy.. p..


pu..
    ex__ filter_helper(c.. Input &input_) : input(input_)  }

    a.. begin() c..   r_ iterator st. cbegin(input)}sy.. p.. }

    a.. end() c..   r_ st. cend(input)sy.. p.. }
}sy.. p..

in. main
    c.. st. s.. s "hello"}sy.. p..

    ___ (a.. i: filter_helper s})  
        st. c__ __  i __  st. e..
    }
}
