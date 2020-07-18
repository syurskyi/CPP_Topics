// Section 13
// Copy Constructor - Shallow Copy
// Note: this program will crash
? ios..

u.. s..

c_ Shallow {
pr..
    in. *data;
pu..
    v.. set_data_value(in. d) { *data = d; }
    in. get_data_value r_ *data; }
    // Constructor
    Shallow(in. d);
    // Copy Constructor
    Shallow(co.. Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(in. d) {
    data = ne. in.;
    *data = d;
}

Shallow::Shallow(co.. Shallow &source)
    : data(source.data) {
        c.. __ "Copy constructor  - shallow copy" __ e..
}

Shallow::~Shallow
    de... data;
    c.. __ "Destructor freeing data" __ e..
}

v.. display_shallow(Shallow s) {
    c.. __ s.get_data_value() __ e..
}

in. main
    
    Shallow obj1 {100};
    display_shallow(obj1);
    
    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    
    r_ 0;
}

