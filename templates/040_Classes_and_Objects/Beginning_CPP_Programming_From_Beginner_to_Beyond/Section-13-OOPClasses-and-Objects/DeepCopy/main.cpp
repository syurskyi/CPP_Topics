// Section 13
// Copy Constructor - Deep Copy
? ios..

u.. s..

c_ Deep {
pr..
    in. *data;
pu..
    v.. set_data_value(in. d) { *data = d; }
    in. get_data_value r_ *data; }
    // Constructor
    Deep(in. d);
    // Copy Constructor
    Deep(co.. Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(in. d) {
    data = new in.;
    *data = d;
}

Deep::Deep(co.. Deep &source)
    : Deep {*source.data} {
    c.. __ "Copy constructor  - deep copy" __ e..
}

Deep::~Deep
    delete data;
    c.. __ "Destructor freeing data" __ e..
}

v.. display_deep(Deep s) {
    c.. __ s.get_data_value() __ e..
}

in. main
    
    Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    
    obj2.set_data_value(1000);
  
    r_ 0;
}

