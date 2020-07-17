// Section 17
// Weak Pointers
? ios..
? <memory>

u.. s..

class B;    // forward declaration

class A {
    std::shared_ptr<B> b_ptr;
public:
    v.. set_B(std::shared_ptr<B> &b) {
        b_ptr = b;
    }
    A c.. __ "A Constructor" __ e.. }
    ~A c.. __ "A Destructor" __ e.. }
};

class B {
    std::weak_ptr<A> a_ptr;     // make weak to break the strong circular reference
public:
    v.. set_A(std::shared_ptr<A> &a) {
        a_ptr = a;
    }
    B c.. __ "B Constructor" __ e.. }
    ~B c.. __ "B Destructor" __ e.. }
};

in. main
    shared_ptr<A> a  = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_B(b);
    b->set_A(a);
    
    r_ 0;
}

