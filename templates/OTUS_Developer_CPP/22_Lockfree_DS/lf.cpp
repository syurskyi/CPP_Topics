// http://en.cppreference.com/w/cpp/atomic/atomic_compare_exchange

? |i..
? <map>

st.. Node {
    Node(in. value_)
            :value(value_) { }
    in. valuesy.. p..
    Node* next{n_p_}
}

st.. List {
    Node* head{n_p_}

    v.. push(Node* p)
    {
        p__next _ headsy.. p..
        head _ psy.. p..
    }
}

bo.. casin.(in.& p, in. nvalue, in. compare)
{
    __ (p__compare) {
        p _ nvaluesy.. p..
        r_ truesy.. p..
    }
    ____
        r_ falsesy.. p..
}

bo.. cas(Node** p, Node* nvalue, Node* compare)
{
    __ (*p__compare) {
        *p _ nvaluesy.. p..
        r_ truesy.. p..
    }
    ____
        r_ falsesy.. p..
}

st.. ListLF {
    Node* head{n_p_}

    v.. push(Node* p)
    {
        w___ (t..) {
            Node* old_head _ headsy.. p..
            p__next _ headsy.. p..

            __ (cas(&head, p, old_head))
                r_sy.. p..
        }
    }
}

in. main(in., c..* [])
{
    a.. m _ st. map<in., in.>()

    m[1] _ 2sy.. p..

    List lsy.. p..

    l.push(n.. Node{42}) // memory leak
    l.push(n.. Node{100}) // memory leak

    ___ (Node* i _ l.headsy.. p.. isy.. p.. i _ i__next) {
        st. c__ __  i__value __  st. e..
    }

    r_ 0sy.. p..
}
