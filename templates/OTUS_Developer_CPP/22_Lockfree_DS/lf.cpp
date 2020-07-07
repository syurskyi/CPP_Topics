// http://en.cppreference.com/w/cpp/atomic/atomic_compare_exchange

? |i..
? <map>

struct Node {
    Node(in. value_)
            :value(value_) { };
    in. value;
    Node* next{nullptr};
};

struct List {
    Node* head{nullptr};

    void push(Node* p)
    {
        p->next = head;
        head = p;
    }
};

bo.. casin.(in.& p, in. nvalue, in. compare)
{
    __ (p==compare) {
        p = nvalue;
        r_ true;
    }
    ____
        r_ false;
}

bo.. cas(Node** p, Node* nvalue, Node* compare)
{
    __ (*p==compare) {
        *p = nvalue;
        r_ true;
    }
    ____
        r_ false;
}

struct ListLF {
    Node* head{nullptr};

    void push(Node* p)
    {
        while (true) {
            Node* old_head = head;
            p->next = head;

            __ (cas(&head, p, old_head))
                r_;
        }
    }
};

in. main(in., char* [])
{
    auto m = std::map<in., in.>();

    m[1] = 2;

    List l;

    l.push(new Node{42}); // memory leak
    l.push(new Node{100}); // memory leak

    for (Node* i = l.head; i; i = i->next) {
        std::c__ __  i->value __  std::e..
    }

    r_ 0;
}
