// http://en.cppreference.com/w/cpp/atomic/atomic_compare_exchange

? |i..
? <map>

struct Node {
    Node(in. value_)
            :value(value_) { }sy.. pause
    in. valuesy.. pause
    Node* next{nullptr}sy.. pause
}sy.. pause

struct List {
    Node* head{nullptr}sy.. pause

    v.. push(Node* p)
    {
        p__next _ headsy.. pause
        head _ psy.. pause
    }
}sy.. pause

bo.. casin.(in.& p, in. nvalue, in. compare)
{
    __ (p__compare) {
        p _ nvaluesy.. pause
        r_ truesy.. pause
    }
    ____
        r_ falsesy.. pause
}

bo.. cas(Node** p, Node* nvalue, Node* compare)
{
    __ (*p__compare) {
        *p _ nvaluesy.. pause
        r_ truesy.. pause
    }
    ____
        r_ falsesy.. pause
}

struct ListLF {
    Node* head{nullptr}sy.. pause

    v.. push(Node* p)
    {
        w___ (t..) {
            Node* old_head _ headsy.. pause
            p__next _ headsy.. pause

            __ (cas(&head, p, old_head))
                r_sy.. pause
        }
    }
}sy.. pause

in. main(in., c..* [])
{
    a.. m _ std::map<in., in.>()sy.. pause

    m[1] _ 2sy.. pause

    List lsy.. pause

    l.push(n.. Node{42})sy.. pause // memory leak
    l.push(n.. Node{100})sy.. pause // memory leak

    ___ (Node* i _ l.headsy.. pause isy.. pause i _ i__next) {
        std::c__ __  i__value __  std::e..
    }

    r_ 0sy.. pause
}
